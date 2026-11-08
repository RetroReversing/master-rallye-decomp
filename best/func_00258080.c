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

s32 func_0024C568(s32, s32);                        /* extern */
s32 func_0024C5B0(s32, s32, s32);                   /* extern */
s32 func_002503D0(s32, s32);                        /* extern */

s32 func_00258080(void **arg1, void **arg2) {
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_18;
    s32 var_18;
    s32 var_19_2;
    s32 var_2;
    s32 var_4;
    void *temp_2;
    void *temp_3;
    void *temp_5;
    void *var_17;
    void *var_17_2;
    void *var_19;
    void *var_20;

    temp_2 = *arg1;
    var_4 = M2C_FIELD(M2C_FIELD(temp_2, void **, 4), s32 *, 8);
    var_17 = M2C_FIELD(temp_2, void **, 0);
    var_19 = M2C_FIELD(*arg2, void **, 0);
    if (var_17 != temp_2) {
loop_2:
        temp_18 = M2C_FIELD(var_17, s32 *, 8);
        temp_16 = M2C_FIELD(var_19, s32 *, 8);
        var_2 = 0;
        if (func_0024C568(var_4, temp_18) == temp_16) {
            var_17 = M2C_FIELD(var_17, void **, 0);
            var_4 = temp_18;
            var_19 = M2C_FIELD(var_19, void **, 0);
            if (var_17 == *arg1) {
                goto block_4;
            }
            goto loop_2;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return var_2;
    }
block_4:
    temp_5 = *arg1;
    temp_3 = *arg2;
    var_18 = M2C_FIELD(M2C_FIELD(temp_5, void **, 4), s32 *, 8);
    var_19_2 = M2C_FIELD(M2C_FIELD(temp_3, void **, 4), s32 *, 8);
    var_17_2 = M2C_FIELD(temp_5, void **, 0);
    var_20 = M2C_FIELD(temp_3, void **, 0);
    if (var_17_2 != temp_5) {
loop_5:
        temp_16_2 = M2C_FIELD(var_20, s32 *, 8);
        if ((func_0024C5B0(var_18, var_19_2, temp_16_2) != 0) && (func_002503D0(var_19_2, var_18) != 0)) {
            if (func_002503D0(temp_16_2, var_18) != 0) {
                var_18 = M2C_FIELD(var_17_2, s32 *, 8);
                var_19_2 = temp_16_2;
                var_17_2 = M2C_FIELD(var_17_2, void **, 0);
                var_20 = M2C_FIELD(var_20, void **, 0);
                if (var_17_2 == *arg1) {
                    goto block_12;
                }
                goto loop_5;
            }
            goto block_10;
        }
block_10:
        return 0;
    }
block_12:
    var_2 = 1;
    return var_2;
}
