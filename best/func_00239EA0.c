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

s32 func_00239EA0(M2C_UNK ***arg0, M2C_UNK ***arg1, void **arg2, void **arg3) {
    M2C_UNK **temp_2;
    M2C_UNK **temp_2_2;
    M2C_UNK *var_11;
    M2C_UNK *var_8;
    void *var_10;
    void *var_9;

    temp_2 = *arg0;
    var_11 = *temp_2;
    if (var_11 != temp_2) {
        var_10 = M2C_FIELD(var_11, void **, 8);
loop_2:
        if (M2C_FIELD(var_10, s32 *, 0x24) != 0) {
            temp_2_2 = *arg1;
            var_8 = *temp_2_2;
            if (var_8 != temp_2_2) {
                var_9 = M2C_FIELD(var_8, void **, 8);
loop_5:
                if (M2C_FIELD(var_10, s32 *, 0x24) != M2C_FIELD(var_9, s32 *, 0x24)) {
                    var_8 = *var_8;
                    if (var_8 != temp_2_2) {
                        var_9 = M2C_FIELD(var_8, void **, 8);
                        goto loop_5;
                    }
                    goto block_12;
                }
                *arg2 = var_10;
                *arg3 = var_9;
                return 1;
            }
        }
block_12:
        var_11 = *var_11;
        if (var_11 != *arg0) {
            var_10 = M2C_FIELD(var_11, void **, 8);
            goto loop_2;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        *arg2 = NULL;
        *arg3 = NULL;
        return 0;
    }
    *arg2 = NULL;
    *arg3 = NULL;
    return 0;
}
