/* identical to func_00152F58 (matched), with its names changed by decompdecomp */
s32 *func_002E7870(s32 *dst, s32 count, s32 *src) {
    while (count != 0) {
        *dst = *src;
        count--;
        dst++;
    }
    return dst;
}

u64 *func_00152F00(u64 *start, u64 *end, u64 *value) {
    s32 n;
    s32 mid;
    u64 *p;

    n = (s32)end - (s32)start;
    n >>= 3;
    while (n > 0) {
        mid = n >> 1;
        p = start + mid;
        if (*p < *value) {
            start = p + 1;
            n = n - mid - 1;
        } else {
            n = mid;
        }
    }
    return start;
}

extern u8 *D_0040E618[];
s32 func_00152B80(u32 size, s32 *count);

u8 *func_00152D28(u32 size) {
    s32 count = 0x14;
    u8 *ret = (u8 *)func_00152B80(size, &count);

    if (count != 1) {
        u8 *p = ret + size;
        s32 i;

        D_0040E618[((size + 7) >> 3) - 1] = p;
        for (i = 1; i != count - 1; i++) {
            *(u8 **)p = p + size;
            p += size;
        }
        *(u8 **)p = NULL;
    }
    return ret;
}

typedef struct { u8 data[8]; } S8;

S8 *func_00153318(S8 *src, S8 *end, S8 *dst) {
    while (src != end) {
        if (dst != NULL) {
            *dst = *src;
        }
        src++;
        dst++;
    }
    return dst;
}
