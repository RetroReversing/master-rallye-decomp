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

f32 func_001CF4C0(f32 *, f32, f32, f32, f32, M2C_UNK, f32, f32, f32, f32, f32, f32, f32, f32, f32); /* extern */
extern f32 D_00478468;

void *func_00235980(void *arg0, void *arg1, void *arg2) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f15;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f9;
    f32 temp_f9_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;

    temp_3 = arg1 + 8;
    temp_2 = arg2 + 8;
    temp_f10 = M2C_FIELD(temp_2, f32 *, 4);
    temp_f11 = M2C_FIELD(arg2, f32 *, 8);
    temp_f13 = M2C_FIELD(temp_3, f32 *, 4);
    temp_f14 = M2C_FIELD(arg1, f32 *, 8);
    temp_f9 = M2C_FIELD(temp_2, f32 *, 8);
    temp_f12 = M2C_FIELD(temp_3, f32 *, 8);
    temp_2_2 = M2C_FIELD(arg1, void **, 0);
    temp_3_2 = M2C_FIELD(arg2, void **, 0);
    temp_f6 = (temp_f14 * temp_f11) + (temp_f13 * temp_f10) + (temp_f12 * temp_f9);
    temp_f15 = M2C_FIELD(temp_3_2, f32 *, 8);
    temp_f1 = temp_f11 * temp_f6;
    temp_f5 = temp_f10 * temp_f6;
    temp_f2 = temp_f9 * temp_f6;
    temp_f0 = (((M2C_FIELD(temp_2_2, f32 *, 0) - M2C_FIELD(temp_3_2, f32 *, 0)) * (temp_f14 - temp_f1)) + ((M2C_FIELD(temp_2_2, f32 *, 4) - M2C_FIELD(temp_3_2, f32 *, 4)) * (temp_f13 - temp_f5)) + ((M2C_FIELD(temp_2_2, f32 *, 8) - temp_f15) * (temp_f12 - temp_f2))) / ((temp_f6 * temp_f6) - 1.0f);
    temp_f14_2 = temp_f14 * temp_f0;
    temp_f13_2 = temp_f13 * temp_f0;
    temp_f12_2 = temp_f12 * temp_f0;
    temp_f1_2 = ((M2C_FIELD(temp_2_2, f32 *, 0) - M2C_FIELD(temp_3_2, f32 *, 0)) * temp_f11) + ((M2C_FIELD(temp_2_2, f32 *, 4) - M2C_FIELD(temp_3_2, f32 *, 4)) * temp_f10) + ((M2C_FIELD(temp_2_2, f32 *, 8) - M2C_FIELD(temp_3_2, f32 *, 8)) * temp_f9) + (temp_f0 * temp_f6);
    temp_f3 = M2C_FIELD(temp_2_2, f32 *, 8) + temp_f12_2;
    temp_f9_2 = temp_f9 * temp_f1_2;
    temp_f11_2 = temp_f11 * temp_f1_2;
    temp_f10_2 = temp_f10 * temp_f1_2;
    temp_f4 = M2C_FIELD(temp_2_2, f32 *, 0) + temp_f14_2;
    sp38 = temp_f9_2;
    temp_f5_2 = M2C_FIELD(temp_2_2, f32 *, 4) + temp_f13_2;
    sp30 = temp_f11_2;
    sp34 = temp_f10_2;
    temp_f0_2 = M2C_FIELD(temp_3_2, f32 *, 8) + temp_f9_2;
    temp_f1_3 = M2C_FIELD(temp_3_2, f32 *, 0) + temp_f11_2;
    temp_f2_2 = M2C_FIELD(temp_3_2, f32 *, 4) + temp_f10_2;
    sp38 = temp_f0_2 - temp_f3;
    sp30 = temp_f1_3 - temp_f4;
    sp34 = temp_f2_2 - temp_f5_2;
    temp_f0_3 = func_001CF4C0(&sp30, temp_f12_2, temp_f13_2, temp_f14_2, temp_f15, 0x3F800000, temp_f4, temp_f5_2, temp_f3, temp_f1_3, temp_f2_2, temp_f0_2, temp_f1, temp_f5, temp_f2);
    if (temp_f0_3 < D_00478468) {
        sp30 = 0.0f;
        sp34 = 0.0f;
        sp38 = 0.0f;
    } else {
        sp30 /= temp_f0_3;
        sp34 /= temp_f0_3;
        sp38 /= temp_f0_3;
    }
    M2C_FIELD(arg0, f32 *, 0) = sp30;
    M2C_FIELD(arg0, f32 *, 4) = sp34;
    M2C_FIELD(arg0, f32 *, 8) = sp38;
    return arg0;
}
