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

M2C_UNK func_002DF260(s32, s32);                    /* extern */

s32 func_0033B328(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_16;
    s32 var_17;

    var_17 = arg0;
    var_16 = arg2;
    if (var_17 != arg1) {
        do {
            if (var_16 != 0) {
                func_002DF260(var_16, var_17);
            }
            var_17 += 0x20;
            var_16 += 0x20;
        } while (var_17 != arg1);
    }
    return var_16;
}
