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

void func_001DC2A8(void *arg0, void *arg1, void *arg2) {
    void *temp_2;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f1;
    register void *temp_17;
    f32 temp_f0;
    void *temp_3;

    temp_3 = arg0 + 0x18;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0);
    temp_2 = arg0 + 0x24;
    temp_17 = arg0 + 0xC;
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(temp_2, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x24) - M2C_FIELD(arg0, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0) = temp_f2;
    temp_f0 = M2C_FIELD(temp_2, f32 *, 4) - M2C_FIELD(temp_3, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 4) = temp_f0;
    var_f1 = M2C_FIELD(temp_2, f32 *, 8) - M2C_FIELD(temp_3, f32 *, 8);
    temp_f12 = (temp_f2 * temp_f2) + (temp_f0 * temp_f0) + (var_f1 * var_f1);
    M2C_FIELD(arg0, f32 *, 8) = var_f1;
    if (temp_f12 <= 1.1920929e-7f) {
        M2C_FIELD(arg0, f32 *, 0xC) = 0.0f;
        M2C_FIELD(temp_17, f32 *, 4) = 0.0f;
        M2C_FIELD(temp_17, f32 *, 8) = 0.0f;
        return;
    }
    M2C_ERROR(/* unknown instruction: c1 0xc0044 */);
    if (var_f1 != var_f1) {
        var_f1 = func_003F3E80(temp_f12);
    }
    temp_f2_2 = 1.0f / var_f1;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (M2C_FIELD(arg0, f32 *, 0) * temp_f2_2);
    M2C_FIELD(temp_17, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) * temp_f2_2);
    M2C_FIELD(temp_17, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) * temp_f2_2);
}
