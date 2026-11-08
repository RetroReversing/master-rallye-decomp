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

M2C_UNK func_001C4B08(void *, f32 *, void *);       /* extern */
M2C_UNK func_001C4E50(void *);                      /* extern */
void **func_001D6DF8(s32, M2C_UNK);                 /* extern */
s32 func_001D6E40();                                /* extern */
M2C_UNK func_00200460(void *, f32);                 /* extern */
void **func_00201350();                             /* extern */
M2C_UNK func_002877C8(void *);                      /* extern */
f32 func_003F2F50(f32);                             /* extern */
f32 func_003F3140(f32);                             /* extern */

void func_002872E8(void *arg0, void *arg1) {
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
    f32 temp_f5;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f8_3;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 temp_f9_3;
    f32 var_f0;
    void **temp_2;
    void *temp_16;
    void *temp_17;
    void *temp_18;
    void *temp_19;
    void *temp_21;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_3_5;
    void *temp_3_6;
    void *temp_3_7;
    void *temp_3_8;
    void *temp_3_9;

    temp_21 = *func_00201350();
    temp_2 = func_001D6DF8(func_001D6E40(), 0);
    temp_3 = *temp_2;
    if (M2C_FIELD(temp_3, s32 (**)(void *), 0x24)(temp_2 + M2C_FIELD(temp_3, s16 *, 0x20)) == 0) {
        temp_3_2 = *temp_2;
        if (M2C_FIELD(temp_3_2, s32 (**)(void *), 0x2C)(temp_2 + M2C_FIELD(temp_3_2, s16 *, 0x28)) == 0) {
            temp_3_3 = *temp_2;
            if (M2C_FIELD(temp_3_3, s32 (**)(void *), 0x34)(temp_2 + M2C_FIELD(temp_3_3, s16 *, 0x30)) == 0) {
                temp_3_4 = *temp_2;
                if (M2C_FIELD(temp_3_4, s32 (**)(void *), 0x1C)(temp_2 + M2C_FIELD(temp_3_4, s16 *, 0x18)) != 0) {
                    var_f0 = M2C_FIELD(arg0, f32 *, 0x14) - M2C_FIELD(arg0, f32 *, 0x10);
                    goto block_14;
                }
            } else {
                var_f0 = M2C_FIELD(arg0, f32 *, 0x14) + M2C_FIELD(arg0, f32 *, 0x10);
block_14:
                M2C_FIELD(arg0, f32 *, 0x14) = var_f0;
            }
        } else {
            M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) - M2C_FIELD(arg0, f32 *, 0x10));
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) + M2C_FIELD(arg0, f32 *, 0x10));
    }
    temp_3_5 = *temp_2;
    if (M2C_FIELD(temp_3_5, s32 (**)(void *, M2C_UNK), 0x14)(temp_2 + M2C_FIELD(temp_3_5, s16 *, 0x10), 2) != 0) {
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) - M2C_FIELD(arg0, f32 *, 0x24));
    }
    temp_3_6 = *temp_2;
    if (M2C_FIELD(temp_3_6, s32 (**)(void *, M2C_UNK), 0x14)(temp_2 + M2C_FIELD(temp_3_6, s16 *, 0x10), 0) != 0) {
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) + M2C_FIELD(arg0, f32 *, 0x24));
    }
    temp_3_7 = *temp_2;
    if (M2C_FIELD(temp_3_7, s32 (**)(void *, M2C_UNK), 0xC)(temp_2 + M2C_FIELD(temp_3_7, s16 *, 8), 1) != 0) {
        func_002877C8(arg0);
    }
    temp_17 = temp_21 + 0x90;
    sp4 = 0.0f;
    temp_18 = temp_21 + 0xA0;
    sp8 = 0.0f;
    temp_19 = temp_21 + 0xB0;
    spC = 0.0f;
    temp_16 = temp_21 + 0xC0;
    sp0 = 1.0f;
    M2C_FIELD(temp_21, f32 *, 0x90) = 1.0f;
    M2C_FIELD(temp_17, f32 *, 4) = sp4;
    M2C_FIELD(temp_17, f32 *, 8) = sp8;
    M2C_FIELD(temp_17, f32 *, 0xC) = spC;
    sp0 = 0.0f;
    sp4 = 1.0f;
    temp_f21 = sp0;
    sp8 = 0.0f;
    spC = 0.0f;
    M2C_FIELD(temp_21, f32 *, 0xA0) = temp_f21;
    M2C_FIELD(temp_18, f32 *, 4) = sp4;
    M2C_FIELD(temp_18, f32 *, 8) = sp8;
    M2C_FIELD(temp_18, f32 *, 0xC) = spC;
    sp4 = temp_f21;
    sp8 = 1.0f;
    spC = temp_f21;
    M2C_FIELD(temp_21, f32 *, 0xB0) = temp_f21;
    M2C_FIELD(temp_19, f32 *, 4) = sp4;
    M2C_FIELD(temp_19, f32 *, 8) = sp8;
    M2C_FIELD(temp_19, f32 *, 0xC) = spC;
    sp4 = temp_f21;
    sp8 = temp_f21;
    spC = 1.0f;
    M2C_FIELD(temp_21, f32 *, 0xC0) = temp_f21;
    M2C_FIELD(temp_16, f32 *, 4) = sp4;
    M2C_FIELD(temp_16, f32 *, 8) = sp8;
    M2C_FIELD(temp_16, f32 *, 0xC) = spC;
    M2C_FIELD(temp_21, f32 *, 0xC0) = temp_f21;
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
    M2C_FIELD(temp_21, f32 *, 0x90) = (f32) (1.0f - (temp_f11 + temp_f2));
    M2C_FIELD(temp_17, f32 *, 0xC) = temp_f21;
    M2C_FIELD(temp_17, f32 *, 4) = (f32) (temp_f3_2 - temp_f10);
    M2C_FIELD(temp_17, f32 *, 8) = (f32) (temp_f9 + temp_f12);
    M2C_FIELD(temp_21, f32 *, 0xA0) = (f32) (temp_f3_2 + temp_f10);
    M2C_FIELD(temp_18, f32 *, 0xC) = temp_f21;
    M2C_FIELD(temp_18, f32 *, 8) = (f32) (temp_f4_2 - temp_f8_2);
    M2C_FIELD(temp_18, f32 *, 4) = (f32) (1.0f - (temp_f7 + temp_f2));
    M2C_FIELD(temp_21, f32 *, 0xB0) = (f32) (temp_f9 - temp_f12);
    M2C_FIELD(temp_19, f32 *, 4) = (f32) (temp_f4_2 + temp_f8_2);
    M2C_FIELD(temp_19, f32 *, 8) = (f32) (1.0f - (temp_f7 + temp_f11));
    M2C_FIELD(temp_19, f32 *, 0xC) = temp_f21;
    M2C_FIELD(temp_21, f32 *, 0xC0) = temp_f21;
    M2C_FIELD(temp_16, f32 *, 4) = temp_f21;
    M2C_FIELD(temp_16, f32 *, 8) = temp_f21;
    M2C_FIELD(temp_16, f32 *, 0xC) = 1.0f;
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
    temp_f7_2 = temp_f9_2 * sp10;
    sp58 = temp_f21;
    temp_f5 = temp_f2_2 * sp14;
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
    sp20 = 1.0f - (temp_f5 + temp_f3_3);
    sp34 = 1.0f - (temp_f7_2 + temp_f3_3);
    sp48 = 1.0f - (temp_f7_2 + temp_f5);
    sp28 = temp_f8_3 + temp_f0_5;
    sp38 = temp_f1_2 - temp_f9_3;
    sp24 = temp_f2_3 - temp_f10_2;
    func_001C4B08(temp_17, &sp20, temp_17);
    func_001C4E50(temp_17);
    temp_3_8 = M2C_FIELD(arg1, void **, 0x50);
    temp_3_9 = temp_3_8 + 0x50;
    M2C_FIELD(temp_21, f32 *, 0xC0) = (f32) M2C_FIELD(temp_3_8, f32 *, 0x50);
    M2C_FIELD(temp_16, f32 *, 4) = (f32) M2C_FIELD(temp_3_9, f32 *, 4);
    M2C_FIELD(temp_16, f32 *, 8) = (f32) M2C_FIELD(temp_3_9, f32 *, 8);
    func_00200460(temp_21, -M2C_FIELD(arg0, f32 *, 0x20));
}
