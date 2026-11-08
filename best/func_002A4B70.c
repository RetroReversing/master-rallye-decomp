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

f32 func_003F3E80(f32);                             /* extern */

void func_002A4B70(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f20;
    s32 var_2;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0);
    temp_f3 = M2C_FIELD(arg0, f32 *, 4);
    temp_f2 = M2C_FIELD(arg0, f32 *, 8);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xC);
    temp_f12 = (temp_f0 * temp_f0) + (temp_f3 * temp_f3) + (temp_f2 * temp_f2) + (temp_f1 * temp_f1);
    if (temp_f12 <= 1.1920929e-7f) {
        M2C_FIELD(arg1, f32 *, 0xC) = 0.0f;
        M2C_FIELD(arg1, f32 *, 0) = 0.0f;
        M2C_FIELD(arg1, f32 *, 4) = 0.0f;
        M2C_FIELD(arg1, f32 *, 8) = 0.0f;
        return;
    }
    var_f20 = 1.0f;
    temp_f1_2 = temp_f12 - 1.0f;
    var_f0 = -0.0000011920929f;
    var_2 = 0;
    if ((var_f0 <= temp_f1_2) && (temp_f1_2 <= 0.0000011920929f)) {
        var_2 = 1;
    }
    if (var_2 == 0) {
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        if (var_f0 != var_f0) {
            var_f0 = func_003F3E80(temp_f12);
        }
        var_f20 = 1.0f / var_f0;
    }
    M2C_FIELD(arg1, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) * var_f20);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) * var_f20);
    M2C_FIELD(arg1, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) * var_f20);
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) (M2C_FIELD(arg0, f32 *, 0xC) * var_f20);
}
