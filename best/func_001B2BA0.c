/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

f32 func_003F35C8(f32, f32);                        /* extern */
f32 func_003F3E80(f32);                             /* extern */

void func_001B2BA0(void *arg0, void *arg1, void *arg2, s32 arg3) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 var_f0;

    sp10 = 0.0f;
    sp14 = 1.0f;
    sp18 = 0.0f;
    temp_f4 = M2C_FIELD(arg2, f32 *, 4);
    temp_f0 = M2C_FIELD(arg2, f32 *, 8);
    temp_f1 = M2C_FIELD(arg2, f32 *, 0);
    temp_f2 = (temp_f4 * sp18) - (temp_f0 * 1.0f);
    temp_f0_2 = (temp_f0 * sp10) - (temp_f1 * sp18);
    sp0 = temp_f2;
    sp4 = temp_f0_2;
    temp_f1_2 = (temp_f1 * 1.0f) - (temp_f4 * sp10);
    var_f0 = temp_f1_2 * temp_f1_2;
    temp_f12 = (temp_f2 * temp_f2) + (temp_f0_2 * temp_f0_2) + var_f0;
    sp8 = temp_f1_2;
    if (temp_f12 <= 1.1920929e-7f) {
        sp8 = sp18;
        sp0 = sp18;
        sp4 = sp18;
    } else {
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        if (var_f0 != var_f0) {
            var_f0 = func_003F3E80(temp_f12);
        }
        temp_f1_3 = 1.0f / var_f0;
        sp0 *= temp_f1_3;
        sp8 *= temp_f1_3;
        sp4 *= temp_f1_3;
    }
    temp_f1_4 = M2C_FIELD(arg2, f32 *, 0);
    temp_f0_3 = M2C_FIELD(arg2, f32 *, 8);
    temp_f13 = M2C_FIELD(arg2, f32 *, 4);
    temp_f2_2 = M2C_FIELD(arg1, f32 *, 4);
    temp_f12_2 = M2C_FIELD(arg1, f32 *, 0);
    temp_f3 = M2C_FIELD(arg1, f32 *, 8);
    temp_f1_5 = (sp8 * temp_f1_4) - (sp0 * temp_f0_3);
    temp_f0_4 = (sp4 * temp_f0_3) - (sp8 * temp_f13);
    sp14 = temp_f1_5;
    temp_f13_2 = (sp0 * temp_f13) - (sp4 * temp_f1_4);
    sp10 = temp_f0_4;
    sp18 = temp_f13_2;
    temp_f0_5 = func_003F35C8((temp_f12_2 * sp0) + (temp_f2_2 * sp4) + (temp_f3 * sp8), (temp_f12_2 * temp_f0_4) + (temp_f2_2 * temp_f1_5) + (temp_f3 * temp_f13_2));
    M2C_FIELD(arg0, s32 *, 0x24) = arg3;
    M2C_FIELD(arg0, f32 *, 0x20) = temp_f0_5;
}
