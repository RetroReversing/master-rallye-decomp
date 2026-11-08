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

s32 func_001F0508(s32, s32);                        /* extern */

s32 func_001F07D8(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_16;
    s32 var_17;
    s32 var_18;
    s32 var_5;

    var_18 = 1;
    var_17 = 0;
    if (arg2 > 0) {
        var_16 = arg1;
        var_5 = var_16;
loop_2:
        var_17 += 1;
        var_18 &= func_001F0508(arg0, var_5) != 0;
        var_16 += 0x34;
        if (var_17 < arg2) {
            var_5 = var_16;
            if (var_18 == 1) {
                goto loop_2;
            }
        }
    }
    return var_18;
}
