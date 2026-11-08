s32 func_0036A728(s32 unused, s32 a, u32 b, u32 c, u32 d, u32 e, u32 f) {
    u32 c1 = c >> 3;
    u32 d1 = d >> 3;
    u32 r = b & 0x3FF;
    r = r | (c1 << 10);
    u32 e1 = e >> 3;
    r = r | (d1 << 13);
    u32 f1 = f >> 3;
    r = r | (e1 << 16);
    r = r | (f1 << 19);
    r = r | ((u32)a << 22);
    return (s32)r;
}
