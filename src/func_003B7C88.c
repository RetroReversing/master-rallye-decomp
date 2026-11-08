void func_003B7C88(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF && arg0 != 0) {
        s32 i;
        for (i = 0x3FF; i != -1; i--) {
        }
        for (i = 0x3FF; i != -1; i--) {
        }
    }
}

s32 func_003B7C28(s8 *s1, s8 *e1, s8 *s2, s8 *e2) {
    s8 c1, c2;
    while (s1 != e1 && s2 != e2) {
        c1 = *s1;
        c2 = *s2;
        if (c1 < c2) return -1;
        if (c2 < c1) return 1;
        s1++;
        s2++;
    }
    if (s2 == e2)
        return s1 != e1;
    return -1;
}

extern void func_003B7C88(s32, s32);

void func_003B7CF8(void) {
    func_003B7C88(1, 0xFFFF);
}

extern s32 func_002B1FC0(s32);

s32 *func_003B7D18(s32 *arg0, s32 arg1) {
    s32 offset = arg1 << 2;
    s32 base = func_002B1FC0(offset);
    arg0[0] = base + offset;
    arg0[1] = base;
    return arg0;
}
