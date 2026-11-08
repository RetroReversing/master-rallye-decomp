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

s32 func_0030BFA8(void *arg0, s8 *arg1, s32 arg2) {
    s32 temp_2;
    s8 *var_16;
    s8 temp_3;

    temp_2 = arg2 - 1;
    var_16 = arg1;
    if (temp_2 >= 0) {
loop_2:
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 (**)(void *, s8 *, M2C_UNK), 0x54)(arg0 + M2C_FIELD(M2C_FIELD(arg0, void **, 8), s16 *, 0x50), var_16, 1) == 0) {
            *var_16 = 0;
            goto block_10;
        }
        temp_3 = *var_16;
        if (temp_3 == 0xD) {
            *var_16 = 0;
            return 1;
        }
        var_16 = ((temp_3 ^ 0xA) != 0) ? (var_16 + 1) : var_16;
        if (temp_2 >= (var_16 - arg1)) {
            goto loop_2;
        }
        goto block_10;
    }
block_10:
    return 0;
}
