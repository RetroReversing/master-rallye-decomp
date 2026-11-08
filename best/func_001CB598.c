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

f32 func_003F3E80(f32);                             /* extern */

void func_001CB598(void *arg0, void *arg1, void *arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 var_f0;
    f32 var_f0_2;

    temp_f1 = M2C_FIELD(arg1, f32 *, 0);
    temp_f2 = M2C_FIELD(arg1, f32 *, 4);
    var_f0 = M2C_FIELD(arg1, f32 *, 8);
    sp0 = temp_f1;
    sp4 = temp_f2;
    temp_f12 = (temp_f1 * temp_f1) + (temp_f2 * temp_f2) + (var_f0 * var_f0);
    sp8 = var_f0;
    if (temp_f12 <= 1.1920929e-7f) {
        sp0 = 0.0f;
        sp4 = 0.0f;
        sp8 = 0.0f;
    } else {
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        if (var_f0 != var_f0) {
            var_f0 = func_003F3E80(temp_f12);
        }
        temp_f1_2 = 1.0f / var_f0;
        sp0 *= temp_f1_2;
        sp8 *= temp_f1_2;
        sp4 *= temp_f1_2;
    }
    temp_f2_2 = M2C_FIELD(arg0, f32 *, 0);
    temp_f0 = (temp_f2_2 * sp0) + (M2C_FIELD(arg0, f32 *, 4) * sp4) + (M2C_FIELD(arg0, f32 *, 8) * sp8);
    temp_f4 = sp0 * temp_f0;
    temp_f5 = sp4 * temp_f0;
    temp_f6 = sp8 * temp_f0;
    temp_f2_3 = temp_f2_2 - temp_f4;
    sp0 = temp_f4;
    sp4 = temp_f5;
    sp8 = temp_f6;
    M2C_FIELD(arg2, f32 *, 0) = temp_f2_3;
    temp_f0_2 = M2C_FIELD(arg0, f32 *, 4) - temp_f5;
    M2C_FIELD(arg2, f32 *, 4) = temp_f0_2;
    temp_f1_3 = M2C_FIELD(arg0, f32 *, 8) - temp_f6;
    var_f0_2 = temp_f1_3 * temp_f1_3;
    temp_f12_2 = (temp_f2_3 * temp_f2_3) + (temp_f0_2 * temp_f0_2) + var_f0_2;
    M2C_FIELD(arg2, f32 *, 8) = temp_f1_3;
    if (temp_f12_2 <= 1.1920929e-7f) {
        M2C_FIELD(arg2, f32 *, 8) = 0.0f;
        M2C_FIELD(arg2, f32 *, 0) = 0.0f;
        M2C_FIELD(arg2, f32 *, 4) = 0.0f;
        return;
    }
    M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
    if (var_f0_2 != var_f0_2) {
        var_f0_2 = func_003F3E80(temp_f12_2);
    }
    temp_f1_4 = 1.0f / var_f0_2;
    M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg2, f32 *, 0) * temp_f1_4);
    M2C_FIELD(arg2, f32 *, 8) = (f32) (M2C_FIELD(arg2, f32 *, 8) * temp_f1_4);
    M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg2, f32 *, 4) * temp_f1_4);
}
