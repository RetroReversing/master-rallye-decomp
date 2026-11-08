void func_002D2DA8(void *p) {
    u8 *endptr = (u8 *)p + 0x4C;
    u32 limit = *(u32 *)((u8 *)p + 0x4C);
    u32 n = *(u32 *)(endptr + 4);
    if (n == limit)
        return;
    do {
        u16 idx = *(u16 *)(n - 2);
        *(s32 *)((u8 *)*(void **)((u8 *)p + 0x40) + ((u32)idx << 2)) = -1;
        n = *(u32 *)(endptr + 4);
        n -= 2;
        *(u32 *)(endptr + 4) = n;
    } while (limit != n);
}
