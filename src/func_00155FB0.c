typedef struct {
    u8 data[16];
} S16;

S16 *func_00155FB0(S16 *src, S16 *end, S16 *dst) {
    while (src != end) {
        if (dst != NULL) {
            *dst = *src;
        }
        src++;
        dst++;
    }
    return dst;
}
