s32 func_001D6DF8(void *arg0, u32 arg1) {
    u8 *p = (u8 *)arg0;
    void *v = *(void **)(p + 4);
    s32 *begin = *(s32 **)((u8 *)v + 0);
    s32 *end = *(s32 **)((u8 *)v + 4);
    if (begin == end) return *(s32 *)(p + 0xC);
    if (arg1 < (u32)(end - begin) && (s32)arg1 >= 0) {
        return begin[arg1];
    }
    return *(s32 *)(p + 0xC);
}

extern void func_001D87D8(void *, void *, void *);

s32 func_001D6D90(void *arg0, s32 arg1) {
    u8 *p = (u8 *)arg0;
    void *v = *(void **)(p + 4);
    s32 *begin = *(s32 **)((u8 *)v + 0);
    s32 *end = *(s32 **)((u8 *)v + 4);
    s32 *cap = *(s32 **)((u8 *)v + 8);
    s32 val = arg1;
    if ((end - begin) < 7) {
        if (end == cap) {
            func_001D87D8(v, end, &val);
        } else {
            if (end != 0) *end = arg1;
            *(s32 **)((u8 *)v + 4) = end + 1;
        }
        return 1;
    }
    return 0;
}

void func_001D7000(void *arg0) {
    u32 temp_3;
    u32 temp_5;
    u32 var_3;

    temp_5 = *(u32 *)((u8 *)arg0 + 4);
    temp_3 = *(u32 *)((u8 *)arg0 + 0);
    if (temp_3 < temp_5) {
        var_3 = temp_3 + 0x24;
        do {
            var_3 += 0x24;
        } while (var_3 < temp_5);
    }
    *(u32 *)((u8 *)arg0 + 4) = temp_5 - (temp_5 - temp_3);
}
