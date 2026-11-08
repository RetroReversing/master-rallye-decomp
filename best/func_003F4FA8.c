/* machine draft (m2c), tried by autopilot */
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

extern f32 D_0048B7E4;

f32 func_003F4FA8(f32 fparg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 temp_f9_3;
    f32 var_4;
    f32 var_7;
    f32 var_f0;
    s32 temp_3;
    s32 temp_7;
    s32 temp_8;
    s32 var_8;

    var_4 = fparg0;
    var_7 = var_4;
    var_8 = 0;
    if (M2C_BITWISE(s32, var_7) <= 0x7FFFFF) {
        if (!(M2C_BITWISE(s32, var_7) & 0x7FFFFFFF)) {
            return D_0048B7E4;
        }
        var_8 = -0x19;
        if (M2C_BITWISE(s32, var_7) < 0) {
            return (var_4 - var_4) / 0.0f;
        }
        var_4 *= 3.3554432e7f;
        var_7 = var_4;
        goto block_6;
    }
block_6:
    if (M2C_BITWISE(s32, var_7) > 0x7F7FFFFF) {
        return 2.0f * var_4;
    }
    temp_7 = M2C_BITWISE(s32, var_7) & 0x7FFFFF;
    temp_3 = (temp_7 + 0x4AFB20) & 0x800000;
    temp_8 = var_8 - 0x7F + (M2C_BITWISE(s32, var_7) >> 0x17) + (temp_3 >> 0x17);
    temp_f12 = M2C_BITWISE(f32, (temp_7 | (temp_3 ^ 0x3F800000))) - 1.0f;
    if (((temp_7 + 0xF) & 0x7FFFFF) < 0x10) {
        var_f0 = 0.0f;
        if (temp_f12 != 0.0f) {
            temp_f2_2 = temp_f12 * temp_f12 * (0.5f - (temp_f12 * 0.33333334f));
            if (temp_8 == 0) {
                return temp_f12 - temp_f2_2;
            }
            temp_f9_3 = (f32) temp_8;
            return (temp_f9_3 * 0.6931381f) - ((temp_f2_2 - (temp_f9_3 * 0.000009058001f)) - temp_f12);
        }
        if (temp_8 != 0) {
            temp_f9_2 = (f32) temp_8;
            return (temp_f9_2 * 0.6931381f) + (temp_f9_2 * 0.000009058001f);
        }
        /* Duplicate return node #24. Try simplifying control flow for better match */
        return var_f0;
    }
    temp_f10 = temp_f12 / (temp_f12 + 2.0f);
    temp_f9 = (f32) temp_8;
    temp_f3 = temp_f10 * temp_f10;
    temp_f0_2 = temp_f3 * temp_f3;
    temp_f2 = (temp_f3 * ((temp_f0_2 * ((temp_f0_2 * ((temp_f0_2 * 0.14798199f) + 0.18183573f)) + 0.2857143f)) + 0.6666667f)) + (temp_f0_2 * ((temp_f0_2 * ((temp_f0_2 * 0.15313838f) + 0.22222199f)) + 0.4f));
    if (((temp_7 + 0xFFCF5C30) | (0x35C288 - temp_7)) > 0) {
        temp_f4 = temp_f12 * 0.5f * temp_f12;
        if (temp_8 == 0) {
            return temp_f12 - (temp_f4 - (temp_f10 * (temp_f4 + temp_f2)));
        }
        return (temp_f9 * 0.6931381f) - ((temp_f4 - ((temp_f10 * (temp_f4 + temp_f2)) + (temp_f9 * 0.000009058001f))) - temp_f12);
    }
    temp_f0 = temp_f12 - temp_f2;
    if (temp_8 == 0) {
        return temp_f12 - (temp_f10 * temp_f0);
    }
    var_f0 = (temp_f9 * 0.6931381f) - (((temp_f10 * temp_f0) - (temp_f9 * 0.000009058001f)) - temp_f12);
    return var_f0;
}
