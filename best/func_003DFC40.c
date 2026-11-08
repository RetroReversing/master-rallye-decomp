extern u64 D_0043ADC0[];

s32 func_003DFC40(u32 *arg0, s32 *arg1, u64 arg2) {
    u64 *p;
    s32 found;
    u32 i;
    s64 lo16_ext;
    u64 arg2_b24;
    u64 arg2_hi;
    u64 m_ffff;
    u64 m_ff00;
    u64 m_neg1_24;
    u64 m_mask40;
    u64 m_bd20;
    u64 m_bd80;
    u64 m_bd90;
    u64 m_bda0;
    u64 m_ffe0;
    u64 m_fff8;
    u64 m_f000;
    u64 m_c000;

    lo16_ext = (s64)(s32)((s64)((arg2 & 0xFFFF) << 32) >> 32);
    arg2_b24 = arg2 >> 24;
    arg2_hi = arg2 >> 32;

    p = D_0043ADC0;
    found = 0;
    i = 0;

    m_ffff = (u64)0xFFFF << 24;
    m_ff00 = (u64)0xFF00 << 24;
    m_neg1_24 = (u64)-1 >> 24;
    m_mask40 = ((u64)-1 << 40) >> 24;
    m_bd20 = (u64)0xBD20 << 24;
    m_bd80 = (u64)0xBD80 << 24;
    m_bd90 = (u64)0xBD90 << 24;
    m_bda0 = (u64)0xBDA0 << 24;
    m_ffe0 = (u64)0xFFE0 << 24;
    m_fff8 = (u64)0xFFF8 << 24;
    m_f000 = (u64)0xF000 << 24;
    m_c000 = (u64)0xC000 << 24;

    while (1) {
        u64 v1 = p[1];
        if (v1 == m_ffff) {
            u64 v0 = p[0];
            u64 m_bd88 = (u64)0xBD88 << 24;
            u64 test;
            s32 bits;
            if (v0 == m_bd88) {
                test = arg2 & m_fff8;
                bits = 7;
            } else if (m_bd88 < v0) {
                if (v0 == m_bd90) {
                    test = arg2 & m_fff8;
                    bits = 7;
                } else if (v0 == m_bda0) {
                    test = arg2 & m_fff8;
                    bits = 7;
                } else {
                    test = 0;
                    bits = 0;
                }
            } else {
                if (v0 == m_bd20) {
                    test = arg2 & m_ffe0;
                    bits = 0x1F;
                } else if (v0 == m_bd80) {
                    test = arg2 & m_fff8;
                    bits = 7;
                } else {
                    test = 0;
                    bits = 0;
                }
            }
            if (test == v0) {
                *arg0 = i;
                *arg1 = (s32)(arg2_b24 & (u64)bits);
                found = 1;
            }
        } else if (m_ffff < v1) {
            if (v1 == m_neg1_24) {
                if ((arg2 & m_mask40) == p[0]) {
                    *arg0 = i;
                    *arg1 = (s32)lo16_ext;
                    found = 1;
                }
            }
        } else {
            if (v1 == m_ff00) {
                u64 v0 = p[0];
                u64 test;
                s32 bits;
                if (v0 == ((u64)0xE000 << 24)) {
                    test = arg2 & m_f000;
                    bits = 0xF;
                } else if (v0 == m_c000) {
                    test = arg2 & ((u64)0xE000 << 24);
                    bits = 0x1F;
                } else {
                    test = arg2 & v1;
                    bits = 0;
                }
                if (test == v0) {
                    *arg0 = i;
                    *arg1 = (s32)(arg2_hi & (u64)bits);
                    found = 1;
                }
            }
        }
        i++;
        p += 2;
        if (i >= 10) break;
        if (found != 0) break;
    }
    return found;
}
