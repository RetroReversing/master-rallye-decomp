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

void *func_0027CD58(void *arg0, void *arg1, void *arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    void *temp_2;
    void *temp_3;
    void *temp_7;

    temp_2 = arg1 + 0x144;
    temp_3 = arg1 + 0x180;
    temp_f6 = M2C_FIELD(arg2, f32 *, 8) - M2C_FIELD(temp_2, f32 *, 8);
    temp_7 = arg1 + 0x174;
    sp18 = temp_f6;
    temp_f4 = M2C_FIELD(arg2, f32 *, 4) - M2C_FIELD(temp_2, f32 *, 4);
    temp_f3 = M2C_FIELD(arg2, f32 *, 0) - M2C_FIELD(arg1, f32 *, 0x144);
    temp_f2 = M2C_FIELD(arg1, f32 *, 0x180);
    sp10 = temp_f3;
    sp14 = temp_f4;
    temp_f1 = M2C_FIELD(temp_3, f32 *, 8);
    temp_f0 = M2C_FIELD(temp_3, f32 *, 4);
    temp_f5 = (temp_f1 * temp_f3) - (temp_f2 * temp_f6);
    temp_f2_2 = (temp_f2 * temp_f4) - (temp_f0 * temp_f3);
    temp_f0_2 = (temp_f0 * temp_f6) - (temp_f1 * temp_f4);
    sp4 = temp_f5;
    sp8 = temp_f2_2;
    sp0 = temp_f0_2;
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 0x174) + temp_f0_2);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(temp_7, f32 *, 8) + temp_f2_2);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(temp_7, f32 *, 4) + temp_f5);
    return arg0;
}
