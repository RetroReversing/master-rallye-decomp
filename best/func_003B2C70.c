s32 func_003D7A40(void *arg0, u32 arg1) {
    s32 old = *(s32 *)arg0;
    *(s32 *)arg0 = (s32)arg1;
    *(u8 *)((char *)arg0 + 0x1A) = (u8)((arg1 < 1u) << 2);
    return old;
}

extern void D_002AD390(void *);
s32 func_003AA7B8(void *, s32, s32);

void func_003B2CE8(void *arg0, s32 arg1) {
    s32 a = *(s32 *)((char *)arg0 + 0);
    s32 b = *(s32 *)((char *)arg0 + 8);
    func_003AA7B8(arg0, a, (s32)(((s32)(b - a) * (s32)0xB6DB6DB7) >> 2));
    if (arg1 & 1)
        D_002AD390(arg0);
}

void func_003B3A80(void *);

void func_003B2C70(void *arg0, void *arg1, s32 arg2) {
    while ((u32)arg0 < (u32)arg1) {
        func_003B3A80(arg0);
        arg0 = (void *)((char *)arg0 + 0x1C);
    }
}

s32 func_003A9E88(void *, s32, s32);

void func_003B28A0(void *arg0, s32 arg1) {
    s32 a = *(s32 *)((char *)arg0 + 0);
    s32 b = *(s32 *)((char *)arg0 + 8);
    func_003A9E88(arg0, a, (s32)(((s32)(b - a) * (s32)0xAAAAAAAB) >> 2));
    if (arg1 & 1)
        D_002AD390(arg0);
}
