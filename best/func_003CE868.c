s32 func_003CE868(void **arg0, s8 *arg1, u32 arg2, u32 arg3) {
    void *p = *arg0;
    s32 lim = *(s32 *)((u8 *)p - 0x10);
    if (lim == 0) return 0xFFFFFFFF;
    s32 t = lim - 1;
    if (arg2 < (u32)t) t = arg2;
    t = t + 1;
    s32 i = t - 1;
    if (t == 0) return 0xFFFFFFFF;
    while (i >= 0) {
        u8 c = *(u8 *)((u8 *)p + i);
        s32 found = 0xFFFFFFFF;
        if (arg3 != 0) {
            u32 j = 0;
            do {
                if (arg1[j] == (s8)c) { found = j; break; }
                j++;
            } while (j < arg3);
        }
        if (found != 0xFFFFFFFF) return i;
        i--;
    }
    return 0xFFFFFFFF;
}
