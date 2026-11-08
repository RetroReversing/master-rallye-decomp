extern void func_00395B68(void *dst, void *src);
extern void func_00396310(void *dst, void *src);
extern void *func_003A35D0(void *arg);

f32 func_003972C0(f32 arg0, f32 arg1, f32 arg2) {
    volatile f32 sp0;
    f32 f3 = arg0;
    f32 f1 = arg1;
    f32 f2 = arg2;

    sp0 = f3;
    if (f3 < f1) {
        sp0 = f1;
        goto end;
    }
    if (f2 < f3) {
        sp0 = f2;
    }
end:
    return sp0;
}

void *func_00397228(void *arg0, void *arg1, void *arg2, s8 arg3) {
    void *sp0;
    void *sp4;
    void *sp8;
    s8 spC;
    void *sp10;

    sp0 = arg0;
    sp4 = arg1;
    sp8 = arg2;
    spC = arg3;
    sp10 = sp8;

loop:
    if (sp0 == sp4) {
        goto done;
    }
    func_00395B68(sp10, sp0);
    sp0 = (void *)((u8 *)sp0 + 8);
    sp10 = (void *)((u8 *)sp10 + 8);
    goto loop;

done:
    return sp10;
}

void *func_00397180(void *arg0, void *arg1, void *arg2, s8 arg3) {
    void *sp0;
    void *sp4;
    void *sp8;
    s8 spC;
    void *sp10;

    sp0 = arg0;
    sp4 = arg1;
    sp8 = arg2;
    spC = arg3;
    sp10 = sp8;

loop:
    if (sp0 == sp4) {
        goto done;
    }
    func_00396310(func_003A35D0(sp10), sp0);
    sp0 = (void *)((u8 *)sp0 + 4);
    sp10 = (void *)((u8 *)sp10 + 4);
    goto loop;

done:
    return sp10;
}
