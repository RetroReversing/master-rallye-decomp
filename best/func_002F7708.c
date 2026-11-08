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

M2C_UNK func_002F7800(void *);                      /* extern */
M2C_UNK func_002F7AE8(void *, void *, void *, void *); /* extern */

void *func_002F7708(void *arg0) {
    void *temp_10;
    void *temp_11;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_8;
    void *temp_9;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_2 = arg0 + 0xC;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_3 = arg0 + 0x18;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    temp_8 = arg0 + 0x24;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    temp_9 = arg0 + 0x40;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    temp_10 = arg0 + 0x4C;
    M2C_FIELD(temp_2, s32 *, 4) = 0;
    temp_11 = arg0 + 0x60;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    temp_2_2 = arg0 + 0x6C;
    M2C_FIELD(temp_3, s32 *, 8) = 0;
    M2C_FIELD(temp_3, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(temp_8, s32 *, 8) = 0;
    M2C_FIELD(temp_8, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(temp_9, s32 *, 8) = 0;
    M2C_FIELD(temp_9, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(temp_10, s32 *, 8) = 0;
    M2C_FIELD(temp_10, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = -1;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(temp_11, s32 *, 8) = 0;
    M2C_FIELD(temp_11, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(temp_2_2, s32 *, 8) = 0;
    M2C_FIELD(temp_2_2, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    func_002F7AE8(temp_8, temp_9, temp_10, temp_11);
    func_002F7800(arg0);
    return arg0;
}
