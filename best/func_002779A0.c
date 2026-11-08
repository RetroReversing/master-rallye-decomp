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

s32 *func_001C67A0(void *, s32, s32);               /* extern */

s32 func_002779A0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 var_2;
    void *temp_4;

    temp_2 = M2C_FIELD(arg0, s32 *, 0);
    temp_lo = arg1 / temp_2;
    temp_lo_2 = arg2 / temp_2;
    var_2 = 0;
    if (temp_lo >= 0) {
        temp_4 = M2C_FIELD(arg0, void **, 8);
        var_2 = 0;
        if (temp_lo < M2C_FIELD(temp_4, s32 *, 8)) {
            if (temp_lo_2 >= 0) {
                if (temp_lo_2 >= M2C_FIELD(temp_4, s32 *, 0xC)) {
                    return 0;
                }
                var_2 = 1;
                if (*func_001C67A0(temp_4, temp_lo, temp_lo_2) == 0) {
                    var_2 = 0;
                }
                goto block_8;
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return var_2;
        }
    }
block_8:
    return var_2;
}
