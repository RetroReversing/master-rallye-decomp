void func_003D7B00(void *arg0, u32 arg1) {
    if (*(s32 *)arg0 == 0) {
        arg1 |= 4;
    }
    *(u8 *)((u8 *)arg0 + 0x1A) = (u8)arg1;
}

extern s32 func_003DB208(s32 arg0, s32 arg1, s32 arg2);
extern u32 D_0043A970[6];

s32 func_003DB7C8(s32 arg0, s32 arg1) {
    s32 val = arg0;
    s32 cnt = arg1;
    if (cnt >= 7) {
        do {
            cnt -= 6;
            val = func_003DB208(val, 0x3D09, 0);
        } while (cnt >= 7);
    }
    if (cnt == 0) {
        return val;
    }
    return func_003DB208(val, D_0043A970[cnt - 1], 0);
}

s32 func_003DB9C0(void *arg0, void *arg1) {
    s32 l1 = *(s32 *)((u8 *)arg1 + 0x10);
    s32 diff = *(s32 *)((u8 *)arg0 + 0x10) - l1;
    if (diff != 0) {
        return diff;
    }
    u8 *base = (u8 *)arg0 + 0x14;
    u32 *w0 = (u32 *)(base + l1 * 4);
    u32 *w1 = (u32 *)((u8 *)arg1 + 0x14 + l1 * 4);
    do {
        w1--;
        if (*w0 != *w1) {
            if (*w0 >= *w1) {
                return 1;
            } else {
                return -1;
            }
        }
    } while (base < (u8 *)w0--);
    return 0;
}

s64 func_003DBBB8(s64 arg0, s32 arg1) {
    s64 high = ((arg0 >> 32) & 0x7FF00000LL);
    s64 t = high + 0xFCC00000LL;
    if (t > 0) {
        return t << 32;
    }
    s32 exp = (s32)(-(t)) >> 20;
    if (exp < 0x14) {
        s64 m = ((s64)(0x80000 >> exp)) << 32;
        return m;
    }
    s32 exp2 = exp - 0x14;
    s64 var2;
    if (exp2 < 0x1F) {
        var2 = (s64)1 << (0x1F - exp2);
    } else {
        var2 = 1;
    }
    s64 var2h = var2 << 32;
    var2h = var2h >> 32;
    s64 mask = ((s64)-1) << 32;
    s64 res = (arg1 & mask) | var2h;
    return res;
}
