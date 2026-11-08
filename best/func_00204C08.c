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

f32 func_003F3E80(f32, f32, f32);                   /* extern */

s32 func_00204C08(void *arg0, void *arg1, void *arg2, void *arg3) {
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f14;
    f32 temp_f21;
    f32 temp_f23;
    f32 temp_f24;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;
    f32 var_f0;
    f32 var_f20;
    f32 var_f22;
    f32 var_f25;
    s32 var_18;

    temp_f10 = M2C_FIELD(arg0, f32 *, 0);
    var_18 = 1;
    temp_f7 = M2C_FIELD(arg1, f32 *, 0);
    temp_f13 = M2C_FIELD(arg0, f32 *, 4);
    temp_f11 = M2C_FIELD(arg0, f32 *, 8);
    temp_f8 = M2C_FIELD(arg1, f32 *, 4);
    temp_f9 = M2C_FIELD(arg1, f32 *, 8);
    temp_f23 = (temp_f10 * temp_f8) - (temp_f13 * temp_f7);
    temp_f24 = (temp_f11 * temp_f7) - (temp_f10 * temp_f9);
    temp_f12 = temp_f23 * temp_f23;
    temp_f14 = temp_f24 * temp_f24;
    temp_f21 = (temp_f13 * temp_f9) - (temp_f11 * temp_f8);
    temp_f6 = -M2C_FIELD(arg0, f32 *, 0xC);
    temp_f2 = -M2C_FIELD(arg1, f32 *, 0xC);
    temp_f4 = temp_f21 * temp_f21;
    if ((temp_f14 < temp_f12) && (temp_f4 < temp_f12) && (var_f25 = 0.0f, (temp_f12 > 0.0f))) {
        var_f20 = -((temp_f7 * temp_f6) - (temp_f10 * temp_f2)) / temp_f23;
        var_f22 = -((temp_f13 * temp_f2) - (temp_f8 * temp_f6)) / temp_f23;
    } else if (temp_f4 < temp_f14) {
        var_f20 = 0.0f;
        if (temp_f14 > 0.0f) {
            var_f25 = ((temp_f7 * temp_f6) - (temp_f10 * temp_f2)) / temp_f24;
            var_f22 = ((temp_f11 * temp_f2) - (temp_f9 * temp_f6)) / temp_f24;
        } else {
            goto block_8;
        }
    } else {
block_8:
        var_f22 = 0.0f;
        if (temp_f4 > 0.0f) {
            var_f25 = -((temp_f8 * temp_f6) - (temp_f13 * temp_f2)) / temp_f21;
            var_f20 = -((temp_f11 * temp_f2) - (temp_f9 * temp_f6)) / temp_f21;
        } else {
            var_f20 = 0.0f;
            var_18 = 0;
            var_f22 = 0.0f;
            var_f25 = 0.0f;
        }
    }
    var_f0 = temp_f4 + temp_f14;
    M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
    if (var_f0 != var_f0) {
        var_f0 = func_003F3E80(var_f0 + temp_f12, temp_f13, temp_f14);
    }
    M2C_FIELD(arg3, f32 *, 8) = (f32) (temp_f23 / var_f0);
    M2C_FIELD(arg3, f32 *, 0) = (f32) (temp_f21 / var_f0);
    M2C_FIELD(arg3, f32 *, 4) = (f32) (temp_f24 / var_f0);
    M2C_FIELD(arg2, f32 *, 8) = var_f25;
    M2C_FIELD(arg2, f32 *, 0) = var_f22;
    M2C_FIELD(arg2, f32 *, 4) = var_f20;
    return var_18;
}
