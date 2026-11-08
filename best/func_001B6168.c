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

void func_001B6168(void *arg0) {
    void *temp_6;
    void *temp_5;
    void *temp_3;
    void *temp_7;

    temp_3 = arg0 + 0x58;
    temp_5 = arg0 + 0x64;
    temp_6 = arg0 + 0x7C;
    temp_7 = arg0 + 0x94;
    M2C_FIELD(arg0, f32 *, 0x34) = 45.0f;
    M2C_FIELD(arg0, f32 *, 0x38) = 120.0f;
    M2C_FIELD(arg0, f32 *, 0x30) = 45.0f;
    M2C_FIELD(arg0, s32 *, 0xA4) = 1;
    M2C_FIELD(arg0, s32 *, 0x3C) = 1;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, f32 *, 0x48) = 1e12f;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, f32 *, 0x58) = 1.0f;
    M2C_FIELD(temp_3, s32 *, 4) = 0;
    M2C_FIELD(temp_3, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(temp_5, s32 *, 8) = 0;
    M2C_FIELD(temp_6, s32 *, 8) = 0;
    M2C_FIELD(temp_5, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(temp_6, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(temp_7, s32 *, 4) = 0;
    M2C_FIELD(temp_7, s32 *, 8) = 0;
    M2C_FIELD(arg0, f32 *, 0xA0) = 0.033333335f;
    M2C_FIELD(arg0, f32 *, 0x54) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0xBC) = 1e12f;
    M2C_FIELD(arg0, f32 *, 0xB4) = 90000.0f;
    M2C_FIELD(arg0, f32 *, 0xA8) = 0.5f;
    M2C_FIELD(arg0, f32 *, 0xAC) = 0.5f;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
}
