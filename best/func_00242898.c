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

s32 func_002429A8(s32, void *, void *);             /* extern */
s32 func_00242A18(s32, void *, void *);             /* extern */
M2C_UNK func_0024C388(void *, s32, s32);            /* extern */

s32 func_00242898(s32 arg0, void *arg1, void *arg2, s32 arg3) {
    s32 temp_2;
    s32 temp_3;
    s32 var_5;
    s32 var_6;

    if (arg1 != arg2) {
        if (func_002429A8(arg0, arg1, arg2) == 1) {
            if (func_00242A18(arg0, arg1, arg2) == 0) {
                var_5 = M2C_FIELD(arg1, s32 *, 0);
                temp_3 = M2C_FIELD(arg2, s32 *, 0);
                if (var_5 == temp_3) {
                    if (arg3 != 0) {
                        var_5 = M2C_FIELD(arg1, s32 *, 4);
                        var_6 = M2C_FIELD(arg2, s32 *, 4);
                        goto block_21;
                    }
                    goto block_22;
                }
                var_6 = M2C_FIELD(arg2, s32 *, 4);
                if (var_5 != var_6) {
                    temp_2 = M2C_FIELD(arg1, s32 *, 4);
                    if (temp_2 == temp_3) {
                        if (arg3 != 0) {
                            goto block_21;
                        }
                        goto block_22;
                    }
                    if (temp_2 == var_6) {
                        if (arg3 == 0) {
                            return 1;
                        }
                        goto block_20;
                    }
                    goto block_23;
                }
                if (arg3 == 0) {
                    return 1;
                }
                var_5 = M2C_FIELD(arg1, s32 *, 4);
block_20:
                var_6 = temp_3;
block_21:
                func_0024C388(arg1, var_5, var_6);
                M2C_FIELD(arg1, s32 *, 0x18) = (s32) M2C_FIELD(arg2, s32 *, 0x18);
                M2C_FIELD(arg1, s32 *, 0x1C) = (s32) M2C_FIELD(arg2, s32 *, 0x1C);
block_22:
                return 1;
            }
            goto block_23;
        }
        /* Duplicate return node #24. Try simplifying control flow for better match */
        return 0;
    }
block_23:
    return 0;
}
