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

f32 func_001B6B38(void *arg0) {
    s32 var_2;

    if (M2C_FIELD(arg0, f32 *, 0x44) != 0.0f) {
        var_2 = 1;
        if (!(M2C_FIELD(arg0, f32 *, 0xD8) < M2C_FIELD(arg0, f32 *, 0x48))) {
            var_2 = 0;
        }
        if ((var_2 != 0) && (M2C_FIELD(arg0, s32 *, 0x50) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x4C) = 1;
        }
        if (M2C_FIELD(arg0, s32 *, 0x4C) != 0) {
            return M2C_FIELD(arg0, f32 *, 0x44);
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return 0.0f;
    }
    return 0.0f;
}
