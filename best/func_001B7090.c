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

extern M2C_UNK D_00473050;

void *func_001B7090(void *arg0, s32 *arg1) {
    void *temp_10;
    void *temp_11;
    void *temp_3;
    void *temp_3_2;
    void *temp_6;
    void *temp_9;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00473050;
    temp_3 = arg0 + 8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_6 = arg0 + 0x14;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(temp_3, f32 *, 8) = -10.0f;
    M2C_FIELD(temp_3, f32 *, 4) = 3.0f;
    temp_9 = arg0 + 0x58;
    temp_10 = arg0 + 0x70;
    temp_3_2 = arg0 + 0x88;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    temp_11 = arg0 + 0x94;
    M2C_FIELD(temp_6, f32 *, 8) = 5.0f;
    M2C_FIELD(temp_6, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0x3C;
    M2C_FIELD(arg0, f32 *, 0x40) = 5.0f;
    M2C_FIELD(arg0, f32 *, 0x44) = 2.0f;
    M2C_FIELD(arg0, f32 *, 0x48) = -4.0f;
    M2C_FIELD(arg0, f32 *, 0x4C) = 90.0f;
    M2C_FIELD(arg0, f32 *, 0x50) = 30.0f;
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, f32 *, 0x38) = 2.0f;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, f32 *, 0x58) = 100.0f;
    M2C_FIELD(temp_9, f32 *, 8) = 100.0f;
    M2C_FIELD(temp_9, f32 *, 4) = 100.0f;
    M2C_FIELD(arg0, f32 *, 0x64) = 100.0f;
    M2C_FIELD(arg0, f32 *, 0x68) = 100.0f;
    M2C_FIELD(arg0, f32 *, 0x6C) = 100.0f;
    M2C_FIELD(arg0, f32 *, 0x70) = 100.0f;
    M2C_FIELD(temp_10, f32 *, 8) = 100.0f;
    M2C_FIELD(temp_10, f32 *, 4) = 100.0f;
    M2C_FIELD(arg0, f32 *, 0x7C) = 100.0f;
    M2C_FIELD(arg0, f32 *, 0x80) = 100.0f;
    M2C_FIELD(arg0, f32 *, 0x84) = 100.0f;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(temp_3_2, s32 *, 8) = 0;
    M2C_FIELD(temp_3_2, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(temp_11, s32 *, 8) = 0;
    M2C_FIELD(temp_11, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *arg1;
    return arg0;
}
