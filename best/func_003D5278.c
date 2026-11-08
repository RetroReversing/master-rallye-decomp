s64 func_003D5278(void **arg0, s32 arg1) {
    void *p = *arg0;
    u64 v = *(u64 *)((u8 *)p + 0x10);
    s32 bit = (s32)(v & 1);
    if (arg1 != 0) {
        v = v | 1;
    } else {
        v = v & ~1;
    }
    *(u64 *)((u8 *)p + 0x10) = v;
    return (s64)bit;
}
