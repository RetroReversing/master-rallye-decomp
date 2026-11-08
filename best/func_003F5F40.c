/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

f32 func_003F5F40(f32 fparg0) {
    f32 temp_f0;
    f32 var_5;
    f32 var_f0;
    s32 temp_3;
    s32 temp_6;
    s32 var_4;
    s32 var_4_2;
    s32 var_5_2;
    s32 var_6;
    s32 var_7;
    u32 var_6_2;

    var_5 = fparg0;
    if ((M2C_BITWISE(s32, var_5) & 0x7F800000) == 0x7F800000) {
        return (fparg0 * fparg0) + fparg0;
    }
    var_6 = M2C_BITWISE(s32, var_5) >> 0x17;
    if (M2C_BITWISE(s32, var_5) <= 0) {
        var_f0 = fparg0;
        if (M2C_BITWISE(s32, var_5) & 0x7FFFFFFF) {
            if (M2C_BITWISE(s32, var_5) < 0) {
                temp_f0 = fparg0 - fparg0;
                var_f0 = temp_f0 / temp_f0;
                /* Duplicate return node #7. Try simplifying control flow for better match */
                return var_f0;
            }
            goto block_8;
        }
        return var_f0;
    }
block_8:
    if (var_6 == 0) {
        var_4_2 = 0;
        if (!(M2C_BITWISE(s32, var_5) & 0x800000)) {
            do {
                var_5 = M2C_BITWISE(f32, (M2C_BITWISE(s32, var_5) * 2));
                var_4_2 += 1;
            } while (!(M2C_BITWISE(s32, var_5) & 0x800000));
        }
        var_6 = 1 - var_4_2;
    }
    temp_6 = var_6 - 0x7F;
    var_5_2 = (((M2C_BITWISE(s32, var_5) & 0x7FFFFF) | 0x800000) << (temp_6 & 1)) * 2;
    var_7 = 0;
    var_4 = 0;
    var_6_2 = 0x01000000;
    do {
        temp_3 = var_7 + var_6_2;
        if (var_5_2 >= temp_3) {
            var_5_2 -= temp_3;
            var_7 = temp_3 + var_6_2;
            var_4 += var_6_2;
        }
        var_6_2 = var_6_2 >> 1;
        var_5_2 *= 2;
    } while (var_6_2 != 0);
    if (var_5_2 != 0) {
        var_4 += var_4 & 1;
    }
    return M2C_BITWISE(f32, ((var_4 >> 1) + 0x3F000000 + ((temp_6 >> 1) << 0x17)));
}
