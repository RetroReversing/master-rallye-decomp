extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    D_0043C3B0[1] = arg1;
    D_0043C3B0[2] = arg2;
    D_0043C3B0[3] = arg0;
}

extern void *func_00262740(void *, void *);
extern void *func_00262838(void);
extern void D_002AD530(void *);
extern void D_002AD390(void *);

void func_00262B00(void *arg0, s32 arg1) {
    void *p = *(void **)((u8 *)arg0 + 0x40);
    if (p != 0) {
        D_002AD530(p);
    }
    func_00262740(func_00262838(), arg0);
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

extern void func_001E2460(void *, void *);
extern void func_001E28F8(void *, void *, void *);
extern void func_001E2510(void *, void *, void *);
extern char D_00479BE8[];
extern char D_00479BF0[];
extern char D_00479C00[];
extern char D_00479C10[];

void func_00261FA8(void *arg0, void *arg2) {
    char ctx[0x30];
    func_001E2460(ctx, arg2);
    func_001E28F8(ctx, D_00479BE8, (u8 *)arg0 + 0x14);
    func_001E2510(ctx, D_00479BF0, (u8 *)arg0 + 0x1C);
    func_001E2510(ctx, D_00479C00, (u8 *)arg0 + 0x18);
    func_001E2510(ctx, D_00479C10, (u8 *)arg0 + 0x20);
}

extern void func_00261AB0(void *, s32 *);
extern void func_00155D08(void *, s32, s32, void *);

void func_00261A10(void *arg0, void *arg2, void *arg3, void *arg4) {
    s32 sp0 = 0;
    s32 sp4 = 0;
    if (*(void **)((u8 *)arg0 + 0) != 0) {
        func_00261AB0(&sp0, &sp4);
        func_00155D08(*(void **)((u8 *)arg0 + 0), sp0, sp4, arg4);
    }
}
