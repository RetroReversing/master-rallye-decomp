s32 *func_001C94F8(s32 *dest, s32 count, s32 *src) {
    s32 *p = dest;
    if (count != 0) {
        do {
            count--;
            if (p != 0) {
                *p = *src;
            }
            p++;
        } while (count != 0);
    }
    return p;
}
