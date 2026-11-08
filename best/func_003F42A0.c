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

f32 func_003F5F40(f32, M2C_UNK, f32);               /* extern */

f32 func_003F42A0(f32 fparg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f21_3;
    f32 var_f0;
    s32 temp_3;
    s32 temp_3_2;

    temp_3 = M2C_BITWISE(s32, fparg0) & 0x7FFFFFFF;
    if (temp_3 == 0x3F800000) {
        var_f0 = 0.0f;
        if (M2C_BITWISE(s32, fparg0) <= 0) {
            return 3.1415927f;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return var_f0;
    }
    if (temp_3 > 0x3F800000) {
        temp_f0 = fparg0 - fparg0;
        return temp_f0 / temp_f0;
    }
    if (temp_3 <= 0x3EFFFFFF) {
        if (temp_3 > 0x23000000) {
            temp_f21 = fparg0 * fparg0;
            var_f0 = 1.5707963f - (fparg0 - (7.5497894e-8f - (fparg0 * ((temp_f21 * ((temp_f21 * ((temp_f21 * ((temp_f21 * ((temp_f21 * ((temp_f21 * 0.00003479331f) + 0.000791535f)) + -0.040055536f)) + 0.20121253f)) + -0.32556581f)) + 0.16666667f)) / ((temp_f21 * ((temp_f21 * ((temp_f21 * ((temp_f21 * 0.077038154f) + -0.688284f)) + 2.0209458f)) + -2.403395f)) + 1.0f)))));
        } else {
            var_f0 = 1.5707964f;
        }
    } else if (M2C_BITWISE(s32, fparg0) < 0) {
        temp_f21_2 = (fparg0 + 1.0f) * 0.5f;
        temp_f0_2 = func_003F5F40(fparg0, 0x3F800000, temp_f21_2);
        var_f0 = 3.1415925f - (2.0f * (temp_f0_2 + ((((temp_f21_2 * ((temp_f21_2 * ((temp_f21_2 * ((temp_f21_2 * ((temp_f21_2 * ((temp_f21_2 * 0.00003479331f) + 0.000791535f)) + -0.040055536f)) + 0.20121253f)) + -0.32556581f)) + 0.16666667f)) / ((temp_f21_2 * ((temp_f21_2 * ((temp_f21_2 * ((temp_f21_2 * 0.077038154f) + -0.688284f)) + 2.0209458f)) + -2.403395f)) + 1.0f)) * temp_f0_2) - 7.5497894e-8f)));
    } else {
        temp_f21_3 = (1.0f - fparg0) * 0.5f;
        temp_f0_3 = func_003F5F40(fparg0, 0x3F800000, temp_f21_3);
        temp_3_2 = M2C_BITWISE(s32, temp_f0_3) & 0xFFFFF000;
        var_f0 = 2.0f * (M2C_BITWISE(f32, temp_3_2) + ((((temp_f21_3 * ((temp_f21_3 * ((temp_f21_3 * ((temp_f21_3 * ((temp_f21_3 * ((temp_f21_3 * 0.00003479331f) + 0.000791535f)) + -0.040055536f)) + 0.20121253f)) + -0.32556581f)) + 0.16666667f)) / ((temp_f21_3 * ((temp_f21_3 * ((temp_f21_3 * ((temp_f21_3 * 0.077038154f) + -0.688284f)) + 2.0209458f)) + -2.403395f)) + 1.0f)) * temp_f0_3) + ((temp_f21_3 - (M2C_BITWISE(f32, temp_3_2) * M2C_BITWISE(f32, temp_3_2))) / (temp_f0_3 + M2C_BITWISE(f32, temp_3_2)))));
    }
    return var_f0;
}
