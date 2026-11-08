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

void *func_001E3820(s32, s32, s32);                 /* extern */
f32 func_003F2F50(f32);                             /* extern */
f32 func_003F3140(void *, void *, void *, f32);     /* extern */

void func_0014B8B0(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;
    void *temp_16;
    void *temp_17;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_4;
    void *temp_4_2;
    void *temp_5;
    void *temp_6;

    if (M2C_FIELD(arg1, void **, 0x4C) != NULL) {
        temp_2 = func_001E3820(func_001E4280(), arg0 + 0x2C, arg0 + 0x30);
        if (temp_2 != NULL) {
            temp_3 = M2C_FIELD(arg1, void **, 0x4C);
            sp4 = 0.0f;
            temp_2_2 = temp_3 + 0x20;
            sp8 = 0.0f;
            temp_4 = temp_3 + 0x30;
            sp0 = 1.0f;
            temp_5 = temp_3 + 0x40;
            spC = 0.0f;
            temp_6 = temp_3 + 0x50;
            temp_f21 = M2C_FIELD(arg0, f32 *, 0x18);
            M2C_FIELD(temp_3, f32 *, 0x20) = 1.0f;
            M2C_FIELD(temp_2_2, f32 *, 4) = sp4;
            M2C_FIELD(temp_2_2, f32 *, 8) = sp8;
            M2C_FIELD(temp_2_2, f32 *, 0xC) = spC;
            sp0 = 0.0f;
            sp4 = 1.0f;
            sp8 = 0.0f;
            spC = 0.0f;
            M2C_FIELD(temp_3, f32 *, 0x30) = sp0;
            temp_f21_2 = (temp_f21 + (((M2C_FIELD(arg0, f32 *, 0x1C) - temp_f21) / (M2C_FIELD(arg0, f32 *, 0x20) + 1.1920929e-7f)) * (((M2C_FIELD(M2C_FIELD(temp_2, void **, 8), f32 *, 8) + 0.075f) / 1.075f) * M2C_FIELD(arg0, f32 *, 0x24)))) * 0.5f;
            M2C_FIELD(temp_4, f32 *, 4) = sp4;
            M2C_FIELD(temp_4, f32 *, 8) = sp8;
            M2C_FIELD(temp_4, f32 *, 0xC) = spC;
            sp4 = sp0;
            sp8 = 1.0f;
            spC = sp0;
            M2C_FIELD(temp_3, f32 *, 0x40) = sp0;
            M2C_FIELD(temp_5, f32 *, 4) = sp4;
            M2C_FIELD(temp_5, f32 *, 8) = sp8;
            M2C_FIELD(temp_5, f32 *, 0xC) = spC;
            sp4 = sp0;
            sp8 = sp0;
            spC = 1.0f;
            M2C_FIELD(temp_3, f32 *, 0x50) = sp0;
            M2C_FIELD(temp_6, f32 *, 4) = sp4;
            M2C_FIELD(temp_6, f32 *, 8) = sp8;
            M2C_FIELD(temp_6, f32 *, 0xC) = spC;
            temp_16 = M2C_FIELD(arg1, void **, 0x4C);
            sp4 = sp0;
            sp8 = 1.0f;
            temp_17 = temp_16 + 0x20;
            temp_f0 = func_003F3140(temp_4, temp_5, temp_6, temp_f21_2);
            sp10 = temp_f0 * sp0;
            sp14 = temp_f0 * sp4;
            sp18 = temp_f0 * sp8;
            temp_f0_2 = func_003F2F50(temp_f21_2);
            temp_3_2 = temp_16 + 0x30;
            temp_2_3 = temp_16 + 0x40;
            temp_f2 = 2.0f * sp14;
            temp_f5 = 2.0f * sp18;
            sp1C = temp_f0_2;
            temp_f8 = 2.0f * sp10;
            temp_4_2 = temp_16 + 0x50;
            temp_f12 = temp_f2 * sp14;
            temp_f1 = temp_f5 * sp18;
            temp_f11 = temp_f2 * temp_f0_2;
            temp_f10 = temp_f5 * temp_f0_2;
            temp_f2_2 = temp_f2 * sp10;
            temp_f7 = temp_f8 * sp10;
            temp_f9 = temp_f5 * sp10;
            temp_f8_2 = temp_f8 * temp_f0_2;
            temp_f5_2 = temp_f5 * sp14;
            M2C_FIELD(temp_16, f32 *, 0x20) = (f32) (1.0f - (temp_f12 + temp_f1));
            M2C_FIELD(temp_17, f32 *, 4) = (f32) (temp_f2_2 - temp_f10);
            M2C_FIELD(temp_17, f32 *, 0xC) = sp0;
            M2C_FIELD(temp_17, f32 *, 8) = (f32) (temp_f9 + temp_f11);
            M2C_FIELD(temp_16, f32 *, 0x30) = (f32) (temp_f2_2 + temp_f10);
            M2C_FIELD(temp_3_2, f32 *, 0xC) = sp0;
            M2C_FIELD(temp_3_2, f32 *, 8) = (f32) (temp_f5_2 - temp_f8_2);
            M2C_FIELD(temp_3_2, f32 *, 4) = (f32) (1.0f - (temp_f7 + temp_f1));
            M2C_FIELD(temp_16, f32 *, 0x40) = (f32) (temp_f9 - temp_f11);
            M2C_FIELD(temp_2_3, f32 *, 4) = (f32) (temp_f5_2 + temp_f8_2);
            M2C_FIELD(temp_2_3, f32 *, 8) = (f32) (1.0f - (temp_f7 + temp_f12));
            M2C_FIELD(temp_2_3, f32 *, 0xC) = sp0;
            M2C_FIELD(temp_16, f32 *, 0x50) = sp0;
            M2C_FIELD(temp_4_2, f32 *, 0xC) = 1.0f;
            M2C_FIELD(temp_4_2, f32 *, 4) = sp0;
            M2C_FIELD(temp_4_2, f32 *, 8) = sp0;
            sp8 = sp0;
            temp_f0_3 = M2C_FIELD(arg0, f32 *, 0x14);
            temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x10);
            temp_3_3 = M2C_FIELD(arg1, void **, 0x4C);
            sp4 = temp_f0_3;
            sp0 = temp_f1_2;
            temp_2_4 = temp_3_3 + 0x50;
            M2C_FIELD(temp_3_3, f32 *, 0x50) = temp_f1_2;
            M2C_FIELD(temp_2_4, f32 *, 4) = temp_f0_3;
            M2C_FIELD(temp_2_4, f32 *, 0xC) = 1.0f;
            M2C_FIELD(temp_2_4, f32 *, 8) = sp8;
        }
    }
}
