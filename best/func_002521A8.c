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

s32 func_002521A8(void ***arg1) {
    s32 temp_16;
    s32 temp_18;
    s32 temp_3;
    s32 var_19;
    s32 var_21;
    s32 var_2;
    void **temp_2;
    void **temp_3_2;
    void **var_4;
    void *var_17;
    void *var_20;

    temp_2 = *arg1;
    var_20 = *temp_2;
    var_2 = 1;
    if (var_20 != temp_2) {
loop_2:
        var_19 = 0;
        temp_18 = M2C_FIELD(var_20, s32 *, 8);
        var_21 = 0;
        var_17 = **arg1;
        var_4 = *arg1;
        if (var_17 != *arg1) {
loop_4:
            temp_16 = M2C_FIELD(var_17, s32 *, 8);
            if ((temp_18 != temp_16) && (func_0024C568(temp_18, temp_16) != 0)) {
                if (var_19 == 0) {
                    var_21 = func_0024C568(temp_18, temp_16);
                    goto block_10;
                }
                temp_3 = func_0024C568(temp_18, temp_16);
                var_2 = 0;
                if (var_19 < 2) {
                    if (temp_3 != var_21) {
block_10:
                        var_19 += 1;
                        goto block_11;
                    }
                }
            } else {
block_11:
                temp_3_2 = *arg1;
                var_17 = M2C_FIELD(var_17, void **, 0);
                var_4 = temp_3_2;
                if (var_17 == temp_3_2) {
                    goto block_12;
                }
                goto loop_4;
            }
        } else {
block_12:
            var_2 = 0;
            if (var_19 == 2) {
                var_20 = M2C_FIELD(var_20, void **, 0);
                if (var_20 != var_4) {
                    goto loop_2;
                }
                var_2 = 1;
            }
        }
    }
    return var_2;
}
