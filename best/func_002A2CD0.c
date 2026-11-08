/* func_002B82E8 */
void func_002B2028(void *);

void func_002B82E8(s32 *arg0, s32 *arg1) {
    s32 i = 0;
    s32 *p;

    if (arg1 != (s32*)arg0[1]) {
        p = &arg0[1];
        i = 1;
        while (i < 4) {
            p++;
            if (arg1 == (s32*)*p) break;
            i++;
        }
    }
    if (i < 4) {
        *arg1 = arg0[0];
        arg0[0] = (s32)arg1;
    } else {
        func_002B2028(arg1);
        arg0[5] = arg0[5] - 1;
    }
}

/* func_002A2D60 */
void func_001D4040(void*, const char*);
extern char D_0047C590[];
extern char D_0047C5A0[];
extern char D_0047C5B0[];
extern char D_0047C5C0[];
extern char D_0047C5D0[];
extern char D_0047C648[];

static inline s32 *init4040(s32 *p, const char *s) { func_001D4040(p, s); return p; }

void *func_002A2D60(void *arg0) {
    s32 sp0[4];
    s32 sp10[4];

    init4040(sp0, D_0047C590);
    ((s32*)arg0)[2] = 0;
    ((s32*)arg0)[3] = 0;
    ((s32*)arg0)[4] = 0;
    ((s32*)arg0)[5] = 0;
    ((s32*)arg0)[0] = sp0[0];
    ((s32*)arg0)[1] = (s32)D_0047C648;

    init4040(sp10, D_0047C5A0);
    ((s32*)arg0)[2] = sp10[0];
    init4040(sp10, D_0047C5B0);
    ((s32*)arg0)[3] = sp10[0];
    init4040(sp10, D_0047C5C0);
    ((s32*)arg0)[4] = sp10[0];
    init4040(sp10, D_0047C5D0);
    ((s32*)arg0)[5] = sp10[0];
    return arg0;
}

/* func_002A2CD0 */
void func_001E2460(void*);
void func_001E2470(void*, const char*, void*);
void func_001E2510(void*, const char*, void*);
void func_001E2790(void*, const char*, void*);
void func_001E28F8(void*, const char*, void*);
void func_001E2998(void*, const char*, void*);
extern char D_0047C568[];
extern char D_0047C570[];
extern char D_0047C578[];
extern char D_0047C580[];
extern char D_0047C588[];

void func_002A2CD0(char *p) {
    s32 k[4];
    func_001E2460(k);
    func_001E2510(k, D_0047C578, p + 8);
    func_001E2470(k, D_0047C588, p + 0xC);
    func_001E2790(k, D_0047C568, p + 0x10);
    func_001E28F8(k, D_0047C580, p + 0x60);
    func_001E2998(k, D_0047C570, p + 0x50);
}

/* func_002A25C8 */
void *D_002AD408(s32);
s32 func_001DF2B0(void *, s32, s32);
s32 func_001FF0F8(s32 *);
s32 func_002936B0(void *, void *, s32);
extern char D_0044DD18[];
extern s32 D_00494C30;

void *func_002A25C8(void) {
    s32 sp10;
    s32 sp0;
    void *obj;
    char *tmp;

    obj = D_002AD408(0x24);
    ((s32*)obj)[4] = (s32)D_0044DD18;
    tmp = (char*)obj + 0x14;
    ((s32*)obj)[2] = 0;
    ((s32*)obj)[3] = 0;
    ((s32*)obj)[1] = 0;
    ((s32*)obj)[0] = 0;
    ((s32*)tmp)[0] = 0;
    ((s32*)tmp)[2] = 0;
    ((s32*)tmp)[1] = 0;
    ((s32*)obj)[8] = D_00494C30;
    sp0 = 0;
    func_001DF2B0(obj, func_002936B0(&sp0, tmp, 0), 0);
    sp10 = 0;
    func_001DF2B0(obj, func_001FF0F8(&sp10), 0);
    return obj;
}
