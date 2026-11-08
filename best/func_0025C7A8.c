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

s32 func_0024C788(s32);                             /* extern */

s32 func_0025C7A8(void *arg1) {
    void **temp_2;
    void *var_16;

    temp_2 = M2C_FIELD(arg1, void ***, 4);
    var_16 = *temp_2;
    if (var_16 != temp_2) {
loop_2:
        if (func_0024C788(M2C_FIELD(var_16, s32 *, 8)) != 0) {
            var_16 = M2C_FIELD(var_16, void **, 0);
            if (var_16 == M2C_FIELD(arg1, void ***, 4)) {
                /* Duplicate return node #7. Try simplifying control flow for better match */
                return 0;
            }
            goto loop_2;
        }
        return 1;
    }
    return 0;
}
