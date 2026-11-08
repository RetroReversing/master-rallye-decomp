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

M2C_UNK func_0023E538(void *);                      /* extern */
M2C_UNK func_0023E6D8(void *, f32 *, f32 *, void *, void *, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32); /* extern */
M2C_UNK func_0023E7B0(void *, f32 *, f32 *);        /* extern */
M2C_UNK func_0023E968(void *);                      /* extern */

void func_0025DA08(void *arg1, f32 fparg0) {
    f32 sp90;
    f32 sp94;
    f32 sp98;
    f32 spA0;
    f32 spA4;
    f32 spA8;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    f32 spC0;
    f32 spC4;
    f32 spC8;
    f32 spD0;
    f32 spD4;
    f32 spD8;
    f32 spE0;
    f32 spE4;
    f32 spE8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f13;
    f32 temp_f14;
    f32 temp_f15;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f4_4;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f5_3;
    f32 temp_f5_4;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;
    f32 temp_f9_2;
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    func_0023E538(arg1);
    temp_2 = arg1 + 0xC;
    temp_f12 = M2C_FIELD(arg1, f32 *, 0);
    temp_f2 = M2C_FIELD(temp_2, f32 *, 8);
    temp_f1 = M2C_FIELD(temp_2, f32 *, 4);
    temp_f5 = M2C_FIELD(arg1, f32 *, 4);
    temp_f9 = temp_f2 * fparg0;
    temp_f4 = M2C_FIELD(arg1, f32 *, 8);
    temp_f7 = temp_f1 * fparg0;
    temp_f0 = M2C_FIELD(arg1, f32 *, 0xC);
    temp_2_2 = M2C_FIELD(arg1, void **, 0x4C);
    temp_f20 = temp_f0 * fparg0;
    temp_3 = temp_2_2 + 0xA0;
    temp_11 = temp_2_2 + 0x104;
    temp_13 = temp_2_2 + 0x110;
    temp_8 = temp_2_2 + 0x70;
    temp_f1_2 = temp_f12 - M2C_FIELD(temp_2_2, f32 *, 0xA0);
    temp_f0_2 = temp_f4 - M2C_FIELD(temp_3, f32 *, 8);
    temp_7 = M2C_FIELD(arg1, void **, 0x50);
    temp_f8 = temp_f5 - M2C_FIELD(temp_3, f32 *, 4);
    temp_9 = temp_7 + 0xA0;
    temp_10 = temp_7 + 0x104;
    temp_f4_2 = temp_f4 - M2C_FIELD(temp_9, f32 *, 8);
    temp_f12_2 = temp_f12 - M2C_FIELD(temp_7, f32 *, 0xA0);
    temp_f5_2 = temp_f5 - M2C_FIELD(temp_9, f32 *, 4);
    temp_f8_2 = (temp_f8 * temp_f9) - (temp_f0_2 * temp_f7);
    temp_f11 = (temp_f0_2 * temp_f20) - (temp_f1_2 * temp_f9);
    temp_12 = temp_7 + 0x110;
    temp_f0_3 = M2C_FIELD(temp_2_2, f32 *, 0x24);
    temp_3_2 = temp_7 + 0x70;
    temp_f15 = (temp_f4_2 * temp_f20) - (temp_f12_2 * temp_f9);
    temp_f14 = (temp_f5_2 * temp_f9) - (temp_f4_2 * temp_f7);
    temp_f0_4 = M2C_FIELD(temp_7, f32 *, 0x24);
    temp_f10 = (temp_f1_2 * temp_f7) - (temp_f8 * temp_f20);
    temp_f12_3 = (temp_f12_2 * temp_f7) - (temp_f5_2 * temp_f20);
    temp_f1_3 = M2C_FIELD(temp_11, f32 *, 8) + temp_f9;
    temp_f2_2 = M2C_FIELD(temp_2_2, f32 *, 0x104) + temp_f20;
    temp_f3 = M2C_FIELD(temp_11, f32 *, 4) + temp_f7;
    temp_f4_3 = M2C_FIELD(temp_10, f32 *, 8) - temp_f9;
    temp_f5_3 = M2C_FIELD(temp_7, f32 *, 0x104) - temp_f20;
    temp_f6 = M2C_FIELD(temp_10, f32 *, 4) - temp_f7;
    temp_f0_5 = M2C_FIELD(temp_2_2, f32 *, 0x24);
    sp98 = temp_f1_3 * temp_f0_5;
    sp90 = temp_f2_2 * temp_f0_5;
    sp94 = temp_f3 * temp_f0_5;
    temp_f0_6 = M2C_FIELD(temp_7, f32 *, 0x24);
    spC0 = temp_f8_2;
    spC4 = temp_f11;
    spC8 = temp_f10;
    spA8 = temp_f4_3 * temp_f0_6;
    spA0 = temp_f5_3 * temp_f0_6;
    spA4 = temp_f6 * temp_f0_6;
    temp_f9_2 = M2C_FIELD(temp_13, f32 *, 8) + temp_f10;
    temp_f4_4 = M2C_FIELD(temp_2_2, f32 *, 0x110) + temp_f8_2;
    spD0 = temp_f14;
    temp_f5_4 = M2C_FIELD(temp_13, f32 *, 4) + temp_f11;
    spD4 = temp_f15;
    spB8 = temp_f9_2;
    spB0 = temp_f4_4;
    spB4 = temp_f5_4;
    spD8 = temp_f12_3;
    temp_f13 = M2C_FIELD(temp_12, f32 *, 8) - temp_f12_3;
    temp_f10_2 = M2C_FIELD(temp_7, f32 *, 0x110) - temp_f14;
    temp_f11_2 = M2C_FIELD(temp_12, f32 *, 4) - temp_f15;
    spC8 = temp_f13;
    spC0 = temp_f10_2;
    spC4 = temp_f11_2;
    spD0 = (M2C_FIELD(temp_2_2, f32 *, 0x70) * temp_f4_4) + (M2C_FIELD(temp_8, f32 *, 4) * temp_f5_4) + (M2C_FIELD(temp_8, f32 *, 8) * temp_f9_2);
    spD4 = (M2C_FIELD(temp_8, f32 *, 0xC) * temp_f4_4) + (M2C_FIELD(temp_8, f32 *, 0x10) * temp_f5_4) + (M2C_FIELD(temp_8, f32 *, 0x14) * temp_f9_2);
    spD8 = (M2C_FIELD(temp_8, f32 *, 0x18) * temp_f4_4) + (M2C_FIELD(temp_8, f32 *, 0x1C) * temp_f5_4) + (M2C_FIELD(temp_8, f32 *, 0x20) * temp_f9_2);
    spE8 = (M2C_FIELD(temp_3_2, f32 *, 0x18) * temp_f10_2) + (M2C_FIELD(temp_3_2, f32 *, 0x1C) * temp_f11_2) + (M2C_FIELD(temp_3_2, f32 *, 0x20) * temp_f13);
    spE0 = (M2C_FIELD(temp_7, f32 *, 0x70) * temp_f10_2) + (M2C_FIELD(temp_3_2, f32 *, 4) * temp_f11_2) + (M2C_FIELD(temp_3_2, f32 *, 8) * temp_f13);
    spE4 = (M2C_FIELD(temp_3_2, f32 *, 0xC) * temp_f10_2) + (M2C_FIELD(temp_3_2, f32 *, 0x10) * temp_f11_2) + (M2C_FIELD(temp_3_2, f32 *, 0x14) * temp_f13);
    func_0023E6D8(arg1, &sp90, &spD0, temp_7, temp_8, temp_9, temp_10, temp_11, temp_f12_3, temp_f13, temp_f14, temp_f15, temp_f12, temp_f5, temp_f4, temp_f0, temp_f1, temp_f2, temp_f1_2, temp_f8, temp_f0_2, temp_f12_2, temp_f5_2, temp_f4_2, temp_f20, temp_f7, temp_f9, temp_f20 * temp_f0_3, temp_f7 * temp_f0_3, temp_f9 * temp_f0_3, temp_f20 * temp_f0_4, temp_f7 * temp_f0_4, temp_f9 * temp_f0_4, temp_f2_2, temp_f3, temp_f1_3, temp_f5_3, temp_f6, temp_f4_3);
    func_0023E7B0(arg1, &spA0, &spE0);
    func_0023E968(arg1);
    func_0023E538(arg1);
}
