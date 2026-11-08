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

s32 func_003EF470(s32 *arg0, s32 arg1) {
    s32 *var_4;
    s32 var_3;
    s32 var_6;

    var_4 = arg0;
    var_3 = *var_4;
    var_6 = 0;
loop_3:
    if (var_3 != 0) {
        var_4 += 8;
        if (arg1 == M2C_FIELD(var_4, s32 *, 4)) {
            var_6 = var_3;
        } else {
            var_3 = *var_4;
            goto loop_3;
        }
    }
    return var_6;
}
