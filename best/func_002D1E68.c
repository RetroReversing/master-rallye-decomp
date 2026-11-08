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

void *func_002D1E68(void *arg0) {
    void *temp_10;
    void *temp_11;
    void *temp_3;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_3 = arg0 + 0x40;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_5 = arg0 + 0x4C;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    temp_6 = arg0 + 0x5C;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    temp_7 = arg0 + 0x68;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    temp_8 = arg0 + 0x74;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    temp_9 = arg0 + 0x80;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    temp_10 = arg0 + 0x8C;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    temp_11 = arg0 + 0x98;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(temp_3, s32 *, 8) = 0;
    M2C_FIELD(temp_3, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(temp_5, s32 *, 8) = 0;
    M2C_FIELD(temp_5, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 1;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(temp_6, s32 *, 8) = 0;
    M2C_FIELD(temp_6, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(temp_7, s32 *, 8) = 0;
    M2C_FIELD(temp_7, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(temp_8, s32 *, 8) = 0;
    M2C_FIELD(temp_8, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(temp_9, s32 *, 8) = 0;
    M2C_FIELD(temp_9, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(temp_10, s32 *, 8) = 0;
    M2C_FIELD(temp_10, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(temp_11, s32 *, 4) = 0;
    M2C_FIELD(temp_11, s32 *, 8) = 0;
    return arg0;
}
