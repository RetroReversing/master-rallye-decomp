void func_0016D178(void *arg0, f32 *arg1) {
    f32 v = *(f32 *)((u8 *)arg0 + 0x30);
    *arg1 = v * 2.5f;
}

void func_00192FD8(void);
void func_001D2900(void *, s32);
void func_001D4040(void *, void *);

s32 func_00193138(void *arg0) {
    u8 sp[0x10];
    u8 sp10[0x10];
    void *tmp;
    void *tmp2;

    func_00192FD8();
    func_001D2900((u8 *)arg0 + 0xC, *(s32 *)((u8 *)arg0 + 0x9C));
    tmp = (void *)func_001E4280();
    func_001D4040(sp, *(void **)((u8 *)arg0 + 0xC));
    if (func_001E38C8((s32)tmp, sp) == 0) {
        return 1;
    }
    tmp2 = (void *)func_001E4280();
    func_001D4040(sp10, *(void **)((u8 *)arg0 + 0xC));
    return func_001E3598((s32)tmp2, sp10);
}

s32 func_001931C0(void *arg0) {
    u8 sp[0x10];
    s32 tmp;

    func_00192FD8();
    func_001D2900((u8 *)arg0 + 0xC, *(s32 *)((u8 *)arg0 + 0xA0));
    tmp = func_001E4280();
    func_001D4040(sp, *(void **)((u8 *)arg0 + 0xC));
    return func_001E3850(tmp, sp);
}

s32 func_00193220(void *arg0) {
    u8 sp[0x10];
    s32 tmp;

    func_00192FD8();
    func_001D2900((u8 *)arg0 + 0xC, *(s32 *)((u8 *)arg0 + 0xA4));
    tmp = func_001E4280();
    func_001D4040(sp, *(void **)((u8 *)arg0 + 0xC));
    return func_001E3610(tmp, sp);
}
