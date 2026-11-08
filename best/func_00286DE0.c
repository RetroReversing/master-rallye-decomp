/* machine draft (m2c), tried by autopilot */
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

M2C_UNK func_001C4B08(void *, f32 *, void *);       /* extern */
M2C_UNK func_001C4E50(void *);                      /* extern */
M2C_UNK func_00200460(void *, f32);                 /* extern */
void **func_00201350();                             /* extern */
f32 func_003F2F50(f32);                             /* extern */
f32 func_003F3140(f32);                             /* extern */

void func_00286DE0(void *arg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f8_3;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 temp_f9_3;
    void *temp_16;
    void *temp_17;
    void *temp_18;
    void *temp_19;
    void *temp_20;

    temp_17 = *func_00201350();
    sp4 = 0.0f;
    sp8 = 0.0f;
    temp_18 = temp_17 + 0x90;
    spC = 0.0f;
    temp_19 = temp_17 + 0xA0;
    sp0 = 1.0f;
    temp_20 = temp_17 + 0xB0;
    M2C_FIELD(temp_17, f32 *, 0x90) = 1.0f;
    temp_16 = temp_17 + 0xC0;
    M2C_FIELD(temp_18, f32 *, 4) = sp4;
    M2C_FIELD(temp_18, f32 *, 8) = sp8;
    M2C_FIELD(temp_18, f32 *, 0xC) = spC;
    sp0 = 0.0f;
    sp4 = 1.0f;
    temp_f21 = sp0;
    sp8 = 0.0f;
    spC = 0.0f;
    M2C_FIELD(temp_17, f32 *, 0xA0) = temp_f21;
    M2C_FIELD(temp_19, f32 *, 4) = sp4;
    M2C_FIELD(temp_19, f32 *, 8) = sp8;
    M2C_FIELD(temp_19, f32 *, 0xC) = spC;
    sp4 = temp_f21;
    sp8 = 1.0f;
    spC = temp_f21;
    M2C_FIELD(temp_17, f32 *, 0xB0) = temp_f21;
    M2C_FIELD(temp_20, f32 *, 4) = sp4;
    M2C_FIELD(temp_20, f32 *, 8) = sp8;
    M2C_FIELD(temp_20, f32 *, 0xC) = spC;
    sp4 = temp_f21;
    sp8 = temp_f21;
    spC = 1.0f;
    M2C_FIELD(temp_17, f32 *, 0xC0) = temp_f21;
    M2C_FIELD(temp_16, f32 *, 4) = sp4;
    M2C_FIELD(temp_16, f32 *, 8) = sp8;
    M2C_FIELD(temp_16, f32 *, 0xC) = spC;
    M2C_FIELD(temp_17, f32 *, 0xC0) = temp_f21;
    M2C_FIELD(temp_16, f32 *, 4) = temp_f21;
    M2C_FIELD(temp_16, f32 *, 8) = temp_f21;
    sp0 = 1.0f;
    sp4 = temp_f21;
    temp_f20 = M2C_FIELD(arg0, f32 *, 0x14) * 0.5f;
    sp8 = temp_f21;
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
    temp_f8_2 = temp_f8 * temp_f0_2;
    temp_f9 = temp_f4 * sp10;
    temp_f4_2 = temp_f4 * sp14;
    M2C_FIELD(temp_17, f32 *, 0x90) = (f32) (1.0f - (temp_f11 + temp_f2));
    M2C_FIELD(temp_18, f32 *, 0xC) = temp_f21;
    M2C_FIELD(temp_18, f32 *, 4) = (f32) (temp_f3_2 - temp_f10);
    M2C_FIELD(temp_18, f32 *, 8) = (f32) (temp_f9 + temp_f12);
    M2C_FIELD(temp_17, f32 *, 0xA0) = (f32) (temp_f3_2 + temp_f10);
    M2C_FIELD(temp_19, f32 *, 0xC) = temp_f21;
    M2C_FIELD(temp_19, f32 *, 8) = (f32) (temp_f4_2 - temp_f8_2);
    M2C_FIELD(temp_19, f32 *, 4) = (f32) (1.0f - (temp_f7 + temp_f2));
    M2C_FIELD(temp_17, f32 *, 0xB0) = (f32) (temp_f9 - temp_f12);
    M2C_FIELD(temp_20, f32 *, 4) = (f32) (temp_f4_2 + temp_f8_2);
    M2C_FIELD(temp_20, f32 *, 8) = (f32) (1.0f - (temp_f7 + temp_f11));
    M2C_FIELD(temp_20, f32 *, 0xC) = temp_f21;
    M2C_FIELD(temp_17, f32 *, 0xC0) = temp_f21;
    M2C_FIELD(temp_16, f32 *, 0xC) = 1.0f;
    M2C_FIELD(temp_16, f32 *, 4) = temp_f21;
    M2C_FIELD(temp_16, f32 *, 8) = temp_f21;
    sp0 = temp_f21;
    sp4 = 1.0f;
    temp_f20_2 = M2C_FIELD(arg0, f32 *, 0x18) * 0.5f;
    sp8 = temp_f21;
    temp_f0_3 = func_003F3140(temp_f20_2);
    sp10 = temp_f0_3 * sp0;
    sp14 = temp_f0_3 * sp4;
    sp18 = temp_f0_3 * sp8;
    temp_f0_4 = func_003F2F50(temp_f20_2);
    temp_f9_2 = 2.0f * sp10;
    temp_f2_2 = 2.0f * sp14;
    sp1C = temp_f0_4;
    temp_f1 = 2.0f * sp18;
    sp5C = 1.0f;
    temp_f6 = temp_f9_2 * sp10;
    sp58 = temp_f21;
    temp_f4_3 = temp_f2_2 * sp14;
    sp2C = temp_f21;
    temp_f3_3 = temp_f1 * sp18;
    sp3C = temp_f21;
    temp_f10_2 = temp_f1 * temp_f0_4;
    sp4C = temp_f21;
    temp_f9_3 = temp_f9_2 * temp_f0_4;
    sp50 = temp_f21;
    sp54 = temp_f21;
    temp_f0_5 = temp_f2_2 * temp_f0_4;
    temp_f8_3 = temp_f1 * sp10;
    temp_f1_2 = temp_f1 * sp14;
    temp_f2_3 = temp_f2_2 * sp10;
    sp40 = temp_f8_3 - temp_f0_5;
    sp30 = temp_f2_3 + temp_f10_2;
    sp44 = temp_f1_2 + temp_f9_3;
    sp20 = 1.0f - (temp_f4_3 + temp_f3_3);
    sp34 = 1.0f - (temp_f6 + temp_f3_3);
    sp48 = 1.0f - (temp_f6 + temp_f4_3);
    sp24 = temp_f2_3 - temp_f10_2;
    sp28 = temp_f8_3 + temp_f0_5;
    sp38 = temp_f1_2 - temp_f9_3;
    func_001C4B08(temp_18, &sp20, temp_18);
    func_001C4E50(temp_18);
    func_00200460(temp_17, M2C_FIELD(arg0, f32 *, 0x20));
}
