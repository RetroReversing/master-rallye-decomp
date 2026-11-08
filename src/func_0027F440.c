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

f32 func_0027F440(s32 arg0) {
    char *var_4;
    f32 temp_f1;
    s32 var_2;

    var_4 = arg0 + 0x30;
    var_2 = 0x3B;
    do {
        temp_f1 = *(f32 *)var_4;
        var_2 -= 1;
        var_4 += 4;
    } while (var_2 >= 0);
    return temp_f1 / 60.0f;
}
