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

s8 *func_003FAF48(s8 *arg0, s8 *arg1) {
    s32 var_7;
    s8 *var_4;
    s8 temp_6;

    var_4 = arg0;
    if (*var_4 == 0) {
        return (*arg1 == 0) ? var_4 : NULL;
    }
loop_3:
    var_7 = 0;
    if (*arg1 != 0) {
        if (*arg1 == *var_4) {
loop_5:
            var_7 += 1;
            temp_6 = *(arg1 + var_7);
            if (temp_6 != 0) {
                if (temp_6 != *(var_4 + var_7)) {
                    goto block_7;
                }
                goto loop_5;
            }
            /* Duplicate return node #2. Try simplifying control flow for better match */
            return var_4;
        }
block_7:
        var_4 += 1;
        if (*var_4 != 0) {
            goto loop_3;
        }
        return NULL;
    }
    return var_4;
}
