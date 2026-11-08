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

void func_0029DFF0(void *arg0, void *arg1) {
    register void *temp_2_2;
    void *temp_3;
    register void *temp_2;

    temp_2 = M2C_FIELD(arg1, void **, 0x4C);
    temp_3 = arg0 + 0xC;
    temp_2_2 = temp_2 + 0x50;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(temp_2, f32 *, 0x50);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(temp_2_2, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(temp_2_2, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 1;
}
