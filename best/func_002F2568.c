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

void func_002F2568(void *arg0) {
    s32 temp_10;
    s32 temp_11;
    s32 temp_13;
    s32 temp_2;
    s32 temp_2_3;
    s32 temp_5;
    s32 temp_6;
    s32 temp_9;
    u32 temp_2_2;
    u32 temp_7_2;
    void *temp_7;
    void *temp_8;

    temp_7 = M2C_FIELD(arg0, void **, 0x296C);
    temp_8 = M2C_FIELD(arg0, void **, 0x2970);
    temp_2 = M2C_FIELD(temp_7, s32 *, 0x10) * (M2C_FIELD(temp_7, s32 *, 8) * M2C_FIELD(temp_7, s32 *, 0));
    temp_11 = M2C_FIELD(temp_7, s32 *, 0x14) * (M2C_FIELD(temp_7, s32 *, 0xC) * M2C_FIELD(temp_7, s32 *, 4));
    temp_6 = M2C_FIELD(arg0, s32 *, 0x2940);
    temp_10 = M2C_FIELD(temp_8, s32 *, 0x10) * (M2C_FIELD(temp_8, s32 *, 8) * M2C_FIELD(temp_8, s32 *, 0));
    temp_5 = M2C_FIELD(arg0, s32 *, 0x2944);
    temp_9 = M2C_FIELD(temp_8, s32 *, 0x14) * (M2C_FIELD(temp_8, s32 *, 0xC) * M2C_FIELD(temp_8, s32 *, 4));
    temp_2_2 = (((temp_6 + temp_2) - 1) & -temp_2) * (((temp_5 + temp_11) - 1) & -temp_11) * M2C_FIELD(temp_7, s32 *, 0x18);
    temp_7_2 = temp_2_2 * 2;
    temp_2_3 = (temp_2_2 >> 0xD) & 0x1FF;
    temp_13 = (temp_7_2 >> 0xD) & 0x1FF;
    M2C_FIELD(arg0, s32 *, 0x2958) = (s32) (((((temp_6 + temp_10) - 1) & -temp_10) * (((temp_5 + temp_9) - 1) & -temp_9) * M2C_FIELD(temp_8, s32 *, 0x18)) + temp_7_2);
    M2C_FIELD(arg0, s64 *, 0x2610) = (s64) (M2C_FIELD(arg0, s64 *, 0x2610) & ~0x1FF);
    M2C_FIELD(arg0, s64 *, 0x2660) = (s64) ((M2C_FIELD(arg0, s64 *, 0x2660) & ~0x1FF) | temp_2_3);
    M2C_FIELD(arg0, s64 *, 0x26E0) = (s64) ((M2C_FIELD(arg0, s64 *, 0x26E0) & ~0x1FF) | temp_2_3);
    M2C_FIELD(arg0, s64 *, 0x2670) = (s64) ((M2C_FIELD(arg0, s64 *, 0x2670) & ~0x1FF) | temp_13);
    M2C_FIELD(arg0, s64 *, 0x26F0) = (s64) ((M2C_FIELD(arg0, s64 *, 0x26F0) & ~0x1FF) | temp_13);
    M2C_FIELD(arg0, s64 *, 0x2638) = (s64) ((M2C_FIELD(arg0, s64 *, 0x2638) & ~0x1FF) | temp_2_3);
    M2C_FIELD(arg0, s64 *, 0x27D0) = (s64) (M2C_FIELD(arg0, s64 *, 0x27D0) & ~0x1FF);
    M2C_FIELD(arg0, s64 *, 0x2850) = (s64) (M2C_FIELD(arg0, s64 *, 0x2850) & ~0x1FF);
    M2C_FIELD(arg0, s64 *, 0x27E0) = (s64) ((M2C_FIELD(arg0, s64 *, 0x27E0) & ~0x1FF) | temp_13);
    M2C_FIELD(arg0, s64 *, 0x2860) = (s64) ((M2C_FIELD(arg0, s64 *, 0x2860) & ~0x1FF) | temp_13);
}
