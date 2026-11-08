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

void ***func_001D6E40();                            /* extern */
f32 func_003F3E80(void *, f32);                     /* extern */

s32 func_00290678(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    s32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 var_f0;
    void **temp_5;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_4;

    temp_5 = *func_001D6E40();
    temp_3 = *temp_5;
    if (M2C_FIELD(temp_3, s32 (**)(void *, void **), 0x124)(temp_5 + M2C_FIELD(temp_3, s16 *, 0x120), temp_5) != 0) {
        temp_3_2 = M2C_FIELD(arg1, void **, 0x50);
        temp_4 = arg0 + 0x24;
        temp_2 = temp_3_2 + 0x50;
        temp_3_3 = arg0 + 0x3C;
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(temp_3_2, f32 *, 0x50);
        M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(temp_2, f32 *, 8);
        M2C_FIELD(temp_4, f32 *, 4) = (f32) (M2C_FIELD(temp_2, f32 *, 4) + M2C_FIELD(arg0, f32 *, 0x20));
        temp_2_2 = M2C_FIELD(arg1, void **, 0x50);
        temp_2_3 = temp_2_2 + 0x40;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(temp_2_2, f32 *, 0x40);
        M2C_FIELD(temp_3_3, f32 *, 4) = (f32) M2C_FIELD(temp_2_3, f32 *, 4);
        M2C_FIELD(temp_3_3, f32 *, 8) = (f32) M2C_FIELD(temp_2_3, f32 *, 8);
        sp0 = 0.0f;
        temp_f4 = M2C_FIELD(arg0, f32 *, 0x3C);
        sp4 = 1.0f;
        sp8 = 0;
        temp_f1 = (temp_f4 * sp0) + M2C_FIELD(temp_3_3, f32 *, 4) + (M2C_FIELD(temp_3_3, f32 *, 8) * sp0);
        temp_f2 = temp_f4 * temp_f1;
        sp10 = temp_f2;
        temp_f3 = M2C_FIELD(temp_3_3, f32 *, 4) * temp_f1;
        sp14 = temp_f3;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (temp_f4 - temp_f2);
        temp_f0 = M2C_FIELD(temp_3_3, f32 *, 8) * temp_f1;
        sp18 = temp_f0;
        temp_f1_2 = M2C_FIELD(temp_3_3, f32 *, 4) - temp_f3;
        M2C_FIELD(temp_3_3, f32 *, 4) = temp_f1_2;
        temp_f2_2 = M2C_FIELD(temp_3_3, f32 *, 8) - temp_f0;
        M2C_FIELD(temp_3_3, f32 *, 8) = temp_f2_2;
        temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x3C);
        var_f0 = (temp_f0_2 * temp_f0_2) + (temp_f1_2 * temp_f1_2);
        temp_f12 = var_f0 + (temp_f2_2 * temp_f2_2);
        if (temp_f12 <= 1.1920929e-7f) {
            M2C_FIELD(arg0, f32 *, 0x3C) = sp0;
            M2C_FIELD(temp_3_3, f32 *, 8) = sp0;
            M2C_FIELD(temp_3_3, f32 *, 4) = sp0;
        } else {
            M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
            if (var_f0 != var_f0) {
                var_f0 = func_003F3E80(temp_4, temp_f12);
            }
            temp_f2_3 = 1.0f / var_f0;
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) * temp_f2_3);
            M2C_FIELD(temp_3_3, f32 *, 4) = (f32) (M2C_FIELD(temp_3_3, f32 *, 4) * temp_f2_3);
            M2C_FIELD(temp_3_3, f32 *, 8) = (f32) (M2C_FIELD(temp_3_3, f32 *, 8) * temp_f2_3);
        }
        temp_3_4 = arg0 + 0x30;
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(temp_3_4, f32 *, 4) = (f32) M2C_FIELD(temp_3_3, f32 *, 4);
        M2C_FIELD(temp_3_4, f32 *, 8) = (f32) M2C_FIELD(temp_3_3, f32 *, 8);
        temp_f3_2 = M2C_FIELD(arg0, f32 *, 0x14);
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) * temp_f3_2);
        M2C_FIELD(temp_3_4, f32 *, 4) = (f32) (M2C_FIELD(temp_3_4, f32 *, 4) * temp_f3_2);
        M2C_FIELD(temp_3_4, f32 *, 8) = (f32) (M2C_FIELD(temp_3_4, f32 *, 8) * temp_f3_2);
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) + M2C_FIELD(arg0, f32 *, 0x24));
        M2C_FIELD(temp_3_4, f32 *, 4) = (f32) (M2C_FIELD(temp_3_4, f32 *, 4) + M2C_FIELD(temp_4, f32 *, 4));
        M2C_FIELD(temp_3_4, f32 *, 8) = (f32) (M2C_FIELD(temp_3_4, f32 *, 8) + M2C_FIELD(temp_4, f32 *, 8));
        return 1;
    }
    return 0;
}
