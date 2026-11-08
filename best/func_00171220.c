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

f32 func_00171220(void *arg0, void *arg1, void *arg2) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f4;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f3;
    f32 var_f3_2;
    f32 var_f5;
    s32 var_2;
    s32 var_condition_bit;
    s32 var_condition_bit_2;
    s32 var_condition_bit_3;

    var_f3 = 0.0f;
    if (M2C_FIELD(arg1, s32 *, 0x1C) == 0) {
        var_f5 = M2C_FIELD(arg0, f32 *, 0x28);
    } else {
        var_f5 = M2C_FIELD(arg0, f32 *, 0x24);
    }
    temp_f1 = M2C_FIELD(arg1, f32 *, 0x128);
    temp_f2 = M2C_FIELD(arg2, f32 *, 0x128);
    temp_f4 = temp_f1 / temp_f2;
    var_f0 = temp_f2 / temp_f1;
    if (var_f0 < temp_f4) {
        var_f0 = temp_f4;
    }
    if (var_f5 < var_f0) {
        var_2 = -1;
        if (temp_f1 > 0.0f) {
            var_2 = 1;
        }
        if (var_2 > 0) {
            var_condition_bit = temp_f2 < temp_f1;
            var_f3_2 = temp_f2;
            if (temp_f2 < temp_f1) {
                var_f3_2 = temp_f1;
                var_condition_bit = temp_f2 < temp_f1;
            }
            var_f0_2 = temp_f1;
            if (var_condition_bit) {
                var_f0_2 = temp_f2;
            }
            var_condition_bit_2 = temp_f2 < temp_f1;
            var_f0_3 = var_f5 * var_f0_2;
        } else {
            var_condition_bit_3 = temp_f2 < temp_f1;
            var_f3_2 = temp_f1;
            if (temp_f2 < temp_f1) {
                var_f3_2 = temp_f2;
                var_condition_bit_3 = temp_f2 < temp_f1;
            }
            var_f0_4 = temp_f2;
            if (var_condition_bit_3) {
                var_f0_4 = temp_f1;
            }
            var_f0_3 = var_f5 * var_f0_4;
            var_condition_bit_2 = temp_f1 < temp_f2;
        }
        var_f3 = var_f3_2 - var_f0_3;
        if (var_condition_bit_2) {
            var_f3 = -var_f3;
        }
    }
    return var_f3;
}
