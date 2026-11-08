extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

extern u8 func_003B19A8(void *, s32);

void func_003ACA78(void *arg0, f32 arg1) {
    s32 v;
    v = (s32)(arg1 * 255.0f);
    *(u8 *)((u8 *)arg0 + 3) = func_003B19A8(arg0, v);
}

void func_003ACA08(void *arg0, f32 arg1) {
    s32 v;
    v = (s32)(arg1 * 255.0f);
    *(u8 *)((u8 *)arg0 + 2) = func_003B19A8(arg0, v);
}

void func_003AC998(void *arg0, f32 arg1) {
    s32 v;
    v = (s32)(arg1 * 255.0f);
    *(u8 *)((u8 *)arg0 + 1) = func_003B19A8(arg0, v);
}
