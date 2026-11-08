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

M2C_UNK func_002EE830(s32, s32);                    /* extern */

s32 func_002EECA8(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_16;
    s32 var_17;

    var_17 = arg1;
    var_16 = arg0;
    if (var_17 != 0) {
        do {
            if (var_16 != 0) {
                func_002EE830(var_16, arg2);
            }
            var_17 -= 1;
            var_16 += 0xC;
        } while (var_17 != 0);
    }
    return var_16;
}
