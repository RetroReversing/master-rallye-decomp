/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

s32 func_002B1FC0(s32);                             /* extern */
s32 func_002BA330(s32, s32, s32, s32);              /* extern */

s32 func_002BA390(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_16;
    s32 temp_2;
    s32 var_2;

    var_2 = func_002BA330(0, 0, arg1, arg2);
    temp_16 = var_2 + 1;
    if (var_2 > 0) {
        temp_2 = func_002B1FC0(temp_16);
        *arg0 = temp_2;
        if (temp_2 != 0) {
            return func_002BA330(temp_2, temp_16, arg1, arg2);
        }
        var_2 = -1;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
