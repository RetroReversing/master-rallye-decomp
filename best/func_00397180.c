extern void func_00395B68(void *dst, void *src);
extern void func_00396310(void *dst, void *src);
extern void *func_003A35D0(void *arg);

f32 func_003972C0(f32 f12, f32 f13, f32 f14) {
    f32 sp0;
    f32 f3;
    f32 f1;
    f32 f2;
    f32 f4;

    f3 = f12;
    f1 = f13;
    f2 = f14;
    sp0 = f3;
    if (f3 < f1) {
        sp0 = f1;
        goto L0039730C;
    }
    if (f2 < f3) {
        sp0 = f2;
    }
L0039730C:
    f4 = sp0;
    return f4;
}

void *func_00397228(void *arg0, void *arg1, void *arg2, s8 arg3) {
    volatile void *sp0;
    volatile void *sp4;
    volatile void *sp8;
    volatile s8 spC;
    volatile void *sp10;
    void *v2;
    void *v3;

    sp0 = arg0;
    sp4 = arg1;
    sp8 = arg2;
    spC = arg3;
    sp10 = (void *)sp8;

L00397250:
    v2 = (void *)sp0;
    v3 = (void *)sp4;
    if (v2 != v3) {
        func_00395B68((void *)sp10, (void *)sp0);
        sp0 = (void *)((char *)sp0 + 8);
        sp10 = (void *)((char *)sp10 + 8);
        goto L00397250;
    }
    v3 = (void *)sp10;
    v2 = v3;
    return v2;
}

void *func_00397180(void *arg0, void *arg1, void *arg2, s8 arg3) {
    volatile void *sp0;
    volatile void *sp4;
    volatile void *sp8;
    volatile s8 spC;
    volatile void *sp10;
    void *v2;
    void *v3;
    void *tmp;

    sp0 = arg0;
    sp4 = arg1;
    sp8 = arg2;
    spC = arg3;
    sp10 = (void *)sp8;

L003971A8:
    v2 = (void *)sp0;
    v3 = (void *)sp4;
    if (v2 != v3) {
        tmp = func_003A35D0((void *)sp10);
        func_00396310(tmp, (void *)sp0);
        sp0 = (void *)((char *)sp0 + 4);
        sp10 = (void *)((char *)sp10 + 4);
        goto L003971A8;
    }
    v3 = (void *)sp10;
    v2 = v3;
    return v2;
}
