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

s32 func_0024C568(s32, s32);                        /* extern */
M2C_UNK *func_002B1FC0(M2C_UNK);                    /* extern */
M2C_UNK *func_003D2910(M2C_UNK, M2C_UNK *);         /* extern */

s32 func_002557E0(void **arg1, M2C_UNK **arg2) {
    M2C_UNK *sp10;
    M2C_UNK *var_2_2;
    M2C_UNK *var_5;
    s32 temp_18;
    s32 temp_2_2;
    s32 var_2;
    s32 var_4;
    void *temp_2;
    void *var_17;

    temp_2 = *arg1;
    var_17 = M2C_FIELD(temp_2, void **, 0);
    var_4 = M2C_FIELD(M2C_FIELD(temp_2, void **, 4), s32 *, 8);
    if (var_17 != temp_2) {
loop_1:
        temp_18 = M2C_FIELD(var_17, s32 *, 8);
        temp_2_2 = func_0024C568(var_4, temp_18);
        var_2 = 0;
        if (temp_2_2 != 0) {
            sp10 = *arg2;
            var_5 = func_002B1FC0(0xC);
            var_2_2 = var_5 + 8;
            if (var_5 == NULL) {
                var_5 = func_003D2910(0xC, var_5);
                var_2_2 = var_5 + 8;
            }
            if (var_2_2 != NULL) {
                M2C_FIELD(var_5, s32 *, 8) = temp_2_2;
            }
            M2C_FIELD(var_5, M2C_UNK **, 0) = sp10;
            M2C_FIELD(var_5, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp10, M2C_UNK **, 4);
            *M2C_FIELD(sp10, M2C_UNK **, 4) = var_5;
            M2C_FIELD(sp10, M2C_UNK **, 4) = var_5;
            var_17 = M2C_FIELD(var_17, void **, 0);
            var_4 = temp_18;
            if (var_17 == *arg1) {
                goto block_7;
            }
            goto loop_1;
        }
    } else {
block_7:
        var_2 = 1;
    }
    return var_2;
}
