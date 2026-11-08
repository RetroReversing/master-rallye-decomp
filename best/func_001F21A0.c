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

s32 func_003FA760(s32, s32);                        /* extern */
s32 func_003FA9B8(s32);                             /* extern */

s32 func_001F21A0(void *arg0, void *arg1) {
    s32 *var_21;
    s32 *var_22;
    s32 temp_3;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_4_5;
    s32 temp_5;
    s32 temp_5_2;
    s32 var_16;
    s32 var_23;
    s32 var_2;
    s32 var_2_2;
    s32 var_2_3;
    s32 var_2_4;
    void *var_18;
    void *var_19;

    var_2_2 = 0;
    temp_5 = M2C_FIELD(arg0, s32 *, 0x54);
    temp_4 = M2C_FIELD(arg1, s32 *, 0x54);
    if ((temp_5 != 0) && (temp_4 != 0)) {
        var_2_2 = func_003FA760(temp_4, temp_5) == 0;
    }
    var_2 = 0;
    if (var_2_2 != 0) {
        var_2 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x48) == M2C_FIELD(arg1, s32 *, 0x48)) {
            var_2 = 0;
            if (M2C_FIELD(arg0, s32 *, 0x4C) == M2C_FIELD(arg1, s32 *, 0x4C)) {
                var_18 = arg1;
                if (M2C_FIELD(arg0, f32 *, 0x50) != M2C_FIELD(arg1, f32 *, 0x50)) {
                    return 0;
                }
                var_19 = arg0;
                var_23 = 0;
                var_22 = var_19 + 0x3C;
                var_21 = var_18 + 0x3C;
loop_9:
                temp_3 = *var_21;
                if (temp_3 != *var_22) {
                    return 0;
                }
                if (temp_3 != 0) {
                    temp_4_2 = M2C_FIELD(var_18, s32 *, 0x10);
                    if (temp_4_2 != 0) {
                        var_16 = func_003FA9B8(temp_4_2);
                    } else {
                        var_16 = 0;
                    }
                    temp_4_3 = M2C_FIELD(var_18, s32 *, 0x10);
                    var_2_3 = 0;
                    if (temp_4_3 != 0) {
                        var_2_3 = func_003FA9B8(temp_4_3);
                    }
                    var_2 = 0;
                    if (var_16 == var_2_3) {
                        temp_4_4 = M2C_FIELD(var_18, s32 *, 0x10);
                        if (temp_4_4 != 0) {
                            var_2 = func_003FA9B8(temp_4_4);
                        }
                        var_2_4 = 0;
                        if (var_2 != 0) {
                            temp_5_2 = M2C_FIELD(var_18, s32 *, 0x10);
                            temp_4_5 = M2C_FIELD(var_19, s32 *, 0x10);
                            if ((temp_5_2 != 0) && (temp_4_5 != 0)) {
                                var_2_4 = (func_003FA760(temp_4_5, temp_5_2) == 0) ? 1 : 0;
                            }
                            var_2 = 0;
                            if (var_2_4 != 0) {
                                goto block_26;
                            }
                            /* Duplicate return node #29. Try simplifying control flow for better match */
                            return var_2;
                        }
block_26:
                        var_2 = 0;
                        if (M2C_FIELD(var_18, s32 *, 4) == M2C_FIELD(var_19, s32 *, 4)) {
                            goto block_27;
                        }
                        /* Duplicate return node #29. Try simplifying control flow for better match */
                        return var_2;
                    }
                    /* Duplicate return node #29. Try simplifying control flow for better match */
                    return var_2;
                }
block_27:
                var_23 += 1;
                var_18 += 0x14;
                var_19 += 0x14;
                var_22 += 4;
                var_21 += 4;
                if (var_23 >= 3) {
                    var_2 = 1;
                    /* Duplicate return node #29. Try simplifying control flow for better match */
                    return var_2;
                }
                goto loop_9;
            }
        }
    }
    return var_2;
}
