void func_0025E2D0(void *arg0) {
    s32 count = (*(s32 *)((u8 *)arg0 + 0x9C) - *(s32 *)((u8 *)arg0 + 0x98)) >> 2;
    s32 i = 0;
    if (count > 0) {
        s32 j = 0;
        do {
            void *base = *(void **)((u8 *)arg0 + 0xC);
            void *p = *(void **)((u8 *)base + j);
            f32 *q = (f32 *)((u8 *)p + i * 4);
            *q += 0.1f;
            i++;
            j += 0xC;
        } while (i < count);
    }
}
