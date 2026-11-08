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

f32 func_00178FB8(u32 arg0) {
    switch (arg0) {
    case 0:
        return 0.1f;
    case 2:
        return 1.0f;
    case 1:
        return 0.25f;
    case 4:
        return 0.0f;
    case 3:
        return 0.5f;
    default:
        return 0.0f;
    }
}
