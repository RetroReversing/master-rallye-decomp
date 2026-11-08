extern void func_00276F68(void *);
extern void func_002AC8C0(u32 *bits, s32 *out);
extern s32 *func_002AC950(s32 *a, s32 *b, s32 *c);
extern void func_002AC7B0(s32 *a);

void *func_002AB988(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 8) = arg1;
    func_00276F68(arg0);
    *(s32 *)((u8 *)arg0 + 0xC) = arg2;
    return arg0;
}

void func_002AC8C0(u32 *arg0, s32 *arg1) {
    u32 bits = *arg0;
    u32 mant = bits & 0x7FFFFF;
    s32 exp = (bits >> 23) & 0xFF;
    u32 sign = bits >> 31;

    arg1[1] = sign;
    if (exp == 0) {
        arg1[0] = 2;
        return;
    }
    if (exp == 0xFF) {
        if (mant == 0) {
            arg1[0] = 4;
            return;
        }
        if (mant & 0x100000) {
            arg1[0] = 1;
        } else {
            arg1[0] = 0;
        }
        arg1[3] = mant;
        return;
    }
    arg1[3] = (mant << 7) | 0x40000000;
    arg1[2] = exp - 0x7F;
    arg1[0] = 3;
}

void func_002ACB88(f32 fparg0, f32 fparg1) {
    s32 x[4];
    s32 y[4];
    s32 z[4];
    f32 a = fparg0;
    f32 b = fparg1;

    func_002AC8C0((u32 *)&a, x);
    func_002AC8C0((u32 *)&b, y);
    func_002AC7B0(func_002AC950(x, y, z));
}

void func_002ACBE0(f32 fparg0, f32 fparg1) {
    s32 x[4];
    s32 y[4];
    s32 z[4];
    f32 a = fparg0;
    f32 b = fparg1;

    func_002AC8C0((u32 *)&a, x);
    func_002AC8C0((u32 *)&b, y);
    y[1] ^= 1;
    func_002AC7B0(func_002AC950(x, y, z));
}
