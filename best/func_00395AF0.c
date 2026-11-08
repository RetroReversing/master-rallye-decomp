extern s32 D_0043C3B0[];
extern s32 func_003A3170(s32, s32);
extern s32 func_00395940(s32, s32, s32, s32, s32);
extern s32 func_00395A00(s32, s32, s32);

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

void func_00395AF0(s32 arg0, s32 arg1, s32 arg2) {
    volatile s32 sp0 = arg0;
    volatile s32 sp4 = arg1;
    volatile s32 sp8 = arg2;
    while (*(volatile s32 *)&sp0 != *(volatile s32 *)&sp4) {
        func_003A3170(*(volatile s32 *)&sp0, *(volatile s32 *)&sp8);
        *(volatile s32 *)&sp0 += 8;
    }
}

s32 func_00395A80(s32 arg0, s32 arg1, s32 arg2) {
    s32 a = arg0;
    s32 b = arg1;
    s32 c = arg2;
    return func_00395A00(a, b, c);
}

s32 func_00395A00(s32 arg0, s32 arg1, s32 arg2) {
    s32 a = arg0;
    s32 b = arg1;
    s32 c = arg2;
    return func_00395940(a, b, c, 0, 0);
}
