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

void func_00200460(void *arg0, f32 fparg0) {
    s32 sp0;
    s32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f3;
    void *temp_2;
    void *temp_3;

    temp_f12 = -fparg0;
    temp_2 = arg0 + 0xB0;
    temp_f0 = M2C_FIELD(arg0, f32 *, 0xB0) * temp_f12;
    temp_f2 = M2C_FIELD(temp_2, f32 *, 4) * temp_f12;
    sp0 = 0;
    sp4 = 0;
    temp_3 = arg0 + 0xC0;
    sp8 = temp_f12;
    sp10 = temp_f0;
    temp_f3 = M2C_FIELD(temp_2, f32 *, 8) * temp_f12;
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) (M2C_FIELD(arg0, f32 *, 0xC0) + temp_f0);
    sp14 = temp_f2;
    sp18 = temp_f3;
    M2C_FIELD(temp_3, f32 *, 4) = (f32) (M2C_FIELD(temp_3, f32 *, 4) + temp_f2);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) (M2C_FIELD(temp_3, f32 *, 8) + temp_f3);
}
