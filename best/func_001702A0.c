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

f32 func_00171518(s32, f32);                        /* extern */

f32 func_001702A0(void *arg0, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f21;
    f32 temp_f2;
    f32 var_f12;
    f32 var_f20;
    f32 var_f4;

    var_f12 = fparg0;
    if (var_f12 < 0.0f) {
        var_f12 = 0.0f;
    } else if (var_f12 > 1.0f) {
        var_f12 = 1.0f;
    }
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x58);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x28);
    temp_f21 = -(temp_f0 + ((M2C_FIELD(arg0, f32 *, 0x54) - temp_f0) * var_f12)) * temp_f2;
    if (var_f12 < 0.0f) {
        var_f20 = 0.0f;
    } else {
        var_f20 = var_f12;
        if (var_f12 > 1.0f) {
            var_f20 = 1.0f;
        }
    }
    var_f4 = temp_f21;
    temp_f1 = var_f20 * M2C_FIELD(arg0, f32 *, 0x50) * func_00171518(M2C_FIELD(arg0, s32 *, 0x70), temp_f2 / M2C_FIELD(arg0, f32 *, 0x44));
    if (!(M2C_FIELD(arg0, f32 *, 0x44) <= M2C_FIELD(arg0, f32 *, 0x28))) {
        var_f4 += temp_f1;
    }
    return var_f4;
}
