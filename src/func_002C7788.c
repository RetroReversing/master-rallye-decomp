void func_002C7788(void *arg0) {
    u64 *p = (u64 *)((u8 *)arg0 + 0x30);
    *p = *p | ((u64)0x8000 << 20);
}
