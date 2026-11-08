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

void *func_001DF578(void **arg0, s32 *arg1) {
    s32 var_2;
    void *var_4;

    var_4 = *arg0;
    if (var_4 != NULL) {
        var_2 = M2C_FIELD(var_4, s32 *, 0x20);
loop_2:
        if (var_2 != *arg1) {
            var_4 = M2C_FIELD(var_4, void **, 4);
            if (var_4 != NULL) {
                var_2 = M2C_FIELD(var_4, s32 *, 0x20);
                goto loop_2;
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return NULL;
        }
        return var_4;
    }
    return NULL;
}
