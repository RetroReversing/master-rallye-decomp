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
M2C_UNK func_003F96E8(M2C_UNK);                     /* extern */
s32 func_003F96F8();                                /* extern */
extern s32 D_0042FE78;
extern M2C_UNK D_0042FE88;
extern M2C_UNK D_00432E88;
extern f32 D_004A8810;

void func_003B7880(void) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 *var_16;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    s32 temp_2_2;
    s32 temp_3;
    s32 var_16_2;
    s32 var_16_3;
    s32 var_17;
    s32 var_17_2;
    s32 var_17_3;
    void *temp_2;
    void *temp_2_3;

    if (D_0042FE78 == 0) {
        func_003F96E8(0x30FF);
        var_17 = 0x3FF;
        var_16 = &D_004A8810;
        do {
            var_17 -= 1;
            *var_16 = (f32) func_003F96F8() * 4.656613e-10f;
            var_16 += 4;
        } while (var_17 >= 0);
        var_17_2 = 0;
        do {
            var_16_2 = 0;
loop_5:
            temp_f21 = ((f32) func_003F96F8() * 9.313226e-10f) - 1.0f;
            temp_f20 = ((f32) func_003F96F8() * 9.313226e-10f) - 1.0f;
            temp_f0 = (f32) func_003F96F8();
            sp10 = temp_f21;
            sp14 = temp_f20;
            sp0 = temp_f21;
            sp4 = temp_f20;
            var_f0 = (temp_f0 * 9.313226e-10f) - 1.0f;
            sp18 = var_f0;
            sp8 = var_f0;
            M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
            if (var_f0 != var_f0) {
                var_f0 = func_003F3E80((temp_f21 * temp_f21) + (temp_f20 * temp_f20) + (var_f0 * var_f0));
            }
            if (var_f0 <= 1.0f) {
                var_16_2 = 1;
            }
            temp_3 = var_17_2 * 0xC;
            if (var_16_2 == 0) {
                goto loop_5;
            }
            var_17_2 += 1;
            temp_2 = temp_3 + &D_0042FE88;
            M2C_FIELD(temp_2, f32 *, 8) = sp8;
            M2C_FIELD(temp_2, f32 *, 0) = sp0;
            M2C_FIELD(temp_2, f32 *, 4) = sp4;
        } while (var_17_2 < 0x400);
        var_17_3 = 0;
        do {
            var_16_3 = 0;
loop_13:
            temp_f21_2 = ((f32) func_003F96F8() * 9.313226e-10f) - 1.0f;
            temp_f20_2 = ((f32) func_003F96F8() * 9.313226e-10f) - 1.0f;
            temp_f0_2 = (f32) func_003F96F8();
            sp20 = temp_f21_2;
            sp24 = temp_f20_2;
            sp0 = temp_f21_2;
            sp4 = temp_f20_2;
            var_f0_2 = (temp_f0_2 * 9.313226e-10f) - 1.0f;
            sp28 = var_f0_2;
            sp8 = var_f0_2;
            M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
            if (var_f0_2 != var_f0_2) {
                var_f0_2 = func_003F3E80((temp_f21_2 * temp_f21_2) + (temp_f20_2 * temp_f20_2) + (var_f0_2 * var_f0_2));
            }
            if (var_f0_2 <= 1.0f) {
                var_16_3 = 1;
            }
            if (var_16_3 == 0) {
                goto loop_13;
            }
            var_f0_3 = (sp0 * sp0) + (sp4 * sp4);
            temp_f12 = var_f0_3 + (sp8 * sp8);
            if (!(temp_f12 <= 1.1920929e-7f)) {
                M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
                if (var_f0_3 != var_f0_3) {
                    var_f0_3 = func_003F3E80(temp_f12);
                }
                temp_f1 = 1.0f / var_f0_3;
                sp0 *= temp_f1;
                sp8 *= temp_f1;
                sp4 *= temp_f1;
            } else {
                sp0 = 0.0f;
                sp4 = 0.0f;
                sp8 = 0.0f;
            }
            temp_2_2 = var_17_3 * 0xC;
            var_17_3 += 1;
            temp_2_3 = temp_2_2 + &D_00432E88;
            M2C_FIELD(temp_2_3, f32 *, 0) = sp0;
            M2C_FIELD(temp_2_3, f32 *, 4) = sp4;
            M2C_FIELD(temp_2_3, f32 *, 8) = sp8;
        } while (var_17_3 < 0x400);
    }
}
