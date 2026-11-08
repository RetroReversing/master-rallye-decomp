/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

void func_0028BBE8(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 var_f0;
    f32 var_f0_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;

    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        temp_2 = M2C_FIELD(arg1, void **, 0x50);
        temp_3 = arg0 + 0x10;
        temp_2_2 = temp_2 + 0x50;
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(temp_2, f32 *, 0x50);
        M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(temp_2_2, f32 *, 4);
        M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(temp_2_2, f32 *, 8);
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
    } else {
        temp_2_3 = M2C_FIELD(arg1, void **, 0x50);
        temp_3_2 = arg0 + 0x10;
        temp_f2 = M2C_FIELD(temp_2_3, f32 *, 0x50);
        temp_2_4 = temp_2_3 + 0x50;
        sp0 = temp_f2;
        temp_f2_2 = temp_f2 - M2C_FIELD(arg0, f32 *, 0x10);
        temp_f1 = M2C_FIELD(temp_2_4, f32 *, 4);
        sp4 = temp_f1;
        temp_f0 = M2C_FIELD(temp_2_4, f32 *, 8);
        sp8 = temp_f0;
        temp_f1_2 = temp_f1 - M2C_FIELD(temp_3_2, f32 *, 4);
        sp10 = temp_f2_2;
        var_f0 = temp_f0 - M2C_FIELD(temp_3_2, f32 *, 8);
        sp14 = temp_f1_2;
        sp18 = var_f0;
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        if (var_f0 != var_f0) {
            var_f0 = func_003F3E80((temp_f2_2 * temp_f2_2) + (temp_f1_2 * temp_f1_2) + (var_f0 * var_f0));
        }
        if (var_f0 != 0.0f) {
            var_f0_2 = sp18 * sp18;
            temp_f12 = (sp10 * sp10) + (sp14 * sp14) + var_f0_2;
            if (!(temp_f12 <= 1.1920929e-7f)) {
                M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
                if (var_f0_2 != var_f0_2) {
                    var_f0_2 = func_003F3E80(temp_f12);
                }
                temp_f1_3 = 1.0f / var_f0_2;
                sp10 *= temp_f1_3;
                sp18 *= temp_f1_3;
                sp14 *= temp_f1_3;
            } else {
                sp18 = 0.0f;
                sp10 = 0.0f;
                sp14 = 0.0f;
            }
            temp_3_3 = M2C_FIELD(arg1, void **, 0x50);
            temp_2_5 = temp_3_3 + 0x40;
            M2C_FIELD(temp_3_3, f32 *, 0x40) = sp10;
            M2C_FIELD(temp_2_5, f32 *, 4) = sp14;
            M2C_FIELD(temp_2_5, s32 *, 0xC) = 0;
            M2C_FIELD(temp_2_5, f32 *, 8) = sp18;
            M2C_FIELD(arg0, f32 *, 0x10) = sp0;
            M2C_FIELD(temp_3_2, f32 *, 8) = sp8;
            M2C_FIELD(temp_3_2, f32 *, 4) = sp4;
        }
    }
}
