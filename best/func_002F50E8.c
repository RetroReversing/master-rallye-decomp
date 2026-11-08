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

M2C_UNK func_002EF7D0(void *, M2C_UNK, M2C_UNK, s32 *, void *, s64, s32, s64); /* extern */
extern s32 D_0042DE10;
extern s32 D_0042DE14;
extern M2C_UNK D_0042DE60;

void func_002F50E8(void *arg0) {
    s32 temp_10;
    s32 temp_10_4;
    s32 temp_11;
    s32 temp_12;
    s32 temp_21;
    s32 temp_2;
    s32 temp_4;
    s32 temp_5;
    s32 temp_6;
    s64 temp_11_2;
    s64 temp_13_2;
    s64 temp_2_3;
    s64 temp_3;
    s64 temp_3_2;
    s64 temp_3_3;
    s64 temp_3_4;
    s64 temp_4_2;
    s64 temp_5_2;
    s64 temp_6_2;
    s64 temp_7_2;
    s64 temp_7_3;
    s64 temp_7_4;
    s64 temp_9_2;
    s64 temp_9_3;
    u32 temp_10_2;
    u32 temp_10_3;
    u32 temp_13;
    u32 temp_2_2;
    u32 temp_7;
    u32 temp_9;
    void *temp_14;
    void *temp_15;
    void *temp_16;

    temp_16 = M2C_FIELD(arg0, void **, 0x2970);
    temp_15 = M2C_FIELD(arg0, void **, 0x296C);
    temp_10 = M2C_FIELD(temp_15, s32 *, 0x10) * (M2C_FIELD(temp_15, s32 *, 8) * M2C_FIELD(temp_15, s32 *, 0));
    temp_14 = M2C_FIELD(arg0, void **, 0x2968);
    temp_2 = M2C_FIELD(temp_15, s32 *, 0x14) * (M2C_FIELD(temp_15, s32 *, 0xC) * M2C_FIELD(temp_15, s32 *, 4));
    temp_13 = M2C_FIELD(arg0, u32 *, 0x294C);
    temp_4 = M2C_FIELD(arg0, s32 *, 0x2950);
    temp_11 = M2C_FIELD(temp_16, s32 *, 0x10) * (M2C_FIELD(temp_16, s32 *, 8) * M2C_FIELD(temp_16, s32 *, 0));
    temp_12 = M2C_FIELD(temp_16, s32 *, 0x14) * (M2C_FIELD(temp_16, s32 *, 0xC) * M2C_FIELD(temp_16, s32 *, 4));
    temp_5 = M2C_FIELD(temp_14, s32 *, 0x14) * (M2C_FIELD(temp_14, s32 *, 0xC) * M2C_FIELD(temp_14, s32 *, 4));
    temp_10_2 = (((temp_13 + temp_10) - 1) & -temp_10) * (((temp_4 + temp_2) - 1) & -temp_2) * M2C_FIELD(temp_15, s32 *, 0x18);
    temp_6 = M2C_FIELD(temp_14, s32 *, 0x10) * (M2C_FIELD(temp_14, s32 *, 8) * M2C_FIELD(temp_14, s32 *, 0));
    temp_9 = M2C_FIELD(arg0, u32 *, 0x2940);
    temp_7 = ((((temp_13 + temp_11) - 1) & -temp_11) * (((temp_4 + temp_12) - 1) & -temp_12) * M2C_FIELD(temp_16, s32 *, 0x18)) + temp_10_2;
    temp_2_2 = temp_7 >> 0xD;
    temp_21 = temp_2_2 & 0x1FF;
    M2C_FIELD(arg0, s32 *, 0x2948) = 0;
    temp_9_2 = ((temp_9 >> 6) & 0x3F) << 9;
    temp_10_3 = temp_10_2 >> 0xD;
    M2C_FIELD(arg0, u32 *, 0x2954) = temp_10_3;
    temp_3 = (((M2C_FIELD(arg0, s64 *, 0x2610) & ~0x1FF) | temp_21) & ~0x7E00) | temp_9_2;
    M2C_FIELD(arg0, u32 *, 0x293C) = temp_2_2;
    M2C_FIELD(arg0, s32 *, 0x2958) = (s32) (((((temp_9 + temp_6) - 1) & -temp_6) * (((M2C_FIELD(arg0, s32 *, 0x2944) + temp_5) - 1) & -temp_5) * M2C_FIELD(temp_14, s32 *, 0x18)) + temp_7);
    M2C_FIELD(arg0, s64 *, 0x2610) = temp_3;
    temp_13_2 = ((temp_13 >> 6) & 0x3F) << 0x10;
    temp_10_4 = temp_10_3 & 0x1FF;
    temp_2_3 = (M2C_FIELD(arg0, s64 *, 0x2660) & ~0x1FF & 0xFFC0FFFF) | temp_13_2;
    M2C_FIELD(arg0, s64 *, 0x2610) = (s64) ((temp_3 & 0xFFF07FFF) | ((M2C_FIELD(temp_14, u32 *, 0x1C) & 0x1F) << 0xF));
    M2C_FIELD(arg0, s64 *, 0x2660) = temp_2_3;
    temp_5_2 = (M2C_FIELD(arg0, s64 *, 0x26E0) & ~0x1FF & 0xFFC0FFFF) | temp_13_2;
    M2C_FIELD(arg0, s64 *, 0x26E0) = temp_5_2;
    M2C_FIELD(arg0, s64 *, 0x2660) = (s64) ((temp_2_3 & 0xC0FFFFFF) | ((M2C_FIELD(temp_15, u32 *, 0x1C) & 0x3F) << 0x18));
    temp_4_2 = (M2C_FIELD(arg0, s64 *, 0x2670) & ~0x1FF) | temp_10_4;
    M2C_FIELD(arg0, s64 *, 0x2670) = temp_4_2;
    temp_7_2 = (M2C_FIELD(arg0, s64 *, 0x26F0) & ~0x1FF) | temp_10_4;
    M2C_FIELD(arg0, s64 *, 0x26E0) = (s64) ((temp_5_2 & 0xC0FFFFFF) | ((M2C_FIELD(temp_15, u32 *, 0x1C) & 0x3F) << 0x18));
    M2C_FIELD(arg0, s64 *, 0x26F0) = temp_7_2;
    temp_3_2 = (((M2C_FIELD(arg0, s64 *, 0x2638) & ~0x1FF) | temp_21) & ~0x7E00) | temp_9_2;
    M2C_FIELD(arg0, s64 *, 0x2670) = (s64) ((temp_4_2 & 0xF0FFFFFF) | ((M2C_FIELD(temp_16, u32 *, 0x1C) & 0xF) << 0x18));
    temp_6_2 = (M2C_FIELD(arg0, s64 *, 0x27D0) & ~0x1FF & 0xFFC0FFFF) | temp_13_2;
    M2C_FIELD(arg0, s64 *, 0x2638) = temp_3_2;
    temp_7_3 = (M2C_FIELD(arg0, s64 *, 0x2850) & ~0x1FF & 0xFFC0FFFF) | temp_13_2;
    M2C_FIELD(arg0, s64 *, 0x26F0) = (s64) ((temp_7_2 & 0xF0FFFFFF) | ((M2C_FIELD(temp_16, u32 *, 0x1C) & 0xF) << 0x18));
    temp_3_3 = (M2C_FIELD(arg0, s64 *, 0x27E0) & ~0x1FF) | temp_10_4;
    M2C_FIELD(arg0, s64 *, 0x27D0) = temp_6_2;
    M2C_FIELD(arg0, s64 *, 0x2638) = (s64) ((temp_3_2 & 0xFFF07FFF) | ((M2C_FIELD(temp_14, u32 *, 0x1C) & 0x1F) << 0xF));
    M2C_FIELD(arg0, s64 *, 0x2850) = temp_7_3;
    M2C_FIELD(arg0, s64 *, 0x27D0) = (s64) ((temp_6_2 & 0xC0FFFFFF) | ((M2C_FIELD(temp_15, u32 *, 0x1C) & 0x3F) << 0x18));
    M2C_FIELD(arg0, s64 *, 0x27E0) = temp_3_3;
    M2C_FIELD(arg0, s64 *, 0x2850) = (s64) ((temp_7_3 & 0xC0FFFFFF) | ((M2C_FIELD(temp_15, u32 *, 0x1C) & 0x3F) << 0x18));
    M2C_FIELD(arg0, s64 *, 0x27E0) = (s64) ((temp_3_3 & 0xF0FFFFFF) | ((M2C_FIELD(temp_16, u32 *, 0x1C) & 0xF) << 0x18));
    temp_3_4 = (M2C_FIELD(arg0, s64 *, 0x2860) & ~0x1FF) | temp_10_4;
    M2C_FIELD(arg0, s64 *, 0x2860) = temp_3_4;
    M2C_FIELD(arg0, s64 *, 0x2860) = (s64) ((temp_3_4 & 0xF0FFFFFF) | ((M2C_FIELD(temp_16, u32 *, 0x1C) & 0xF) << 0x18));
    temp_7_4 = (M2C_FIELD(temp_16, u32 *, 0x1C) & 0xF) << 0x18;
    D_0042DE10 += 1;
    temp_9_3 = M2C_FIELD(&D_0042DE60, s64 *, 0x130) | 0x10000;
    M2C_FIELD(&D_0042DE60, s64 *, 0x130) = temp_9_3;
    D_0042DE14 += 1;
    temp_11_2 = M2C_FIELD(&D_0042DE60, s64 *, 0x80) | 0x10000;
    M2C_FIELD(&D_0042DE60, s64 *, 0x100) = (s64) ((((M2C_FIELD(&D_0042DE60, s64 *, 0x100) & ~0x1FF) | temp_10_4) & 0xF0FFFFFF) | temp_7_4);
    M2C_FIELD(&D_0042DE60, s64 *, 0x80) = temp_11_2;
    M2C_FIELD(&D_0042DE60, s64 *, 0x1B0) = (s64) ((((M2C_FIELD(&D_0042DE60, s64 *, 0x1B0) & ~0x1FF) | temp_10_4) & 0xF0FFFFFF) | temp_7_4);
    M2C_FIELD(arg0, s64 *, 0x28B0) = 1;
    M2C_FIELD(arg0, s64 *, 0x26C0) = 1;
    M2C_FIELD(arg0, s64 *, 0x2740) = 1;
    M2C_FIELD(arg0, s64 *, 0x2830) = 1;
    func_002EF7D0(arg0, 0, 0, &D_0042DE14, arg0, temp_9_3, temp_10_4, temp_11_2);
}
