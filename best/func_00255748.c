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

s32 func_0024C568(s32, s32);                        /* extern */

s32 func_00255748(s32 arg1, void ***arg2) {
    s32 temp_17;
    s32 var_4;
    void **temp_3;
    void *temp_2;
    void *var_16;

    temp_3 = *arg2;
    temp_2 = *temp_3;
    var_4 = M2C_FIELD(temp_2, s32 *, 8);
    var_16 = M2C_FIELD(temp_2, void **, 0);
    if (var_16 != temp_3) {
loop_2:
        temp_17 = M2C_FIELD(var_16, s32 *, 8);
        if (arg1 != func_0024C568(var_4, temp_17)) {
            var_4 = temp_17;
            var_16 = M2C_FIELD(var_16, void **, 0);
            if (var_16 == *arg2) {
                goto block_7;
            }
            goto loop_2;
        }
        return 1;
    }
block_7:
    return 0;
}
