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

M2C_UNK func_002AEF08(void *, void *);              /* extern */
M2C_UNK func_002AFD28(void *, void *);              /* extern */
M2C_UNK func_002B2028(s32 *);                       /* extern */
M2C_UNK func_003F7300();                            /* extern */

s32 func_002AF008(void *arg0, s32 arg1) {
    s32 *temp_11;
    s32 *var_14;
    s32 temp_16;
    s32 temp_2;
    s32 temp_6;
    s32 temp_6_3;
    s32 temp_7;
    s32 temp_7_2;
    s32 var_10;
    s32 var_10_2;
    s32 var_15;
    s32 var_15_2;
    s32 var_5;
    s32 var_5_2;
    u32 temp_12;
    u32 temp_13;
    u32 temp_14;
    u32 var_12;
    u32 var_4;
    u32 var_4_2;
    void **temp_3;
    void **temp_3_2;
    void **temp_6_2;
    void **temp_6_4;
    void *temp_18;
    void *temp_4;
    void *temp_4_2;
    void *temp_4_3;
    void *temp_4_4;
    void *temp_5;
    void *temp_5_2;
    void *temp_8;
    void *temp_8_2;
    void *temp_9;
    void *temp_9_2;
    void *var_7;
    void *var_7_2;

    temp_16 = M2C_FIELD(arg0, s32 *, 4);
    temp_18 = arg0 + 8;
    if (temp_16 != arg1) {
        func_003F7300();
    }
    func_002AFD28(arg0, temp_18);
    if ((M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(arg0, s32 *, 0xC)) == temp_16) {

    } else {
        func_003F7300();
    }
    temp_11 = M2C_FIELD(arg0, s32 **, 8);
    if (M2C_ERROR(/* Read from unset register $t1 */) != 0) {
        var_15 = (u32) M2C_ERROR(/* Read from unset register $t1 */) < 2U;
        var_4 = M2C_ERROR(/* Read from unset register $t1 */) - 1;
        do {
            var_10 = var_4 * 2;
            temp_14 = var_4;
loop_19:
            if ((u32) (var_10 + 1) < (u32) M2C_ERROR(/* Read from unset register $t1 */)) {
                temp_12 = var_10 + 2;
                temp_7 = var_4 * 8;
                if (temp_12 < (u32) M2C_ERROR(/* Read from unset register $t1 */)) {
                    temp_8 = temp_7 + temp_11;
                    temp_9 = M2C_FIELD(temp_8, void **, 8);
                    temp_6 = M2C_FIELD(temp_9, s32 *, 8);
                    var_5 = var_4 * 4;
                    if ((temp_6 - M2C_FIELD(M2C_FIELD(temp_8, void **, 4), s32 *, 8)) > 0) {
                        temp_3 = var_5 + temp_11;
                        temp_4 = *temp_3;
                        var_7 = temp_7 + temp_11;
                        if ((temp_6 - M2C_FIELD(temp_4, s32 *, 8)) > 0) {
                            *temp_3 = temp_9;
                            M2C_FIELD(temp_8, void **, 8) = temp_4;
                            var_4 = temp_12;
                            goto block_18;
                        }
                        goto block_16;
                    }
                    goto block_15;
                }
                var_5 = var_4 * 4;
block_15:
                var_7 = temp_7 + temp_11;
block_16:
                temp_6_2 = var_5 + temp_11;
                temp_4_2 = M2C_FIELD(var_7, void **, 4);
                temp_5 = *temp_6_2;
                if ((M2C_FIELD(temp_4_2, s32 *, 8) - M2C_FIELD(temp_5, s32 *, 8)) > 0) {
                    *temp_6_2 = temp_4_2;
                    M2C_FIELD(var_7, void **, 4) = temp_5;
                    var_4 = var_10 + 1;
block_18:
                    var_10 = var_4 * 2;
                    goto loop_19;
                }
            }
            var_4 = temp_14 - 1;
        } while (temp_14 != 0);
    } else {
        var_15 = 1;
    }
    if (var_15 == 0) {
        var_14 = ((M2C_ERROR(/* Read from unset register $t1 */) * 4) + temp_11) - 4;
        do {
            temp_13 = M2C_ERROR(/* Read from unset register $t1 */) - 1;
            temp_2 = *temp_11;
            *temp_11 = *var_14;
            *var_14 = temp_2;
            var_4_2 = 0;
            if (temp_13 > 1U) {
                var_10_2 = 0;
                var_15_2 = temp_13 < 2U;
                var_12 = 2;
loop_27:
                temp_7_2 = var_4_2 * 8;
                if (var_12 < temp_13) {
                    temp_8_2 = temp_7_2 + temp_11;
                    temp_9_2 = M2C_FIELD(temp_8_2, void **, 8);
                    temp_6_3 = M2C_FIELD(temp_9_2, s32 *, 8);
                    var_5_2 = var_4_2 * 4;
                    if ((temp_6_3 - M2C_FIELD(M2C_FIELD(temp_8_2, void **, 4), s32 *, 8)) > 0) {
                        temp_3_2 = var_5_2 + temp_11;
                        temp_4_3 = *temp_3_2;
                        var_7_2 = temp_7_2 + temp_11;
                        if ((temp_6_3 - M2C_FIELD(temp_4_3, s32 *, 8)) > 0) {
                            *temp_3_2 = temp_9_2;
                            M2C_FIELD(temp_8_2, void **, 8) = temp_4_3;
                            var_4_2 = var_12;
                            goto block_36;
                        }
                        goto block_34;
                    }
                    goto block_33;
                }
                var_5_2 = var_4_2 * 4;
block_33:
                var_7_2 = temp_7_2 + temp_11;
block_34:
                temp_6_4 = var_5_2 + temp_11;
                temp_4_4 = M2C_FIELD(var_7_2, void **, 4);
                temp_5_2 = *temp_6_4;
                if ((M2C_FIELD(temp_4_4, s32 *, 8) - M2C_FIELD(temp_5_2, s32 *, 8)) > 0) {
                    *temp_6_4 = temp_4_4;
                    M2C_FIELD(var_7_2, void **, 4) = temp_5_2;
                    var_4_2 = var_10_2 + 1;
block_36:
                    var_10_2 = var_4_2 * 2;
                    var_12 = var_10_2 + 2;
                    if ((u32) (var_10_2 + 1) >= temp_13) {

                    } else {
                        goto loop_27;
                    }
                }
            } else {
                var_15_2 = temp_13 < 2U;
            }
            var_14 -= 4;
        } while (var_15_2 == 0);
    }
    func_002AEF08(arg0, temp_18);
    func_002B2028(M2C_FIELD(arg0, s32 **, 8));
    return M2C_FIELD(arg0, s32 *, 0);
}
