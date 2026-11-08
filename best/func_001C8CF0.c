void func_001CA568(f32 *m, f32 *v, f32 *out) {
    f32 x = v[0];
    f32 y = v[1];
    f32 z = v[2];
    
    out[0] = x * m[0x00/4] + y * m[0x10/4] + z * m[0x20/4] + m[0x30/4];
    out[1] = x * m[0x04/4] + y * m[0x14/4] + z * m[0x24/4] + m[0x34/4];
    out[2] = x * m[0x08/4] + y * m[0x18/4] + z * m[0x28/4] + m[0x38/4];
}

void func_001C99B0(u8 *src, u8 *src_end, u8 *dst) {
    if (src == src_end) {
        return;
    }
    do {
        if (dst != NULL) {
            u64 *s = (u64 *)src;
            u64 *d = (u64 *)dst;
            d[0] = s[0];
            d[1] = s[1];
            d[2] = s[2];
            d[3] = s[3];
            d[4] = s[4];
            *(u32 *)(dst + 0x28) = *(u32 *)(src + 0x28);
        }
        src += 0x2C;
        dst += 0x2C;
    } while (src != src_end);
}

f32 *func_001C8F48(f32 *left, f32 *right, f32 pivot) {
    f32 *l = left;
    f32 *r = right;
    
    while (1) {
        r -= 2;
        while (*l < pivot) {
            l += 2;
        }
        while (pivot < *r) {
            r -= 2;
        }
        if (l >= r) {
            break;
        }
        u64 tmp;
        *(u64 *)((u8 *)tmp + 0) = *(u64 *)l; // dummy to make compiler use ldl/ldr pattern?
        // easier way - copy as 8 bytes
        u64 t = *(u64 *)l;
        *(u64 *)l = *(u64 *)r;
        *(u64 *)r = t;
        l += 2;
    }
    return l;
}

void func_001C8C10(s32 arg0, s32 arg1, s32 arg2, u64 val); // extern

void func_001C8CF0(f32 *base, f32 *end) {
    s32 count = (s32)((end - base) / 2);
    if (count >= 2) {
        s32 mid = (count - 2) / 2;
        f32 *p = (f32 *)((u8 *)base + mid * 8);
        do {
            u64 tmp;
            tmp = *(u64 *)p;
            func_001C8C10((s32)base, mid, count, tmp);
            if (mid == 0) break;
            mid--;
            p -= 2;
        } while (1);
    }
}
