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

void func_0029B988(void *arg0, void *arg1, f32 fparg0) {
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
    f32 temp_f0_10;
    f32 temp_f0_11;
    f32 temp_f0_12;
    f32 temp_f0_13;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f1_7;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
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
    f32 temp_f4_4;
    f32 temp_f4_5;
    f32 temp_f4_6;
    f32 temp_f5;
    f32 temp_f6;
    f32 var_f0;
    void *temp_3;
    void *temp_6;
    void *var_2;

    temp_3 = arg1 + 0x30;
    temp_f3 = M2C_FIELD(arg1, f32 *, 0x30);
    temp_6 = arg0 + 0x54;
    M2C_FIELD(arg1, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x54);
    sp0 = temp_f3;
    sp4 = M2C_FIELD(temp_3, f32 *, 4);
    sp8 = M2C_FIELD(temp_3, f32 *, 8);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 0xC) = 1.0f;
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
    temp_f12 = fparg0 - 1.0f;
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        var_2 = arg0 + 0x60;
        if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
            sp34 = 0.5f;
            sp38 = 0.0f;
            sp30 = -0.5f;
            temp_f0 = -0.5f * temp_f12;
            temp_f4 = sp34 * temp_f12;
            temp_f2 = temp_f12 * sp38;
            sp20 = temp_f0;
            temp_f3_2 = M2C_FIELD(arg0, f32 *, 0x54) - temp_f0;
            sp24 = temp_f4;
            sp28 = temp_f2;
            M2C_FIELD(arg1, f32 *, 0x30) = temp_f3_2;
            temp_f0_2 = M2C_FIELD(temp_6, f32 *, 8) - temp_f2;
            temp_f1 = M2C_FIELD(temp_6, f32 *, 4) - temp_f4;
            M2C_FIELD(temp_3, f32 *, 0xC) = 1.0f;
            sp10 = temp_f3_2;
            M2C_FIELD(temp_3, f32 *, 8) = temp_f0_2;
            M2C_FIELD(temp_3, f32 *, 4) = temp_f1;
            M2C_FIELD(arg0, f32 *, 0x60) = temp_f3_2;
            sp18 = temp_f0_2;
            sp14 = temp_f1;
            M2C_FIELD(var_2, f32 *, 4) = temp_f1;
            var_f0 = temp_f0_2;
        } else {
            temp_f0_3 = M2C_FIELD(arg0, f32 *, 0x54);
            sp10 = temp_f0_3;
            temp_f0_4 = temp_f0_3 + temp_f12;
            temp_f1_2 = M2C_FIELD(temp_6, f32 *, 4);
            sp14 = temp_f1_2;
            temp_f6 = M2C_FIELD(temp_6, f32 *, 8);
            sp50 = 0.5f;
            sp58 = 0.0f;
            sp54 = 0.5f;
            temp_f3_3 = 0.5f * temp_f12;
            sp10 = temp_f0_4;
            sp14 = temp_f1_2 + temp_f12;
            temp_f4_2 = 0.5f * temp_f12;
            sp18 = temp_f6;
            temp_f5 = temp_f12 * sp58;
            temp_f1_3 = temp_f0_4 - temp_f3_3;
            temp_f2_2 = sp14 - temp_f4_2;
            sp40 = temp_f3_3;
            temp_f0_5 = temp_f6 - temp_f5;
            sp44 = temp_f4_2;
            M2C_FIELD(arg1, f32 *, 0x30) = temp_f1_3;
            M2C_FIELD(temp_3, f32 *, 0xC) = 1.0f;
            M2C_FIELD(temp_3, f32 *, 8) = temp_f0_5;
            M2C_FIELD(temp_3, f32 *, 4) = temp_f2_2;
            M2C_FIELD(arg0, f32 *, 0x60) = temp_f1_3;
            sp28 = temp_f0_5;
            sp48 = temp_f5;
            sp20 = temp_f1_3;
            sp24 = temp_f2_2;
            M2C_FIELD(var_2, f32 *, 4) = temp_f2_2;
            goto block_11;
        }
    } else {
        var_2 = arg0 + 0x60;
        if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
            sp34 = -0.5f;
            sp38 = 0.0f;
            sp30 = 0.5f;
            temp_f0_6 = 0.5f * temp_f12;
            temp_f4_3 = sp34 * temp_f12;
            temp_f2_3 = temp_f12 * sp38;
            sp20 = temp_f0_6;
            temp_f3_4 = M2C_FIELD(arg0, f32 *, 0x54) - temp_f0_6;
            sp24 = temp_f4_3;
            sp28 = temp_f2_3;
            M2C_FIELD(arg1, f32 *, 0x30) = temp_f3_4;
            temp_f0_7 = M2C_FIELD(temp_6, f32 *, 8) - temp_f2_3;
            temp_f1_4 = M2C_FIELD(temp_6, f32 *, 4) - temp_f4_3;
            M2C_FIELD(temp_3, f32 *, 0xC) = 1.0f;
            sp10 = temp_f3_4;
            M2C_FIELD(temp_3, f32 *, 8) = temp_f0_7;
            M2C_FIELD(temp_3, f32 *, 4) = temp_f1_4;
            M2C_FIELD(arg0, f32 *, 0x60) = temp_f3_4;
            sp18 = temp_f0_7;
            sp14 = temp_f1_4;
            M2C_FIELD(var_2, f32 *, 4) = temp_f1_4;
            var_f0 = temp_f0_7;
        } else {
            var_2 = arg0 + 0x60;
            if (M2C_FIELD(arg0, s32 *, 0x34) != 0) {
                sp34 = 0.5f;
                sp38 = 0.0f;
                sp30 = -0.5f;
                temp_f0_8 = -0.5f * temp_f12;
                temp_f4_4 = sp34 * temp_f12;
                temp_f2_4 = temp_f12 * sp38;
                sp20 = temp_f0_8;
                temp_f3_5 = M2C_FIELD(arg0, f32 *, 0x54) - temp_f0_8;
                sp24 = temp_f4_4;
                sp28 = temp_f2_4;
                M2C_FIELD(arg1, f32 *, 0x30) = temp_f3_5;
                temp_f0_9 = M2C_FIELD(temp_6, f32 *, 8) - temp_f2_4;
                temp_f1_5 = M2C_FIELD(temp_6, f32 *, 4) - temp_f4_4;
                M2C_FIELD(temp_3, f32 *, 0xC) = 1.0f;
                sp10 = temp_f3_5;
                M2C_FIELD(temp_3, f32 *, 8) = temp_f0_9;
                M2C_FIELD(temp_3, f32 *, 4) = temp_f1_5;
                M2C_FIELD(arg0, f32 *, 0x60) = temp_f3_5;
                sp18 = temp_f0_9;
                sp14 = temp_f1_5;
                M2C_FIELD(var_2, f32 *, 4) = temp_f1_5;
                var_f0 = temp_f0_9;
            } else {
                var_2 = arg0 + 0x60;
                if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
                    sp38 = 0.0f;
                    sp34 = 0.5f;
                    sp30 = 0.5f;
                    temp_f0_10 = 0.5f * temp_f12;
                    temp_f4_5 = 0.5f * temp_f12;
                    temp_f2_5 = temp_f12 * sp38;
                    sp20 = temp_f0_10;
                    temp_f3_6 = M2C_FIELD(arg0, f32 *, 0x54) - temp_f0_10;
                    sp24 = temp_f4_5;
                    sp28 = temp_f2_5;
                    M2C_FIELD(arg1, f32 *, 0x30) = temp_f3_6;
                    temp_f0_11 = M2C_FIELD(temp_6, f32 *, 8) - temp_f2_5;
                    temp_f1_6 = M2C_FIELD(temp_6, f32 *, 4) - temp_f4_5;
                    M2C_FIELD(temp_3, f32 *, 0xC) = 1.0f;
                    sp10 = temp_f3_6;
                    M2C_FIELD(temp_3, f32 *, 8) = temp_f0_11;
                    M2C_FIELD(temp_3, f32 *, 4) = temp_f1_6;
                    M2C_FIELD(arg0, f32 *, 0x60) = temp_f3_6;
                    sp18 = temp_f0_11;
                    sp14 = temp_f1_6;
                    M2C_FIELD(var_2, f32 *, 4) = temp_f1_6;
                    var_f0 = temp_f0_11;
                } else {
                    sp18 = 0.0f;
                    temp_f0_12 = -M2C_FIELD(arg0, f32 *, 0x40) * temp_f12;
                    temp_f2_6 = temp_f12 * sp18;
                    temp_f3_7 = -M2C_FIELD(arg0, f32 *, 0x3C) * temp_f12;
                    sp10 = temp_f0_12;
                    temp_f4_6 = M2C_FIELD(arg0, f32 *, 0x54) + temp_f0_12;
                    sp18 = temp_f2_6;
                    sp14 = temp_f3_7;
                    M2C_FIELD(arg1, f32 *, 0x30) = temp_f4_6;
                    temp_f0_13 = M2C_FIELD(temp_6, f32 *, 8) + temp_f2_6;
                    temp_f1_7 = M2C_FIELD(temp_6, f32 *, 4) + temp_f3_7;
                    M2C_FIELD(temp_3, f32 *, 0xC) = 1.0f;
                    sp20 = temp_f4_6;
                    M2C_FIELD(temp_3, f32 *, 8) = temp_f0_13;
                    M2C_FIELD(temp_3, f32 *, 4) = temp_f1_7;
                    M2C_FIELD(arg0, f32 *, 0x60) = temp_f4_6;
                    sp28 = temp_f0_13;
                    sp24 = temp_f1_7;
                    M2C_FIELD(var_2, f32 *, 4) = temp_f1_7;
block_11:
                    var_f0 = sp28;
                }
            }
        }
    }
    M2C_FIELD(var_2, f32 *, 8) = var_f0;
}
