/* identical to func_00155D80 (matched), with its names changed by decompdecomp */
s32 *func_001ECCB8(s32 *src, s32 *end, s32 *dst) {
    while (src != end) {
        if (dst != NULL) {
            *dst = *src;
        }
        src++;
        dst++;
    }
    return dst;
}
