extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

s8 func_003B19A8(s8 *, s32);

void func_003AC928(s8 *arg0, f32 arg1) {
    f32 f = arg1;
    s32 v = (s32)(f * 255.0f);
    *arg0 = func_003B19A8(arg0, v);
}

s32 func_003FA760(s32, s32);

s32 func_003AC8A0(s32 *arg0, s32 arg1) {
    s32 ret = 0;
    if (*arg0 != 0) {
        if (arg1 != 0) {
            if (func_003FA760(arg1, *arg0) == 0) {
                ret = 1;
            }
        }
    }
    return ret;
}

s32 func_003AC830(s32 arg0, f32 arg1) {
    (void)arg0;
    (void)arg1;
    return 0;
}
