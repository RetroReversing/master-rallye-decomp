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

s32 func_0024C470(s32, s32);                        /* extern */
s32 func_0024C568(s32, s32);                        /* extern */
s32 func_00255748(s32, s32, M2C_UNK **);            /* extern */
M2C_UNK *func_002B1FC0(M2C_UNK);                    /* extern */
M2C_UNK func_002B2028(M2C_UNK *);                   /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */

s32 func_00255560(s32 arg0, s32 arg1, M2C_UNK **arg2, M2C_UNK **arg3, s32 arg4, s32 arg5) {
    M2C_UNK *sp0;
    M2C_UNK *sp10;
    M2C_UNK *sp20;
    M2C_UNK *sp30;
    M2C_UNK *sp40;
    M2C_UNK **temp_3_2;
    M2C_UNK *temp_16;
    M2C_UNK *temp_2;
    M2C_UNK *temp_3;
    M2C_UNK *temp_3_3;
    M2C_UNK *temp_4;
    M2C_UNK *var_2;
    M2C_UNK *var_2_2;
    M2C_UNK *var_4;
    M2C_UNK *var_4_2;
    s32 temp_17;
    s32 temp_2_2;
    s32 var_16;

    temp_2 = *arg2;
    temp_3 = *temp_2;
    sp10 = temp_2;
    sp0 = temp_3;
    if (temp_3 != temp_2) {
loop_2:
        temp_17 = M2C_FIELD(sp0, s32 *, 8);
        temp_2_2 = func_0024C568(temp_17, arg1);
        if (temp_2_2 != 0) {
            if (func_00255748(arg0, temp_2_2, arg3) == 0) {
                var_16 = 1;
                if (arg4 == 0) {
                    var_16 = (func_0024C470(temp_17, arg1) != 0) ? 0 : 1;
                }
                if (var_16 != 0) {
                    sp20 = sp0;
                    temp_16 = M2C_FIELD(sp0, M2C_UNK **, 0);
                    temp_3_2 = M2C_FIELD(sp0, M2C_UNK ***, 4);
                    *temp_3_2 = temp_16;
                    M2C_FIELD(temp_16, M2C_UNK ***, 4) = temp_3_2;
                    func_002B2028(sp20);
                    sp10 = temp_16;
                    if (arg5 == 0) {
                        sp40 = *arg3;
                        var_4 = func_002B1FC0(0xC);
                        var_2 = var_4 + 8;
                        if (var_4 == NULL) {
                            var_4 = func_003D2910(0xC);
                            var_2 = var_4 + 8;
                        }
                        if (var_2 != NULL) {
                            M2C_FIELD(var_4, s32 *, 8) = temp_17;
                        }
                        M2C_FIELD(var_4, M2C_UNK **, 0) = sp40;
                        M2C_FIELD(var_4, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp40, M2C_UNK **, 4);
                        *M2C_FIELD(sp40, M2C_UNK **, 4) = var_4;
                        M2C_FIELD(sp40, M2C_UNK **, 4) = var_4;
                        sp30 = var_4;
                    } else {
                        sp20 = **arg3;
                        var_4_2 = func_002B1FC0(0xC);
                        var_2_2 = var_4_2 + 8;
                        if (var_4_2 == NULL) {
                            var_4_2 = func_003D2910(0xC);
                            var_2_2 = var_4_2 + 8;
                        }
                        if (var_2_2 != NULL) {
                            M2C_FIELD(var_4_2, s32 *, 8) = temp_17;
                        }
                        M2C_FIELD(var_4_2, M2C_UNK **, 0) = sp20;
                        M2C_FIELD(var_4_2, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp20, M2C_UNK **, 4);
                        *M2C_FIELD(sp20, M2C_UNK **, 4) = var_4_2;
                        M2C_FIELD(sp20, M2C_UNK **, 4) = var_4_2;
                        sp10 = var_4_2;
                    }
                    return 1;
                }
                goto block_19;
            }
            goto block_20;
        }
block_19:
block_20:
        temp_4 = *arg2;
        sp20 = sp0;
        temp_3_3 = M2C_FIELD(sp0, M2C_UNK **, 0);
        sp10 = temp_4;
        sp0 = temp_3_3;
        if (temp_3_3 == temp_4) {
            goto block_21;
        }
        goto loop_2;
    }
block_21:
    return 0;
}
