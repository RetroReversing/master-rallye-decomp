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

s32 func_0024C568(s32, s32);                        /* extern */
s32 func_00255398(M2C_UNK **);                      /* extern */
s32 func_00255748(s32, s32, M2C_UNK **);            /* extern */
M2C_UNK *func_002B1FC0(M2C_UNK);                    /* extern */
M2C_UNK func_002B2028(M2C_UNK *);                   /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */

s32 func_00255020(s32 arg0, M2C_UNK **arg2, M2C_UNK ***arg3, M2C_UNK **arg4) {
    M2C_UNK *sp0;
    M2C_UNK *sp10;
    M2C_UNK *sp20;
    M2C_UNK *sp30;
    s32 sp40;
    M2C_UNK **temp_3_5;
    M2C_UNK **temp_4_2;
    M2C_UNK **temp_7;
    M2C_UNK *temp_16_4;
    M2C_UNK *temp_2;
    M2C_UNK *temp_2_2;
    M2C_UNK *temp_2_3;
    M2C_UNK *temp_2_4;
    M2C_UNK *temp_2_6;
    M2C_UNK *temp_2_7;
    M2C_UNK *temp_2_8;
    M2C_UNK *temp_3;
    M2C_UNK *temp_3_2;
    M2C_UNK *temp_3_3;
    M2C_UNK *temp_3_4;
    M2C_UNK *temp_4;
    M2C_UNK *var_2;
    M2C_UNK *var_2_2;
    M2C_UNK *var_2_3;
    M2C_UNK *var_3;
    M2C_UNK *var_3_2;
    M2C_UNK *var_3_3;
    M2C_UNK *var_4;
    M2C_UNK *var_4_2;
    M2C_UNK *var_4_3;
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_16_3;
    s32 temp_17;
    s32 temp_17_2;
    s32 temp_20;
    s32 temp_20_2;
    s32 temp_20_3;
    s32 temp_2_5;

    if (func_00255398(arg4) != 0) {
        temp_7 = *arg3;
        sp40 = 0;
        var_3 = *temp_7;
        if (var_3 != temp_7) {
            do {
                var_3 = *var_3;
                sp40 += 1;
            } while (var_3 != temp_7);
        }
        temp_3 = *arg4;
        if (sp40 == 0) {
            temp_2 = M2C_FIELD(temp_3, M2C_UNK **, 0);
            sp0 = temp_2;
            temp_20 = M2C_FIELD(temp_2, s32 *, 8);
            sp0 = temp_3;
            temp_2_2 = M2C_FIELD(temp_3, M2C_UNK **, 4);
            sp0 = temp_2_2;
            var_3_2 = **arg2;
            temp_17 = M2C_FIELD(temp_2_2, s32 *, 8);
loop_13:
            sp10 = *arg2;
            sp0 = var_3_2;
            if (var_3_2 == *arg2) {
                goto block_37;
            }
            temp_16 = M2C_FIELD(sp0, s32 *, 8);
            if ((func_0024C568(temp_20, temp_16) != 0) && (func_0024C568(temp_17, temp_16) != 0)) {
                sp30 = *arg4;
                var_4 = func_002B1FC0(0xC);
                var_2 = var_4 + 8;
                if (var_4 == NULL) {
                    var_4 = func_003D2910(0xC);
                    var_2 = var_4 + 8;
                }
                if (var_2 != NULL) {
                    M2C_FIELD(var_4, s32 *, 8) = temp_16;
                }
                M2C_FIELD(var_4, M2C_UNK **, 0) = sp30;
                M2C_FIELD(var_4, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp30, M2C_UNK **, 4);
                *M2C_FIELD(sp30, M2C_UNK **, 4) = var_4;
                M2C_FIELD(sp30, M2C_UNK **, 4) = var_4;
                goto block_34;
            }
            sp20 = sp0;
            var_3_2 = M2C_FIELD(sp0, M2C_UNK **, 0);
            goto loop_13;
        }
        temp_4 = *arg2;
        sp0 = temp_3;
        temp_2_3 = M2C_FIELD(temp_3, M2C_UNK **, 4);
        sp0 = temp_2_3;
        temp_3_2 = *temp_4;
        temp_20_2 = M2C_FIELD(temp_2_3, s32 *, 8);
        sp10 = temp_4;
        sp0 = temp_3_2;
        if (temp_3_2 != temp_4) {
            do {
                temp_16_2 = M2C_FIELD(sp0, s32 *, 8);
                temp_2_5 = func_0024C568(temp_20_2, temp_16_2);
                if (temp_2_5 != 0) {
                    if (func_00255748(arg0, temp_2_5, arg4) == 0) {
                        sp20 = *arg4;
                        var_4_2 = func_002B1FC0(0xC);
                        var_2_2 = var_4_2 + 8;
                        if (var_4_2 == NULL) {
                            var_4_2 = func_003D2910(0xC);
                            var_2_2 = var_4_2 + 8;
                        }
                        if (var_2_2 != NULL) {
                            M2C_FIELD(var_4_2, s32 *, 8) = temp_16_2;
                        }
                        M2C_FIELD(var_4_2, M2C_UNK **, 0) = sp20;
                        M2C_FIELD(var_4_2, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp20, M2C_UNK **, 4);
                        *M2C_FIELD(sp20, M2C_UNK **, 4) = var_4_2;
                        M2C_FIELD(sp20, M2C_UNK **, 4) = var_4_2;
                        sp10 = var_4_2;
                        sp20 = sp0;
                        temp_4_2 = M2C_FIELD(sp0, M2C_UNK ***, 4);
                        temp_3_3 = M2C_FIELD(sp0, M2C_UNK **, 0);
                        *temp_4_2 = temp_3_3;
                        M2C_FIELD(temp_3_3, M2C_UNK ***, 4) = temp_4_2;
                        func_002B2028(sp20);
                        temp_2_6 = *arg2;
                        sp0 = temp_2_6;
                        sp10 = temp_2_6;
                    } else {
                        goto block_24;
                    }
                } else {
block_24:
                    sp20 = sp0;
                    sp10 = sp0;
                    sp0 = M2C_FIELD(sp0, M2C_UNK **, 0);
                }
                temp_2_4 = *arg2;
                sp10 = temp_2_4;
            } while (sp0 != temp_2_4);
        }
        temp_3_4 = *arg4;
        temp_2_7 = M2C_FIELD(temp_3_4, M2C_UNK **, 0);
        sp0 = temp_2_7;
        temp_20_3 = M2C_FIELD(temp_2_7, s32 *, 8);
        sp0 = temp_3_4;
        temp_2_8 = M2C_FIELD(temp_3_4, M2C_UNK **, 4);
        sp0 = temp_2_8;
        var_3_3 = **arg2;
        temp_17_2 = M2C_FIELD(temp_2_8, s32 *, 8);
loop_36:
        sp10 = *arg2;
        sp0 = var_3_3;
        if (var_3_3 == *arg2) {
block_37:
            /* Duplicate return node #38. Try simplifying control flow for better match */
            return 0;
        }
        temp_16_3 = M2C_FIELD(sp0, s32 *, 8);
        if ((func_0024C568(temp_20_3, temp_16_3) != 0) && (func_0024C568(temp_17_2, temp_17_2) != 0)) {
            sp20 = *arg4;
            var_4_3 = func_002B1FC0(0xC);
            var_2_3 = var_4_3 + 8;
            if (var_4_3 == NULL) {
                var_4_3 = func_003D2910(0xC);
                var_2_3 = var_4_3 + 8;
            }
            if (var_2_3 != NULL) {
                M2C_FIELD(var_4_3, s32 *, 8) = temp_16_3;
            }
            M2C_FIELD(var_4_3, M2C_UNK **, 0) = sp20;
            M2C_FIELD(var_4_3, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp20, M2C_UNK **, 4);
            *M2C_FIELD(sp20, M2C_UNK **, 4) = var_4_3;
            M2C_FIELD(sp20, M2C_UNK **, 4) = var_4_3;
            sp10 = var_4_3;
block_34:
            sp20 = sp0;
            temp_16_4 = M2C_FIELD(sp0, M2C_UNK **, 0);
            temp_3_5 = M2C_FIELD(sp0, M2C_UNK ***, 4);
            *temp_3_5 = temp_16_4;
            M2C_FIELD(temp_16_4, M2C_UNK ***, 4) = temp_3_5;
            func_002B2028(sp20);
            sp0 = temp_16_4;
            sp10 = temp_16_4;
            return 1;
        }
        sp20 = sp0;
        var_3_3 = M2C_FIELD(sp0, M2C_UNK **, 0);
        goto loop_36;
    }
    return 0;
}
