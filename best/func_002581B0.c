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

s32 func_00251830();

s32 func_002581B0(s32 arg0, void **arg1, void ***arg2) {
    s32 var_2;
    void *temp_17;
    void *temp_3;
    void *var_16;
    void *var_18;
    void *var_4;

    temp_3 = *arg1;
    var_18 = **arg2;
    var_16 = M2C_FIELD(temp_3, void **, 0);
    var_4 = M2C_FIELD(M2C_FIELD(temp_3, void **, 4), void **, 8);
    if (var_16 != temp_3) {
loop_1:
        temp_17 = M2C_FIELD(var_16, void **, 8);
        if ((M2C_FIELD(var_4, s32 *, 0x28) != 0) || (M2C_FIELD(temp_17, s32 *, 0x28) != 0) || (var_2 = 0, (func_00251830(M2C_FIELD(var_18, s32 *, 8)) == 0))) {
            var_16 = M2C_FIELD(var_16, void **, 0);
            var_4 = temp_17;
            var_18 = M2C_FIELD(var_18, void **, 0);
            if (var_16 == *arg1) {
                goto block_5;
            }
            goto loop_1;
        }
    } else {
block_5:
        var_2 = 1;
    }
    return var_2;
}
