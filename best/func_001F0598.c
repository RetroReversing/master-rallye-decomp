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

s32 func_001F0328(s32, s32);                        /* extern */
s32 func_001F03D8(s32, s32);                        /* extern */

s32 func_001F0598(s32 arg0, s32 arg1) {
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_16_3;
    s32 temp_16_4;

    temp_16_2 = func_001F03D8(arg0, arg1);
    temp_16_3 = (temp_16_2 == 0) ? 0 : (func_001F0328(arg0, arg1 + 0xC) != 0);
    temp_16_4 = temp_16_3 & (func_001F03D8(arg0, arg1 + 0x10) != 0);
    temp_16 = temp_16_4 & (func_001F03D8(arg0, arg1 + 0x1C) != 0);
    return temp_16 & (func_001F03D8(arg0, arg1 + 0x28) != 0);
}
