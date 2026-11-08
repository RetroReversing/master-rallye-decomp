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

f32 func_003F3038();                                /* extern */
extern M2C_UNK D_0048B630;
extern f32 D_0048B63C;
extern M2C_UNK D_0048B640;
extern f32 D_0048B64C;
extern M2C_UNK D_0048B650;

f32 func_003F2BD0(f32 fparg0) {
    f32 temp_17;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f1;
    f32 var_f0;
    f32 var_f12;
    s32 temp_16;
    s32 temp_4;
    s32 var_4;

    var_f12 = fparg0;
    temp_17 = var_f12;
    temp_16 = M2C_BITWISE(s32, temp_17) & 0x7FFFFFFF;
    if (temp_16 > 0x507FFFFF) {
        if (temp_16 > 0x7F800000) {
            return 2.0f * var_f12;
        }
        if (M2C_BITWISE(s32, temp_17) > 0) {
            return D_0048B63C + D_0048B64C;
        }
        return -D_0048B63C - D_0048B64C;
    }
    if (temp_16 <= 0x3EDFFFFF) {
        var_4 = -1;
        if ((temp_16 <= 0x30FFFFFF) && ((var_f12 + 1e30f) > 1.0f)) {
            return var_f12;
        }
        goto block_18;
    }
    temp_f12 = func_003F3038();
    if (temp_16 <= 0x3F97FFFF) {
        var_4 = 0;
        if (temp_16 <= 0x3F2FFFFF) {
            var_f12 = ((2.0f * temp_f12) - 1.0f) / (temp_f12 + 2.0f);
        } else {
            var_f12 = (temp_f12 - 1.0f) / (temp_f12 + 1.0f);
            var_4 = 1;
        }
    } else {
        var_4 = 3;
        if (temp_16 <= 0x401BFFFF) {
            var_f12 = (temp_f12 - 1.5f) / ((temp_f12 * 1.5f) + 1.0f);
            var_4 = 2;
        } else {
            var_f12 = -1.0f / temp_f12;
        }
    }
block_18:
    temp_f10 = var_f12 * var_f12;
    temp_f0_2 = temp_f10 * temp_f10;
    temp_f1 = temp_f0_2 * (M2C_FIELD(&D_0048B650, f32 *, 4) + (temp_f0_2 * (M2C_FIELD(&D_0048B650, f32 *, 0xC) + (temp_f0_2 * (M2C_FIELD(&D_0048B650, f32 *, 0x14) + (temp_f0_2 * (M2C_FIELD(&D_0048B650, f32 *, 0x1C) + (temp_f0_2 * M2C_FIELD(&D_0048B650, f32 *, 0x24)))))))));
    temp_f0 = temp_f10 * (M2C_FIELD(&D_0048B650, f32 *, 0) + (temp_f0_2 * (M2C_FIELD(&D_0048B650, f32 *, 8) + (temp_f0_2 * (M2C_FIELD(&D_0048B650, f32 *, 0x10) + (temp_f0_2 * (M2C_FIELD(&D_0048B650, f32 *, 0x18) + (temp_f0_2 * (M2C_FIELD(&D_0048B650, f32 *, 0x20) + (temp_f0_2 * M2C_FIELD(&D_0048B650, f32 *, 0x28)))))))))));
    if (var_4 < 0) {
        return var_f12 - (var_f12 * (temp_f0 + temp_f1));
    }
    temp_4 = var_4 * 4;
    var_f0 = *(temp_4 + &D_0048B630) - (((var_f12 * (temp_f0 + temp_f1)) - *(temp_4 + &D_0048B640)) - var_f12);
    if (M2C_BITWISE(s32, temp_17) < 0) {
        var_f0 = -var_f0;
    }
    return var_f0;
}
