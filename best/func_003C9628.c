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
    *(s32 *)((u8 *)arg0 + 0x10) = *(s32 *)(0x00436128 + 0x10);
    return arg0;
}

extern s32 D_00436090[];
s32 func_003C9300(u32 arg0) {
    if (arg0 < 10) {
        return D_00436090[arg0];
    }
    return 0;
}
