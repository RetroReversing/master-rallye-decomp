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

f32 func_001CF4C0(f32 *);                           /* extern */
M2C_UNK func_0023E888(void *, f32 *);               /* extern */
M2C_UNK func_0023E8C0(void *, f32 *);               /* extern */
M2C_UNK func_0023E8F8(void *, f32 *);               /* extern */
M2C_UNK func_0023E930(void *, f32 *);               /* extern */
f32 func_0025EFA0();                                /* extern */
f32 func_003F3E80(f32);                             /* extern */
extern f32 D_00478468;
extern f32 D_00479C98;

void func_0025E9E0(void *arg1) {
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
    f32 temp_f0_14;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f10_4;
    f32 temp_f1;
    f32 temp_f1_10;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f1_7;
    f32 temp_f1_8;
    f32 temp_f1_9;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f23;
    f32 temp_f2;
    f32 temp_f2_10;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f2_7;
    f32 temp_f2_8;
    f32 temp_f2_9;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f3_5;
    f32 temp_f3_6;
    f32 temp_f3_7;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f8_3;
    f32 temp_f8_4;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 temp_f9_3;
    f32 temp_f9_4;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f2;
    s32 var_2;
    s32 var_3;
    void *temp_17;
    void *temp_17_2;
    void *temp_18;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_2_6;
    void *temp_3;
    void *temp_3_2;

    temp_18 = arg1 + 0xC;
    temp_17 = M2C_FIELD(arg1, void **, 0x4C);
    temp_f23 = func_0025EFA0();
    temp_2 = temp_17 + 0xA0;
    temp_3 = temp_17 + 0x128;
    temp_f3 = M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(temp_17, f32 *, 0xA0);
    temp_2_2 = temp_17 + 0x11C;
    sp20 = temp_f3;
    temp_f6 = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(temp_2, f32 *, 4);
    temp_f4 = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(temp_2, f32 *, 8);
    temp_f8 = M2C_FIELD(arg1, f32 *, 0xC);
    temp_f10 = M2C_FIELD(temp_18, f32 *, 4);
    sp28 = temp_f4;
    sp24 = temp_f6;
    temp_f2 = M2C_FIELD(temp_3, f32 *, 8);
    temp_f0 = M2C_FIELD(temp_3, f32 *, 4);
    temp_f1 = M2C_FIELD(temp_17, f32 *, 0x128);
    temp_f9 = M2C_FIELD(temp_18, f32 *, 8);
    temp_f5 = (temp_f1 * temp_f6) - (temp_f0 * temp_f3);
    temp_f7 = (temp_f2 * temp_f3) - (temp_f1 * temp_f4);
    temp_f0_2 = (temp_f0 * temp_f4) - (temp_f2 * temp_f6);
    sp18 = temp_f5;
    sp14 = temp_f7;
    sp10 = temp_f0_2;
    temp_f1_2 = M2C_FIELD(temp_17, f32 *, 0x11C) + temp_f0_2;
    temp_f2_2 = M2C_FIELD(temp_2_2, f32 *, 4) + temp_f7;
    temp_f3_2 = M2C_FIELD(temp_2_2, f32 *, 8) + temp_f5;
    temp_f0_3 = (temp_f1_2 * temp_f8) + (temp_f2_2 * temp_f10) + (temp_f3_2 * temp_f9);
    temp_f8_2 = temp_f8 * temp_f0_3;
    temp_f10_2 = temp_f10 * temp_f0_3;
    temp_f9_2 = temp_f9 * temp_f0_3;
    temp_f1_3 = temp_f1_2 - temp_f8_2;
    sp20 = temp_f8_2;
    temp_f2_3 = temp_f2_2 - temp_f10_2;
    sp24 = temp_f10_2;
    temp_f3_3 = temp_f3_2 - temp_f9_2;
    sp28 = temp_f9_2;
    sp10 = temp_f1_3;
    sp14 = temp_f2_3;
    sp18 = temp_f3_3;
    var_f0 = (temp_f1_3 * temp_f1_3) + (temp_f2_3 * temp_f2_3);
    M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
    temp_f20 = M2C_FIELD(temp_17, f32 *, 0x20);
    if (var_f0 != var_f0) {
        var_f0 = func_003F3E80(var_f0 + (temp_f3_3 * temp_f3_3));
    }
    var_3 = -1;
    if (temp_f23 > 0.0f) {
        var_3 = 1;
    }
    temp_f2_4 = fabsf(temp_f23);
    temp_f0_4 = fabsf((temp_f20 * var_f0 * 0.75f) / D_00479C98);
    var_f1 = temp_f2_4;
    if (temp_f0_4 < temp_f2_4) {
        var_f1 = temp_f0_4;
    }
    temp_f20_2 = (f32) var_3 * var_f1;
    temp_f0_5 = func_001CF4C0(&sp10);
    if (temp_f0_5 < D_00478468) {
        sp18 = 0.0f;
        sp10 = 0.0f;
        sp14 = 0.0f;
    } else {
        sp10 /= temp_f0_5;
        sp14 /= temp_f0_5;
        sp18 /= temp_f0_5;
    }
    temp_f0_6 = sp10 * temp_f20_2;
    temp_f1_4 = sp14 * temp_f20_2;
    temp_f2_5 = sp18 * temp_f20_2;
    sp30 = temp_f0_6;
    sp34 = temp_f1_4;
    sp38 = temp_f2_5;
    sp20 = -temp_f0_6;
    sp24 = -temp_f1_4;
    sp28 = -temp_f2_5;
    func_0023E888(arg1, &sp20);
    temp_2_3 = temp_17 + 0xA0;
    temp_f1_5 = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(temp_2_3, f32 *, 4);
    temp_f0_7 = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(temp_2_3, f32 *, 8);
    temp_f3_4 = M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(temp_17, f32 *, 0xA0);
    sp44 = temp_f1_5;
    sp48 = temp_f0_7;
    sp40 = temp_f3_4;
    sp34 = (temp_f0_7 * sp20) - (temp_f3_4 * sp28);
    sp38 = (temp_f3_4 * sp24) - (temp_f1_5 * sp20);
    sp30 = (temp_f1_5 * sp28) - (temp_f0_7 * sp24);
    func_0023E8F8(arg1, &sp30);
    temp_17_2 = M2C_FIELD(arg1, void **, 0x50);
    temp_2_4 = temp_17_2 + 0xA0;
    temp_3_2 = temp_17_2 + 0x128;
    temp_f3_5 = M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(temp_17_2, f32 *, 0xA0);
    temp_2_5 = temp_17_2 + 0x11C;
    sp20 = temp_f3_5;
    temp_f6_2 = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(temp_2_4, f32 *, 4);
    temp_f4_2 = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(temp_2_4, f32 *, 8);
    temp_f8_3 = M2C_FIELD(arg1, f32 *, 0xC);
    temp_f10_3 = M2C_FIELD(temp_18, f32 *, 4);
    sp28 = temp_f4_2;
    sp24 = temp_f6_2;
    temp_f2_6 = M2C_FIELD(temp_3_2, f32 *, 8);
    temp_f0_8 = M2C_FIELD(temp_3_2, f32 *, 4);
    temp_f1_6 = M2C_FIELD(temp_17_2, f32 *, 0x128);
    temp_f9_3 = M2C_FIELD(temp_18, f32 *, 8);
    temp_f5_2 = (temp_f1_6 * temp_f6_2) - (temp_f0_8 * temp_f3_5);
    temp_f7_2 = (temp_f2_6 * temp_f3_5) - (temp_f1_6 * temp_f4_2);
    temp_f0_9 = (temp_f0_8 * temp_f4_2) - (temp_f2_6 * temp_f6_2);
    sp18 = temp_f5_2;
    sp14 = temp_f7_2;
    sp10 = temp_f0_9;
    temp_f1_7 = M2C_FIELD(temp_17_2, f32 *, 0x11C) + temp_f0_9;
    temp_f2_7 = M2C_FIELD(temp_2_5, f32 *, 4) + temp_f7_2;
    temp_f3_6 = M2C_FIELD(temp_2_5, f32 *, 8) + temp_f5_2;
    temp_f0_10 = (temp_f1_7 * temp_f8_3) + (temp_f2_7 * temp_f10_3) + (temp_f3_6 * temp_f9_3);
    temp_f8_4 = temp_f8_3 * temp_f0_10;
    temp_f10_4 = temp_f10_3 * temp_f0_10;
    temp_f9_4 = temp_f9_3 * temp_f0_10;
    temp_f1_8 = temp_f1_7 - temp_f8_4;
    sp20 = temp_f8_4;
    temp_f2_8 = temp_f2_7 - temp_f10_4;
    sp24 = temp_f10_4;
    temp_f3_7 = temp_f3_6 - temp_f9_4;
    sp28 = temp_f9_4;
    sp10 = temp_f1_8;
    sp14 = temp_f2_8;
    sp18 = temp_f3_7;
    var_f0_2 = (temp_f1_8 * temp_f1_8) + (temp_f2_8 * temp_f2_8);
    M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
    temp_f20_3 = M2C_FIELD(temp_17_2, f32 *, 0x20);
    if (var_f0_2 != var_f0_2) {
        var_f0_2 = func_003F3E80(var_f0_2 + (temp_f3_7 * temp_f3_7));
    }
    var_2 = -1;
    if (temp_f23 > 0.0f) {
        var_2 = 1;
    }
    temp_f0_11 = fabsf((temp_f20_3 * var_f0_2 * 0.75f) / D_00479C98);
    var_f2 = temp_f2_4;
    if (temp_f0_11 < temp_f2_4) {
        var_f2 = temp_f0_11;
    }
    temp_f20_4 = (f32) var_2 * var_f2;
    temp_f0_12 = func_001CF4C0(&sp10);
    if (temp_f0_12 < D_00478468) {
        sp18 = 0.0f;
        sp10 = 0.0f;
        sp14 = 0.0f;
    } else {
        sp10 /= temp_f0_12;
        sp14 /= temp_f0_12;
        sp18 /= temp_f0_12;
    }
    temp_f0_13 = sp10 * temp_f20_4;
    temp_f1_9 = sp14 * temp_f20_4;
    temp_f2_9 = sp18 * temp_f20_4;
    sp30 = temp_f0_13;
    sp34 = temp_f1_9;
    sp38 = temp_f2_9;
    sp20 = -temp_f0_13;
    sp24 = -temp_f1_9;
    sp28 = -temp_f2_9;
    func_0023E8C0(arg1, &sp20);
    temp_2_6 = temp_17_2 + 0xA0;
    temp_f0_14 = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(temp_2_6, f32 *, 4);
    temp_f1_10 = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(temp_2_6, f32 *, 8);
    temp_f2_10 = M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(temp_17_2, f32 *, 0xA0);
    sp54 = temp_f0_14;
    sp58 = temp_f1_10;
    sp50 = temp_f2_10;
    sp34 = (temp_f1_10 * sp20) - (temp_f2_10 * sp28);
    sp38 = (temp_f2_10 * sp24) - (temp_f0_14 * sp20);
    sp30 = (temp_f0_14 * sp28) - (temp_f1_10 * sp24);
    func_0023E930(arg1, &sp30);
}
