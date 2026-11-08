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

s32 func_00231AA8(s32, s32);                        /* extern */

s32 func_002329D8(void *arg0, s32 arg1) {
    s32 temp_17;
    s32 var_2;
    void **temp_2;
    void *var_16;

    temp_2 = M2C_FIELD(arg0, void ***, 0x14);
    var_16 = *temp_2;
    if (var_16 != temp_2) {
loop_1:
        temp_17 = M2C_FIELD(var_16, s32 *, 8);
        var_2 = temp_17;
        if (func_00231AA8(temp_17, arg1) == 0) {
            var_16 = M2C_FIELD(var_16, void **, 0);
            if (var_16 == M2C_FIELD(arg0, void ***, 0x14)) {
                goto block_3;
            }
            goto loop_1;
        }
    } else {
block_3:
        var_2 = 0;
    }
    return var_2;
}
