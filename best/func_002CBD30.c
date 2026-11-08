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

void func_002CBD30(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f14;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f7;
    s32 var_condition_bit;

    temp_f0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0xA4);
    temp_f4 = M2C_FIELD(arg0, f32 *, 0x30);
    var_f7 = temp_f4;
    if (temp_f4 < temp_f0) {
        var_f7 = temp_f0;
    }
    temp_f5 = M2C_FIELD(arg0, f32 *, 0x2C);
    temp_f2 = ((M2C_FIELD(arg0, f32 *, 0x24) * (fabsf(var_f7) - temp_f4)) / M2C_FIELD(arg0, f32 *, 0x34)) + ((M2C_FIELD(arg0, f32 *, 0x28) * fabsf(M2C_FIELD(arg0, f32 *, 0xD4))) / M2C_FIELD(arg0, f32 *, 0x38));
    var_f1 = temp_f2;
    if (temp_f5 < temp_f2) {
        var_f1 = temp_f5;
    }
    temp_f3 = M2C_FIELD(arg0, f32 *, 0xD0);
    temp_f14 = fparg2 * (var_f1 + 1.0f);
    temp_f1 = fparg1 * (1.0f - var_f1);
    if (temp_f3 < fparg0) {
        temp_f0_2 = M2C_FIELD(arg0, f32 *, 0xE8);
        if (temp_f3 < 0.0f) {
            var_f0 = temp_f14 * temp_f0_2;
        } else {
            var_f0 = temp_f1 * temp_f0_2;
        }
        M2C_FIELD(arg0, f32 *, 0xD0) = (f32) (temp_f3 + var_f0);
        var_condition_bit = fparg0 < M2C_FIELD(arg0, f32 *, 0xD0);
    } else {
        temp_f0_3 = M2C_FIELD(arg0, f32 *, 0xE8);
        if (temp_f3 > 0.0f) {
            var_f0_2 = temp_f14 * temp_f0_3;
        } else {
            var_f0_2 = temp_f1 * temp_f0_3;
        }
        M2C_FIELD(arg0, f32 *, 0xD0) = (f32) (temp_f3 - var_f0_2);
        var_condition_bit = M2C_FIELD(arg0, f32 *, 0xD0) < fparg0;
    }
    if (var_condition_bit) {
        M2C_FIELD(arg0, f32 *, 0xD0) = fparg0;
    }
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x34);
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) (M2C_FIELD(arg0, f32 *, 0xD0) * (M2C_FIELD(arg0, f32 *, 0x38) * (temp_f1_2 / ((M2C_FIELD(arg0, f32 *, 0x3C) * (var_f7 - M2C_FIELD(arg0, f32 *, 0x30))) + temp_f1_2))));
}
