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

M2C_UNK func_00205580(f32 *, void *, f32, f32, f32, f32, f32, M2C_UNK); /* extern */

void func_002677A8(void *arg0, void *arg2, f32 fparg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f14;
    f32 temp_f15;
    f32 temp_f16;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f4_4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;
    void *temp_3;
    void *temp_3_2;
    void *temp_7;

    temp_3 = arg0 + 0x11C;
    temp_7 = arg0 + 0xA0;
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x11C) * fparg0;
    temp_f3 = M2C_FIELD(temp_3, f32 *, 8) * fparg0;
    temp_f4 = M2C_FIELD(temp_3, f32 *, 4) * fparg0;
    temp_3_2 = arg0 + 0xAC;
    sp10 = temp_f0;
    sp18 = temp_f3;
    sp14 = temp_f4;
    sp0 = 0.0f;
    M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0xA0) + temp_f0);
    M2C_FIELD(arg2, f32 *, 8) = (f32) (M2C_FIELD(temp_7, f32 *, 8) + temp_f3);
    M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(temp_7, f32 *, 4) + temp_f4);
    temp_f5 = M2C_FIELD(arg0, f32 *, 0x128);
    temp_f6 = M2C_FIELD(arg0, f32 *, 0x12C);
    temp_f4_2 = M2C_FIELD(arg0, f32 *, 0x130);
    sp4 = temp_f5;
    sp8 = temp_f6;
    spC = temp_f4_2;
    temp_f9 = M2C_FIELD(arg0, f32 *, 0xAC);
    temp_f10 = M2C_FIELD(temp_3_2, f32 *, 4);
    temp_f8 = M2C_FIELD(temp_3_2, f32 *, 0xC);
    temp_f7 = M2C_FIELD(temp_3_2, f32 *, 8);
    temp_f15 = temp_f6 * temp_f7;
    temp_f13 = temp_f6 * temp_f8;
    temp_f14 = temp_f5 * temp_f7;
    temp_f16 = temp_f4_2 * temp_f8;
    temp_f1 = (((temp_f9 * sp0) - (temp_f5 * temp_f10)) - temp_f15) - temp_f16;
    temp_f3_2 = ((temp_f10 * sp0) + (temp_f5 * temp_f9) + temp_f13) - (temp_f4_2 * temp_f7);
    sp30 = temp_f1;
    temp_f2 = ((temp_f8 * sp0) + (temp_f4_2 * temp_f9) + temp_f14) - (temp_f6 * temp_f10);
    temp_f0_2 = ((temp_f7 * sp0) + (temp_f6 * temp_f9) + (temp_f4_2 * temp_f10)) - (temp_f5 * temp_f8);
    sp34 = temp_f3_2;
    temp_f1_2 = temp_f1 * 0.5f;
    temp_f4_3 = temp_f2 * 0.5f;
    sp3C = temp_f2;
    temp_f3_3 = temp_f3_2 * 0.5f;
    sp38 = temp_f0_2;
    temp_f0_3 = temp_f0_2 * 0.5f;
    sp20 = temp_f1_2;
    temp_f1_3 = fparg0 * temp_f1_2;
    sp2C = temp_f4_3;
    sp24 = temp_f3_3;
    temp_f4_4 = fparg0 * temp_f4_3;
    temp_f3_4 = fparg0 * temp_f3_3;
    sp28 = temp_f0_3;
    temp_f12 = fparg0 * temp_f0_3;
    sp40 = temp_f1_3;
    sp44 = temp_f3_4;
    sp4C = temp_f4_4;
    sp48 = temp_f12;
    sp30 = temp_f9 + temp_f1_3;
    sp3C = M2C_FIELD(temp_3_2, f32 *, 0xC) + temp_f4_4;
    sp34 = M2C_FIELD(temp_3_2, f32 *, 4) + temp_f3_4;
    sp38 = M2C_FIELD(temp_3_2, f32 *, 8) + temp_f12;
    func_00205580(&sp30, temp_7, temp_f12, temp_f13, temp_f14, temp_f15, temp_f16, 0x3F000000);
}
