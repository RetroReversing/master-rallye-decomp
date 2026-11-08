/* identical to func_001EAE10 (matched), with its names changed by decompdecomp */
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

s32 func_001D2488();

s32 *func_0026E748(s32 *arg0, s32 arg1, s32 *arg2) {
    char *var_16;
    char *var_17;

    var_17 = arg0;
    var_16 = arg2;
    if (var_17 != arg1) {
        do {
            if (var_16 != NULL) {
                *(s32 *)var_16 = *(s32 *)var_17;
                func_001D2488(var_16 + 4, var_17 + 4);
            }
            var_17 += 8;
            var_16 += 8;
        } while (var_17 != arg1);
    }
    return var_16;
}
