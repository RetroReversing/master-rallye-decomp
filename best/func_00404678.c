s32 func_00400A98(u64 arg0) {
    s32 lo = (s32)(u32)arg0;
    s32 hi = (s32)(arg0 >> 32);
    s32 a = lo | -lo;
    s32 b = (hi & 0x7FFFFFFF) | ((u32)a >> 31);
    s32 c = 0x7FF00000 - b;
    return 1 - ((u32)(c | -c) >> 31);
}

extern s32 D_00440960;
s32 func_004044D0(s32);
s32 func_004042B0(s32, s32);

s32 func_004034A8(s32 arg0, s32 arg1, s32 arg2) {
    if ((u32)(arg0 - 1) < 2u) {
        if (D_00440960 == 0) {
            if (func_004044D0(arg1) != 0) {
                D_00440960 = 1;
            } else {
                return -1;
            }
        }
        return func_004042B0(arg1, arg2);
    }
    return -1;
}

s32 func_00404400(s32, s32);

s32 func_00403528(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == 0) {
        if (D_00440960 == 0) {
            if (func_004044D0(arg1) != 0) {
                D_00440960 = 1;
            } else {
                return -1;
            }
        }
        return func_00404400(arg1, arg2);
    }
    return -1;
}

void func_00404590(s32);

void func_00404678(s32 arg0) {
    if (arg0 == 10) {
        func_00404590(13);
        func_00404590(10);
    } else {
        func_00404590(arg0);
    }
}
