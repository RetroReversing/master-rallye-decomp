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

void *func_003E77A0(void *arg1) {
    void *temp_2;
    void *var_3;
    void *var_5;

    var_5 = arg1;
    if (var_5 != NULL) {
        var_3 = M2C_FIELD(var_5, void **, 0xC);
        if (var_3 != NULL) {
loop_3:
            var_5 = var_3;
            if (var_5 != NULL) {
                temp_2 = M2C_FIELD(var_5, void **, 0xC);
                var_3 = temp_2;
                if (temp_2 != NULL) {
                    goto loop_3;
                }
            }
        }
    }
    return var_5;
}
