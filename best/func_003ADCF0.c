extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

void **func_003ADE18(void ***arg0) {
    *arg0 = **arg0;
    return (void **)arg0;
}

s32 func_003ADD50(s32 *arg0, s32 *arg1) {
    return *arg0 != *arg1;
}

extern void *func_003AD930(void *arg0, void *arg1);

void *func_003ADCF0(void *arg0, void **arg1) {
    func_003AD930(arg0, *arg1);
    return arg0;
}
