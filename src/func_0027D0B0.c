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

f32 func_0027D0B0(void *arg0) {
    void *temp_2;
    void *temp_3;
    void *temp_5;
    void *temp_6;

    temp_2 = arg0 + 0x104;
    temp_3 = arg0 + 0x11C;
    temp_5 = arg0 + 0x110;
    temp_6 = arg0 + 0x128;
    return ((M2C_FIELD(arg0, f32 *, 0x104) * M2C_FIELD(arg0, f32 *, 0x11C)) + (M2C_FIELD(temp_2, f32 *, 4) * M2C_FIELD(temp_3, f32 *, 4)) + (M2C_FIELD(temp_2, f32 *, 8) * M2C_FIELD(temp_3, f32 *, 8)) + ((M2C_FIELD(arg0, f32 *, 0x110) * M2C_FIELD(arg0, f32 *, 0x128)) + (M2C_FIELD(temp_5, f32 *, 4) * M2C_FIELD(temp_6, f32 *, 4)) + (M2C_FIELD(temp_5, f32 *, 8) * M2C_FIELD(temp_6, f32 *, 8)))) * 0.5f;
}
