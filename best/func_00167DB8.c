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

void *func_00168378(s32);                           /* extern */
f32 func_003F3978(f32, f32);                        /* extern */
f32 func_003F3E80(f32);                             /* extern */

f32 func_00167DB8(s32 arg0, void *arg1, void *arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;

    temp_f2 = M2C_FIELD(arg1, f32 *, 0);
    sp4 = 0.0f;
    var_f0 = M2C_FIELD(arg1, f32 *, 8);
    sp0 = temp_f2;
    temp_f12 = (temp_f2 * temp_f2) + sp4 + (var_f0 * var_f0);
    sp8 = var_f0;
    if (temp_f12 <= 1.1920929e-7f) {
        sp8 = sp4;
        sp0 = sp4;
    } else {
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        if (var_f0 != var_f0) {
            var_f0 = func_003F3E80(temp_f12);
        }
        temp_f1 = 1.0f / var_f0;
        sp0 *= temp_f1;
        sp8 *= temp_f1;
        sp4 *= temp_f1;
    }
    temp_f1_2 = M2C_FIELD(arg2, f32 *, 0);
    sp14 = 0.0f;
    var_f0_2 = M2C_FIELD(arg2, f32 *, 8);
    sp10 = temp_f1_2;
    temp_f12_2 = (temp_f1_2 * temp_f1_2) + sp14 + (var_f0_2 * var_f0_2);
    sp18 = var_f0_2;
    if (temp_f12_2 <= 1.1920929e-7f) {
        sp18 = sp14;
        sp10 = sp14;
    } else {
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        if (var_f0_2 != var_f0_2) {
            var_f0_2 = func_003F3E80(temp_f12_2);
        }
        temp_f1_3 = 1.0f / var_f0_2;
        sp10 *= temp_f1_3;
        sp18 *= temp_f1_3;
        sp14 *= temp_f1_3;
    }
    sp24 = 0.0f;
    temp_f3 = -sp0;
    sp20 = sp8;
    sp28 = temp_f3;
    temp_f22 = (sp8 * sp10) + (sp14 * sp24) + (temp_f3 * sp18);
    temp_f21 = fabsf(temp_f22);
    var_f1 = func_003F3978(temp_f21, M2C_FIELD(func_00168378(arg0), f32 *, 0x14));
    if (((sp0 * sp10) + (sp4 * sp14) + (sp8 * sp18)) < sp24) {
        var_f1 += 1.0f;
    }
    if (temp_f22 < sp24) {
        var_f1 = -var_f1;
    }
    return var_f1;
}
