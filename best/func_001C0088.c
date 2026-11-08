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

s32 func_001C01E8(s32, s32, s32);                   /* extern */
s32 func_001E3598(s32, s32);                        /* extern */
extern M2C_UNK D_0040E708;

s32 func_001C0088(s32 arg0, s32 arg1, s32 arg2) {
    if (func_001E3598(func_001E4280(), arg0 + 0x44) != 0) {
        if (func_001E3650(func_001E4280(), (s32) &D_0040E708) != 2) {
            return -1;
        }
        return ((func_001E3650(func_001E4280(), arg0 + 0x48) ^ 1) == 0) ? arg1 : -1;
    }
    if (func_001E3598(func_001E4280(), arg0 + 0x40) != 0) {
        return -2;
    }
    return (func_001C01E8(arg0, arg1, arg2) == 0) ? arg1 : -3;
}
