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

s32 func_003D0CB0(s32 *arg0, s32 arg1) {
    s32 var_6;
    u32 temp_4;
    u32 temp_5;
    void *temp_3;

    temp_5 = arg1 + 1;
    var_6 = 0;
    temp_3 = *arg0 - 0x10;
    M2C_FIELD(temp_3, s32 *, 0xC) = 0;
    if (((u32) M2C_FIELD(temp_3, u32 *, 8) >= 2U) || (temp_4 = M2C_FIELD(temp_3, u32 *, 4), ((temp_4 < temp_5) != 0)) || ((u32) (((temp_5 > 0xFU) ? temp_5 : 0x10U) * 2) < temp_4)) {
        var_6 = 1;
    }
    return var_6;
}
