/* machine draft (m2c), tried by autopilot */
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

s8 func_003D81E8(void *);                           /* extern */
M2C_UNK func_003D88B8(void *, s8);                  /* extern */
s32 func_003F91A8(s32, s32, s64);                   /* extern */
M2C_UNK func_003F931C(s8 *, s32, s64);              /* extern */

s32 func_003D9E30(void *arg0, s8 *arg1, u64 arg2, s32 arg3, s32 arg4, s32 *arg5) {
    s32 temp_4;
    s32 temp_5;
    s32 var_17;
    s32 var_2;
    s64 temp_16;
    s64 temp_6;
    s64 var_16;
    s64 var_6;
    s8 *var_18;
    s8 temp_2;
    u64 var_20;

    var_20 = arg2;
    var_18 = arg1;
    if (arg5 != NULL) {
        *arg5 = 0;
    }
loop_18:
    var_2 = var_18 - arg1;
    if (var_20 != 0) {
        temp_4 = M2C_FIELD(arg0, s32 *, 4);
        temp_6 = M2C_FIELD(arg0, s32 *, 8) - temp_4;
        if (temp_6 <= 0) {
            temp_2 = func_003D81E8(arg0);
            if (temp_2 == -1) {
                if (arg5 != NULL) {
                    *arg5 = (s32) temp_2;
                }
                goto block_23;
            }
            if (temp_2 != arg3) {
                *var_18 = temp_2;
                var_20 -= 1;
                var_18 += 1;
                goto loop_18;
            }
            if (arg4 > 0) {
                *var_18 = temp_2;
                var_18 += 1;
                goto block_23;
            }
            var_2 = var_18 - arg1;
            if (arg4 < 0) {
                func_003D88B8(arg0, temp_2);
block_23:
                var_2 = var_18 - arg1;
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return var_2;
        }
        var_16 = (s64) (temp_6 << 0x20) >> 0x20;
        if ((u32) var_16 >= var_20) {
            var_16 = (s64) (var_20 << 0x20) >> 0x20;
        }
        var_17 = func_003F91A8(temp_4, arg3, var_16);
        temp_5 = M2C_FIELD(arg0, s32 *, 4);
        if (var_17 != 0) {
            var_6 = var_17 - temp_5;
            if (arg4 >= 0) {
                var_6 = (arg4 >= 1) ? (var_6 + 1) : var_6;
                var_17 += 1;
            }
            temp_16 = (s64) (var_6 << 0x20) >> 0x20;
            func_003F931C(var_18, temp_5, temp_16);
            M2C_FIELD(arg0, s32 *, 4) = var_17;
            return (var_18 - arg1) + temp_16;
        }
        var_20 -= var_16;
        func_003F931C(var_18, temp_5, var_16);
        var_18 = &var_18[var_16];
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + var_16);
        goto loop_18;
    }
    return var_2;
}
