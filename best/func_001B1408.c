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

void func_001B1408(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f7;
    f32 temp_f7_2;
    s32 var_7;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_3;
    void *temp_3_2;
    void *temp_6;

    temp_2 = M2C_FIELD(arg1, void **, 0x50);
    temp_3 = arg0 + 0x48;
    temp_f5 = M2C_FIELD(temp_2, f32 *, 0x50);
    temp_6 = arg0 + 0x3C;
    temp_2_2 = temp_2 + 0x50;
    sp0 = temp_f5;
    var_7 = 0;
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x54) / 30.0f;
    temp_f7 = M2C_FIELD(temp_2_2, f32 *, 4);
    sp4 = temp_f7;
    temp_f4 = M2C_FIELD(temp_2_2, f32 *, 8);
    sp8 = temp_f4;
    sp10 = 0.0f;
    temp_f0 = M2C_FIELD(temp_3, f32 *, 8) * temp_f3;
    temp_f2 = M2C_FIELD(temp_3, f32 *, 4) * temp_f3;
    sp0 = temp_f5 + (M2C_FIELD(arg0, f32 *, 0x48) * temp_f3);
    sp18 = temp_f0;
    sp14 = temp_f2;
    sp14 = 1.0f;
    sp8 = temp_f4 + temp_f0;
    temp_f6 = fabsf(M2C_FIELD(arg0, f32 *, 0x3C) - sp10);
    sp18 = 0.0f;
    sp4 = temp_f7 + temp_f2;
    if ((temp_f6 <= 0.001f) && (fabsf(M2C_FIELD(temp_6, f32 *, 4) - 1.0f) <= 0.001f) && (fabsf(M2C_FIELD(temp_6, f32 *, 8) - sp18) <= 0.001f)) {
        var_7 = 1;
    }
    temp_2_3 = arg0 + 0x20;
    if ((var_7 ^ 1) != 0) {
        temp_f3_2 = sp0 * M2C_FIELD(arg0, f32 *, 0x20);
        sp20 = sp0;
        sp28 = sp8;
        sp30 = sp0;
        sp38 = sp8;
        temp_f0_2 = temp_f3_2 + (sp4 * M2C_FIELD(temp_2_3, f32 *, 4)) + (sp8 * M2C_FIELD(temp_2_3, f32 *, 8)) + M2C_FIELD(temp_2_3, f32 *, 0xC);
        temp_f6_2 = sp4 + temp_f0_2;
        temp_f7_2 = sp4 - temp_f0_2;
        sp24 = temp_f6_2;
        sp34 = temp_f7_2;
        temp_f1 = M2C_FIELD(temp_2_3, f32 *, 4);
        temp_f4_2 = M2C_FIELD(temp_2_3, f32 *, 0xC);
        temp_f2_2 = sp8 * M2C_FIELD(temp_2_3, f32 *, 8);
        if (!(fabsf(temp_f3_2 + (temp_f6_2 * temp_f1) + temp_f2_2 + temp_f4_2) < fabsf(temp_f3_2 + (temp_f7_2 * temp_f1) + temp_f2_2 + temp_f4_2))) {
            sp4 = temp_f7_2;
        } else {
            sp4 = temp_f6_2;
        }
    }
    temp_3_2 = M2C_FIELD(arg1, void **, 0x50);
    temp_2_4 = temp_3_2 + 0x50;
    M2C_FIELD(temp_3_2, f32 *, 0x50) = sp0;
    M2C_FIELD(temp_2_4, f32 *, 4) = sp4;
    M2C_FIELD(temp_2_4, f32 *, 0xC) = 1.0f;
    M2C_FIELD(temp_2_4, f32 *, 8) = sp8;
}
