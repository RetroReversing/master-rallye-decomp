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

void func_00298120(void *arg0, void *arg1) {
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
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f6;
    void *temp_3;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_8;

    temp_8 = M2C_FIELD(arg1, void **, 0x4C);
    if (temp_8 != NULL) {
        temp_f3 = M2C_FIELD(arg0, f32 *, 0x10);
        temp_3 = temp_8 + 0x10;
        temp_5 = arg0 + 0x20;
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x18);
        temp_4 = arg0 + 0x10;
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x1C);
        temp_6 = arg0 + 0x40;
        sp4 = M2C_FIELD(arg0, f32 *, 0x14);
        spC = temp_f0;
        sp8 = temp_f1;
        sp0 = temp_f3;
        M2C_FIELD(temp_8, f32 *, 0x10) = temp_f3;
        M2C_FIELD(temp_3, f32 *, 4) = sp4;
        M2C_FIELD(temp_3, f32 *, 8) = temp_f1;
        M2C_FIELD(temp_3, f32 *, 0xC) = temp_f0;
        M2C_FIELD(temp_8, s32 *, 0x88) = (s32) (M2C_FIELD(temp_8, s32 *, 0x88) + 1);
        temp_f2 = M2C_FIELD(temp_5, f32 *, 4) - M2C_FIELD(temp_4, f32 *, 4);
        temp_f6 = 1.0f / (f32) (M2C_FIELD(arg0, s32 *, 0x34) - M2C_FIELD(arg0, s32 *, 0x30));
        temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x20) - M2C_FIELD(arg0, f32 *, 0x10);
        temp_f3_2 = M2C_FIELD(temp_5, f32 *, 8) - M2C_FIELD(temp_4, f32 *, 8);
        sp14 = temp_f2;
        temp_f1_2 = M2C_FIELD(temp_5, f32 *, 0xC) - M2C_FIELD(temp_4, f32 *, 0xC);
        sp10 = temp_f0_2;
        sp18 = temp_f3_2;
        temp_f0_3 = temp_f0_2 * temp_f6;
        temp_f2_2 = temp_f2 * temp_f6;
        sp1C = temp_f1_2;
        temp_f1_3 = temp_f1_2 * temp_f6;
        sp0 = temp_f0_3;
        sp4 = temp_f2_2;
        sp8 = temp_f3_2 * temp_f6;
        M2C_FIELD(arg0, f32 *, 0x40) = temp_f0_3;
        spC = temp_f1_3;
        M2C_FIELD(temp_6, f32 *, 4) = temp_f2_2;
        M2C_FIELD(temp_6, f32 *, 8) = sp8;
        M2C_FIELD(temp_6, f32 *, 0xC) = temp_f1_3;
    }
}
