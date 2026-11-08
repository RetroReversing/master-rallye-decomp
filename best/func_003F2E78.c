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

f32 func_003F2E78(f32 fparg0) {
    f32 var_4;
    s32 temp_5;
    s32 temp_6;

    var_4 = fparg0;
    temp_5 = ((M2C_BITWISE(s32, var_4) >> 0x17) & 0xFF) - 0x7F;
    if (temp_5 >= 0x17) {
        if (temp_5 == 0x80) {
            return 2.0f * fparg0;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return fparg0;
    }
    if (temp_5 >= 0) {
        temp_6 = 0x7FFFFF >> temp_5;
        if (!(M2C_BITWISE(s32, var_4) & temp_6)) {
            return fparg0;
        }
        if ((fparg0 + 1e30f) > 0.0f) {
            if (M2C_BITWISE(s32, var_4) > 0) {
                var_4 = M2C_BITWISE(f32, (M2C_BITWISE(s32, var_4) + (0x800000 >> temp_5)));
            }
            var_4 = M2C_BITWISE(f32, (M2C_BITWISE(s32, var_4) & ~temp_6));
        }
        /* Duplicate return node #18. Try simplifying control flow for better match */
        return var_4;
    }
    if ((fparg0 + 1e30f) > 0.0f) {
        if (M2C_BITWISE(s32, var_4) < 0) {
            var_4 = -0.0f;
        } else {
            var_4 = (M2C_BITWISE(s32, var_4) != 0) ? 1.0f : var_4;
        }
    }
    return var_4;
}
