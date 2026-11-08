void func_003E7498(void *arg0, int arg1) {
    u64 v;
    int t, t7;
    u8 *cur;

    v = *(u64 *)arg0;
    t = *(s32 *)((char *)arg0 + 0x10);
    v <<= arg1;
    t -= arg1;
    *(u64 *)arg0 = v;
    *(s32 *)((char *)arg0 + 0x10) = t;
    if ((u32)t < 0x39) {
        do {
            cur = *(u8 **)((char *)arg0 + 0x0C);
            t7 = *(s32 *)((char *)arg0 + 0x10);
            *(u64 *)arg0 |= (u64)*cur << (0x38 - t7);
            cur = cur + 1;
            if ((u32)cur < (u32)*(u8 **)((char *)arg0 + 0x24)) {
                *(u8 **)((char *)arg0 + 0x0C) = cur;
            } else {
                *(u8 **)((char *)arg0 + 0x0C) = *(u8 **)((char *)arg0 + 0x20);
            }
            t7 += 8;
            *(s32 *)((char *)arg0 + 0x10) = t7;
        } while ((u32)t7 < 0x39);
    }
    *(u64 *)((char *)arg0 + 0x18) += arg1;
}
