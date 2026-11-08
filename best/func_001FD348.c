s32 func_001FD348(void *arg0, void *arg1) {
    s32 *begin = *(s32 **)((u8 *)arg0 + 0x4C);
    s32 *end = *(s32 **)((u8 *)arg0 + 0x50);
    s32 count = ((s32)end - (s32)begin) >> 2;

    if (count != 0) {
        if (begin != end) {
            s32 key = *(s32 *)arg1;
            do {
                if (key == *begin) return 1;
                begin++;
            } while (begin != end);
        }
        return 0;
    }
    return 1;
}
