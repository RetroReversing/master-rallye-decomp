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

void func_001B6C70(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 var_f0;
    f32 var_f0_2;

    temp_f5 = M2C_FIELD(arg1, f32 *, 0);
    temp_f6 = M2C_FIELD(arg1, f32 *, 4);
    temp_f4 = M2C_FIELD(arg1, f32 *, 8);
    temp_f2 = (M2C_FIELD(arg2, f32 *, 0) + temp_f5) * 0.5f;
    temp_f3 = (M2C_FIELD(arg2, f32 *, 4) + temp_f6) * 0.5f;
    temp_f1 = (M2C_FIELD(arg2, f32 *, 8) + temp_f4) * 0.5f;
    temp_f5_2 = temp_f5 - temp_f2;
    sp0 = temp_f2;
    temp_f6_2 = temp_f6 - temp_f3;
    sp4 = temp_f3;
    temp_f4_2 = temp_f4 - temp_f1;
    sp8 = temp_f1;
    sp10 = temp_f5_2;
    sp14 = temp_f6_2;
    var_f0 = (temp_f5_2 * temp_f5_2) + (temp_f6_2 * temp_f6_2);
    temp_f12 = var_f0 + (temp_f4_2 * temp_f4_2);
    sp18 = temp_f4_2;
    if (temp_f12 <= 1.1920929e-7f) {
        sp10 = 0.0f;
        sp14 = 0.0f;
        sp18 = 0.0f;
    } else {
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        if (var_f0 != var_f0) {
            var_f0 = func_003F3E80(temp_f12);
        }
        temp_f1_2 = 1.0f / var_f0;
        sp10 *= temp_f1_2;
        sp18 *= temp_f1_2;
        sp14 *= temp_f1_2;
    }
    temp_f1_3 = -(((M2C_FIELD(arg3, f32 *, 0) * sp10) + (M2C_FIELD(arg3, f32 *, 4) * sp14) + (M2C_FIELD(arg3, f32 *, 8) * sp18)) - ((sp10 * sp0) + (sp14 * sp4) + (sp18 * sp8))) / ((M2C_FIELD(arg4, f32 *, 0) * sp10) + (M2C_FIELD(arg4, f32 *, 4) * sp14) + (M2C_FIELD(arg4, f32 *, 8) * sp18));
    if ((temp_f1_3 < 0.0f) || (var_f0_2 = 0.5f, !(temp_f1_3 < M2C_FIELD(arg0, f32 *, 0x54)))) {
        var_f0_2 = 1.0f;
    }
    M2C_FIELD(arg0, f32 *, 0xA8) = var_f0_2;
    M2C_FIELD(arg0, s32 *, 0xB8) = 1;
}
