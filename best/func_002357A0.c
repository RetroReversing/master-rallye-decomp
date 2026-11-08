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

M2C_UNK func_003F3E80(f32, f32, f32, f32, M2C_UNK); /* extern */

void func_002357A0(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f15;
    f32 temp_f1;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f9;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;

    temp_3 = arg0 + 8;
    temp_2 = arg1 + 8;
    temp_f11 = M2C_FIELD(temp_2, f32 *, 4);
    temp_f10 = M2C_FIELD(arg1, f32 *, 8);
    temp_f13 = M2C_FIELD(temp_3, f32 *, 4);
    temp_f14 = M2C_FIELD(arg0, f32 *, 8);
    temp_f9 = M2C_FIELD(temp_2, f32 *, 8);
    temp_f12 = M2C_FIELD(temp_3, f32 *, 8);
    temp_2_2 = M2C_FIELD(arg0, void **, 0);
    temp_3_2 = M2C_FIELD(arg1, void **, 0);
    temp_f6 = (temp_f14 * temp_f10) + (temp_f13 * temp_f11) + (temp_f12 * temp_f9);
    temp_f15 = M2C_FIELD(temp_3_2, f32 *, 8);
    temp_f0 = (((M2C_FIELD(temp_2_2, f32 *, 0) - M2C_FIELD(temp_3_2, f32 *, 0)) * (temp_f14 - (temp_f10 * temp_f6))) + ((M2C_FIELD(temp_2_2, f32 *, 4) - M2C_FIELD(temp_3_2, f32 *, 4)) * (temp_f13 - (temp_f11 * temp_f6))) + ((M2C_FIELD(temp_2_2, f32 *, 8) - temp_f15) * (temp_f12 - (temp_f9 * temp_f6)))) / ((temp_f6 * temp_f6) - 1.0f);
    temp_f14_2 = temp_f14 * temp_f0;
    temp_f13_2 = temp_f13 * temp_f0;
    temp_f1 = ((M2C_FIELD(temp_2_2, f32 *, 0) - M2C_FIELD(temp_3_2, f32 *, 0)) * temp_f10) + ((M2C_FIELD(temp_2_2, f32 *, 4) - M2C_FIELD(temp_3_2, f32 *, 4)) * temp_f11) + ((M2C_FIELD(temp_2_2, f32 *, 8) - M2C_FIELD(temp_3_2, f32 *, 8)) * temp_f9) + (temp_f0 * temp_f6);
    temp_f3 = (M2C_FIELD(temp_2_2, f32 *, 0) + temp_f14_2) - (M2C_FIELD(temp_3_2, f32 *, 0) + (temp_f10 * temp_f1));
    temp_f4 = (M2C_FIELD(temp_2_2, f32 *, 4) + temp_f13_2) - (M2C_FIELD(temp_3_2, f32 *, 4) + (temp_f11 * temp_f1));
    temp_f5 = (M2C_FIELD(temp_2_2, f32 *, 8) + (temp_f12 * temp_f0)) - (M2C_FIELD(temp_3_2, f32 *, 8) + (temp_f9 * temp_f1));
    temp_f0_2 = (temp_f3 * temp_f3) + (temp_f4 * temp_f4);
    M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
    if (temp_f0_2 != temp_f0_2) {
        func_003F3E80(temp_f0_2 + (temp_f5 * temp_f5), temp_f13_2, temp_f14_2, temp_f15, 0x3F800000);
    }
}
