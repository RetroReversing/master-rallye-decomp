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
    r = t & (t != 0);
    a4 = func_001F03A8(arg0, arg1 + 0x1C);
    r &= a4;
    r &= (a4 != 0);
    r &= (func_001F03A8(arg0, arg1 + 0x28) != 0);
    return r;
}

s32 func_001F2398(s32 arg0) {
    s32 *p4;
    s32 *p3;
    s32 count;

    p4 = (s32 *)((char *)arg0 + 4);
    p3 = (s32 *)((char *)arg0 + 0x3C);
    count = 0;
    while (count < 3) {
        if (*p3 != 0) {
            count++;
            if (*p4 != 0) {
                p4 += 0x14;
                return 1;
            }
        } else {
            p4 += 0x14;
        }
        p3 += 4;
    }
    return 0;
}

s32 func_001F23E0(s32 **arg0, s32 arg1, s32 *arg2) {
    s32 *start;
    s32 *p;
    s32 magic;

    magic = (s32)(unsigned)0xBA2E8BA3;
    start = arg0[0];
    p = start;
    if (p == arg0[1]) return 0;
    for (;;) {
        if (func_001F21A0(p, arg1) != 0) {
            *arg2 = (s32)(((s32)((char *)p - (char *)start) * magic) >> 3);
            return 1;
        }
        p = (s32 *)((char *)p + 0x58);
        if (p == arg0[1]) return 0;
    }
}
