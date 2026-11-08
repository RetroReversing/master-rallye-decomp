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

s32 func_002ABF20(s32, s32);                        /* extern */
s32 func_002AC4B0(s32, s64);                        /* extern */
s32 func_0040C4D0();                                /* extern */
s32 func_0040C758(s32);                             /* extern */

s32 func_002B9C30(s32 arg0) {
    s32 temp_2;

    temp_2 = func_0040C4D0();
    return (func_002AC4B0(func_002ABF20(arg0, func_0040C758(temp_2)), 0xFF80 << 0x2E) < 0) ? temp_2 : (temp_2 + 1);
}
