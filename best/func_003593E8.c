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

void func_003593E8(void *arg0, void *arg1, void *arg2, void *arg3) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f16;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f9;

    temp_f4 = M2C_FIELD(arg0, f32 *, 0);
    temp_f5 = M2C_FIELD(arg0, f32 *, 4);
    temp_f3 = M2C_FIELD(arg1, f32 *, 0) - temp_f4;
    temp_f0 = M2C_FIELD(arg1, f32 *, 4) - temp_f5;
    temp_f1 = M2C_FIELD(arg2, f32 *, 0) - temp_f4;
    temp_f12 = M2C_FIELD(arg2, f32 *, 4) - temp_f5;
    temp_f16 = M2C_FIELD(arg0, f32 *, 8);
    temp_f13 = 1.0f / temp_f5;
    temp_f10 = 1.0f / temp_f4;
    temp_f9 = M2C_FIELD(arg1, f32 *, 8) - temp_f16;
    temp_f11 = M2C_FIELD(arg2, f32 *, 8) - temp_f16;
    temp_f6 = 1.0f / ((temp_f3 * temp_f12) - (temp_f0 * temp_f1));
    temp_f5_2 = temp_f5 * temp_f6;
    temp_f4_2 = temp_f4 * temp_f6;
    temp_f1_2 = (temp_f9 * (temp_f1 * temp_f5_2)) - (temp_f3 * temp_f5_2 * temp_f11);
    temp_f0_2 = (temp_f0 * temp_f4_2 * temp_f11) - (temp_f9 * (temp_f12 * temp_f4_2));
    M2C_FIELD(arg3, f32 *, 8) = (f32) ((temp_f0_2 - (temp_f0_2 * (temp_f10 * 0.0f))) + (temp_f1_2 - (temp_f1_2 * (temp_f13 * 0.0f))) + temp_f16 + (M2C_FIELD(arg3, f32 *, 0) * (temp_f0_2 * -temp_f10)) + (M2C_FIELD(arg3, f32 *, 4) * (temp_f1_2 * -temp_f13)));
}
