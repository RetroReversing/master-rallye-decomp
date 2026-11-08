extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    D_0043C3B0[3] = arg0;
    D_0043C3B0[1] = arg1;
    D_0043C3B0[2] = arg2;
}

extern void func_004052C0(s32, s32, s32, s32, s32, s32);

void func_00405438(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_004052C0(arg0, 1, arg1, arg2, arg3, arg4);
}
