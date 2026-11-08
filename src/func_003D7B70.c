u64 func_003D7B70(void *arg0, u64 arg1) {
    u64 old = *(u64*)((u8*)arg0 + 0x10);
    *(u64*)((u8*)arg0 + 0x10) = old | arg1;
    return old;
}
