extern void func_003B7398(void *);
extern void func_003B7410(s32, f32 *, s32);
extern void func_003B7438(s32, s32 *, s32);

void func_003B7278(s32 arg0, f32 *arg1, s32 arg2) {
    f32 sp0 = 0.0f;
    f32 sp4 = 0.0f;
    f32 sp8 = 0.0f;
    f32 sp10;
    s32 sp14;

    func_003B7398(&sp0);
    arg1[0] = sp0;
    arg1[1] = sp4;
    arg1[2] = sp8;
    func_003B7410(arg0, &sp10, arg2);
    arg1[3] = sp10;
    func_003B7438(arg0, &sp14, arg2);
    arg1[4] = sp14;
}

extern void func_002585C0(void *);
extern void func_002585F0(s32, void *, s32);
extern void func_00258610(void *, s32);

s32 func_003B5B20(s32 arg0, void *arg1, s32 arg2) {
    /* arg2 unused? Actually arg2 is 3rd param */
    s32 sp[4]; /* sp, sp+4, sp+8, ... */
    s32 sp10, sp14, sp18;
    void *t;

    func_002585C0(sp);
    t = *(void **)((char *)arg1 + 0x08);
    ((void (*)(void *, s32 *))(*(void **)((char *)t + 0x94)))((char *)arg1 + *(s32 *)((char *)t + 0x90), &sp10);
    t = *(void **)((char *)arg1 + 0x08);
    ((void (*)(void *, s32 *))(*(void **)((char *)t + 0x94)))((char *)arg1 + *(s32 *)((char *)t + 0x90), &sp14);
    /* second call passes sp10 as extra? assembly: jalr with a4 = sp10? Let's check: second: lw $4,0x10($sp) then ... actually no */
    (void)sp10; (void)sp14; (void)sp18;
    return arg0;
}
