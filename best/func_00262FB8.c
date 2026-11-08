extern void func_00263038(void);

void func_002660C8(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x00) = 1;
    *(s32 *)((u8 *)arg0 + 0x24) = 0;
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    *(s32 *)((u8 *)arg0 + 0x1C) = 0;
}

void func_00262FB8(void *arg0) {
    void **p = (void **)func_001D6BB0();
    void **q = *p;
    void *v = *q;
    void (*fn)(void *, void *) = *(void (**)(void *, void *))((u8 *)v + 0x64);
    fn((u8 *)q + *(s16 *)((u8 *)v + 0x60), arg0);
}

void *func_00262E68(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x00) = 0;
    *(s32 *)((u8 *)arg0 + 0x04) = 0;
    *(s32 *)((u8 *)arg0 + 0x08) = 0;
    *(s32 *)((u8 *)arg0 + 0x0C) = 0;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    func_00263038();
    return arg0;
}
