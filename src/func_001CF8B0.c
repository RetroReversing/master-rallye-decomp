void *func_001CF8B0(void *arg0, s32 arg1) {
    s32 *base = *(s32 **)((u8 *)arg0 + 0xB8);
    return (void *)(base[arg1]);
}

s32 func_001CF898(void *arg0, s32 arg1) {
    void *p = *(void **)((u8 *)arg0 + 0xB4);
    return (s32)p + arg1 * 12;
}
