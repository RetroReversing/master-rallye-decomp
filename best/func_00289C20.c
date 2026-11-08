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
void **func_00201350();                             /* extern */
f32 func_003F2F50(f32);                             /* extern */
f32 func_003F3140(f32);                             /* extern */

void func_00289C20(void *arg1) {
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
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;
    f32 var_f1;
    void *temp_16;
    void *temp_17;
    void *temp_18;
    void *temp_20;
    void *temp_21;
    void *temp_2;
    void *temp_2_2;

    temp_20 = *func_00201350();
    sp4 = 0.0f;
    sp8 = 0.0f;
    temp_16 = temp_20 + 0x90;
    spC = 0.0f;
    temp_17 = temp_20 + 0xA0;
    sp0 = 1.0f;
    temp_18 = temp_20 + 0xB0;
    M2C_FIELD(temp_20, f32 *, 0x90) = 1.0f;
    temp_21 = temp_20 + 0xC0;
    M2C_FIELD(temp_16, f32 *, 4) = sp4;
    M2C_FIELD(temp_16, f32 *, 8) = sp8;
    M2C_FIELD(temp_16, f32 *, 0xC) = spC;
    sp0 = 0.0f;
    sp4 = 1.0f;
    sp8 = 0.0f;
    spC = 0.0f;
    M2C_FIELD(temp_20, f32 *, 0xA0) = sp0;
    M2C_FIELD(temp_17, f32 *, 4) = sp4;
    M2C_FIELD(temp_17, f32 *, 8) = sp8;
    M2C_FIELD(temp_17, f32 *, 0xC) = spC;
    sp4 = sp0;
    sp8 = 1.0f;
    spC = sp0;
    M2C_FIELD(temp_20, f32 *, 0xB0) = sp0;
    M2C_FIELD(temp_18, f32 *, 4) = sp4;
    M2C_FIELD(temp_18, f32 *, 8) = sp8;
    M2C_FIELD(temp_18, f32 *, 0xC) = spC;
    sp4 = sp0;
    sp8 = sp0;
    spC = 1.0f;
    M2C_FIELD(temp_20, f32 *, 0xC0) = sp0;
    M2C_FIELD(temp_21, f32 *, 4) = sp4;
    M2C_FIELD(temp_21, f32 *, 8) = sp8;
    M2C_FIELD(temp_21, f32 *, 0xC) = spC;
    sp4 = 1.0f;
    sp8 = sp0;
    temp_f20 = func_0015ACB0() * 0.25f * 0.5f;
    temp_f0 = func_003F3140(temp_f20);
    sp10 = temp_f0 * sp0;
    sp14 = temp_f0 * sp4;
    sp18 = temp_f0 * sp8;
    temp_f0_2 = func_003F2F50(temp_f20);
    temp_f3 = 2.0f * sp14;
    temp_f4 = 2.0f * sp18;
    sp1C = temp_f0_2;
    temp_f8 = 2.0f * sp10;
    temp_f11 = temp_f3 * sp14;
    temp_f2 = temp_f4 * sp18;
    temp_f12 = temp_f3 * temp_f0_2;
    temp_f10 = temp_f4 * temp_f0_2;
    temp_f3_2 = temp_f3 * sp10;
    temp_f7 = temp_f8 * sp10;
    temp_f9 = temp_f4 * sp10;
    temp_f8_2 = temp_f8 * temp_f0_2;
    temp_f4_2 = temp_f4 * sp14;
    M2C_FIELD(temp_20, f32 *, 0x90) = (f32) (1.0f - (temp_f11 + temp_f2));
    M2C_FIELD(temp_16, f32 *, 4) = (f32) (temp_f3_2 - temp_f10);
    M2C_FIELD(temp_16, f32 *, 0xC) = sp0;
    M2C_FIELD(temp_16, f32 *, 8) = (f32) (temp_f9 + temp_f12);
    M2C_FIELD(temp_20, f32 *, 0xA0) = (f32) (temp_f3_2 + temp_f10);
    M2C_FIELD(temp_17, f32 *, 0xC) = sp0;
    M2C_FIELD(temp_17, f32 *, 8) = (f32) (temp_f4_2 - temp_f8_2);
    M2C_FIELD(temp_17, f32 *, 4) = (f32) (1.0f - (temp_f7 + temp_f2));
    M2C_FIELD(temp_20, f32 *, 0xB0) = (f32) (temp_f9 - temp_f12);
    M2C_FIELD(temp_18, f32 *, 4) = (f32) (temp_f4_2 + temp_f8_2);
    M2C_FIELD(temp_18, f32 *, 8) = (f32) (1.0f - (temp_f7 + temp_f11));
    M2C_FIELD(temp_18, f32 *, 0xC) = sp0;
    M2C_FIELD(temp_20, f32 *, 0xC0) = sp0;
    M2C_FIELD(temp_21, f32 *, 4) = sp0;
    M2C_FIELD(temp_21, f32 *, 8) = sp0;
    M2C_FIELD(temp_21, f32 *, 0xC) = 1.0f;
    temp_2 = M2C_FIELD(arg1, void **, 0x50);
    if (temp_2 == NULL) {
        sp4 = sp0;
        sp8 = sp0;
        M2C_FIELD(temp_20, f32 *, 0xC0) = sp0;
        M2C_FIELD(temp_21, f32 *, 4) = sp4;
        var_f1 = sp8;
    } else {
        temp_2_2 = temp_2 + 0x50;
        M2C_FIELD(temp_20, f32 *, 0xC0) = (f32) M2C_FIELD(temp_2, f32 *, 0x50);
        M2C_FIELD(temp_21, f32 *, 4) = (f32) M2C_FIELD(temp_2_2, f32 *, 4);
        var_f1 = M2C_FIELD(temp_2_2, f32 *, 8);
    }
    M2C_FIELD(temp_21, f32 *, 0xC) = 1.0f;
    M2C_FIELD(temp_21, f32 *, 8) = var_f1;
}
