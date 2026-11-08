typedef struct { u8 x[8]; } P8_153B48;

void func_00153B48(P8_153B48 *dst, P8_153B48 *end, P8_153B48 *src) {
    while (dst != end) {
        *dst = *src;
        dst++;
        src++;
    }
}
