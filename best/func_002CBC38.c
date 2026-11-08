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

void func_002CBC38(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 temp_f0;
    f32 temp_f1;
    f32 var_f0;
    f32 var_f0_2;
    s32 var_condition_bit;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0xD8);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0xE8);
    if (temp_f1 < fparg0) {
        var_f0 = temp_f1 + (fparg1 * temp_f0);
        var_condition_bit = fparg0 < var_f0;
    } else {
        var_f0 = temp_f1 - (fparg2 * temp_f0);
        var_condition_bit = var_f0 < fparg0;
    }
    M2C_FIELD(arg0, f32 *, 0xD8) = var_f0;
    if (var_condition_bit) {
        M2C_FIELD(arg0, f32 *, 0xD8) = fparg0;
    }
    var_f0_2 = M2C_FIELD(arg0, f32 *, 0xD8);
    if (var_f0_2 < 0.0f) {
        var_f0_2 = 0.0f;
    } else if (var_f0_2 > 1.0f) {
        var_f0_2 = 1.0f;
    }
    M2C_FIELD(arg0, f32 *, 0xD8) = var_f0_2;
}
