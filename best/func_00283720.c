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
extern f32 D_0047AF48;

void func_00283720(void *arg0) {
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
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f2_7;
    f32 temp_f2_8;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f3_5;
    f32 temp_f3_6;
    f32 temp_f3_7;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f1;
    f32 var_f20;
    s32 var_21;
    s32 var_2;
    void *temp_16;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_4;
    void *temp_5;
    void *var_16;
    void *var_17;
    void *var_20;

    temp_2 = arg0 + 0x68;
    temp_5 = arg0 + 0x5C;
    var_21 = 0;
    var_f20 = D_0047AF48;
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x54);
    temp_f4 = M2C_FIELD(arg0, f32 *, 0x68);
    temp_f5 = M2C_FIELD(temp_2, f32 *, 4) * temp_f0;
    temp_f6 = M2C_FIELD(temp_2, f32 *, 8) * temp_f0;
    temp_4 = M2C_FIELD(arg0, void **, 0x10);
    temp_f0_2 = temp_f4 * temp_f0;
    sp14 = temp_f5;
    temp_f4_2 = temp_f4 * 10.0f;
    sp18 = temp_f6;
    sp10 = temp_f0_2;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x5C) + temp_f0_2;
    temp_f3 = M2C_FIELD(temp_5, f32 *, 4) + temp_f5;
    sp0 = temp_f1;
    temp_f2 = M2C_FIELD(temp_5, f32 *, 8) + temp_f6;
    sp4 = temp_f3;
    sp8 = temp_f2;
    temp_f0_3 = M2C_FIELD(temp_2, f32 *, 8) * 10.0f;
    sp10 = temp_f1 + temp_f4_2;
    temp_f1_2 = M2C_FIELD(temp_2, f32 *, 4) * 10.0f;
    sp20 = temp_f4_2;
    sp28 = temp_f0_3;
    sp24 = temp_f1_2;
    sp18 = temp_f2 + temp_f0_3;
    sp14 = temp_f3 + temp_f1_2;
    var_17 = M2C_FIELD(temp_4, void **, 0);
    var_20 = NULL;
    if (var_17 != M2C_FIELD(temp_4, s32 *, 4)) {
        var_16 = var_17 - 0x10;
        do {
            var_16 += 0x50;
            temp_f3_2 = M2C_FIELD(var_16, f32 *, 0);
            sp30 = temp_f3_2;
            temp_f3_3 = temp_f3_2 - M2C_FIELD(arg0, f32 *, 0x5C);
            temp_f2_2 = M2C_FIELD(var_16, f32 *, 4);
            sp34 = temp_f2_2;
            temp_f0_4 = M2C_FIELD(var_16, f32 *, 8);
            sp38 = temp_f0_4;
            temp_f2_3 = temp_f2_2 - M2C_FIELD(temp_5, f32 *, 4);
            sp20 = temp_f3_3;
            var_f0 = temp_f0_4 - M2C_FIELD(temp_5, f32 *, 8);
            sp24 = temp_f2_3;
            sp28 = var_f0;
            M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
            var_17 += 0x50;
            if (var_f0 != var_f0) {
                var_f0 = func_003F3E80((temp_f3_3 * temp_f3_3) + (temp_f2_3 * temp_f2_3) + (var_f0 * var_f0));
            }
            var_2 = 1;
            if (!(var_f0 < var_f20)) {
                var_2 = 0;
            }
            if (var_2 != 0) {
                temp_f3_4 = M2C_FIELD(var_16, f32 *, 0);
                sp50 = temp_f3_4;
                temp_f3_5 = temp_f3_4 - M2C_FIELD(arg0, f32 *, 0x5C);
                temp_f2_4 = M2C_FIELD(var_16, f32 *, 4);
                sp54 = temp_f2_4;
                temp_f0_5 = M2C_FIELD(var_16, f32 *, 8);
                sp58 = temp_f0_5;
                temp_f2_5 = temp_f2_4 - M2C_FIELD(temp_5, f32 *, 4);
                sp40 = temp_f3_5;
                var_f0_2 = temp_f0_5 - M2C_FIELD(temp_5, f32 *, 8);
                sp44 = temp_f2_5;
                sp48 = var_f0_2;
                M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
                if (var_f0_2 != var_f0_2) {
                    var_f0_2 = func_003F3E80((temp_f3_5 * temp_f3_5) + (temp_f2_5 * temp_f2_5) + (var_f0_2 * var_f0_2));
                }
                var_20 = var_17;
                var_f20 = var_f0_2;
                if (var_20 == M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 4)) {
                    var_21 = 1;
                }
            }
        } while (var_17 != M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 4));
    }
    temp_f6_2 = M2C_FIELD(var_20, f32 *, 0x40);
    temp_2_2 = var_20 + 0x40;
    sp20 = temp_f6_2;
    temp_f2_6 = temp_f6_2 - sp0;
    temp_f0_6 = M2C_FIELD(temp_2_2, f32 *, 4);
    sp24 = temp_f0_6;
    temp_f3_6 = temp_f0_6 - sp4;
    temp_f5_2 = M2C_FIELD(temp_2_2, f32 *, 8);
    sp14 = temp_f0_6;
    temp_f1_3 = temp_f5_2 - sp8;
    sp10 = temp_f6_2;
    sp18 = temp_f5_2;
    sp20 = temp_f2_6;
    var_f0_3 = temp_f1_3 * temp_f1_3;
    sp24 = temp_f3_6;
    temp_f12 = (temp_f2_6 * temp_f2_6) + (temp_f3_6 * temp_f3_6) + var_f0_3;
    sp28 = temp_f1_3;
    if (temp_f12 <= 1.1920929e-7f) {
        sp20 = 0.0f;
        sp24 = 0.0f;
        sp28 = 0.0f;
    } else {
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        if (var_f0_3 != var_f0_3) {
            var_f0_3 = func_003F3E80(temp_f12);
        }
        temp_f1_4 = 1.0f / var_f0_3;
        sp20 *= temp_f1_4;
        sp28 *= temp_f1_4;
        sp24 *= temp_f1_4;
    }
    var_f0_4 = (sp20 * sp20) + (sp24 * sp24);
    M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
    if (var_f0_4 != var_f0_4) {
        var_f0_4 = func_003F3E80(var_f0_4 + (sp28 * sp28));
    }
    if (var_f0_4 > 1.1920929e-7f) {
        if (var_21 == 0) {
            temp_2_3 = arg0 + 0x5C;
            temp_16 = arg0 + 0x68;
            M2C_FIELD(arg0, f32 *, 0x5C) = sp0;
            M2C_FIELD(temp_2_3, f32 *, 4) = sp4;
            M2C_FIELD(temp_2_3, f32 *, 8) = sp8;
            temp_f0_7 = (M2C_FIELD(arg0, f32 *, 0x54) / 500.0f) * 30.0f;
            temp_f1_5 = sp20 * temp_f0_7;
            temp_f2_7 = sp24 * temp_f0_7;
            temp_f3_7 = sp28 * temp_f0_7;
            sp40 = temp_f1_5;
            temp_f4_3 = M2C_FIELD(arg0, f32 *, 0x68) + temp_f1_5;
            sp44 = temp_f2_7;
            sp48 = temp_f3_7;
            temp_f0_8 = M2C_FIELD(temp_16, f32 *, 4) + temp_f2_7;
            M2C_FIELD(arg0, f32 *, 0x68) = temp_f4_3;
            temp_f1_6 = M2C_FIELD(temp_16, f32 *, 8) + temp_f3_7;
            sp30 = temp_f4_3;
            sp34 = temp_f0_8;
            sp38 = temp_f1_6;
            M2C_FIELD(temp_16, f32 *, 4) = temp_f0_8;
            M2C_FIELD(temp_16, f32 *, 8) = temp_f1_6;
            var_f1 = temp_f1_6 * temp_f1_6;
            temp_f0_9 = M2C_FIELD(arg0, f32 *, 0x68);
            temp_f12_2 = (temp_f0_9 * temp_f0_9) + (temp_f0_8 * temp_f0_8) + var_f1;
            if (!(temp_f12_2 <= 1.1920929e-7f)) {
                M2C_ERROR(/* unknown instruction: c1 0xc0044 */);
                if (var_f1 != var_f1) {
                    var_f1 = func_003F3E80(temp_f12_2);
                }
                temp_f2_8 = 1.0f / var_f1;
                M2C_FIELD(arg0, f32 *, 0x68) = (f32) (M2C_FIELD(arg0, f32 *, 0x68) * temp_f2_8);
                M2C_FIELD(temp_16, f32 *, 4) = (f32) (M2C_FIELD(temp_16, f32 *, 4) * temp_f2_8);
                M2C_FIELD(temp_16, f32 *, 8) = (f32) (M2C_FIELD(temp_16, f32 *, 8) * temp_f2_8);
            } else {
                M2C_FIELD(arg0, f32 *, 0x68) = 0.0f;
                M2C_FIELD(temp_16, f32 *, 8) = 0.0f;
                M2C_FIELD(temp_16, f32 *, 4) = 0.0f;
            }
        }
    }
}
