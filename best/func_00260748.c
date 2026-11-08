extern void func_00261AB0(void *, s32 *);
extern void func_00155D08(void *, s32, s32, void *);

void func_00261A10(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 sp0 = 0;
    s32 sp4 = 0;
    if (*(void **)((u8 *)arg0 + 0) != 0) {
        func_00261AB0(&sp0, &sp4);
        func_00155D08(*(void **)((u8 *)arg0 + 0), sp0, sp4, arg3);
    }
}

extern void func_001E2460(void *, void *);
extern void func_001E28F8(void *, void *, void *);
extern void func_001E2510(void *, void *, void *);
extern char D_00479BE8[];
extern char D_00479BF0[];
extern char D_00479C00[];
extern char D_00479C10[];

void func_00261FA8(void *arg0, void *arg1, void *arg2) {
    char ctx[0x30];
    func_001E2460(ctx, arg2);
    func_001E28F8(ctx, D_00479BE8, (u8 *)arg0 + 0x14);
    func_001E2510(ctx, D_00479BF0, (u8 *)arg0 + 0x1C);
    func_001E2510(ctx, D_00479C00, (u8 *)arg0 + 0x18);
    func_001E2510(ctx, D_00479C10, (u8 *)arg0 + 0x20);
}

void *func_00260880(void *arg0, void *arg1, s32 *arg2, s32 *arg3) {
    f32 f1;
    f32 f2;
    f32 f3;
    f32 f0;
    f32 f4;
    f32 tmp;
    s32 sp4 = 0;
    
    f3 = (f32)*arg3;
    f1 = *(f32 *)((u8 *)arg1 + 0xC);
    f2 = (f32)*arg2;
    f4 = *(f32 *)((u8 *)arg1 + 0x8);
    f0 = *(f32 *)((u8 *)arg1 + 0x4);
    f3 = f3 * f1;
    f2 = f2 * f1;
    f4 = f4 + f3;
    f0 = f0 + f2;
    *(s32 *)((u8 *)arg0 + 4) = sp4;
    *(f32 *)((u8 *)arg0 + 8) = f4;
    *(f32 *)((u8 *)arg0 + 0) = f0;
    return arg0;
}

void func_00260748(void *arg0, void *arg1, s32 *arg2, f32 *arg3) {
    f32 v;
    v = (*(f32 *)((u8 *)arg1 + 0x0) - *(f32 *)((u8 *)arg0 + 0x4)) / *(f32 *)((u8 *)arg0 + 0xC);
    *arg2 = (s32)v + 1;
    v = (*(f32 *)((u8 *)arg1 + 0x8) - *(f32 *)((u8 *)arg0 + 0x8)) / *(f32 *)((u8 *)arg0 + 0xC);
    *arg3 = v;
}
