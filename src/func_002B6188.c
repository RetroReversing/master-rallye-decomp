void func_002B6188(s32 *arg0, s32 arg1) {
    s32 *ptr = arg0 + arg1;
    s32 val = ptr[0xB];
    arg0[0] = val;
    return val;
}

void func_002B61A0(s32 *arg0, s32 arg1, s32 arg2) {
    s32 *ptr = arg0 + arg1;
    ptr[1] = arg2;
}

s32 func_002B61B0(s32 *arg0, s32 arg1, s32 arg2) {
    s32 idx = arg1;
    if (arg2 != 0) {
        idx = (arg0 + arg1)[1];
    }
    return (arg0 + idx)[0xB];
}

s32 func_002B61D0(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 var20 = 0;
    s32 var16 = 0;
    while (var16 < 10) {
        s32 *base = arg0 + 0xB;
        s32 *p = base + var16;
        if (*p == 0) {
            var16++;
            continue;
        }
        if (func_003FA580(arg1, *p) != 0) {
            var16++;
            continue;
        }
        if (arg2 != 0) {
            var16 = (arg0 + 1)[var16];
        }
        base = arg0 + 0xB;
        var20 = base[var16];
        break;
    }
    return var20;
}
