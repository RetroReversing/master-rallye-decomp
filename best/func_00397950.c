extern s32 D_0043C3B0[];

extern s32 func_003A6338(s32);
extern s32 func_003A5FF8(s32 *);
extern s32 func_003978C8(s32, s32, s32, s32);

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

s32 func_00397C98(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    *arg2 += (arg1 - arg0) >> 3;
    return arg3;
}

s32 func_00397C40(s32 arg0) {
    s32 r = func_003A6338(arg0);
    return (u8)r;
}

s32 func_00397950(s32 arg0, s32 arg1, s32 arg2) {
    s32 r = func_003A5FF8(&arg2);
    return func_003978C8(arg0, arg1, arg2, r);
}
