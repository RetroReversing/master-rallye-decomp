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

f32 func_003F3E80(void *, f32);                     /* extern */

s32 func_0021D920(void *arg0, void *arg1, void *arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f6;
    f32 var_f0;
    f32 var_f0_2;
    s32 var_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_4;
    void *temp_5;

    temp_2 = arg0 + 4;
    temp_5 = arg1 + 0x40;
    temp_f2 = M2C_FIELD(arg1, f32 *, 0x40) - M2C_FIELD(arg0, f32 *, 4);
    sp0 = temp_f2;
    temp_f0 = M2C_FIELD(temp_5, f32 *, 4) - M2C_FIELD(temp_2, f32 *, 4);
    sp4 = temp_f0;
    temp_f3 = M2C_FIELD(temp_5, f32 *, 8) - M2C_FIELD(temp_2, f32 *, 8);
    var_f0 = temp_f3 * temp_f3;
    temp_f12 = (temp_f2 * temp_f2) + (temp_f0 * temp_f0) + var_f0;
    sp8 = temp_f3;
    if (temp_f12 <= 1.1920929e-7f) {
        sp0 = 0.0f;
        sp4 = 0.0f;
        sp8 = 0.0f;
    } else {
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        if (var_f0 != var_f0) {
            var_f0 = func_003F3E80(temp_5, temp_f12);
        }
        temp_f1 = 1.0f / var_f0;
        sp0 *= temp_f1;
        sp8 *= temp_f1;
        sp4 *= temp_f1;
    }
    temp_2_2 = arg0 + 0x10;
    temp_3 = arg2 + 0x40;
    temp_4 = arg0 + 4;
    temp_f2_2 = M2C_FIELD(arg2, f32 *, 0x40) - M2C_FIELD(arg0, f32 *, 4);
    sp10 = temp_f2_2;
    temp_f0_2 = M2C_FIELD(temp_3, f32 *, 4) - M2C_FIELD(temp_4, f32 *, 4);
    sp14 = temp_f0_2;
    temp_f6 = M2C_FIELD(temp_3, f32 *, 8) - M2C_FIELD(temp_4, f32 *, 8);
    temp_f20 = (sp0 * M2C_FIELD(arg0, f32 *, 0x10)) + (sp4 * M2C_FIELD(temp_2_2, f32 *, 4)) + (sp8 * M2C_FIELD(temp_2_2, f32 *, 8));
    var_f0_2 = temp_f6 * temp_f6;
    temp_f12_2 = (temp_f2_2 * temp_f2_2) + (temp_f0_2 * temp_f0_2) + var_f0_2;
    sp18 = temp_f6;
    if (temp_f12_2 <= 1.1920929e-7f) {
        sp10 = 0.0f;
        sp14 = 0.0f;
        sp18 = 0.0f;
    } else {
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        if (var_f0_2 != var_f0_2) {
            var_f0_2 = func_003F3E80(temp_4, temp_f12_2);
        }
        temp_f1_2 = 1.0f / var_f0_2;
        sp10 *= temp_f1_2;
        sp18 *= temp_f1_2;
        sp14 *= temp_f1_2;
    }
    var_2 = 1;
    if (!(((sp10 * M2C_FIELD(arg0, f32 *, 0x10)) + (sp14 * M2C_FIELD(temp_2_2, f32 *, 4)) + (sp18 * M2C_FIELD(temp_2_2, f32 *, 8))) < temp_f20)) {
        var_2 = 0;
    }
    return var_2;
}
