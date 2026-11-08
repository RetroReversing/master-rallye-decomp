/* identical to func_00156260 (matched), with its names changed by decompdecomp */
f32 *func_003231B8(f32 *src, f32 *end, f32 *dst) {
    while (src != end) {
        if (dst != NULL) {
            dst[0] = src[0];
            dst[1] = src[1];
        }
        src += 2;
        dst += 2;
    }
    return dst;
}

typedef struct { u8 data[16]; } S16;

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

s32 *func_00155D80(s32 *src, s32 *end, s32 *dst) {
    while (src != end) {
        if (dst != NULL) {
            *dst = *src;
        }
        src++;
        dst++;
    }
    return dst;
}

s32 func_00155CF8(void *arg0, s32 arg1, s32 arg2);

s32 func_00155D50(void *arg0, s32 arg1, s32 arg2) {
    return *(s32 *)((u8 *)arg0 + 4) + func_00155CF8(arg0, arg1, arg2) * 4;
}
