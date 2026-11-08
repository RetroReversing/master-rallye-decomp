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

extern M2C_UNK D_00472FE0;

void *func_001B84C0(void *arg0, s32 *arg1) {
    void *temp_3;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00472FE0;
    temp_3 = arg0 + 8;
    temp_6 = arg0 + 0x14;
    temp_7 = arg0 + 0x2C;
    M2C_FIELD(arg0, f32 *, 8) = 5.0f;
    temp_5 = arg0 + 0x20;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *arg1;
    temp_8 = arg0 + 0x38;
    M2C_FIELD(temp_3, f32 *, 8) = 30.0f;
    temp_9 = arg0 + 0x44;
    M2C_FIELD(temp_3, f32 *, 4) = 20.0f;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(temp_6, s32 *, 8) = 0;
    M2C_FIELD(temp_6, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(temp_5, s32 *, 8) = 0;
    M2C_FIELD(temp_5, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_7, s32 *, 8) = 0;
    M2C_FIELD(temp_7, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(temp_8, s32 *, 8) = 0;
    M2C_FIELD(temp_8, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(temp_9, s32 *, 8) = 0;
    M2C_FIELD(temp_9, s32 *, 4) = 0;
    M2C_FIELD(arg0, f32 *, 0x50) = 0.033333335f;
    M2C_FIELD(arg0, f32 *, 0x54) = 0.2f;
    M2C_FIELD(arg0, f32 *, 0x58) = 0.5f;
    M2C_FIELD(arg0, s32 *, 0x5C) = 1;
    return arg0;
}
