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

f32 func_003F2F50(f32);                             /* extern */
f32 func_003F3140(f32);                             /* extern */
f32 func_003F3E80(f32);                             /* extern */

void func_001B1FB0(void *arg0, void *arg1, void *arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f7;
    f32 var_f0;
    void *var_2;

    var_2 = arg0 + 0xC;
    sp10 = 0.0f;
    sp14 = 1.0f;
    sp18 = 0.0f;
    temp_f1 = M2C_FIELD(var_2, f32 *, 8);
    temp_f4 = M2C_FIELD(var_2, f32 *, 4);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0xC);
    temp_f0 = (temp_f4 * sp18) - (temp_f1 * 1.0f);
    temp_f1_2 = (temp_f1 * sp10) - (temp_f2 * sp18);
    sp0 = temp_f0;
    sp4 = temp_f1_2;
    temp_f2_2 = (temp_f2 * 1.0f) - (temp_f4 * sp10);
    var_f0 = (temp_f0 * temp_f0) + (temp_f1_2 * temp_f1_2);
    temp_f12 = var_f0 + (temp_f2_2 * temp_f2_2);
    sp8 = temp_f2_2;
    if (temp_f12 <= 1.1920929e-7f) {
        sp8 = sp18;
        sp0 = sp18;
        sp4 = sp18;
    } else {
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        if (var_f0 != var_f0) {
            var_f0 = func_003F3E80(temp_f12);
        }
        temp_f1_3 = 1.0f / var_f0;
        sp0 *= temp_f1_3;
        sp8 *= temp_f1_3;
        sp4 *= temp_f1_3;
        var_2 = arg0 + 0xC;
    }
    temp_f2_3 = M2C_FIELD(var_2, f32 *, 4);
    temp_f7 = M2C_FIELD(var_2, f32 *, 8);
    temp_f5 = M2C_FIELD(arg0, f32 *, 0xC);
    sp10 = (sp4 * temp_f7) - (sp8 * temp_f2_3);
    sp18 = (sp0 * temp_f2_3) - (sp4 * temp_f5);
    sp14 = (sp8 * temp_f5) - (sp0 * temp_f7);
    temp_f20 = func_003F3140(M2C_FIELD(arg0, f32 *, 0x18));
    temp_f0_2 = func_003F2F50(M2C_FIELD(arg0, f32 *, 0x18));
    temp_f10 = sp10 * temp_f0_2;
    temp_f11 = sp14 * temp_f0_2;
    temp_f12_2 = sp18 * temp_f0_2;
    temp_f2_4 = sp8 * temp_f0_2;
    sp40 = temp_f10;
    temp_f3 = sp0 * temp_f0_2;
    sp44 = temp_f11;
    temp_f1_4 = sp4 * temp_f0_2;
    sp48 = temp_f12_2;
    temp_f6 = sp18 * temp_f20;
    sp38 = temp_f2_4;
    temp_f4_2 = sp10 * temp_f20;
    sp30 = temp_f3;
    temp_f5_2 = sp14 * temp_f20;
    sp34 = temp_f1_4;
    sp58 = temp_f6;
    sp50 = temp_f4_2;
    sp54 = temp_f5_2;
    temp_f3_2 = temp_f3 - temp_f4_2;
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((sp0 * temp_f20) + temp_f10);
    temp_f1_5 = temp_f1_4 - temp_f5_2;
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((sp4 * temp_f20) + temp_f11);
    temp_f2_5 = temp_f2_4 - temp_f6;
    M2C_FIELD(arg2, f32 *, 8) = (f32) ((sp8 * temp_f20) + temp_f12_2);
    M2C_FIELD(arg1, f32 *, 0) = temp_f3_2;
    M2C_FIELD(arg1, f32 *, 4) = temp_f1_5;
    M2C_FIELD(arg1, f32 *, 8) = temp_f2_5;
    sp20 = temp_f3_2;
    sp24 = temp_f1_5;
    sp28 = temp_f2_5;
}
