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

f32 func_0015ACB0();                                /* extern */
f32 func_00285808(s32, f32);                        /* extern */
f32 func_003F3E80(f32);                             /* extern */

f32 func_00285848(s32 arg0, void *arg1, void *arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f21;
    f32 temp_f2;
    f32 temp_f4;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f20;
    f32 var_f20_2;

    temp_f4 = M2C_FIELD(arg1, f32 *, 0);
    sp4 = 0.0f;
    temp_f2 = M2C_FIELD(arg1, f32 *, 8);
    var_f0 = M2C_FIELD(arg2, f32 *, 0);
    sp18 = M2C_FIELD(arg2, f32 *, 8);
    temp_f12 = (temp_f4 * temp_f4) + sp4 + (temp_f2 * temp_f2);
    sp10 = var_f0;
    sp0 = temp_f4;
    sp8 = temp_f2;
    sp14 = 0.0f;
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
    var_f0_2 = sp18 * sp18;
    temp_f12_2 = (sp10 * sp10) + (sp14 * sp14) + var_f0_2;
    if (!(temp_f12_2 <= 1.1920929e-7f)) {
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        if (var_f0_2 != var_f0_2) {
            var_f0_2 = func_003F3E80(temp_f12_2);
        }
        temp_f1_2 = 1.0f / var_f0_2;
        sp10 *= temp_f1_2;
        sp18 *= temp_f1_2;
        sp14 *= temp_f1_2;
    } else {
        sp10 = 0.0f;
        sp14 = 0.0f;
        sp18 = 0.0f;
    }
    sp24 = 0.0f;
    temp_f0 = -sp8;
    sp28 = sp0;
    sp20 = temp_f0;
    temp_f21 = (temp_f0 * sp10) + (sp14 * sp24) + (sp0 * sp18);
    temp_f1_3 = (sp0 * sp10) - (temp_f0 * sp18);
    sp34 = temp_f1_3;
    sp30 = (sp18 * sp24) - (sp0 * sp14);
    sp38 = (temp_f0 * sp14) - (sp10 * sp24);
    if (sp24 <= temp_f21) {
        if (sp24 <= temp_f1_3) {
            temp_f20 = func_0015ACB0();
            var_f20_2 = (temp_f20 * 0.5f) - func_00285808(arg0, fabsf(temp_f21));
        } else {
            temp_f20_2 = func_0015ACB0();
            var_f20_2 = (temp_f20_2 * 0.5f) + func_00285808(arg0, fabsf(temp_f21));
        }
        var_f20 = -var_f20_2;
    } else if (temp_f1_3 < sp24) {
        temp_f20_3 = func_0015ACB0();
        var_f20 = (temp_f20_3 * 0.5f) + func_00285808(arg0, fabsf(temp_f21));
    } else {
        temp_f20_4 = func_0015ACB0();
        var_f20 = (temp_f20_4 * 0.5f) - func_00285808(arg0, fabsf(temp_f21));
    }
    return var_f20;
}
