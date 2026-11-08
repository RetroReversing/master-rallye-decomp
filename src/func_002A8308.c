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

void func_002A8308(void *arg0, f32 fparg0) {
    f32 var_f0;

    var_f0 = -1.0f;
    if (fparg0 < -1.0f) {
        /* Duplicate return node #1. Try simplifying control flow for better match */
        M2C_FIELD(arg0, f32 *, 0x40) = var_f0;
        return;
    }
    var_f0 = 1.0f;
    if (!(fparg0 > 1.0f)) {
        M2C_FIELD(arg0, f32 *, 0x40) = fparg0;
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x40) = var_f0;
}
