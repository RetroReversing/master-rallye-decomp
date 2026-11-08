void func_0027EEF8(void *arg0, void *arg1) {
    s32 i;
    s32 *p;

    *(s32 *)((u8 *)arg0 + 0x120) = 0;
    i = 0x3B;
    p = (s32 *)((u8 *)arg0 + 0x11C);
    do {
        *p = 0;
        i--;
        p--;
    } while (i >= 0);

    {
        u8 *src = *(u8 **)((u8 *)arg1 + 0x50) + 0x50;
        u8 *dst = (u8 *)arg0 + 0x20;
        *(f32 *)(dst + 0) = *(f32 *)(src + 0);
        *(f32 *)(dst + 4) = *(f32 *)(src + 4);
        *(f32 *)(dst + 8) = *(f32 *)(src + 8);
    }
    *(s32 *)((u8 *)arg0 + 0x2C) = 0;
}
