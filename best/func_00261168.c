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

f32 func_00261168(void *arg0, void *arg1, s32 *arg2, f32 *arg3) {
    f32 temp_f1;

    *arg2 = M2C_BITWISE(s32, M2C_FIELD(arg0, f32 *, 4)) + 1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 8);
    *arg3 = temp_f1;
    return (M2C_FIELD(arg1, f32 *, 8) - temp_f1) / M2C_FIELD(arg0, f32 *, 0xC);
}
