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

f32 func_003F3140(f32);                             /* extern */
f32 func_003F33C8(f32);                             /* extern */

void *func_00204E58(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f3;

    temp_f0 = func_003F33C8(M2C_FIELD(arg1, f32 *, 0));
    temp_f0_2 = func_003F3140(temp_f0);
    var_f3 = 1.0f;
    if (!(fabsf(temp_f0_2) < 0.001f)) {
        var_f3 = temp_f0 / temp_f0_2;
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (var_f3 * M2C_FIELD(arg1, f32 *, 0xC));
    M2C_FIELD(arg0, f32 *, 4) = (f32) (var_f3 * M2C_FIELD(arg1, f32 *, 4));
    M2C_FIELD(arg0, f32 *, 8) = (f32) (var_f3 * M2C_FIELD(arg1, f32 *, 8));
    return arg0;
}
