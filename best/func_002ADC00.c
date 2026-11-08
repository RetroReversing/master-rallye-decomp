/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

s32 func_002ADC00(u32 arg0, u32 *arg1) {
    s32 var_10;
    s32 var_8;
    u32 *var_6;
    u32 temp_5;
    u32 temp_7;
    void *temp_3;

    var_8 = -1;
    if (arg1 != NULL) {
        var_10 = 0;
        if (*arg1 != 0xFFFFFFFF) {
            var_6 = arg1;
loop_3:
            temp_7 = M2C_FIELD(var_6, u32 *, 0);
            if (arg0 >= temp_7) {
                temp_5 = M2C_FIELD(var_6, u32 *, 4);
                if (arg0 < temp_5) {
                    if ((var_8 == -1) || ((temp_3 = (var_8 * 0xC) + arg1, (((u32) M2C_FIELD(temp_3, u32 *, 4) < temp_5) == 0)) && (temp_7 >= (u32) M2C_FIELD(temp_3, u32 *, 0)))) {
                        var_8 = var_10;
                    }
                    goto block_11;
                }
            }
            if ((var_8 < 0) || (arg0 >= (u32) M2C_FIELD(var_6, u32 *, 0))) {
block_11:
                var_6 += 0xC;
                var_10 += 1;
                if (*var_6 == 0xFFFFFFFF) {

                } else {
                    goto loop_3;
                }
            }
        }
        if (var_8 != -1) {
            return M2C_FIELD(((var_8 * 0xC) + arg1), s32 *, 8);
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
