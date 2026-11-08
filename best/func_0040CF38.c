/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

extern M2C_UNK D_0048CEF0;

s32 func_0040CF38(s64 arg0, s64 arg1) {
    s32 temp_5_2;
    s32 temp_6;
    s32 temp_6_4;
    s32 temp_6_9;
    s32 temp_7;
    s32 temp_7_3;
    s32 temp_8_2;
    s32 temp_9;
    s32 var_10;
    s32 var_2;
    s32 var_5;
    s32 var_5_4;
    s32 var_5_7;
    s64 temp_8;
    s64 var_11;
    s64 var_12;
    s64 var_13;
    s64 var_2_2;
    s64 var_2_3;
    s64 var_5_3;
    s64 var_9;
    u32 temp_11;
    u32 temp_11_2;
    u32 temp_2;
    u32 temp_3;
    u32 temp_3_2;
    u32 temp_3_3;
    u32 temp_3_4;
    u32 temp_3_5;
    u32 temp_3_6;
    u32 temp_3_7;
    u32 temp_3_8;
    u32 temp_3_9;
    u32 temp_5;
    u32 temp_6_10;
    u32 temp_6_2;
    u32 temp_6_3;
    u32 temp_6_5;
    u32 temp_6_6;
    u32 temp_6_7;
    u32 temp_6_8;
    u32 temp_7_2;
    u32 temp_7_4;
    u32 temp_7_5;
    u32 temp_7_6;
    u32 temp_8_3;
    u32 temp_hi;
    u32 var_10_2;
    u32 var_11_2;
    u32 var_3_2;
    u32 var_3_3;
    u32 var_3_4;
    u32 var_3_5;
    u32 var_3_6;
    u32 var_3_7;
    u32 var_5_2;
    u32 var_5_5;
    u32 var_5_6;
    u32 var_6;
    u32 var_7;
    u32 var_7_2;
    u32 var_7_3;
    u32 var_8;
    u64 var_3;

    temp_8 = arg1 >> 0x20;
    var_11 = arg0 >> 0x20;
    var_9 = (s64) (arg1 << 0x20) >> 0x20;
    var_12 = (s64) (arg0 << 0x20) >> 0x20;
    if (temp_8 == 0) {
        if ((u32) var_11 < (u32) var_9) {
            if ((u32) var_9 <= 0xFFFFU) {
                var_5 = ((u32) var_9 < 0x100U) ? 0 : 8;
            } else {
                var_5 = ((u32) var_9 <= 0xFFFFFFU) ? 0x10 : 0x18;
            }
            temp_6 = 0x20 - (*(((u32) var_9 >> var_5) + &D_0048CEF0) + var_5);
            if (temp_6 != 0) {
                var_9 <<= temp_6;
                var_11 = (var_11 << temp_6) | ((u32) var_12 >> (0x20 - temp_6));
                var_12 <<= temp_6;
            }
            temp_5 = (u32) var_9 >> 0x10;
            temp_8_2 = var_9 & 0xFFFF;
            var_7 = (u32) var_11 / temp_5;
            temp_6_2 = var_7 * temp_8_2;
            var_3_2 = ((s64) (((s64) ((u32) var_11 % temp_5) << 0x20) << 0x10) >> 0x20) | ((u32) var_12 >> 0x10);
            if (var_3_2 < temp_6_2) {
                var_3_2 += var_9;
                var_7 -= 1;
                if ((var_3_2 >= (u32) var_9) && (var_3_2 < temp_6_2)) {
                    var_7 -= 1;
                    var_3_2 += var_9;
                }
            }
            temp_3 = var_3_2 - temp_6_2;
            var_5_2 = temp_3 / temp_5;
            temp_6_3 = var_5_2 * temp_8_2;
            temp_3_2 = ((s64) (((s64) (temp_3 % temp_5) << 0x20) << 0x10) >> 0x20) | (var_12 & 0xFFFF);
            temp_3_3 = temp_3_2 + var_9;
            if (temp_3_2 < temp_6_3) {
                var_5_2 -= 1;
                if ((temp_3_3 >= (u32) var_9) && (temp_3_3 < temp_6_3)) {
                    var_5_2 -= 1;
                }
            }
            var_5_3 = ((s64) (((s64) var_7 << 0x20) << 0x10) >> 0x20) | var_5_2;
            goto block_67;
        }
        var_2 = (u32) var_9 > 0xFFFFU;
        if (var_9 == 0) {
            var_9 = (s64) (1U / (u32) temp_8);
            var_2 = (u32) var_9 > 0xFFFFU;
        }
        if (var_2 == 0) {
            var_5_4 = ((u32) var_9 < 0x100U) ? 0 : 8;
        } else {
            var_5_4 = ((u32) var_9 <= 0xFFFFFFU) ? 0x10 : 0x18;
        }
        temp_6_4 = 0x20 - (*(((u32) var_9 >> var_5_4) + &D_0048CEF0) + var_5_4);
        temp_7 = 0x20 - temp_6_4;
        if (temp_6_4 == 0) {
            var_11_2 = var_11 - var_9;
            var_13 = 1;
            var_8 = (u32) var_9 >> 0x10;
            var_10 = var_9 & 0xFFFF;
        } else {
            temp_2 = (u32) var_12 >> temp_7;
            var_9 <<= temp_6_4;
            temp_7_2 = (u32) var_11 >> temp_7;
            var_12 <<= temp_6_4;
            temp_11 = (var_11 << temp_6_4) | temp_2;
            var_8 = (u32) var_9 >> 0x10;
            var_10 = var_9 & 0xFFFF;
            var_7_2 = temp_7_2 / var_8;
            temp_6_5 = var_7_2 * var_10;
            var_3_3 = ((s64) (((s64) (temp_7_2 % var_8) << 0x20) << 0x10) >> 0x20) | (temp_11 >> 0x10);
            if (var_3_3 < temp_6_5) {
                var_3_3 += var_9;
                var_7_2 -= 1;
                if ((var_3_3 >= (u32) var_9) && (var_3_3 < temp_6_5)) {
                    var_7_2 -= 1;
                    var_3_3 += var_9;
                }
            }
            temp_3_4 = var_3_3 - temp_6_5;
            var_5_5 = temp_3_4 / var_8;
            temp_6_6 = var_5_5 * var_10;
            var_3_4 = ((s64) (((s64) (temp_3_4 % var_8) << 0x20) << 0x10) >> 0x20) | (temp_11 & 0xFFFF);
            var_2_2 = (s64) var_7_2 << 0x20;
            if (var_3_4 < temp_6_6) {
                var_3_4 += var_9;
                var_5_5 -= 1;
                if (var_3_4 >= (u32) var_9) {
                    var_2_2 = (s64) var_7_2 << 0x20;
                    if (var_3_4 < temp_6_6) {
                        var_5_5 -= 1;
                        var_3_4 += var_9;
                        goto block_31;
                    }
                } else {
block_31:
                    var_2_2 = (s64) var_7_2 << 0x20;
                }
            }
            var_11_2 = var_3_4 - temp_6_6;
            var_13 = ((s64) (var_2_2 << 0x10) >> 0x20) | var_5_5;
        }
        var_7_3 = var_11_2 / var_8;
        temp_6_7 = var_7_3 * var_10;
        var_3_5 = ((s64) (((s64) (var_11_2 % var_8) << 0x20) << 0x10) >> 0x20) | ((u32) var_12 >> 0x10);
        if (var_3_5 < temp_6_7) {
            var_3_5 += var_9;
            var_7_3 -= 1;
            if ((var_3_5 >= (u32) var_9) && (var_3_5 < temp_6_7)) {
                var_7_3 -= 1;
                var_3_5 += var_9;
            }
        }
        temp_3_5 = var_3_5 - temp_6_7;
        var_5_6 = temp_3_5 / var_8;
        temp_6_8 = var_5_6 * var_10;
        temp_3_6 = ((s64) (((s64) (temp_3_5 % var_8) << 0x20) << 0x10) >> 0x20) | (var_12 & 0xFFFF);
        temp_3_7 = temp_3_6 + var_9;
        if (temp_3_6 < temp_6_8) {
            var_5_6 -= 1;
            if ((temp_3_7 >= (u32) var_9) && (temp_3_7 < temp_6_8)) {
                var_5_6 -= 1;
            }
        }
        var_5_3 = ((s64) (((s64) var_7_3 << 0x20) << 0x10) >> 0x20) | var_5_6;
        goto block_68;
    }
    if ((u32) var_11 < (u32) temp_8) {
        var_5_3 = 0;
        goto block_67;
    }
    if ((u32) temp_8 <= 0xFFFFU) {
        var_5_7 = ((u32) temp_8 < 0x100U) ? 0 : 8;
    } else {
        var_5_7 = ((u32) temp_8 <= 0xFFFFFFU) ? 0x10 : 0x18;
    }
    temp_6_9 = 0x20 - (*(((u32) temp_8 >> var_5_7) + &D_0048CEF0) + var_5_7);
    if (temp_6_9 != 0) {
        temp_7_3 = 0x20 - temp_6_9;
        temp_7_4 = (u32) var_11 >> temp_7_3;
        temp_11_2 = (var_11 << temp_6_9) | ((u32) var_12 >> temp_7_3);
        temp_8_3 = (temp_8 << temp_6_9) | ((u32) var_9 >> temp_7_3);
        temp_9 = var_9 << temp_6_9;
        temp_6_10 = temp_8_3 >> 0x10;
        temp_5_2 = temp_8_3 & 0xFFFF;
        var_10_2 = temp_7_4 / temp_6_10;
        temp_7_5 = var_10_2 * temp_5_2;
        var_3_6 = ((s64) (((s64) (temp_7_4 % temp_6_10) << 0x20) << 0x10) >> 0x20) | (temp_11_2 >> 0x10);
        if (var_3_6 < temp_7_5) {
            var_3_6 += temp_8_3;
            var_10_2 -= 1;
            if ((var_3_6 >= temp_8_3) && (var_3_6 < temp_7_5)) {
                var_10_2 -= 1;
                var_3_6 += temp_8_3;
            }
        }
        temp_3_8 = var_3_6 - temp_7_5;
        var_6 = temp_3_8 / temp_6_10;
        temp_7_6 = var_6 * temp_5_2;
        var_3_7 = ((s64) (((s64) (temp_3_8 % temp_6_10) << 0x20) << 0x10) >> 0x20) | (temp_11_2 & 0xFFFF);
        var_2_3 = (s64) var_10_2 << 0x20;
        if (var_3_7 < temp_7_6) {
            var_3_7 += temp_8_3;
            var_6 -= 1;
            if (var_3_7 >= temp_8_3) {
                var_2_3 = (s64) var_10_2 << 0x20;
                if (var_3_7 < temp_7_6) {
                    var_3_7 += temp_8_3;
                    var_6 -= 1;
                    goto block_62;
                }
            } else {
block_62:
                var_2_3 = (s64) var_10_2 << 0x20;
            }
        }
        temp_3_9 = var_3_7 - temp_7_6;
        var_5_3 = ((s64) (var_2_3 << 0x10) >> 0x20) | var_6;
        temp_hi = MULTU_HI(var_5_3, temp_9);
        if (temp_3_9 >= temp_hi) {
            var_13 = 0;
            if (temp_hi == temp_3_9) {
                var_3 = var_5_3 << 0x20;
                if ((u32) (var_12 << temp_6_9) < (u32) (var_5_3 * temp_9)) {
                    goto block_66;
                }
            } else {
                goto block_68;
            }
        } else {
block_66:
            var_5_3 -= 1;
            goto block_67;
        }
    } else {
        var_5_3 = 1;
        if ((u32) temp_8 >= (u32) var_11) {
            var_5_3 = 0;
            if ((u32) var_12 >= (u32) var_9) {
                var_5_3 = 1;
            }
        }
block_67:
        var_13 = 0;
block_68:
        var_3 = var_5_3 << 0x20;
    }
    return (var_3 >> 0x20) | (var_13 << 0x20);
}
