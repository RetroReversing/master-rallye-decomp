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

M2C_UNK func_003F3E80(void *, void *, void *, f32, f32, f32, f32); /* extern */

void func_0024CFE8(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f15;
    f32 temp_f15_2;
    f32 temp_f1;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f7;
    f32 temp_f9;
    void *temp_2;
    void *temp_4;
    void *temp_5;
    void *temp_6;

    temp_2 = arg1 + 8;
    temp_6 = arg0 + 8;
    temp_f10 = M2C_FIELD(arg1, f32 *, 8);
    temp_f11 = M2C_FIELD(temp_2, f32 *, 4);
    temp_f15 = M2C_FIELD(arg0, f32 *, 8);
    temp_f14 = M2C_FIELD(temp_6, f32 *, 4);
    temp_f9 = M2C_FIELD(temp_2, f32 *, 8);
    temp_f13 = M2C_FIELD(temp_6, f32 *, 8);
    temp_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0xC);
    temp_5 = M2C_FIELD(M2C_FIELD(arg1, void **, 0), void **, 0xC);
    temp_f7 = (temp_f15 * temp_f10) + (temp_f14 * temp_f11) + (temp_f13 * temp_f9);
    temp_f0 = (((M2C_FIELD(temp_4, f32 *, 0) - M2C_FIELD(temp_5, f32 *, 0)) * (temp_f15 - (temp_f10 * temp_f7))) + ((M2C_FIELD(temp_4, f32 *, 4) - M2C_FIELD(temp_5, f32 *, 4)) * (temp_f14 - (temp_f11 * temp_f7))) + ((M2C_FIELD(temp_4, f32 *, 8) - M2C_FIELD(temp_5, f32 *, 8)) * (temp_f13 - (temp_f9 * temp_f7)))) / ((temp_f7 * temp_f7) - 1.0f);
    temp_f13_2 = temp_f13 * temp_f0;
    temp_f15_2 = temp_f15 * temp_f0;
    temp_f14_2 = temp_f14 * temp_f0;
    temp_f1 = ((M2C_FIELD(temp_4, f32 *, 0) - M2C_FIELD(temp_5, f32 *, 0)) * temp_f10) + ((M2C_FIELD(temp_4, f32 *, 4) - M2C_FIELD(temp_5, f32 *, 4)) * temp_f11) + ((M2C_FIELD(temp_4, f32 *, 8) - M2C_FIELD(temp_5, f32 *, 8)) * temp_f9) + (temp_f0 * temp_f7);
    temp_f3 = (M2C_FIELD(temp_4, f32 *, 0) + temp_f15_2) - (M2C_FIELD(temp_5, f32 *, 0) + (temp_f10 * temp_f1));
    temp_f4 = (M2C_FIELD(temp_4, f32 *, 4) + temp_f14_2) - (M2C_FIELD(temp_5, f32 *, 4) + (temp_f11 * temp_f1));
    temp_f5 = (M2C_FIELD(temp_4, f32 *, 8) + temp_f13_2) - (M2C_FIELD(temp_5, f32 *, 8) + (temp_f9 * temp_f1));
    temp_f0_2 = (temp_f3 * temp_f3) + (temp_f4 * temp_f4);
    M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
    if (temp_f0_2 != temp_f0_2) {
        func_003F3E80(temp_4, temp_5, temp_6, temp_f0_2 + (temp_f5 * temp_f5), temp_f13_2, temp_f14_2, temp_f15_2);
    }
}
