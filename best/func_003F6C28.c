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

f32 func_003F3038(s32, f32);                        /* extern */
extern M2C_UNK D_0048BCD0;

f32 func_003F6C28(s32 arg0, f32 fparg0, f32 fparg1) {
    f32 temp_6;
    f32 temp_f0;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f11_3;
    f32 temp_f14;
    f32 temp_f15;
    f32 temp_f3;
    f32 temp_f4;
    f32 var_f0;
    f32 var_f12;
    f32 var_f13;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_5;

    var_f12 = fparg0;
    var_f13 = fparg1;
    temp_6 = var_f12;
    temp_5 = M2C_BITWISE(s32, temp_6) & 0x7FFFFFFF;
    if (temp_5 <= 0x317FFFFF) {
        if (M2C_ERROR(/* Read from unset register $f0 */) == 0) {
            if ((temp_5 | (arg0 + 1)) == 0) {
                var_f0 = 1.0f / func_003F3038(temp_5, temp_6);
                goto block_17;
            }
            if (arg0 != 1) {
                return -1.0f / var_f12;
            }
            var_f0 = var_f12;
            goto block_17;
        }
        goto block_9;
    }
block_9:
    if (temp_5 > 0x3F2CA13F) {
        if (M2C_BITWISE(s32, temp_6) < 0) {
            var_f12 = -var_f12;
            var_f13 = -var_f13;
        }
        temp_f11 = 3.7748947e-8f - var_f13;
        var_f13 = 0.0f;
        var_f12 = (0.7853981f - var_f12) + temp_f11;
    }
    temp_f14 = var_f12 * var_f12;
    temp_f11_2 = temp_f14 * temp_f14;
    temp_f15 = temp_f14 * var_f12;
    temp_f3 = var_f13 + (temp_f14 * ((temp_f15 * (M2C_FIELD(&D_0048BCD0, f32 *, 4) + (temp_f11_2 * (M2C_FIELD(&D_0048BCD0, f32 *, 0xC) + (temp_f11_2 * (M2C_FIELD(&D_0048BCD0, f32 *, 0x14) + (temp_f11_2 * (M2C_FIELD(&D_0048BCD0, f32 *, 0x1C) + (temp_f11_2 * (M2C_FIELD(&D_0048BCD0, f32 *, 0x24) + (temp_f11_2 * M2C_FIELD(&D_0048BCD0, f32 *, 0x2C)))))))))) + (temp_f14 * (M2C_FIELD(&D_0048BCD0, f32 *, 8) + (temp_f11_2 * (M2C_FIELD(&D_0048BCD0, f32 *, 0x10) + (temp_f11_2 * (M2C_FIELD(&D_0048BCD0, f32 *, 0x18) + (temp_f11_2 * (M2C_FIELD(&D_0048BCD0, f32 *, 0x20) + (temp_f11_2 * (M2C_FIELD(&D_0048BCD0, f32 *, 0x28) + (temp_f11_2 * M2C_FIELD(&D_0048BCD0, f32 *, 0x30)))))))))))))) + var_f13)) + (M2C_FIELD(&D_0048BCD0, f32 *, 0) * temp_f15);
    temp_f11_3 = var_f12 + temp_f3;
    if (temp_5 > 0x3F2CA13F) {
        temp_f4 = (f32) arg0;
        var_f0 = (f32) (1 - ((M2C_BITWISE(s32, temp_6) >> 0x1E) & 2)) * (temp_f4 - (2.0f * (var_f12 - (((temp_f11_3 * temp_f11_3) / (temp_f11_3 + temp_f4)) - temp_f3))));
    } else {
        var_f0 = temp_f11_3;
        if (arg0 != 1) {
            temp_3 = M2C_BITWISE(s32, temp_f11_3) & 0xFFFFF000;
            temp_f0 = -1.0f / temp_f11_3;
            temp_3_2 = M2C_BITWISE(s32, temp_f0) & 0xFFFFF000;
            var_f0 = M2C_BITWISE(f32, temp_3_2) + (temp_f0 * ((M2C_BITWISE(f32, temp_3_2) * M2C_BITWISE(f32, temp_3)) + 1.0f + (M2C_BITWISE(f32, temp_3_2) * (temp_f3 - (M2C_BITWISE(f32, temp_3) - var_f12)))));
        }
    }
block_17:
    return var_f0;
}
