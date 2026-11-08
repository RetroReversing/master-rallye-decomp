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

s32 func_002274D0(void *arg0, void *arg1, void *arg2, s32 *arg3) {
    s32 temp_18;
    s32 temp_2;
    s32 var_2;
    s32 var_2_2;

    temp_18 = func_00229988(arg2, arg1, -1);
    temp_2 = func_00229988(arg2, arg1, 1);
    if (temp_18 != 0) {
        var_2 = 1;
        if (temp_2 == 0) {
            var_2_2 = -1;
            goto block_4;
        }
    } else {
        var_2_2 = 1;
        if (temp_2 != 0) {
block_4:
            *arg3 = var_2_2;
        }
        var_2 = 0;
    }
    return var_2;
}
