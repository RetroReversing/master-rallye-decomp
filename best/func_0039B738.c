extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

extern void func_003A32E8(s32 arg0, s32 arg1);

void func_0039B798(s32 arg0, s32 arg1) {
    volatile s32 s0 = arg0;
    volatile s32 s1 = arg1;
    if (s1 != 0) {
        s32 v = s1;
        func_003A32E8(s0, v * 4);
    }
}

extern s32 func_0039B380(void *arg0);
extern void func_0039B6D0(s32 arg0, s32 arg1, s32 arg2);

void func_0039B738(s32 arg0, s32 arg1) {
    volatile s32 sp0;
    volatile s32 s0 = arg1;
    sp0 = arg0;
    func_0039B6D0((s32)sp0, s0, func_0039B380((void *)&sp0));
}

extern void func_0039B6A0(s32 arg0, s32 arg1, s32 arg2);

void func_0039B6D0(s32 arg0, s32 arg1, s32 arg2) {
    volatile s32 s1 = arg0;
    volatile s32 s2 = arg1;
    volatile s32 s0 = arg2;
    (void)s0;
    func_0039B6A0(s1, s2, 0);
}
