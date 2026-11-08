extern void func_002585C0(void *);
extern void func_002585F0(s32, void *, s32);
extern void func_00258610(void *, s32);

s32 func_003B5B20(s32 arg0, s32 unused, void *arg2) {
    s32 sp[4];
    s32 sp10, sp14, sp18;
    void *t;
    s16 field;

    func_002585C0(sp);
    t = *(void **)((char *)arg2 + 0x08);
    field = *(s16 *)((char *)t + 0x90);
    ((void (*)(void *, s32 *))(*(void **)((char *)t + 0x94)))((char *)arg2 + field, &sp10);
    sp[0] = sp10;

    t = *(void **)((char *)arg2 + 0x08);
    field = *(s16 *)((char *)t + 0x90);
    ((void (*)(void *, s32 *))(*(void **)((char *)t + 0x94)))((char *)arg2 + field, &sp14);
    sp[1] = sp14;

    t = *(void **)((char *)arg2 + 0x08);
    field = *(s16 *)((char *)t + 0x90);
    ((void (*)(void *, s32 *))(*(void **)((char *)t + 0x94)))((char *)arg2 + field, &sp18);
    sp[2] = sp18;

    func_002585F0(arg0, sp, sp18);
    func_00258610(sp, 2);
    return arg0;
}
