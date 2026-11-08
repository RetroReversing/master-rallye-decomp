/* func_003B34A8 */
extern void func_002C67F8(s32, s32);

void func_003B34A8(s32 arg0) {
    s32 a = arg0;
    func_002C67F8(a, 2);
}

/* func_002BB150 */
extern s32 func_002BB070(void);
extern void func_003F94D0(void *, s32, s32);

void func_002BB150(void *arg0, s32 arg1) {
    s32 off;
    if (func_002BB070() != 0) {
        off = arg1 * 12;
        func_003F94D0((char *)arg0 + off, 0, 12);
        *(s32 *)((char *)arg0 + off + 4) = -1;
    }
}

/* func_002BB0A0 */
extern void func_002BB1B8(void *);
extern void func_003F9698(char *);
extern char D_0047FEC0[];

s32 func_002BB0A0(s32 *arg0) {
    s32 i = 0;
    s32 ret = -1;
    s32 *end = arg0 + (0x300 / 4);
    s32 *p;

    if (arg0 < end) {
        if (arg0[1] == -1) {
            arg0[1] = 0;
            ret = 0;
            arg0[2] = 0;
        } else {
            p = arg0 + 3;
            while (p < end) {
                i++;
                if (p[1] == -1) {
                    p[2] = 0;
                    ret = i;
                    p[1] = 0;
                    break;
                }
                p += 3;
            }
        }
    }
    if (ret == -1) {
        func_003F9698(D_0047FEC0);
        func_002BB1B8(arg0);
    }
    return ret;
}

/* func_002BAFB0 */
extern void func_002B2028(void *);

typedef struct {
    s32 f0;
    s32 f4;
    char *f8;
    void *fC;
    void *f10;
} S_BAFB0;

typedef struct {
    char pad[0x28];
    s16 f28;
    void (*f2C)(void *, s32);
} S_BAFB0_VT;

void func_002BAFB0(S_BAFB0 *arg0) {
    s32 i;
    s32 count = arg0->f0;
    if (count != 0) {
        if (count > 0) {
            S_BAFB0_VT *vt = (S_BAFB0_VT *)arg0->f10;
            i = 0;
            do {
                char *base = arg0->f8;
                s32 elem = *(s32 *)(base + (i << 5) + 8);
                vt->f2C((char *)arg0 + vt->f28, elem);
                i++;
                vt = (S_BAFB0_VT *)arg0->f10;
            } while (i < arg0->f0);
        }
        func_002B2028(arg0->f8);
        arg0->fC = 0;
        arg0->f0 = 0;
        arg0->f4 = 0;
        arg0->f8 = 0;
    }
}
