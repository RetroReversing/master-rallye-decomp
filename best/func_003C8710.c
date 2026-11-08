void *func_003C7880(void);
void func_003C8B88(void *arg0) {
    void *v0 = func_003C7880();
    s64 t = *(s64 *)((u8 *)arg0 + 0);
    if (*(s16 *)((u8 *)v0 + 6) == 1) {
        *(volatile s64 *)(u64)0x12000000 = t;
        *(volatile s64 *)(u64)0x12000070 = *(s64 *)((u8 *)arg0 + 0x10);
        *(volatile s64 *)(u64)0x12000080 = *(s64 *)((u8 *)arg0 + 0x18);
        *(volatile s64 *)(u64)0x120000C0 = *(s64 *)((u8 *)arg0 + 0x20);
        return;
    }
    *(volatile s64 *)(u64)0x12000000 = t;
    *(volatile s64 *)(u64)0x12000020 = *(s64 *)((u8 *)arg0 + 8);
    *(volatile s64 *)(u64)0x12000090 = *(s64 *)((u8 *)arg0 + 0x10);
    *(volatile s64 *)(u64)0x120000A0 = *(s64 *)((u8 *)arg0 + 0x18);
    *(volatile s64 *)(u64)0x120000E0 = *(s64 *)((u8 *)arg0 + 0x20);
}

extern u8 D_00436128[];
void *func_003C95F0(void *arg0) {
    u32 *src = (u32 *)D_00436128;
    u32 *dst = (u32 *)arg0;
    dst[0] = src[0]; dst[1] = src[1];
    dst[2] = src[2]; dst[3] = src[3];
    dst[4] = src[4];
    return arg0;
}

s32 func_003C9628(s32 arg0) {
    volatile s32 *p = (volatile s32 *)0x1000E060;
    if (arg0 == 0xFFFFFFFF) {
        return *p;
    }
    *p = arg0;
    return *p;
}

void func_003C8710(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u64 t = *(u64 *)((u8 *)arg0 + 0x30);
    s32 v1 = (s32)(t >> 16) & 0x7FF;
    s32 v2 = (s32)(t >> 48) & 0x7FF;
    s32 a1 = (s16)arg1;
    s32 a2 = (s16)arg2;
    s64 r1 = ((s64)a1 << 16) >> 16;
    s64 r2 = ((s64)a2 << 16) >> 16;
    s64 x = r2 - ((v2 + 1) / 2);
    s64 y = r1 - ((v1 + 1) / 2);
    s64 res;
    if (arg3) {
        res = ((x << 4) + 8) << 32;
    } else {
        res = (x << 4) << 32;
    }
    res = (y << 4) | res;
    *(s64 *)((u8 *)arg0 + 0x20) = res;
}
