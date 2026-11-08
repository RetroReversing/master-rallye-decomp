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

void *func_002612A0(void *arg0, void *arg1, s32 *arg2, s32 *arg3) {
    f32 sp0;
    M2C_UNK32 sp4;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f4;

    temp_f1 = M2C_FIELD(arg1, f32 *, 0xC);
    sp4 = 0;
    temp_f4 = M2C_FIELD(arg1, f32 *, 8) + ((f32) *arg3 * temp_f1);
    temp_f0 = M2C_FIELD(arg1, f32 *, 4) + ((f32) *arg2 * temp_f1);
    M2C_FIELD(arg0, M2C_UNK32 *, 4) = sp4;
    M2C_FIELD(arg0, f32 *, 8) = temp_f4;
    M2C_FIELD(arg0, f32 *, 0) = temp_f0;
    sp0 = temp_f0;
    sp8 = temp_f4;
    return arg0;
}
