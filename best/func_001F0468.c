extern s32 func_001F0308(char *, char *);
extern s32 func_001F03A8(char *, char *);
extern s32 func_001F0348(char *, char *);

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

s32 func_001F0468(char *arg0, char *arg1) {
    s32 r = func_001F03A8(arg0, arg1);
    s32 b = func_001F0308(arg0, arg1 + 0xC) != 0;
    (void)b;
    r = (r != 0) ? 0 : 0;
    r = func_001F03A8(arg0, arg1 + 0x10);
    r &= (r != 0);
    r &= (func_001F03A8(arg0, arg1 + 0x1C) != 0);
    *(s32 *)(arg1 + 0x28) = -1;
    s32 c = -1;
    s32 a = -1;
    s32 d = -1;
    *(s32 *)(arg1 + 0x2C) = -1;
    *(s32 *)(arg1 + 0x30) = c;
    return r;
}

s32 func_001F0508(char *arg0, char *arg1) {
    s32 r = func_001F03A8(arg0, arg1);
    s32 b = func_001F0308(arg0, arg1 + 0xC) != 0;
    (void)b;
    r = (r != 0) ? 0 : 0;
    r = func_001F03A8(arg0, arg1 + 0x10);
    r &= (r != 0);
    {
        s32 a4 = func_001F03A8(arg0, arg1 + 0x1C);
        r &= a4;
        r &= (a4 != 0);
    }
    r &= (func_001F03A8(arg0, arg1 + 0x28) != 0);
    return r;
}

s32 func_001F0628(char *arg0, char *arg1, s32 arg2) {
    s32 acc = 1;
    if (arg2 > 0) {
        s32 i = 0;
        char *p = arg1;
        s32 ret;
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
