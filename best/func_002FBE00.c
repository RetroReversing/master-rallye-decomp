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

u16 *func_002FBE00(u16 *arg0, s32 arg1, u16 *arg2) {
    s32 var_5;
    char *var_4;

    var_4 = arg0;
    var_5 = arg1;
    if (var_5 != 0) {
        do {
            var_5 -= 1;
            if (var_4 != NULL) {
                *(u16 *)var_4 = *arg2;
            }
            var_4 += 2;
        } while (var_5 != 0);
    }
    return var_4;
}
