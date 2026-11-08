void func_003D7B00(void *arg0, u32 arg1) {
    s32 *p = (s32 *)arg0;
    if (p[0] == 0) {
        arg1 |= 4;
    }
    ((u8 *)arg0)[0x1A] = (u8)arg1;
}

extern void func_003E0EA0(void *arg0, s32 arg1);

void func_003E0EF0(void) {
    s32 sp[12];
    sp[0] = 1;
    func_003E0EA0(sp, 1);
}

void func_003E0F18(void *arg0, s64 arg1) {
    void **p = (void **)((u8 *)arg0 + 0x40);
    void *t = *p;
    ((s32 *)((u8 *)t + 0x70))[0] = 1;
    *(s64 *)((u8 *)t + 0x78) = arg1;
}

void func_003E0F30(void *arg0) {
    void **p = (void **)((u8 *)arg0 + 0x40);
    void *t = *p;
    ((s32 *)((u8 *)t + 0x70))[0] = 0;
    *(s64 *)((u8 *)t + 0x78) = 0;
}
