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

M2C_UNK func_0036FB28(f32 *, s32, f32);             /* extern */
f32 func_003F3E80(f32);                             /* extern */
extern s32 D_00435E88;

void func_0036FC18(s32 arg0, void *arg1, void *arg2, void *arg3) {
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
    M2C_UNK32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    M2C_UNK32 sp4C;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    M2C_UNK32 sp5C;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    M2C_UNK32 sp7C;
    f32 sp80;
    f32 sp84;
    f32 sp88;
    M2C_UNK32 sp8C;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    M2C_UNK32 sp9C;
    f32 spA0;
    f32 spA4;
    f32 spA8;
    f32 spAC;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f3;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 var_f0;
    f32 var_f2;
    f32 var_f2_2;

    temp_f5 = M2C_FIELD(arg2, f32 *, 4);
    temp_f3 = M2C_FIELD(arg3, f32 *, 8);
    temp_f0 = M2C_FIELD(arg2, f32 *, 8);
    temp_f6 = M2C_FIELD(arg3, f32 *, 4);
    temp_f7 = M2C_FIELD(arg3, f32 *, 0);
    temp_f1 = M2C_FIELD(arg2, f32 *, 0);
    temp_f2 = (temp_f5 * temp_f3) - (temp_f0 * temp_f6);
    temp_f0_2 = (temp_f0 * temp_f7) - (temp_f1 * temp_f3);
    sp0 = temp_f2;
    sp4 = temp_f0_2;
    temp_f1_2 = (temp_f1 * temp_f6) - (temp_f5 * temp_f7);
    var_f0 = temp_f1_2 * temp_f1_2;
    temp_f12 = (temp_f2 * temp_f2) + (temp_f0_2 * temp_f0_2) + var_f0;
    sp8 = temp_f1_2;
    if (temp_f12 <= 1.1920929e-7f) {
        sp0 = 0.0f;
        sp4 = 0.0f;
        sp8 = 0.0f;
    } else {
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        if (var_f0 != var_f0) {
            var_f0 = func_003F3E80(temp_f12);
        }
        temp_f1_3 = 1.0f / var_f0;
        sp0 *= temp_f1_3;
        sp8 *= temp_f1_3;
        sp4 *= temp_f1_3;
    }
    temp_f1_4 = M2C_FIELD(arg3, f32 *, 0);
    temp_f2_2 = M2C_FIELD(arg3, f32 *, 4);
    temp_f0_3 = M2C_FIELD(arg3, f32 *, 8);
    var_f2 = temp_f2_2 * temp_f2_2;
    temp_f12_2 = (temp_f1_4 * temp_f1_4) + var_f2 + (temp_f0_3 * temp_f0_3);
    if (!(temp_f12_2 <= 1.1920929e-7f)) {
        M2C_ERROR(/* unknown instruction: c1 0xc0084 */);
        if (var_f2 != var_f2) {
            var_f2 = func_003F3E80(temp_f12_2);
        }
        temp_f0_4 = 1.0f / var_f2;
        sp18 = M2C_FIELD(arg3, f32 *, 8) * temp_f0_4;
        sp10 = M2C_FIELD(arg3, f32 *, 0) * temp_f0_4;
        sp14 = M2C_FIELD(arg3, f32 *, 4) * temp_f0_4;
    } else {
        sp10 = 0.0f;
        sp14 = 0.0f;
        sp18 = 0.0f;
    }
    temp_f1_5 = M2C_FIELD(arg2, f32 *, 0);
    temp_f2_3 = M2C_FIELD(arg2, f32 *, 4);
    temp_f0_5 = M2C_FIELD(arg2, f32 *, 8);
    var_f2_2 = temp_f2_3 * temp_f2_3;
    temp_f12_3 = (temp_f1_5 * temp_f1_5) + var_f2_2 + (temp_f0_5 * temp_f0_5);
    if (!(temp_f12_3 <= 1.1920929e-7f)) {
        M2C_ERROR(/* unknown instruction: c1 0xc0084 */);
        if (var_f2_2 != var_f2_2) {
            var_f2_2 = func_003F3E80(temp_f12_3);
        }
        temp_f0_6 = 1.0f / var_f2_2;
        sp28 = M2C_FIELD(arg2, f32 *, 8) * temp_f0_6;
        sp20 = M2C_FIELD(arg2, f32 *, 0) * temp_f0_6;
        sp24 = M2C_FIELD(arg2, f32 *, 4) * temp_f0_6;
    } else {
        sp20 = 0.0f;
        sp24 = 0.0f;
        sp28 = 0.0f;
    }
    sp10 = (sp24 * sp8) - (sp28 * sp4);
    sp18 = (sp20 * sp4) - (sp24 * sp0);
    sp14 = (sp28 * sp0) - (sp20 * sp8);
    if (D_00435E88 == 0) {
        sp0 = -sp0;
        sp4 = -sp4;
        sp8 = -sp8;
    }
    sp70 = sp0;
    sp74 = sp4;
    sp78 = sp8;
    temp_f12_4 = M2C_FIELD(arg1, f32 *, 8);
    sp90 = sp20;
    sp94 = sp24;
    sp98 = sp28;
    spA0 = M2C_FIELD(arg1, f32 *, 0);
    spA4 = M2C_FIELD(arg1, f32 *, 4);
    spA8 = temp_f12_4;
    spAC = 1.0f;
    sp30 = sp70;
    sp34 = sp74;
    sp80 = sp10;
    sp84 = sp14;
    sp88 = sp18;
    sp7C = 0;
    sp8C = 0;
    sp9C = 0;
    sp38 = sp78;
    sp3C = sp7C;
    sp40 = sp10;
    sp44 = sp14;
    sp48 = sp18;
    sp4C = sp8C;
    sp50 = sp90;
    sp54 = sp94;
    sp58 = sp98;
    sp5C = sp9C;
    sp60 = spA0;
    sp64 = spA4;
    sp68 = temp_f12_4;
    sp6C = spAC;
    func_0036FB28(&sp30, arg0 + 0x30, spAC);
}
