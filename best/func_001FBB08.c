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

f32 func_003F3E80(s32, M2C_UNK, s32, void *, f32);  /* extern */

void *func_001FBB08(void *arg0, void *arg1, void *arg2) {
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f8;
    f32 var_f0;
    s32 temp_4;
    s32 temp_7;
    void *temp_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_8;

    temp_8 = M2C_FIELD(arg1, void **, 4);
    temp_4 = M2C_FIELD(arg2, s32 *, 0x20) * 0xC;
    temp_2 = *M2C_FIELD(temp_8, s32 **, 0x38) + (M2C_FIELD(arg2, s32 *, 0x1C) * 0xC);
    temp_7 = M2C_FIELD(arg2, s32 *, 0x24) * 0xC;
    temp_f0 = M2C_FIELD(temp_2, f32 *, 0);
    temp_f5 = M2C_FIELD(temp_2, f32 *, 4);
    temp_f7 = M2C_FIELD(temp_2, f32 *, 8);
    temp_3 = *M2C_FIELD(temp_8, s32 **, 0x38) + temp_4;
    temp_f4 = M2C_FIELD(temp_3, f32 *, 0) - temp_f0;
    temp_f1 = M2C_FIELD(temp_3, f32 *, 4) - temp_f5;
    temp_f6 = M2C_FIELD(temp_3, f32 *, 8) - temp_f7;
    temp_3_2 = *M2C_FIELD(temp_8, s32 **, 0x38) + temp_7;
    temp_f3 = M2C_FIELD(temp_3_2, f32 *, 0) - temp_f0;
    temp_f2 = M2C_FIELD(temp_3_2, f32 *, 4) - temp_f5;
    temp_f7_2 = M2C_FIELD(temp_3_2, f32 *, 8) - temp_f7;
    temp_f0_2 = (temp_f4 * temp_f2) - (temp_f1 * temp_f3);
    temp_f8 = (temp_f6 * temp_f3) - (temp_f4 * temp_f7_2);
    temp_f1_2 = (temp_f1 * temp_f7_2) - (temp_f6 * temp_f2);
    sp58 = temp_f0_2;
    sp54 = temp_f8;
    var_f0 = (temp_f1_2 * temp_f1_2) + (temp_f8 * temp_f8);
    temp_f12 = var_f0 + (temp_f0_2 * temp_f0_2);
    sp50 = temp_f1_2;
    if (temp_f12 <= 1.1920929e-7f) {
        sp50 = 0.0f;
        sp54 = 0.0f;
        sp58 = 0.0f;
    } else {
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        if (var_f0 != var_f0) {
            var_f0 = func_003F3E80(temp_4, 0xC, temp_7, temp_8, temp_f12);
        }
        temp_f1_3 = 1.0f / var_f0;
        sp50 *= temp_f1_3;
        sp58 *= temp_f1_3;
        sp54 *= temp_f1_3;
    }
    M2C_FIELD(arg0, f32 *, 0) = sp50;
    M2C_FIELD(arg0, f32 *, 4) = sp54;
    M2C_FIELD(arg0, f32 *, 8) = sp58;
    return arg0;
}
