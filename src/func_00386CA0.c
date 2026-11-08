/* func_003D5858 */
void func_003D5858(void (*arg1)(void)) {
    arg1();
}

/* func_00386CA0 */
extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern u32 D_0040E618[];

typedef struct {
    u8 pad[8];
    void *unk8;
} S_386CA0;

void func_00386CA0(S_386CA0 *arg0, s32 arg1) {
    void *p = arg0->unk8;
    void *block = (char *)p - 0x10;
    s32 ref = *(s32 *)((char *)block + 8) - 1;
    *(s32 *)((char *)block + 8) = ref;
    if (ref == 0) {
        if (*(s32 *)((char *)block + 4) + 0x10 != 0) {
            func_002B2028(block);
        } else {
            *(u32 *)((char *)p - 0x10) = D_0040E618[-1];
            D_0040E618[-1] = (u32)block;
        }
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

/* func_00386C38 */
typedef struct {
    u8 pad[8];
    s32 unk8;
    s32 unkC;
} S_40E658;

extern S_40E658 D_0040E658;

typedef struct {
    u8 pad[8];
    void *unk8;
} S_386C38;

void *func_00386C38(S_386C38 *arg0) {
    void *v;
    if (D_0040E658.unkC != 0) {
        v = (void *)func_00151930(&D_0040E658);
    } else {
        D_0040E658.unk8 = D_0040E658.unk8 + 1;
        v = (void *)((char *)&D_0040E658 + 0x10);
    }
    arg0->unk8 = v;
    return arg0;
}

/* func_00385458 */
typedef struct {
    u8 *begin;
    u8 *end;
} S_85458;

s32 func_00385458(S_85458 *arg0) {
    u8 *p = arg0->begin;
    u8 *end = arg0->end;
    s32 count = (s32)(((s64)(end - p) * (s64)0x38E38E39) >> 35);
    if (count > 0) {
        s32 maxv = *(s32 *)(p + 0x24);
        s32 minv = maxv;
        u8 *cur = p;
        if (cur != end) {
            u8 *scan = cur + 0x20;
            do {
                s32 i = 2;
                cur += 0x48;
                do {
                    s32 v = *(s32 *)(scan + 4);
                    if (maxv < v) maxv = v;
                    if (v < minv) minv = v;
                    i--;
                    scan += 8;
                } while (i >= 0);
                scan = cur + 0x20;
            } while (cur != end);
        }
        return maxv - minv;
    }
    return 0;
}
