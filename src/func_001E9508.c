s32 func_001E9508(void *arg0, s32 arg1) {
    s32 *p = (s32 *)((u8 *)arg0 + 0x3C);
    s32 base;
    if (arg1 < 0) {
        base = *p;
        return base;
    }
    base = *p;
    return base + (arg1 << 2);
}
