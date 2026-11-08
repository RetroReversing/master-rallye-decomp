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

s32 func_00251898(void ***arg0) {
    s32 var_2;
    void **temp_2;
    void *var_3;

    temp_2 = *arg0;
    var_3 = *temp_2;
    var_2 = 0;
    if (var_3 != temp_2) {
loop_1:
        var_2 = M2C_FIELD(M2C_FIELD(var_3, void **, 8), s32 *, 4);
        if (var_2 == 0) {
            var_3 = M2C_FIELD(var_3, void **, 0);
            if (var_3 == temp_2) {
                var_2 = 0;
            } else {
                goto loop_1;
            }
        }
    }
    return var_2;
}
