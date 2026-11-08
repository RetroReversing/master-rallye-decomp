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

s8 *func_00153AA0(s8 *arg0, s32 arg1, s8 *arg2, s8 (*arg3)(s8)) {
    s8 *var_16;
    s8 *var_17;
    s8 temp_4;

    var_17 = arg2;
    var_16 = arg0;
    if (var_16 != arg1) {
        do {
            temp_4 = *var_16;
            var_16 += 1;
            *var_17 = arg3(temp_4);
            var_17 += 1;
        } while (var_16 != arg1);
    }
    return var_17;
}
