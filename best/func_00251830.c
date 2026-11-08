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

s32 func_00251830(void ***arg0) {
    s32 temp_3;
    s32 var_5;
    s32 var_7;
    void **temp_2;
    void *var_4;

    temp_2 = *arg0;
    var_7 = 0;
    var_4 = *temp_2;
    var_5 = 0;
    if (var_4 != temp_2) {
loop_2:
        temp_3 = M2C_FIELD(M2C_FIELD(var_4, void **, 8), s32 *, 4);
        if (temp_3 == 1) {
            var_7 += 1;
        } else {
            var_5 = (~temp_3 == 0) ? (var_5 + 1) : var_5;
        }
        if (var_7 == 0) {
            var_4 = M2C_FIELD(var_4, void **, 0);
            goto block_12;
        }
        if (var_5 == 0) {
            var_4 = M2C_FIELD(var_4, void **, 0);
block_12:
            if (var_4 == temp_2) {
                /* Duplicate return node #13. Try simplifying control flow for better match */
                return 0;
            }
            goto loop_2;
        }
        return 1;
    }
    return 0;
}
