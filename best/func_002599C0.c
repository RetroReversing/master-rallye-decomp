/* machine draft (m2c), tried by autopilot */
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

f32 func_002599C0(void *arg1) {
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
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f15;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f17;
    f32 temp_f18;
    f32 temp_f19;
    f32 temp_f19_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f8_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_4;
    void *temp_6;
    void *temp_6_2;
    void *temp_8;

    temp_4 = M2C_FIELD(arg1, void **, 0x4C);
    temp_6_2 = arg1 + 0xC;
    temp_f16 = M2C_FIELD(arg1, f32 *, 4);
    temp_2 = temp_4 + 0xA0;
    temp_f14_2 = M2C_FIELD(arg1, f32 *, 8);
    temp_3 = temp_4 + 0x70;
    temp_f19 = M2C_FIELD(arg1, f32 *, 0);
    temp_f8_2 = temp_f14_2 - M2C_FIELD(temp_2, f32 *, 8);
    temp_f11_2 = temp_f16 - M2C_FIELD(temp_2, f32 *, 4);
    temp_f18 = M2C_FIELD(temp_6_2, f32 *, 4);
    temp_f12 = temp_f19 - M2C_FIELD(temp_4, f32 *, 0xA0);
    temp_f17 = M2C_FIELD(temp_6_2, f32 *, 8);
    temp_f15 = M2C_FIELD(arg1, f32 *, 0xC);
    temp_6 = M2C_FIELD(arg1, void **, 0x50);
    sp0 = temp_f12;
    sp4 = temp_f11_2;
    temp_f5 = (temp_f11_2 * temp_f17) - (temp_f8_2 * temp_f18);
    sp8 = temp_f8_2;
    temp_f13 = (temp_f12 * temp_f18) - (temp_f11_2 * temp_f15);
    temp_8 = temp_6 + 0xA0;
    temp_f6 = (temp_f8_2 * temp_f15) - (temp_f12 * temp_f17);
    temp_2_2 = temp_6 + 0x70;
    sp10 = temp_f5;
    sp18 = temp_f13;
    sp14 = temp_f6;
    temp_f3 = (M2C_FIELD(temp_4, f32 *, 0x70) * temp_f5) + (M2C_FIELD(temp_3, f32 *, 4) * temp_f6) + (M2C_FIELD(temp_3, f32 *, 8) * temp_f13);
    sp20 = temp_f3;
    sp24 = (M2C_FIELD(temp_3, f32 *, 0xC) * temp_f5) + (M2C_FIELD(temp_3, f32 *, 0x10) * temp_f6) + (M2C_FIELD(temp_3, f32 *, 0x14) * temp_f13);
    sp28 = (M2C_FIELD(temp_3, f32 *, 0x18) * temp_f5) + (M2C_FIELD(temp_3, f32 *, 0x1C) * temp_f6) + (M2C_FIELD(temp_3, f32 *, 0x20) * temp_f13);
    temp_f2_2 = M2C_FIELD(&sp20, f32 *, 4);
    temp_f1_2 = M2C_FIELD(&sp20, f32 *, 8);
    temp_f8 = (temp_f2_2 * temp_f8_2) - (temp_f1_2 * temp_f11_2);
    temp_f7 = (temp_f3 * temp_f11_2) - (temp_f2_2 * temp_f12);
    temp_f1 = (temp_f1_2 * temp_f12) - (temp_f3 * temp_f8_2);
    sp30 = temp_f8;
    sp38 = temp_f7;
    sp34 = temp_f1;
    temp_f14_3 = temp_f14_2 - M2C_FIELD(temp_8, f32 *, 8);
    temp_f19_2 = temp_f19 - M2C_FIELD(temp_6, f32 *, 0xA0);
    temp_f16_2 = temp_f16 - M2C_FIELD(temp_8, f32 *, 4);
    sp8 = temp_f14_3;
    sp0 = temp_f19_2;
    sp4 = temp_f16_2;
    temp_f6_2 = (temp_f14_3 * temp_f15) - (temp_f19_2 * temp_f17);
    temp_f5_2 = (temp_f16_2 * temp_f17) - (temp_f14_3 * temp_f18);
    temp_f10 = (temp_f19_2 * temp_f18) - (temp_f16_2 * temp_f15);
    sp14 = temp_f6_2;
    sp10 = temp_f5_2;
    temp_f11 = -M2C_FIELD(arg1, f32 *, 0xD4);
    sp18 = temp_f10;
    temp_f4_2 = (M2C_FIELD(temp_6, f32 *, 0x70) * temp_f5_2) + (M2C_FIELD(temp_2_2, f32 *, 4) * temp_f6_2) + (M2C_FIELD(temp_2_2, f32 *, 8) * temp_f10);
    sp20 = temp_f4_2;
    sp28 = (M2C_FIELD(temp_2_2, f32 *, 0x18) * temp_f5_2) + (M2C_FIELD(temp_2_2, f32 *, 0x1C) * temp_f6_2) + (M2C_FIELD(temp_2_2, f32 *, 0x20) * temp_f10);
    sp24 = (M2C_FIELD(temp_2_2, f32 *, 0xC) * temp_f5_2) + (M2C_FIELD(temp_2_2, f32 *, 0x10) * temp_f6_2) + (M2C_FIELD(temp_2_2, f32 *, 0x14) * temp_f10);
    temp_f1_3 = M2C_FIELD(&sp20, f32 *, 8);
    temp_f3_2 = M2C_FIELD(&sp20, f32 *, 4);
    temp_f2 = (temp_f1_3 * temp_f19_2) - (temp_f4_2 * temp_f14_3);
    temp_f14 = (temp_f3_2 * temp_f14_3) - (temp_f1_3 * temp_f16_2);
    sp44 = temp_f2;
    temp_f4 = (temp_f4_2 * temp_f16_2) - (temp_f3_2 * temp_f19_2);
    sp40 = temp_f14;
    sp48 = temp_f4;
    return ((M2C_FIELD(arg1, f32 *, 0x20) * temp_f11) + temp_f11) / (M2C_FIELD(temp_4, f32 *, 0x24) + M2C_FIELD(temp_6, f32 *, 0x24) + ((temp_f15 * temp_f8) + (temp_f18 * temp_f1) + (temp_f17 * temp_f7)) + ((temp_f15 * temp_f14) + (temp_f18 * temp_f2) + (temp_f17 * temp_f4)));
}
