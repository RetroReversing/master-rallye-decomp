void func_003C9D38(s32 *arg0) {
    if (*(volatile s32 *)0x1000F520 == 0) {
        *(volatile s32 *)0x1000F590 = 0x1000;
    }
    *arg0 &= 0xFFFFFEFF;
    *(volatile s32 *)0x1000F590 = 0;
}

s32 func_003C9628(s32 arg0) {
    volatile s32 *p = (volatile s32 *)0x1000E060;
    if (arg0 != 0xFFFFFFFF) {
        *p = arg0;
    }
    return *p;
}

void *func_003C95F0(void *arg0) {
    volatile u64 *src = (volatile u64 *)0x00436128;
    volatile u64 *dst = (volatile u64 *)arg0;
    dst[0] = src[0];
    dst[1] = src[1];
    *(u32 *)((u8 *)arg0 + 0x10) = *(u32 *)(0x00436128 + 0x10);
    return arg0;
}

void *func_003C7880(void);
void func_003C8B88(void *arg0) {
    void *v0 = func_003C7880();
    s64 t = *(s64 *)((u8 *)arg0 + 0);
    if (*(s16 *)((u8 *)v0 + 6) == 1) {
        *(volatile s64 *)0x12000000 = t;
        *(volatile s64 *)0x12000070 = *(s64 *)((u8 *)arg0 + 0x10);
        *(volatile s64 *)0x12000080 = *(s64 *)((u8 *)arg0 + 0x18);
        *(volatile s64 *)0x120000C0 = *(s64 *)((u8 *)arg0 + 0x20);
        return;
    }
    *(volatile s64 *)0x12000000 = t;
    *(volatile s64 *)0x12000020 = *(s64 *)((u8 *)arg0 + 8);
    *(volatile s64 *)0x12000090 = *(s64 *)((u8 *)arg0 + 0x10);
    *(volatile s64 *)0x120000A0 = *(s64 *)((u8 *)arg0 + 0x18);
    *(volatile s64 *)0x120000E0 = *(s64 *)((u8 *)arg0 + 0x20);
}
