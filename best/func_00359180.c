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

void func_00359180(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5, void *arg6) {
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f14;
    f32 temp_f15;
    f32 temp_f15_2;
    f32 temp_f15_3;
    f32 temp_f15_4;
    f32 temp_f15_5;
    f32 temp_f15_6;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f16_4;
    f32 temp_f16_5;
    f32 temp_f16_6;
    f32 temp_f17;
    f32 temp_f17_2;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;
    f32 temp_f9_2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0);
    temp_f3 = M2C_FIELD(arg0, f32 *, 4);
    temp_f8 = M2C_FIELD(arg1, f32 *, 0) - temp_f2;
    temp_f7 = M2C_FIELD(arg1, f32 *, 4) - temp_f3;
    temp_f6 = M2C_FIELD(arg2, f32 *, 0) - temp_f2;
    temp_f5 = M2C_FIELD(arg2, f32 *, 4) - temp_f3;
    temp_f12 = M2C_FIELD(arg0, f32 *, 8);
    temp_f10 = 1.0f / temp_f3;
    temp_f14 = M2C_FIELD(arg1, f32 *, 8);
    temp_f13 = M2C_FIELD(arg2, f32 *, 8);
    temp_f9 = 1.0f / temp_f2;
    temp_f16 = temp_f14 - temp_f12;
    temp_f15 = temp_f13 - temp_f12;
    temp_f1 = 1.0f / ((temp_f8 * temp_f5) - (temp_f7 * temp_f6));
    temp_f11 = temp_f10 * 0.0f;
    temp_f4 = temp_f9 * 0.0f;
    temp_f9_2 = -temp_f9;
    temp_f10_2 = -temp_f10;
    temp_f3_2 = temp_f3 * temp_f1;
    temp_f2_2 = temp_f2 * temp_f1;
    temp_f8_2 = temp_f8 * temp_f3_2;
    temp_f7_2 = temp_f7 * temp_f2_2;
    temp_f6_2 = temp_f6 * temp_f3_2;
    temp_f5_2 = temp_f5 * temp_f2_2;
    temp_f15_2 = (temp_f16 * temp_f6_2) - (temp_f8_2 * temp_f15);
    temp_f16_2 = (temp_f7_2 * temp_f15) - (temp_f16 * temp_f5_2);
    M2C_FIELD(arg6, f32 *, 4) = (f32) (temp_f16_2 * temp_f9_2);
    M2C_FIELD(arg6, f32 *, 8) = (f32) (temp_f15_2 * temp_f10_2);
    M2C_FIELD(arg6, f32 *, 0) = (f32) ((temp_f16_2 - (temp_f16_2 * temp_f4)) + (temp_f15_2 - (temp_f15_2 * temp_f11)) + temp_f12);
    temp_f17 = M2C_FIELD(arg3, f32 *, 0) * temp_f12;
    temp_f16_3 = (M2C_FIELD(arg4, f32 *, 0) * temp_f14) - temp_f17;
    temp_f15_3 = (M2C_FIELD(arg5, f32 *, 0) * temp_f13) - temp_f17;
    temp_f15_4 = (temp_f16_3 * temp_f6_2) - (temp_f8_2 * temp_f15_3);
    temp_f16_4 = (temp_f7_2 * temp_f15_3) - (temp_f16_3 * temp_f5_2);
    M2C_FIELD(arg6, f32 *, 0x10) = (f32) (temp_f16_4 * temp_f9_2);
    M2C_FIELD(arg6, f32 *, 0x14) = (f32) (temp_f15_4 * temp_f10_2);
    M2C_FIELD(arg6, f32 *, 0xC) = (f32) ((temp_f16_4 - (temp_f16_4 * temp_f4)) + (temp_f15_4 - (temp_f15_4 * temp_f11)) + temp_f17);
    temp_f17_2 = M2C_FIELD(arg3, f32 *, 4) * temp_f12;
    temp_f16_5 = (M2C_FIELD(arg4, f32 *, 4) * temp_f14) - temp_f17_2;
    temp_f15_5 = (M2C_FIELD(arg5, f32 *, 4) * temp_f13) - temp_f17_2;
    temp_f15_6 = (temp_f16_5 * temp_f6_2) - (temp_f8_2 * temp_f15_5);
    temp_f16_6 = (temp_f7_2 * temp_f15_5) - (temp_f16_5 * temp_f5_2);
    M2C_FIELD(arg6, f32 *, 0x20) = (f32) (temp_f15_6 * temp_f10_2);
    M2C_FIELD(arg6, f32 *, 0x1C) = (f32) (temp_f16_6 * temp_f9_2);
    M2C_FIELD(arg6, f32 *, 0x18) = (f32) ((temp_f16_6 - (temp_f16_6 * temp_f4)) + (temp_f15_6 - (temp_f15_6 * temp_f11)) + temp_f17_2);
}
