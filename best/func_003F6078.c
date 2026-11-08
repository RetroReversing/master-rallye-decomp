/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0, tried by autopilot */
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

f32 func_003F6078(f32 fparg0, f32 fparg1) {
    f32 temp_f1;
    f32 var_f6;
    s32 temp_4;
    s32 var_2;

    temp_4 = M2C_BITWISE(s32, fparg0) & 0x7FFFFFFF;
    if (temp_4 > 0x31FFFFFF) {
        var_f6 = fparg0 * fparg0;
        goto block_8;
    }
    if (M2C_ERROR(/* Read from unset register $f0 */) != 0) {
        var_f6 = fparg0 * fparg0;
block_8:
        temp_f1 = var_f6 * ((var_f6 * ((var_f6 * ((var_f6 * ((var_f6 * ((var_f6 * -1.1359648e-11f) + 2.0875723e-9f)) + -0.00000027557314f)) + 0.000024801588f)) + -0.0013888889f)) + 0.041666668f);
        if (temp_4 <= 0x3E999999) {
            return 1.0f - ((var_f6 * 0.5f) - ((var_f6 * temp_f1) - (fparg0 * fparg1)));
        }
        if (temp_4 > 0x3F480000) {
            var_2 = 0x3E900000;
        } else {
            var_2 = temp_4 + 0xFF000000;
        }
        return (1.0f - M2C_BITWISE(f32, var_2)) - (((var_f6 * 0.5f) - M2C_BITWISE(f32, var_2)) - ((var_f6 * temp_f1) - (fparg0 * fparg1)));
    }
    return 1.0f;
}
