/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

f32 func_002A4160(f32 *);                           /* extern */
f32 func_003F3E80(f32);                             /* extern */

void func_00285148(void *arg0, void *arg1, void *arg2, void *arg3) {
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
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f7;
    f32 temp_f8;
    f32 var_f0;
    f32 var_f0_2;

    temp_f3 = M2C_FIELD(arg3, f32 *, 0);
    temp_f1 = M2C_FIELD(arg3, f32 *, 4);
    temp_f2 = M2C_FIELD(arg3, f32 *, 8);
    var_f0 = (temp_f3 * temp_f3) + (temp_f1 * temp_f1);
    sp0 = M2C_FIELD(arg1, f32 *, 0);
    sp4 = M2C_FIELD(arg1, f32 *, 4);
    sp8 = M2C_FIELD(arg1, f32 *, 8);
    temp_f12 = var_f0 + (temp_f2 * temp_f2);
    sp10 = temp_f3;
    sp14 = temp_f1;
    sp18 = temp_f2;
    temp_f20 = M2C_FIELD(arg0, f32 *, 0x5C);
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
    temp_f2_2 = 1.0f - temp_f20;
    if (temp_f2_2 < fabsf(sp10)) {
        if (!(sp10 > 0.0f)) {
            sp10 = -temp_f2_2;
        } else {
            sp10 = temp_f2_2;
        }
    }
    if (sp14 < temp_f20) {
        sp14 = temp_f20;
    }
    temp_f2_3 = 1.0f - temp_f20;
    if (temp_f2_3 < fabsf(sp18)) {
        if (!(sp18 > 0.0f)) {
            sp18 = -temp_f2_3;
        } else {
            sp18 = temp_f2_3;
        }
    }
    var_f0_2 = sp18 * sp18;
    temp_f12_2 = (sp10 * sp10) + (sp14 * sp14) + var_f0_2;
    if (!(temp_f12_2 <= 1.1920929e-7f)) {
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        if (var_f0_2 != var_f0_2) {
            var_f0_2 = func_003F3E80(temp_f12_2);
        }
        temp_f1_3 = 1.0f / var_f0_2;
        sp10 *= temp_f1_3;
        sp18 *= temp_f1_3;
        sp14 *= temp_f1_3;
    } else {
        sp10 = 0.0f;
        sp14 = 0.0f;
        sp18 = 0.0f;
    }
    temp_f8 = M2C_FIELD(arg2, f32 *, 0);
    temp_f7 = M2C_FIELD(arg2, f32 *, 4);
    temp_f6 = M2C_FIELD(arg2, f32 *, 8);
    sp30 = sp10;
    sp34 = sp14;
    sp38 = sp18;
    sp20 = temp_f8;
    sp24 = temp_f7;
    sp28 = temp_f6;
    sp3C = -((sp10 * temp_f8) + (sp14 * temp_f7) + (sp18 * temp_f6));
    temp_f0 = func_002A4160(&sp30);
    temp_f2_4 = sp30 * temp_f0;
    temp_f5 = sp3C * temp_f0;
    sp30 = temp_f2_4;
    sp34 *= temp_f0;
    temp_f2_5 = sp0 * temp_f2_4;
    sp38 *= temp_f0;
    sp3C = temp_f5;
    sp40 = sp0;
    sp48 = sp8;
    sp50 = sp0;
    sp58 = sp8;
    temp_f0_2 = temp_f2_5 + (sp4 * M2C_FIELD(&sp30, f32 *, 4)) + (sp8 * M2C_FIELD(&sp30, f32 *, 8)) + temp_f5;
    temp_f6_2 = sp4 - temp_f0_2;
    temp_f4 = sp4 + temp_f0_2;
    sp54 = temp_f6_2;
    sp44 = temp_f4;
    temp_f1_4 = M2C_FIELD(&sp30, f32 *, 4);
    temp_f3_2 = sp8 * M2C_FIELD(&sp30, f32 *, 8);
    if (!(fabsf(temp_f2_5 + (temp_f4 * temp_f1_4) + temp_f3_2 + temp_f5) < fabsf(temp_f2_5 + (temp_f6_2 * temp_f1_4) + temp_f3_2 + temp_f5))) {
        sp4 = temp_f6_2;
    } else {
        sp4 = temp_f4;
    }
    M2C_FIELD(arg1, f32 *, 0) = sp0;
    M2C_FIELD(arg1, f32 *, 8) = sp8;
    M2C_FIELD(arg1, f32 *, 4) = sp4;
}
