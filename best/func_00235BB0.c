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

void func_00235BB0(void *arg0, void *arg1, void *arg2, void *arg3) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f13;
    f32 temp_f14;
    f32 temp_f15;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f8;
    f32 temp_f9;
    f32 temp_f9_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_8;

    temp_8 = arg1 + 8;
    temp_2 = arg0 + 8;
    temp_f11 = M2C_FIELD(arg0, f32 *, 8);
    temp_f13 = M2C_FIELD(arg1, f32 *, 8);
    temp_f10 = M2C_FIELD(temp_2, f32 *, 4);
    temp_f14 = M2C_FIELD(temp_8, f32 *, 4);
    temp_f9 = M2C_FIELD(temp_2, f32 *, 8);
    temp_f15 = M2C_FIELD(temp_8, f32 *, 8);
    temp_2_2 = M2C_FIELD(arg0, void **, 0);
    temp_3 = M2C_FIELD(arg1, void **, 0);
    temp_f6 = (temp_f11 * temp_f13) + (temp_f10 * temp_f14) + (temp_f9 * temp_f15);
    temp_f1 = M2C_FIELD(temp_2_2, f32 *, 0) - M2C_FIELD(temp_3, f32 *, 0);
    temp_f2 = M2C_FIELD(temp_2_2, f32 *, 4) - M2C_FIELD(temp_3, f32 *, 4);
    temp_f3 = temp_f13 * temp_f6;
    temp_f4 = temp_f14 * temp_f6;
    sp0 = temp_f1;
    temp_f0 = temp_f15 * temp_f6;
    sp4 = temp_f2;
    temp_f7 = temp_f11 - temp_f3;
    sp20 = temp_f3;
    temp_f8 = temp_f10 - temp_f4;
    sp24 = temp_f4;
    sp28 = temp_f0;
    temp_f5 = M2C_FIELD(temp_2_2, f32 *, 8) - M2C_FIELD(temp_3, f32 *, 8);
    temp_f0_2 = temp_f9 - temp_f0;
    sp10 = temp_f7;
    sp14 = temp_f8;
    sp8 = temp_f5;
    sp18 = temp_f0_2;
    temp_f2_2 = M2C_FIELD(temp_2_2, f32 *, 0) - M2C_FIELD(temp_3, f32 *, 0);
    temp_f1_2 = ((temp_f1 * temp_f7) + (temp_f2 * temp_f8) + (temp_f5 * temp_f0_2)) / ((temp_f6 * temp_f6) - 1.0f);
    temp_f0_3 = M2C_FIELD(temp_2_2, f32 *, 4) - M2C_FIELD(temp_3, f32 *, 4);
    sp0 = temp_f2_2;
    temp_f3_2 = M2C_FIELD(temp_2_2, f32 *, 8) - M2C_FIELD(temp_3, f32 *, 8);
    sp4 = temp_f0_3;
    temp_f11_2 = temp_f11 * temp_f1_2;
    sp8 = temp_f3_2;
    temp_f10_2 = temp_f10 * temp_f1_2;
    temp_f9_2 = temp_f9 * temp_f1_2;
    sp10 = temp_f11_2;
    sp14 = temp_f10_2;
    sp18 = temp_f9_2;
    temp_f7_2 = M2C_FIELD(temp_2_2, f32 *, 8) + temp_f9_2;
    temp_f4_2 = M2C_FIELD(temp_2_2, f32 *, 4) + temp_f10_2;
    temp_f0_4 = M2C_FIELD(temp_2_2, f32 *, 0) + temp_f11_2;
    M2C_FIELD(arg2, f32 *, 8) = temp_f7_2;
    temp_f2_3 = (temp_f2_2 * temp_f13) + (temp_f0_3 * temp_f14) + (temp_f3_2 * temp_f15) + (temp_f1_2 * temp_f6);
    M2C_FIELD(arg2, f32 *, 4) = temp_f4_2;
    M2C_FIELD(arg2, f32 *, 0) = temp_f0_4;
    sp0 = temp_f0_4;
    temp_f6_2 = M2C_FIELD(arg1, f32 *, 8) * temp_f2_3;
    temp_f3_3 = M2C_FIELD(temp_8, f32 *, 8) * temp_f2_3;
    sp4 = temp_f4_2;
    temp_f5_2 = M2C_FIELD(temp_8, f32 *, 4) * temp_f2_3;
    sp8 = temp_f7_2;
    sp10 = temp_f6_2;
    sp18 = temp_f3_3;
    sp14 = temp_f5_2;
    temp_f2_4 = M2C_FIELD(temp_3, f32 *, 8) + temp_f3_3;
    temp_f1_3 = M2C_FIELD(temp_3, f32 *, 4) + temp_f5_2;
    temp_f0_5 = M2C_FIELD(temp_3, f32 *, 0) + temp_f6_2;
    M2C_FIELD(arg3, f32 *, 8) = temp_f2_4;
    M2C_FIELD(arg3, f32 *, 4) = temp_f1_3;
    M2C_FIELD(arg3, f32 *, 0) = temp_f0_5;
    sp0 = temp_f0_5;
    sp4 = temp_f1_3;
    sp8 = temp_f2_4;
}
