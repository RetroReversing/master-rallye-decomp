s32 func_00249068(void);
s32 func_00249140(s32, s32, s32, s32, s32);

s32 func_00248FD8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 v0;
    s32 res;
    v0 = func_00249068();
    if (v0 != 0) {
        res = 1;
    } else {
        res = 0;
    }
    v0 = func_00249140(arg0, arg1, arg2, arg3, arg4);
    if (v0 == 0) {
        return res;
    } else {
        return 1;
    }
}
