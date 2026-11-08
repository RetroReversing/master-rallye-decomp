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
extern M2C_UNK D_004264E8;
extern f32 D_00478464;

void *func_002661E0(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f1;

    temp_f0 = M2C_FIELD(arg1, f32 *, 0);
    temp_f3 = M2C_FIELD(arg1, f32 *, 4);
    temp_f2 = M2C_FIELD(arg1, f32 *, 8);
    temp_f1 = M2C_FIELD(arg1, f32 *, 0xC);
    var_f1 = temp_f1 * temp_f1;
    M2C_ERROR(/* unknown instruction: c1 0xc0044 */);
    if (var_f1 != var_f1) {
        var_f1 = func_003F3E80((temp_f0 * temp_f0) + (temp_f3 * temp_f3) + (temp_f2 * temp_f2) + var_f1);
    }
    if (var_f1 < D_00478464) {
        sp0 = M2C_FIELD(&D_004264E8, f32 *, 0);
        sp4 = M2C_FIELD(&D_004264E8, f32 *, 4);
        sp8 = M2C_FIELD(&D_004264E8, f32 *, 8);
        spC = M2C_FIELD(&D_004264E8, f32 *, 0xC);
    } else {
        temp_f0_2 = 1.0f / var_f1;
        spC = M2C_FIELD(arg1, f32 *, 0xC) * temp_f0_2;
        sp0 = M2C_FIELD(arg1, f32 *, 0) * temp_f0_2;
        sp4 = M2C_FIELD(arg1, f32 *, 4) * temp_f0_2;
        sp8 = M2C_FIELD(arg1, f32 *, 8) * temp_f0_2;
    }
    M2C_FIELD(arg0, f32 *, 0) = sp0;
    M2C_FIELD(arg0, f32 *, 4) = sp4;
    M2C_FIELD(arg0, f32 *, 8) = sp8;
    M2C_FIELD(arg0, f32 *, 0xC) = spC;
    return arg0;
}
