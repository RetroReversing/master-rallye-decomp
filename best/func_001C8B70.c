typedef struct { char bytes[44]; } B44;
typedef struct { char bytes[36]; } B36;

static inline void bp44(B44 *d, B44 *s) {
    char *x = (char *)s + 0x20;
    char *y = (char *)d + 0x20;
    *(int *)(y - 0x20) = *(int *)(x - 0x20);
    *(int *)(y - 0x1C) = *(int *)(x - 0x1C);
    *(float *)(y - 0x18) = *(float *)(x - 0x18);
    *(float *)(y - 0x14) = *(float *)(x - 0x14);
    *(float *)(y - 0x10) = *(float *)(x - 0x10);
    *(float *)(y - 0xC) = *(float *)(x - 0xC);
    *(float *)(y - 0x8) = *(float *)(x - 0x8);
    *(float *)(y - 0x4) = *(float *)(x - 0x4);
    *(float *)(y) = *(float *)(x);
    *(float *)(y + 4) = *(float *)(x + 4);
    *(float *)(y + 8) = *(float *)(x + 8);
}

static inline void bp36(B36 *d, B36 *s) {
    char *x = (char *)s + 0x10;
    char *y = (char *)d + 0x10;
    *(int *)(y - 0x10) = *(int *)(x - 0x10);
    *(int *)(y - 0xC) = *(int *)(x - 0xC);
    *(float *)(y - 0x8) = *(float *)(x - 0x8);
    *(float *)(y - 0x4) = *(float *)(x - 0x4);
    *(float *)(y) = *(float *)(x);
    *(float *)(y + 4) = *(float *)(x + 4);
    *(float *)(y + 8) = *(float *)(x + 8);
    *(float *)(y + 0xC) = *(float *)(x + 0xC);
    *(float *)(y + 0x10) = *(float *)(x + 0x10);
}

B44 *func_001C8310(B44 *a, B44 *b, B44 *c) {
    B44 *var3 = a;
    B44 *var7 = c;
    if (var3 == b) {
        return var7;
    }
    var3 = (B44 *)((char *)var3 + 0x20);
    var7 = (B44 *)((char *)var7 + 0x20);
    c = (B44 *)((char *)c + 0x20);
    do {
        if (c != NULL) {
            bp44(var7, var3);
        }
        var3 = (B44 *)((char *)var3 + 0x2C);
        var7 = (B44 *)((char *)var7 + 0x2C);
        c = (B44 *)((char *)c + 0x2C);
    } while (var3 != b);
    return c;
}

B36 *func_001C6100(B36 *a, B36 *b, B36 *c) {
    B36 *var3 = a;
    B36 *var7 = c;
    if (var3 == b) {
        return var7;
    }
    var3 = (B36 *)((char *)var3 + 4);
    var7 = (B36 *)((char *)var7 + 4);
    c = (B36 *)((char *)c + 4);
    do {
        if (c != NULL) {
            bp36(var7, var3);
        }
        var3 = (B36 *)((char *)var3 + 0x20);
        var7 = (B36 *)((char *)var7 + 0x20);
        c = (B36 *)((char *)c + 0x20);
    } while (var3 != b);
    return c;
}

void func_001C8C10(s32 arg0, s32 arg1, s32 arg2, u64 val);

void func_001C8CF0(f32 *base, f32 *end) {
    s32 count = (s32)((end - base) / 2);
    if (count >= 2) {
        s32 mid = (count - 2) / 2;
        f32 *p = (f32 *)((char *)base + mid * 8);
        do {
            u64 tmp = *(u64 *)p;
            func_001C8C10((s32)base, mid, count, tmp);
            if (mid == 0) break;
            mid = mid - 1;
            p = (f32 *)((char *)p - 8);
        } while (1);
    }
}

f32 *func_001C8B70(f32 *arg0, s32 arg1, s32 arg2, f32 arg3) {
    s32 var5 = arg1 - 1;
    s32 var3 = (var5 + (var5 >> 31)) >> 1;
    u64 sp0 = *(u64 *)&arg3;
    do {
        if (arg2 < var5) {
            if (arg3 < *(f32 *)((char *)arg0 + var3 * 8)) {
                var5 = var3;
                *(u64 *)((char *)arg0 + var5 * 8) = *(u64 *)((char *)arg0 + var3 * 8);
                var3 = ((var5 - 1) + ((var5 - 1) >> 31)) >> 1;
                continue;
            }
        }
        break;
    } while (1);
    *(u64 *)((char *)arg0 + var5 * 8) = sp0;
    return (f32 *)((char *)arg0 + var5 * 8);
}
