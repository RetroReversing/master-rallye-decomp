/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

M2C_UNK func_001CF448(f32 *, void *, void *, void *, s32, s32); /* extern */

void func_002514A0(void *arg0) {
    f32 sp8;
    f32 spC;
    s32 sp10;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    s32 temp_18;
    void *temp_16;
    void *temp_17;
    void *temp_2;
    void *temp_2_2;
    void *temp_5;
    void *temp_6;
    void *temp_7;

    temp_17 = arg0 + 8;
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        temp_2 = M2C_FIELD(arg0, void **, 0x1C);
        temp_18 = M2C_FIELD(temp_17, s32 *, 0x10);
        temp_5 = M2C_FIELD(temp_2, void **, 4);
        temp_7 = M2C_FIELD(temp_2, void **, 8);
        temp_6 = M2C_FIELD(M2C_FIELD(temp_2, void **, 0), void **, 0xC);
        temp_16 = M2C_FIELD(temp_5, void **, 0xC);
        temp_2_2 = M2C_FIELD(temp_7, void **, 0xC);
        sp8 = 0.0f;
        temp_f4 = M2C_FIELD(temp_6, f32 *, 0) - M2C_FIELD(temp_16, f32 *, 0);
        temp_f2 = M2C_FIELD(temp_6, f32 *, 4) - M2C_FIELD(temp_16, f32 *, 4);
        sp30 = temp_f4;
        temp_f3 = M2C_FIELD(temp_6, f32 *, 8) - M2C_FIELD(temp_16, f32 *, 8);
        sp34 = temp_f2;
        sp38 = temp_f3;
        temp_f5 = M2C_FIELD(temp_6, f32 *, 8) - M2C_FIELD(temp_2_2, f32 *, 8);
        temp_f0 = M2C_FIELD(temp_6, f32 *, 0) - M2C_FIELD(temp_2_2, f32 *, 0);
        sp48 = temp_f5;
        temp_f1 = M2C_FIELD(temp_6, f32 *, 4) - M2C_FIELD(temp_2_2, f32 *, 4);
        sp40 = temp_f0;
        sp44 = temp_f1;
        sp54 = (temp_f3 * temp_f0) - (temp_f4 * temp_f5);
        sp58 = (temp_f4 * temp_f1) - (temp_f2 * temp_f0);
        sp50 = (temp_f2 * temp_f5) - (temp_f3 * temp_f1);
        func_001CF448(&sp50, temp_5, temp_6, temp_7, 0, 0);
        sp20 = sp50;
        sp8 = sp58;
        sp28 = sp58;
        sp24 = sp54;
        M2C_FIELD(arg0, f32 *, 8) = sp50;
        sp10 = temp_18;
        spC = -((sp50 * M2C_FIELD(temp_16, f32 *, 0)) + (sp54 * M2C_FIELD(temp_16, f32 *, 4)) + (sp58 * M2C_FIELD(temp_16, f32 *, 8)));
        M2C_FIELD(temp_17, f32 *, 4) = sp54;
        M2C_FIELD(temp_17, f32 *, 8) = sp8;
        M2C_FIELD(temp_17, f32 *, 0xC) = spC;
        M2C_FIELD(temp_17, s32 *, 0x10) = sp10;
    }
}
