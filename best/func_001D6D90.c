extern void func_001D87D8(void *, void *, void *);

s32 func_001D6D90(void *arg0, s32 arg1) {
    u8 *p = (u8 *)arg0;
    void *v = *(void **)(p + 4);
    s32 *begin = *(s32 **)((u8 *)v + 0);
    s32 *end = *(s32 **)((u8 *)v + 4);
    s32 *cap = *(s32 **)((u8 *)v + 8);
    if ((u32)(end - begin) < 7U) {
        if (end == cap) {
            func_001D87D8(v, end, &arg1);
        } else {
            if (end != 0) *end = arg1;
            *(s32 **)((u8 *)v + 4) = end + 1;
        }
        return 1;
    }
    return 0;
}
