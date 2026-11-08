extern s32 D_0043C3B0[];

extern s32 func_00397C40(s32);
extern void func_003980A0(s32 *, s32, s32);
extern void func_00397C98(s32, s32, s32, s32);

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

void func_003980E0(s32 arg0, s32 arg1) {
    s32 r = func_00397C40(arg0);
    func_003980A0(arg0, arg1, r);
}

void func_003980A0(s32 *arg0, s32 arg1, s32 arg2) {
    *arg0 = *arg0 + arg1 * 8;
}

void func_00397CE0(s32 arg0, s32 arg1, s32 arg2) {
    s32 r = func_00397C40(arg0);
    func_00397C98(arg0, arg1, arg2, r);
}
