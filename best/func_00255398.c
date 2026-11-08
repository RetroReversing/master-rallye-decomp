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

s32 func_00255560(s32, s32, M2C_UNK ***, M2C_UNK **, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK *func_002B1FC0(M2C_UNK, M2C_UNK *);         /* extern */
M2C_UNK func_002B2028(M2C_UNK *);                   /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */

s32 func_00255398(s32 arg0, M2C_UNK ***arg1, M2C_UNK **arg2) {
    M2C_UNK *sp0;
    M2C_UNK *sp10;
    M2C_UNK *sp20;
    s32 sp30;
    s32 sp34;
    M2C_UNK **temp_2;
    M2C_UNK **temp_2_2;
    M2C_UNK **temp_3_2;
    M2C_UNK *temp_16_2;
    M2C_UNK *temp_2_3;
    M2C_UNK *temp_2_4;
    M2C_UNK *temp_3;
    M2C_UNK *temp_3_3;
    M2C_UNK *temp_5;
    M2C_UNK *var_2_2;
    M2C_UNK *var_3;
    M2C_UNK *var_3_2;
    M2C_UNK *var_4;
    s32 temp_16;
    s32 var_2;

    temp_2 = *arg1;
    sp30 = 0;
    var_3 = *temp_2;
    if (var_3 != temp_2) {
        do {
            var_3 = *var_3;
            sp30 += 1;
        } while (var_3 != temp_2);
    }
    if (sp30 != 0) {
        temp_5 = *arg2;
        temp_3 = **arg1;
        sp0 = temp_3;
        temp_16 = M2C_FIELD(temp_3, s32 *, 8);
        sp20 = temp_5;
        var_4 = func_002B1FC0(0xC, temp_5);
        var_2_2 = var_4 + 8;
        if (var_4 == NULL) {
            var_4 = func_003D2910(0xC);
            var_2_2 = var_4 + 8;
        }
        if (var_2_2 != NULL) {
            M2C_FIELD(var_4, s32 *, 8) = temp_16;
        }
        M2C_FIELD(var_4, M2C_UNK **, 0) = sp20;
        M2C_FIELD(var_4, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp20, M2C_UNK **, 4);
        *M2C_FIELD(sp20, M2C_UNK **, 4) = var_4;
        M2C_FIELD(sp20, M2C_UNK **, 4) = var_4;
        sp10 = var_4;
        sp20 = sp0;
        temp_16_2 = M2C_FIELD(sp0, M2C_UNK **, 0);
        temp_3_2 = M2C_FIELD(sp0, M2C_UNK ***, 4);
        *temp_3_2 = temp_16_2;
        M2C_FIELD(temp_16_2, M2C_UNK ***, 4) = temp_3_2;
        func_002B2028(sp20);
        sp10 = temp_16_2;
loop_9:
        temp_2_2 = *arg1;
        sp34 = 0;
        var_3_2 = *temp_2_2;
        if (var_3_2 != temp_2_2) {
            do {
                var_3_2 = *var_3_2;
                sp34 += 1;
            } while (var_3_2 != temp_2_2);
        }
        var_2 = 1;
        if (sp34 != 0) {
            temp_3_3 = *arg2;
            sp10 = temp_3_3;
            temp_2_3 = M2C_FIELD(temp_3_3, M2C_UNK **, 4);
            sp10 = temp_2_3;
            if (func_00255560(arg0, M2C_FIELD(temp_2_3, s32 *, 8), arg1, arg2, 1, 0) == 0) {
                temp_2_4 = M2C_FIELD(*arg2, M2C_UNK **, 0);
                sp10 = temp_2_4;
                if (func_00255560(arg0, M2C_FIELD(temp_2_4, s32 *, 8), arg1, arg2, 1, 1) == 0) {
                    goto block_15;
                }
            }
            goto loop_9;
        }
    } else {
block_15:
        var_2 = 0;
    }
    return var_2;
}
