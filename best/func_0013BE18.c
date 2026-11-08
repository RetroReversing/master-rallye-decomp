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

s32 func_00194D58(s32, s32);                        /* extern */
s32 func_00195B58(s32, M2C_UNK);                    /* extern */
s32 func_00196028();                                /* extern */

s32 func_0013BE18(void) {
    s32 temp_2;
    s32 var_16;
    s32 var_17;
    s32 var_2;

    var_17 = 1;
    var_16 = 0;
    do {
        temp_2 = func_00194D58(func_00196028(), var_16);
        var_16 += 1;
        var_17 = ((temp_2 ^ 1) != 0) ? 0 : var_17;
    } while (var_16 < 0x6D);
    if ((var_17 != 0) || (func_00195B58(func_00196028(), 0) != 0) || (var_2 = 0, (func_00195B58(func_00196028(), 6) != 0))) {
        var_2 = 1;
    }
    return var_2;
}
