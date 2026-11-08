/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

f32 func_0023BC60(void *arg0) {
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
    f32 temp_f0_3;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f7_3;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;
    f32 temp_f9_2;
    void *temp_10;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_3 = M2C_FIELD(arg0, void **, 0x4C);
    temp_f12 = M2C_FIELD(arg0, f32 *, 0);
    temp_10 = arg0 + 0xC;
    temp_2 = temp_3 + 0xA0;
    temp_f11 = M2C_FIELD(arg0, f32 *, 4);
    temp_5 = temp_3 + 0x128;
    temp_f3 = temp_f12 - M2C_FIELD(temp_3, f32 *, 0xA0);
    temp_f8 = M2C_FIELD(arg0, f32 *, 8);
    temp_6 = temp_3 + 0x11C;
    sp20 = temp_f3;
    temp_f7_2 = temp_f8 - M2C_FIELD(temp_2, f32 *, 8);
    temp_f6 = temp_f11 - M2C_FIELD(temp_2, f32 *, 4);
    temp_2_2 = M2C_FIELD(arg0, void **, 0x50);
    sp28 = temp_f7_2;
    sp24 = temp_f6;
    temp_7 = temp_2_2 + 0xA0;
    temp_8 = temp_2_2 + 0x128;
    temp_9 = temp_2_2 + 0x11C;
    temp_f2 = M2C_FIELD(temp_5, f32 *, 8);
    temp_f1 = M2C_FIELD(temp_5, f32 *, 4);
    temp_f0 = M2C_FIELD(temp_3, f32 *, 0x128);
    temp_f5 = (temp_f2 * temp_f3) - (temp_f0 * temp_f7_2);
    temp_f4 = (temp_f0 * temp_f6) - (temp_f1 * temp_f3);
    temp_f1_2 = (temp_f1 * temp_f7_2) - (temp_f2 * temp_f6);
    sp14 = temp_f5;
    sp18 = temp_f4;
    sp10 = temp_f1_2;
    temp_f7_3 = M2C_FIELD(temp_3, f32 *, 0x11C) + temp_f1_2;
    temp_f10_2 = M2C_FIELD(temp_6, f32 *, 8) + temp_f4;
    temp_f9_2 = M2C_FIELD(temp_6, f32 *, 4) + temp_f5;
    sp0 = temp_f7_3;
    sp8 = temp_f10_2;
    sp4 = temp_f9_2;
    temp_f8_2 = temp_f8 - M2C_FIELD(temp_7, f32 *, 8);
    temp_f12_2 = temp_f12 - M2C_FIELD(temp_2_2, f32 *, 0xA0);
    temp_f11_2 = temp_f11 - M2C_FIELD(temp_7, f32 *, 4);
    sp48 = temp_f8_2;
    sp40 = temp_f12_2;
    sp44 = temp_f11_2;
    temp_f0_2 = M2C_FIELD(temp_8, f32 *, 8);
    temp_f2_2 = M2C_FIELD(temp_8, f32 *, 4);
    temp_f1_3 = M2C_FIELD(temp_2_2, f32 *, 0x128);
    temp_f5_2 = (temp_f2_2 * temp_f8_2) - (temp_f0_2 * temp_f11_2);
    temp_f0_3 = (temp_f0_2 * temp_f12_2) - (temp_f1_3 * temp_f8_2);
    temp_f1_4 = (temp_f1_3 * temp_f11_2) - (temp_f2_2 * temp_f12_2);
    sp30 = temp_f5_2;
    sp34 = temp_f0_3;
    sp38 = temp_f1_4;
    temp_f2_3 = M2C_FIELD(temp_2_2, f32 *, 0x11C) + temp_f5_2;
    temp_f3_2 = M2C_FIELD(temp_9, f32 *, 4) + temp_f0_3;
    temp_f4_2 = M2C_FIELD(temp_9, f32 *, 8) + temp_f1_4;
    temp_f7 = temp_f7_3 - temp_f2_3;
    temp_f9 = temp_f9_2 - temp_f3_2;
    sp10 = temp_f2_3;
    temp_f10 = temp_f10_2 - temp_f4_2;
    sp14 = temp_f3_2;
    sp18 = temp_f4_2;
    sp20 = temp_f7;
    sp24 = temp_f9;
    sp28 = temp_f10;
    return (M2C_FIELD(arg0, f32 *, 0xC) * temp_f7) + (M2C_FIELD(temp_10, f32 *, 4) * temp_f9) + (M2C_FIELD(temp_10, f32 *, 8) * temp_f10);
}
