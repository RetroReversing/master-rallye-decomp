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

s32 func_00227850(s32);                             /* extern */
s32 func_00227868(s32, s32);                        /* extern */
s32 func_00228F10(M2C_UNK);                         /* extern */
s32 func_00229988(s32, s32, M2C_UNK);               /* extern */
s32 func_00229CF0(s32, s32);                        /* extern */

s32 func_00228C48(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_16;
    s32 temp_2;
    s32 var_18;
    s32 var_19;
    s32 var_20;
    s32 var_2;

    if (func_00228F10(-1) != 0) {
        var_20 = 0;
        var_19 = 0;
        var_18 = 0;
        temp_2 = func_00227850(M2C_FIELD(arg0, s32 *, 4));
        var_2 = 0;
        if (temp_2 > 0) {
loop_6:
            temp_16 = func_00227868(M2C_FIELD(arg0, s32 *, 4), var_18);
            if (arg3 != 0) {
                if ((arg2 == var_18) || (var_2 = 0, (func_00229CF0(temp_16, arg1) == 0))) {
                    if (func_00229988(temp_16, arg1, -1) != 0) {
                        var_20 += 1;
                    } else {
                        goto block_16;
                    }
                    goto block_17;
                }
            } else {
                if (func_00229CF0(temp_16, arg1) == 0) {
                    if (func_00229988(temp_16, arg1, -1) != 0) {
                        var_20 += 1;
                    } else {
block_16:
                        var_19 = (func_00229988(temp_16, arg1, 1) != 0) ? (var_19 + 1) : var_19;
                    }
                }
block_17:
                var_18 += 1;
                if ((var_19 == 0) || (var_2 = 1, (var_20 == 0))) {
                    if (var_18 < temp_2) {
                        goto loop_6;
                    }
                    goto block_22;
                }
            }
        }
    } else {
block_22:
        var_2 = 0;
    }
    return var_2;
}
