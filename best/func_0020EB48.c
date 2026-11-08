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

M2C_UNK func_0020EBC8(s32, void *, f32);            /* extern */

void func_0020EB48(void *arg1, void *arg2, void *arg3, void *arg4, s32 arg5) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f7;

    temp_f3 = M2C_FIELD(arg3, f32 *, 8);
    temp_f7 = M2C_FIELD(arg1, f32 *, 0);
    temp_f0 = M2C_FIELD(arg3, f32 *, 0);
    temp_f6 = M2C_FIELD(arg1, f32 *, 8);
    temp_f4 = temp_f3 - M2C_FIELD(arg4, f32 *, 8);
    temp_f0_2 = temp_f0 - M2C_FIELD(arg4, f32 *, 0);
    func_0020EBC8(arg5, arg3, (((temp_f0 - temp_f7) * temp_f4) - (temp_f0_2 * (temp_f3 - temp_f6))) / (((M2C_FIELD(arg2, f32 *, 0) - temp_f7) * temp_f4) - (temp_f0_2 * (M2C_FIELD(arg2, f32 *, 8) - temp_f6))));
}
