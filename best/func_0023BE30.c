s32 func_0023BE30(void *arg0, u8 *arg1)
{
    s32 count = (s32)(*(void **)(arg1 + 4) - *(void **)(arg1 + 0)) >> 2;
    s32 limit = count - 1;
    void **base;
    s32 i = 0;

    if (limit > 0) {
        s32 j = i + 1;

        base = *(void ***)(arg1 + 0);
        do {
            void *p = *(void **)((u8 *)base + i * 4);
            void *q = *(void **)((u8 *)base + j * 4);

            if (*(f32 *)((u8 *)p + 0x18) < *(f32 *)((u8 *)q + 0x18))
                return 0;
            i = j;
            j = i + 1;
        } while (i < limit);
    }
    return 1;
}
