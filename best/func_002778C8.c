/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

M2C_UNK func_00277818(void *, s32, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */

void *func_002778C8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_lo;
    s32 temp_lo_2;
    void *temp_2;

    temp_lo = arg2 / 16;
    M2C_FIELD(arg0, s32 *, 0) = 0x10;
    M2C_FIELD(arg0, s32 *, 4) = 0x100;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    temp_lo_2 = arg1 / 16;
    temp_2 = arg0 + 0x10;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    M2C_FIELD(temp_2, s32 *, 4) = 0;
    func_00277818(arg0, ((arg1 % 16) > 0) + temp_lo_2, ((arg2 % 16) > 0) + temp_lo, 0x10, 0x10, temp_lo_2, temp_lo);
    return arg0;
}
