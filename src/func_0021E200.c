/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

f32 func_0021E200(f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 var_f0;

    var_f0 = fparg0;
    if (var_f0 < fparg1) {
        return fparg1;
    }
    if (fparg2 < var_f0) {
        var_f0 = fparg2;
    }
    return var_f0;
}
