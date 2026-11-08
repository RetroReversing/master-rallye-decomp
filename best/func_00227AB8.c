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

f32 func_001CF4C0(f32 *, f32 *);                    /* extern */
extern f32 D_004264A0;
extern f32 D_00478468;

void func_00227AB8(void *arg0, void *arg1, void *arg2, void *arg3) {
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
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f1_7;
    f32 temp_f1_8;
    f32 temp_f1_9;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f7_3;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f8_3;
    f32 temp_f9;
    f32 temp_f9_2;
    s32 var_2;
    s32 var_3;
    s32 var_4;
    void *temp_17;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_3;
    void *temp_3_2;
    void *temp_4;
    void *temp_4_2;
    void *temp_5;
    void *temp_5_2;
    void *temp_6;

    temp_2 = arg0 + 0xC;
    sp4 = 0.0f;
    sp0 = M2C_FIELD(arg0, f32 *, 0x18);
    sp8 = M2C_FIELD(arg0, f32 *, 0x14);
    temp_f1 = (M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(arg0, f32 *, 0xC)) + (M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(temp_2, f32 *, 4)) + (M2C_FIELD(arg1, f32 *, 8) * M2C_FIELD(temp_2, f32 *, 8)) + M2C_FIELD(arg1, f32 *, 0xC);
    var_4 = 0;
    if (D_004264A0 <= temp_f1) {
        var_4 = 1;
    } else if (temp_f1 <= -D_004264A0) {
        var_4 = -1;
    }
    temp_f0 = M2C_FIELD(arg1, f32 *, 0);
    temp_2_2 = arg0 + 0x18;
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x18);
    temp_f2 = M2C_FIELD(arg1, f32 *, 4);
    temp_f1_3 = M2C_FIELD(arg1, f32 *, 8);
    var_3 = 0;
    temp_f3 = M2C_FIELD(arg1, f32 *, 0xC);
    temp_f1_4 = (temp_f0 * temp_f1_2) + (temp_f2 * M2C_FIELD(temp_2_2, f32 *, 4)) + (temp_f1_3 * M2C_FIELD(temp_2_2, f32 *, 8)) + temp_f3;
    if (D_004264A0 <= temp_f1_4) {
        var_3 = 1;
    } else if (temp_f1_4 <= -D_004264A0) {
        var_3 = -1;
    }
    temp_f1_5 = (temp_f0 * sp0) + (temp_f2 * sp4) + (temp_f1_3 * sp8) + temp_f3;
    var_2 = 0;
    if (D_004264A0 <= temp_f1_5) {
        var_2 = 1;
    } else if (temp_f1_5 <= -D_004264A0) {
        var_2 = -1;
    }
    temp_17 = arg0 + 0xC;
    if (var_4 != var_2) {
        sp20 = sp0 - M2C_FIELD(arg0, f32 *, 0xC);
        sp24 = sp4 - M2C_FIELD(temp_17, f32 *, 4);
        sp28 = sp8 - M2C_FIELD(temp_17, f32 *, 8);
        temp_f0_2 = func_001CF4C0(&sp20, &D_004264A0);
        if (temp_f0_2 < D_00478468) {
            sp20 = 0.0f;
            sp24 = 0.0f;
            sp28 = 0.0f;
        } else {
            sp20 /= temp_f0_2;
            M2C_FIELD(&sp20, f32 *, 4) = (f32) (M2C_FIELD(&sp20, f32 *, 4) / temp_f0_2);
            M2C_FIELD(&sp20, f32 *, 8) = (f32) (M2C_FIELD(&sp20, f32 *, 8) / temp_f0_2);
        }
        temp_f1_6 = M2C_FIELD(arg1, f32 *, 0);
        temp_2_3 = arg2 + 0xC;
        temp_f9 = M2C_FIELD(arg0, f32 *, 0xC);
        temp_3 = arg2 + 0x18;
        temp_f5 = M2C_FIELD(arg1, f32 *, 4);
        temp_4 = arg3 + 0xC;
        temp_f3_2 = M2C_FIELD(arg1, f32 *, 8);
        temp_5 = arg3 + 0x18;
        temp_f8 = M2C_FIELD(&sp20, f32 *, 4);
        temp_f7 = M2C_FIELD(&sp20, f32 *, 8);
        temp_f0_3 = -(M2C_FIELD(arg1, f32 *, 0xC) + ((temp_f1_6 * temp_f9) + (temp_f5 * M2C_FIELD(temp_17, f32 *, 4)) + (temp_f3_2 * M2C_FIELD(temp_17, f32 *, 8)))) / ((temp_f1_6 * sp20) + (temp_f5 * temp_f8) + (temp_f3_2 * temp_f7));
        temp_f7_2 = temp_f7 * temp_f0_3;
        temp_f6 = sp20 * temp_f0_3;
        temp_f8_2 = temp_f8 * temp_f0_3;
        sp38 = temp_f7_2;
        sp30 = temp_f6;
        sp34 = temp_f8_2;
        M2C_FIELD(arg2, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
        sp10 = temp_f9 + temp_f6;
        sp14 = M2C_FIELD(temp_17, f32 *, 4) + temp_f8_2;
        sp18 = M2C_FIELD(temp_17, f32 *, 8) + temp_f7_2;
        M2C_FIELD(temp_2_3, f32 *, 4) = (f32) M2C_FIELD(temp_17, f32 *, 4);
        M2C_FIELD(temp_2_3, f32 *, 8) = (f32) M2C_FIELD(temp_17, f32 *, 8);
        sp24 = 0.0f;
        temp_f0_4 = M2C_FIELD(arg0, f32 *, 0x20);
        M2C_FIELD(arg2, f32 *, 0x18) = sp10;
        sp28 = temp_f0_4;
        sp20 = sp10;
        M2C_FIELD(temp_3, f32 *, 4) = sp24;
        M2C_FIELD(temp_3, f32 *, 8) = temp_f0_4;
        sp28 = M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(arg3, f32 *, 0xC) = sp10;
        sp20 = sp10;
        M2C_FIELD(temp_4, f32 *, 4) = sp24;
        M2C_FIELD(temp_4, f32 *, 8) = sp28;
        M2C_FIELD(arg3, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
        M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(temp_2_2, f32 *, 4);
        M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(temp_2_2, f32 *, 8);
        return;
    }
    if (var_3 != var_4) {
        sp40 = sp0 - temp_f1_2;
        sp44 = sp4 - M2C_FIELD(temp_2_2, f32 *, 4);
        sp48 = sp8 - M2C_FIELD(temp_2_2, f32 *, 8);
        temp_f0_5 = func_001CF4C0(&sp40, &D_004264A0);
        if (temp_f0_5 < D_00478468) {
            sp40 = 0.0f;
            sp44 = 0.0f;
            sp48 = 0.0f;
        } else {
            sp40 /= temp_f0_5;
            M2C_FIELD(&sp40, f32 *, 4) = (f32) (M2C_FIELD(&sp40, f32 *, 4) / temp_f0_5);
            M2C_FIELD(&sp40, f32 *, 8) = (f32) (M2C_FIELD(&sp40, f32 *, 8) / temp_f0_5);
        }
        temp_f1_7 = M2C_FIELD(arg1, f32 *, 0);
        temp_3_2 = arg0 + 0xC;
        temp_f11 = M2C_FIELD(arg0, f32 *, 0x18);
        temp_2_4 = arg2 + 0xC;
        temp_f8_3 = M2C_FIELD(arg1, f32 *, 4);
        temp_4_2 = arg2 + 0x18;
        temp_f10 = M2C_FIELD(temp_2_2, f32 *, 4);
        temp_f5_2 = M2C_FIELD(arg1, f32 *, 8);
        temp_5_2 = arg3 + 0xC;
        temp_f9_2 = M2C_FIELD(temp_2_2, f32 *, 8);
        temp_f6_2 = M2C_FIELD(&sp40, f32 *, 4);
        temp_6 = arg3 + 0x18;
        temp_f2_2 = M2C_FIELD(&sp40, f32 *, 8);
        M2C_FIELD(arg2, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
        temp_f0_6 = -(M2C_FIELD(arg1, f32 *, 0xC) + ((temp_f1_7 * temp_f11) + (temp_f8_3 * temp_f10) + (temp_f5_2 * temp_f9_2))) / ((temp_f1_7 * sp40) + (temp_f8_3 * temp_f6_2) + (temp_f5_2 * temp_f2_2));
        temp_f2_3 = temp_f2_2 * temp_f0_6;
        temp_f7_3 = sp40 * temp_f0_6;
        temp_f6_3 = temp_f6_2 * temp_f0_6;
        sp58 = temp_f2_3;
        sp50 = temp_f7_3;
        sp54 = temp_f6_3;
        sp18 = temp_f9_2 + temp_f2_3;
        sp10 = temp_f11 + temp_f7_3;
        sp14 = temp_f10 + temp_f6_3;
        M2C_FIELD(temp_2_4, f32 *, 4) = (f32) M2C_FIELD(temp_3_2, f32 *, 4);
        M2C_FIELD(temp_2_4, f32 *, 8) = (f32) M2C_FIELD(temp_3_2, f32 *, 8);
        sp24 = 0.0f;
        temp_f1_8 = M2C_FIELD(arg0, f32 *, 0x18);
        M2C_FIELD(arg2, f32 *, 0x18) = temp_f1_8;
        sp28 = sp18;
        sp20 = temp_f1_8;
        M2C_FIELD(temp_4_2, f32 *, 4) = sp24;
        M2C_FIELD(temp_4_2, f32 *, 8) = sp18;
        temp_f1_9 = M2C_FIELD(arg0, f32 *, 0xC);
        sp20 = temp_f1_9;
        M2C_FIELD(arg3, f32 *, 0xC) = temp_f1_9;
        sp28 = sp18;
        M2C_FIELD(temp_5_2, f32 *, 4) = sp24;
        M2C_FIELD(temp_5_2, f32 *, 8) = sp18;
        M2C_FIELD(arg3, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
        M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(temp_2_2, f32 *, 4);
        M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(temp_2_2, f32 *, 8);
    }
}
