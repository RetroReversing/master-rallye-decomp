s32 func_00202E00(void *arg0) {
    s32 *begin = *(s32 **)arg0;
    s32 *end = *(s32 **)((u8 *)arg0 + 4);
    s32 count = ((s32)end - (s32)begin) * 0xAAAAAAAB;
    count = count >> 2;
    {
        u32 i = 0;
        if (count != 0) {
            s32 *elem = begin;
            s32 c = count;
            do {
                s32 *inner = *(s32 **)elem;
                float val = *(float *)((u8 *)inner + i * 4);
                if (val == 0.0f) return 0;
                i++;
                elem = (s32 *)((u8 *)elem + 12);
            } while (i < (u32)c);
        }
    }
    return 1;
}
