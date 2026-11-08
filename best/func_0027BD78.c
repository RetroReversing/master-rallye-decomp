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

f32 func_001CF4C0();                                /* extern */
extern f32 D_00478468;

f32 func_0027BD78(void *arg0) {
    f32 temp_f0;

    temp_f0 = func_001CF4C0();
    if (!(temp_f0 < D_00478468)) {
        M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) / temp_f0);
        M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) / temp_f0);
        M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) / temp_f0);
    } else {
        M2C_FIELD(arg0, f32 *, 8) = 0.0f;
        M2C_FIELD(arg0, f32 *, 0) = 0.0f;
        M2C_FIELD(arg0, f32 *, 4) = 0.0f;
    }
    return temp_f0;
}
