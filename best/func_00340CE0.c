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

extern s32 D_0042DE08;
extern s32 D_0042DE0C;
extern s32 D_0042DE10;
extern s32 D_0042DE14;
extern M2C_UNK D_0042DE20;
extern M2C_UNK D_0042DE60;
extern M2C_UNK D_0042DEC0;

void func_00340CE0(void) {
    s32 temp_10;
    s32 temp_12;
    s32 temp_12_2;
    s32 temp_13;
    s32 temp_14;
    s32 temp_23;
    s32 temp_25;
    s32 temp_2;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_9;
    s64 temp_13_2;
    s64 temp_24;
    s64 temp_30;

    temp_9 = (0xBFFFFFFF * 4) | 3;
    M2C_FIELD(&D_0042DE60, s64 *, 0x40) = (s64) (M2C_FIELD(&D_0042DE60, s64 *, 0x40) & 0xFFFF7FFF);
    M2C_FIELD(&D_0042DE60, s64 *, 0xA0) = (s64) ((((((M2C_FIELD(&D_0042DE60, s64 *, 0xA0) & ~3 & ~0xC) | 4) & ~0x30) | 0x20) & ~0xC0) | 0x40);
    D_0042DE0C += 5;
    M2C_FIELD(&D_0042DE20, s64 *, 0x30) = (s64) (M2C_FIELD(&D_0042DE20, s64 *, 0x30) & ~3);
    D_0042DE08 += 1;
    M2C_FIELD(&D_0042DE60, s32 *, 0) = 0;
    M2C_FIELD(&D_0042DE60, s8 *, 0x22) = 0xDC;
    M2C_FIELD(&D_0042DE60, s64 *, 0x30) = (s64) (M2C_FIELD(&D_0042DE60, s64 *, 0x30) & ~1);
    M2C_FIELD(&D_0042DE60, s8 *, 0x44) = 0x80;
    M2C_FIELD(&D_0042DE60, s64 *, 0x50) = (s64) (M2C_FIELD(&D_0042DE60, s64 *, 0x50) & ~1);
    temp_10 = (((((0xFFFC << 0x11) | 0xFFFF) << 0x10) | 0xFFFF) << 0xF) | 0x7FFF;
    M2C_FIELD(&D_0042DE60, s64 *, 0x68) = 0x412;
    temp_24 = 0x8000 << 0x22;
    M2C_FIELD(&D_0042DE60, s64 *, 0x118) = 0xFFF;
    temp_25 = (((((0xFFFB << 0x10) | 0xFFFF) << 0x10) | 0xFFFF) << 0x10) | 0xFFFF;
    M2C_FIELD(&D_0042DE60, s64 *, 0x100) = (s64) (M2C_FIELD(&D_0042DE60, s64 *, 0x100) & temp_9);
    M2C_FIELD(&D_0042DE60, s64 *, 0x1B0) = (s64) (M2C_FIELD(&D_0042DE60, s64 *, 0x1B0) & temp_9);
    temp_30 = 0x8000 << 0x23;
    M2C_FIELD(&D_0042DE60, s64 *, 0x150) = (s64) ((((((M2C_FIELD(&D_0042DE60, s64 *, 0x150) & ~3 & ~0xC) | 4) & ~0x30) | 0x20) & ~0xC0) | 0x40);
    temp_23 = (((((0xFFF7 << 0x10) | 0xFFFF) << 0x10) | 0xFFFF) << 0x10) | 0xFFFF;
    M2C_FIELD(&D_0042DE60, s8 *, 0x20) = 0xDC;
    M2C_FIELD(&D_0042DE60, s8 *, 0x21) = 0xDC;
    M2C_FIELD(&D_0042DE60, s64 *, 0x40) = 0;
    M2C_FIELD(&D_0042DE60, s8 *, 0xA4) = 0;
    M2C_FIELD(&D_0042DE60, s64 *, 0xB0) = (s64) (M2C_FIELD(&D_0042DE60, s64 *, 0xB0) & ~1);
    M2C_FIELD(&D_0042DE60, s64 *, 0x60) = (s64) (((((M2C_FIELD(&D_0042DE60, s64 *, 0x60) & temp_10) | temp_24) & temp_25) | temp_30) & temp_23 & ((((((0xFFEF << 0x10) | 0xFFFF) << 0x10) | 0xFFFF) << 0x10) | 0xFFFF));
    M2C_FIELD(&D_0042DE60, s64 *, 0x110) = (s64) (((((M2C_FIELD(&D_0042DE60, s64 *, 0x110) & temp_10) | temp_24) & temp_25) | temp_30) & temp_23);
    M2C_FIELD(&D_0042DE60, s64 *, 0x60) = (s64) M2C_FIELD(&D_0042DEC0, s64 *, 0);
    temp_3 = (0x801FFFFF * 8) | 7;
    temp_12 = (0x9FFFFFFF << 6) | 0x3F;
    temp_14 = (((((0xFFDF << 0x10) | 0xFFFF) << 0x10) | 0xFFFF) << 0x10) | 0xFFFF;
    temp_2 = (0x801FFFFF << 0xD) | 0x1FFF;
    temp_3_2 = (0xBFFFFFFF * 0x10) | 0xF;
    temp_12_2 = (((((0xFFBF << 0x10) | 0xFFFF) << 0x10) | 0xFFFF) << 0x10) | 0xFFFF;
    M2C_FIELD(&D_0042DEC0, s64 *, 0) = (s64) (M2C_FIELD(&D_0042DEC0, s64 *, 0) & temp_14 & temp_12_2);
    D_0042DE10 += 0x10;
    M2C_FIELD(&D_0042DEC0, s64 *, 0xB0) = (s64) (M2C_FIELD(&D_0042DEC0, s64 *, 0xB0) & ((((((0xFFEF << 0x10) | 0xFFFF) << 0x10) | 0xFFFF) << 0x10) | 0xFFFF) & temp_14 & temp_12_2);
    D_0042DE14 += 0x10;
    temp_13 = (0x8007FFFF << 0xD) | 0x1FFF;
    M2C_FIELD(&D_0042DE60, s64 *, 0x160) = (s64) (M2C_FIELD(&D_0042DE60, s64 *, 0x160) & ~1);
    M2C_FIELD(&D_0042DE60, s64 *, 0x80) = (s64) (((M2C_FIELD(&D_0042DE60, s64 *, 0x80) & 0xFFF9FFFF) | 0x40000) & ~1 & ~0xE & ~0xFF0 & ~0x3000 & ~0x4000 & 0xFFFF7FFF);
    M2C_FIELD(&D_0042DE60, s64 *, 0x130) = (s64) (((M2C_FIELD(&D_0042DE60, s64 *, 0x130) & 0xFFF9FFFF) | 0x40000) & ~1 & ~0xE & ~0xFF0 & ~0x3000 & ~0x4000 & 0xFFFF7FFF);
    M2C_FIELD(&D_0042DE60, s64 *, 0x90) = (s64) (M2C_FIELD(&D_0042DE60, s64 *, 0x90) & ~3 & ~0x3FF0 & 0xFF003FFF & ~0xC & temp_3 & temp_2);
    temp_13_2 = 0x8000 << 0x11;
    M2C_FIELD(&D_0042DE60, s64 *, 0x140) = (s64) (M2C_FIELD(&D_0042DE60, s64 *, 0x140) & ~3 & ~0x3FF0 & 0xFF003FFF & ~0xC & temp_3 & temp_2);
    M2C_FIELD(&D_0042DE60, s64 *, 0xC0) = (s64) (M2C_FIELD(&D_0042DE60, s64 *, 0xC0) & temp_12 & temp_3_2);
    M2C_FIELD(&D_0042DE60, s64 *, 0x170) = (s64) (M2C_FIELD(&D_0042DE60, s64 *, 0x170) & temp_12 & temp_3_2);
    M2C_FIELD(&D_0042DE60, s64 *, 0xD0) = (s64) ((((((M2C_FIELD(&D_0042DE60, s64 *, 0xD0) & ~0x20 & ~0x1C0) | 0x40) & ~1) | 1) & 0xFFE7FFFF & temp_13) | temp_13_2);
    M2C_FIELD(&D_0042DE60, s64 *, 0x180) = (s64) ((((((M2C_FIELD(&D_0042DE60, s64 *, 0x180) & ~0x20 & ~0x1C0) | 0x40) & ~1) | 1) & 0xFFE7FFFF & temp_13) | temp_13_2);
    M2C_FIELD(&D_0042DE60, s8 *, 0x154) = 0;
}
