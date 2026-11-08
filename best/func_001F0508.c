extern s32 func_001F0308(char *, char *);
extern s32 func_001F03A8(char *, char *);
extern s32 func_001F0348(char *, char *);
extern s32 func_001F21A0(s32 *, s32);

s32 func_001F0508(char *arg0, char *arg1) {
    s32 r;
    s32 b;
    s32 t;
    s32 a4;

    r = func_001F03A8(arg0, arg1);
    b = func_001F0308(arg0, arg1 + 0xC) != 0;
    (void)b;
    r = (r != 0) ? 0 : 0;
    t = func_001F03A8(arg0, arg1 + 0x10);
    r = t;
    r &= (r != 0);
    a4 = func_001F03A8(arg0, arg1 + 0x1C);
    r &= a4;
    r &= (a4 != 0);
    r &= (func_001F03A8(arg0, arg1 + 0x28) != 0);
    return r;
}

s32 func_001F0628(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 acc;
    s32 p;
    s32 ret;

    i = 0;
    acc = 1;
    p = arg1;
    if (arg2 > 0) {
        for (;;) {
            ret = func_001F0348(arg0, p);
            i++;
            acc &= (ret != 0);
            if (!(i < arg2)) break;
            p += 0xC;
            if (acc != 1) break;
        }
    }
    return acc;
}

s32 func_001F2398(s32 arg0) {
    s32 *var_3;
    s32 var_5;
    s32 *var_4;

    var_3 = (s32 *)((char *)arg0 + 0x3C);
    var_5 = 0;
    var_4 = (s32 *)((char *)arg0 + 4);
loop_1:
    var_5 += 1;
    if (*var_3 != 0) {
        var_4 += 0x14;
        if (*var_4 != 0) return 1;
        goto block_5;
    }
    var_4 += 0x14;
block_5:
    var_3 += 4;
    if (var_5 >= 3) return 0;
    goto loop_1;
}

s32 func_001F23E0(void *arg0, s32 arg1, s32 *arg2) {
    s32 *var_16;
    s32 *var_4;

    var_16 = *(s32 **)arg0;
    if (var_16 != *(s32 **)((char *)arg0 + 4)) {
        var_4 = var_16;
loop_2:
        if (func_001F21A0(var_4, arg1) != 0) {
            *arg2 = (s32)(((s32)(var_16 - *(s32 **)arg0) * (s32)(unsigned)0xBA2E8BA3) >> 3);
            return 1;
        }
        var_16 += 0x58;
        var_4 = var_16;
        if (var_16 == *(s32 **)((char *)arg0 + 4)) goto block_5;
        goto loop_2;
    }
block_5:
    return 0;
}
