/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

extern M2C_UNK D_0048B7B0;

f32 func_003F4D58(f32 fparg0, f32 fparg1) {
    f32 temp_f0;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_5;
    s32 temp_6;
    s32 var_10;
    s32 var_2;
    s32 var_2_2;
    s32 var_4;
    s32 var_4_2;
    s32 var_5;
    s32 var_5_2;
    s32 var_5_3;
    s32 var_6;
    s32 var_7;
    s32 var_8;
    u32 temp_9;

    temp_9 = M2C_BITWISE(s32, fparg0) & 0x80000000;
    temp_6 = M2C_BITWISE(s32, fparg1) & 0x7FFFFFFF;
    temp_5 = M2C_BITWISE(s32, fparg0) ^ temp_9;
    if ((temp_6 != 0) && (temp_5 <= 0x7F7FFFFF)) {
        if (temp_6 > 0x7F800000) {
            /* Duplicate return node #4. Try simplifying control flow for better match */
            temp_f0 = fparg0 * fparg1;
            return temp_f0 / temp_f0;
        }
        if (temp_5 < temp_6) {
            return fparg0;
        }
        if (temp_5 == temp_6) {
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return *(((temp_9 >> 0x1F) * 4) + &D_0048B7B0);
        }
        if (temp_5 <= 0x7FFFFF) {
            var_2 = temp_5 << 8;
            var_8 = -0x7E;
            if (var_2 > 0) {
                do {
                    var_8 -= 1;
                    var_2 *= 2;
                } while (var_2 > 0);
            }
        } else {
            var_8 = (temp_5 >> 0x17) - 0x7F;
        }
        if (temp_6 <= 0x7FFFFF) {
            var_2_2 = temp_6 << 8;
            var_7 = -0x7E;
            if (!(temp_6 & 0x800000)) {
                var_4 = var_8 < -0x7E;
                do {
                    var_7 -= 1;
                    var_2_2 *= 2;
                } while (var_2_2 >= 0);
            } else {
                var_4 = var_8 < -0x7E;
            }
        } else {
            var_4 = var_8 < -0x7E;
            var_7 = (temp_6 >> 0x17) - 0x7F;
        }
        if (var_4 == 0) {
            var_5_2 = (temp_5 & 0x7FFFFF) | 0x800000;
        } else {
            var_5_2 = temp_5 << (-0x7E - var_8);
        }
        var_10 = var_7 < -0x7E;
        if (var_10 == 0) {
            var_6 = (temp_6 & 0x7FFFFF) | 0x800000;
        } else {
            var_6 = temp_6 << (-0x7E - var_7);
        }
        var_4_2 = var_8 - var_7;
loop_31:
        var_4_2 -= 1;
        if (var_4_2 == 0) {
            temp_3 = var_5_2 - var_6;
            var_5_3 = (temp_3 >= 0) ? temp_3 : var_5_2;
            if (var_5_3 != 0) {
                if (var_5_3 <= 0x7FFFFF) {
                    do {
                        var_5_3 *= 2;
                        var_7 -= 1;
                    } while (var_5_3 <= 0x7FFFFF);
                    var_10 = var_7 < -0x7E;
                }
                if (var_10 == 0) {
                    var_5 = (var_5_3 + 0xFF800000) | ((var_7 + 0x7F) << 0x17);
                } else {
                    var_5 = var_5_3 >> (-0x7E - var_7);
                }
                return M2C_BITWISE(f32, (var_5 | temp_9));
            }
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return *(((temp_9 >> 0x1F) * 4) + &D_0048B7B0);
        }
        temp_3_2 = var_5_2 - var_6;
        var_5_2 *= 2;
        if ((temp_3_2 < 0) || (var_5_2 = temp_3_2 * 2, (temp_3_2 != 0))) {
            goto loop_31;
        }
        return *(((temp_9 >> 0x1F) * 4) + &D_0048B7B0);
    }
    temp_f0 = fparg0 * fparg1;
    return temp_f0 / temp_f0;
}
