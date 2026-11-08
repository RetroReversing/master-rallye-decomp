/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s32 func_002AFF80();                                /* extern */

s32 func_002B00F0(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 sp0;
    u32 sp4;
    M2C_UNK *var_16;
    s32 temp_17;
    s32 temp_2;
    s32 temp_2_2;
    s32 var_19;
    s32 var_22;
    s32 var_2;
    u32 temp_2_3;
    u32 temp_3;
    void *temp_10;
    void *temp_10_2;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;

    sp0 = arg3;
    var_2 = sp0;
    if (func_002AFF80() == 0) {
        var_19 = 0;
        sp4 = 0;
        if (M2C_FIELD(arg0, u32 *, 0xC) != 0) {
            var_22 = 0;
loop_3:
            if (arg2 != 0) {
                if (((u32) M2C_FIELD((var_22 + M2C_FIELD(arg0, s32 *, 8)), u32 *, 4) >> 0x1E) == 1) {
                    goto block_7;
                }
                goto block_21;
            }
block_7:
            temp_10 = var_22 + M2C_FIELD(arg0, s32 *, 8);
            temp_3 = M2C_FIELD(temp_10, u32 *, 4);
            var_16 = sp0 + (temp_3 & 0x1FFFFFFF);
            if ((temp_3 >> 0x1D) & 1) {
                var_16 = *var_16;
            }
            temp_10_2 = M2C_FIELD(temp_10, void **, 0);
            temp_3_2 = M2C_FIELD(temp_10_2, void **, 4);
            temp_2 = M2C_FIELD(temp_3_2, s32 (**)(void *, void *, s32, M2C_UNK *, s32, s32, void *), 0x14)(temp_10_2 + M2C_FIELD(temp_3_2, s16 *, 0x10), arg1, arg2, var_16, arg4, arg5, temp_10_2);
            if (temp_2 != 0) {
                if (var_19 == 0) {
                    var_19 = temp_2;
                    goto block_20;
                }
                if (var_19 != temp_2) {
                    if (arg4 != 0) {
                        temp_3_3 = M2C_FIELD(arg1, void **, 4);
                        temp_3_4 = M2C_FIELD(arg1, void **, 4);
                        temp_17 = M2C_FIELD(temp_3_3, s32 (**)(void *, s32, M2C_UNK, s32, M2C_UNK, M2C_UNK), 0x14)(arg1 + M2C_FIELD(temp_3_3, s16 *, 0x10), arg4, 1, var_19, 0, 0);
                        temp_2_2 = M2C_FIELD(temp_3_4, s32 (**)(void *, s32, M2C_UNK, s32, M2C_UNK, M2C_UNK), 0x14)(arg1 + M2C_FIELD(temp_3_4, s16 *, 0x10), arg4, 1, temp_2, 0, 0);
                        if (temp_17 == temp_2_2) {
                            return 0;
                        }
                        if (temp_17 != arg5) {
                            var_19 = temp_2;
                            if (temp_2_2 != arg5) {
                                goto block_19;
                            }
                        }
                        goto block_20;
                    }
block_19:
                    return 0;
                }
                goto block_20;
            }
block_20:
block_21:
            temp_2_3 = sp4 + 1;
            sp4 = temp_2_3;
            var_22 += 8;
            if (temp_2_3 >= M2C_FIELD(arg0, u32 *, 0xC)) {
                goto block_22;
            }
            goto loop_3;
        }
block_22:
        var_2 = var_19;
        /* Duplicate return node #23. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
