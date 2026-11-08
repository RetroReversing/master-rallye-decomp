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

s32 func_001FE3A8();                                /* extern */
f32 func_003F3E80(s32 *, f32);                      /* extern */

s32 func_001FE0F0(s32 **arg0, void *arg1, s32 arg2) {
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
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f9;
    f32 var_f0;
    s32 *temp_4;
    s32 temp_19;
    s32 temp_3;
    s32 var_16;
    s32 var_17;
    s32 var_20;
    s32 var_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;

    temp_3 = arg2 * 4;
    if (arg2 < func_001FE3A8()) {
        temp_19 = temp_3 + 4;
        sp8 = M2C_FIELD(arg1, f32 *, 8);
        sp0 = M2C_FIELD(arg1, f32 *, 0);
        sp4 = 0.0f;
        var_16 = temp_3;
        var_17 = 0;
        var_20 = 0;
        temp_2 = **arg0 + ((temp_3 + 3) * 0x50);
        temp_2_2 = temp_2 + 0x40;
        sp10 = M2C_FIELD(temp_2, f32 *, 0x40);
        sp14 = M2C_FIELD(temp_2_2, f32 *, 4);
        sp14 = 0.0f;
        sp18 = M2C_FIELD(temp_2_2, f32 *, 8);
        if (var_16 < temp_19) {
            do {
                temp_4 = *arg0;
                temp_2_3 = *temp_4 + (var_16 * 0x50);
                temp_f3 = sp14 - sp4;
                temp_f0 = M2C_FIELD(temp_2_3, f32 *, 0x40);
                temp_2_4 = temp_2_3 + 0x40;
                sp20 = temp_f0;
                temp_f4 = sp10 - temp_f0;
                sp24 = M2C_FIELD(temp_2_4, f32 *, 4);
                temp_f1 = M2C_FIELD(temp_2_4, f32 *, 8);
                sp24 = 0.0f;
                temp_f5 = sp18 - temp_f1;
                sp28 = temp_f1;
                sp30 = temp_f4;
                sp34 = temp_f3;
                var_f0 = temp_f5 * temp_f5;
                temp_f12 = (temp_f4 * temp_f4) + (temp_f3 * temp_f3) + var_f0;
                sp38 = temp_f5;
                if (temp_f12 <= 1.1920929e-7f) {
                    sp30 = sp4;
                    sp34 = sp4;
                    sp38 = sp4;
                } else {
                    M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
                    if (var_f0 != var_f0) {
                        var_f0 = func_003F3E80(temp_4, temp_f12);
                    }
                    temp_f1_2 = 1.0f / var_f0;
                    sp30 *= temp_f1_2;
                    sp38 *= temp_f1_2;
                    sp34 *= temp_f1_2;
                }
                sp40 = 0.0f;
                M2C_FIELD(&sp40, f32 *, 4) = 1.0f;
                sp48 = 0.0f;
                temp_f12_2 = sp48;
                temp_f3_2 = (sp34 * temp_f12_2) - (sp38 * sp44);
                temp_f5_2 = sp10 - sp0;
                temp_f0_2 = (sp38 * sp40) - (sp30 * temp_f12_2);
                temp_f6 = sp14 - sp4;
                temp_f2 = sp30 * sp44;
                sp30 = temp_f3_2;
                temp_f9 = sp34 * sp40;
                sp34 = temp_f0_2;
                temp_f1_3 = sp18 - sp8;
                sp40 = temp_f5_2;
                sp44 = temp_f6;
                temp_f2_2 = temp_f2 - temp_f9;
                sp48 = temp_f1_3;
                temp_f3_3 = (temp_f3_2 * temp_f5_2) + (temp_f0_2 * temp_f6) + (temp_f2_2 * temp_f1_3);
                sp38 = temp_f2_2;
                if (temp_f3_3 < temp_f12_2) {
                    var_17 += 1;
                }
                if (temp_f12_2 < temp_f3_3) {
                    var_20 += 1;
                }
                var_16 += 1;
                sp10 = sp20;
                sp14 = sp24;
                sp18 = sp28;
            } while (var_16 < temp_19);
        }
        var_2 = 1;
        if (var_17 != 4) {
            var_2 = 0;
            if (var_20 == 4) {
                goto block_15;
            }
        }
    } else {
block_15:
        var_2 = 1;
    }
    return var_2;
}
