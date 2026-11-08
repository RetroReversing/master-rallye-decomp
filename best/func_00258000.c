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

s32 func_00251830(s32);                             /* extern */

s32 func_00258000(M2C_UNK ***arg1) {
    M2C_UNK **temp_2;
    M2C_UNK *var_16;
    s32 var_2;
    void *var_17;

    temp_2 = *arg1;
    var_16 = *temp_2;
    var_2 = 1;
    if (var_16 != temp_2) {
        var_17 = M2C_FIELD(var_16, void **, 8);
loop_2:
        var_2 = 0;
        if (func_00251830(M2C_FIELD(var_17, s32 *, 0x18)) == 0) {
            var_2 = 0;
            if (func_00251830(M2C_FIELD(var_17, s32 *, 0x1C)) == 0) {
                var_16 = *var_16;
                if (var_16 != *arg1) {
                    var_17 = M2C_FIELD(var_16, void **, 8);
                    goto loop_2;
                }
                var_2 = 1;
            }
        }
    }
    return var_2;
}
