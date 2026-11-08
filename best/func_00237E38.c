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

s32 func_00234D08(s32, s32);                        /* extern */
M2C_UNK *func_002B1FC0(M2C_UNK);                    /* extern */
M2C_UNK *func_003D2910(M2C_UNK, M2C_UNK *);         /* extern */

s32 func_00237E38(M2C_UNK **arg0, s32 arg1) {
    M2C_UNK *sp0;
    M2C_UNK *sp10;
    M2C_UNK *sp20;
    M2C_UNK *sp30;
    M2C_UNK *temp_2;
    M2C_UNK *temp_3;
    M2C_UNK *temp_3_2;
    M2C_UNK *temp_4;
    M2C_UNK *temp_4_2;
    M2C_UNK *var_2;
    M2C_UNK *var_5_2;
    s32 temp_16;
    s32 var_5;

    temp_2 = *arg0;
    sp0 = temp_2;
    temp_3 = M2C_FIELD(temp_2, M2C_UNK **, 4);
    sp0 = temp_3;
    temp_4 = M2C_FIELD(temp_2, M2C_UNK **, 0);
    var_5 = M2C_FIELD(temp_3, s32 *, 8);
    sp0 = temp_4;
    sp10 = temp_2;
    if (temp_4 != temp_2) {
loop_1:
        temp_16 = M2C_FIELD(sp0, s32 *, 8);
        if ((func_00234D08(var_5, arg1) != 0) && (func_00234D08(temp_16, arg1) != 0)) {
            sp20 = sp0;
            var_5_2 = func_002B1FC0(0xC);
            var_2 = var_5_2 + 8;
            if (var_5_2 == NULL) {
                var_5_2 = func_003D2910(0xC, var_5_2);
                var_2 = var_5_2 + 8;
            }
            if (var_2 != NULL) {
                M2C_FIELD(var_5_2, s32 *, 8) = arg1;
            }
            M2C_FIELD(var_5_2, M2C_UNK **, 0) = sp20;
            M2C_FIELD(var_5_2, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp20, M2C_UNK **, 4);
            *M2C_FIELD(sp20, M2C_UNK **, 4) = var_5_2;
            M2C_FIELD(sp20, M2C_UNK **, 4) = var_5_2;
            sp10 = var_5_2;
            return 1;
        }
        var_5 = temp_16;
        temp_4_2 = *arg0;
        sp30 = sp0;
        temp_3_2 = M2C_FIELD(sp0, M2C_UNK **, 0);
        sp10 = temp_4_2;
        sp0 = temp_3_2;
        if (temp_3_2 == temp_4_2) {
            goto block_9;
        }
        goto loop_1;
    }
block_9:
    return 0;
}
