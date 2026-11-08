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

s32 func_0026B190(s32 arg0, s32 arg1) {
    char *var_3;
    char *var_5;
    s32 temp_2;
    s32 var_6;

    var_5 = arg1 + 8;
    var_3 = arg0 + 8;
    var_6 = 7;
    do {
        temp_2 = *(s32 *)var_5;
        var_6 -= 1;
        var_5 += 4;
        *(s32 *)var_3 = temp_2;
        var_3 += 4;
    } while (var_6 >= 0);
    return arg0;
}
