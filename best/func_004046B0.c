s32 func_004046B0(s64 arg0) {
    s64 x = arg0;
    s64 e;
    u64 m;
    u64 t;
    e = ((u64)(x << 1) >> 0x35) - 0x433;
    if (e < -0x35) {
        return 0;
    }
    if (e >= 0xD) {
        return 0x270F;
    }
    m = (((u64)(x << 0xC) >> 0xC)) | (0x8000ULL << 0x25);
    if (e < 0) {
        t = m >> ((s32)(-e - 2));
        if ((t & 3) != 3) {
            m = t >> 2;
        } else {
            m = (t >> 2) + 1;
        }
    } else {
        m = m << (s32)e;
    }
    return (s32)m;
}
