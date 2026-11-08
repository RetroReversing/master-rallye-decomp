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

void func_00205580(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f8;
    f32 temp_f9;
    void *temp_2;
    void *temp_3;

    temp_f6 = M2C_FIELD(arg0, f32 *, 8);
    temp_3 = arg1 + 0xC;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xC);
    temp_2 = arg1 + 0x18;
    temp_f2 = M2C_FIELD(arg0, f32 *, 4);
    temp_f0 = 2.0f * temp_f6;
    temp_f5 = M2C_FIELD(arg0, f32 *, 0);
    temp_f3 = 2.0f * temp_f1;
    temp_f7 = 2.0f * temp_f2;
    temp_f12 = temp_f0 * temp_f6;
    temp_f13 = temp_f0 * temp_f5;
    temp_f11 = temp_f3 * temp_f5;
    temp_f1_2 = temp_f3 * temp_f1;
    temp_f0_2 = temp_f0 * temp_f2;
    temp_f8 = temp_f7 * temp_f2;
    temp_f9 = temp_f3 * temp_f2;
    temp_f7_2 = temp_f7 * temp_f5;
    temp_f3_2 = temp_f3 * temp_f6;
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) (temp_f0_2 + temp_f11);
    M2C_FIELD(arg1, f32 *, 0) = (f32) (1.0f - (temp_f12 + temp_f1_2));
    M2C_FIELD(arg1, f32 *, 8) = (f32) (temp_f9 + temp_f13);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (temp_f0_2 - temp_f11);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) (1.0f - (temp_f8 + temp_f1_2));
    M2C_FIELD(temp_3, f32 *, 8) = (f32) (temp_f3_2 - temp_f7_2);
    M2C_FIELD(arg1, f32 *, 0x18) = (f32) (temp_f9 - temp_f13);
    M2C_FIELD(temp_2, f32 *, 4) = (f32) (temp_f3_2 + temp_f7_2);
    M2C_FIELD(temp_2, f32 *, 8) = (f32) (1.0f - (temp_f8 + temp_f12));
}
