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

extern M2C_UNK D_0040E658;

void **func_002C8950(void **arg0) {
    void *var_3;

    if (M2C_FIELD(&D_0040E658, s32 *, 0xC) == 0) {
        var_3 = &D_0040E658 + 0x10;
        M2C_FIELD(&D_0040E658, s32 *, 8) = (s32) (M2C_FIELD(&D_0040E658, s32 *, 8) + 1);
    } else {
        var_3 = func_00151930(&D_0040E658);
    }
    *arg0 = var_3;
    return arg0;
}
