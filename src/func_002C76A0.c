void func_002C76A0(void *arg0) {
    u64 *p = (u64 *)((u8 *)arg0 + 0x30);
    *p = *p | ((u64)0x8000 << 18);
    *(s16 *)((u8 *)arg0 + 0x18) = 0xE;
}
