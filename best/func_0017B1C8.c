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

M2C_UNK func_0017A010(f32 *, void *);               /* extern */

void func_0017B1C8(void *arg0, s32 arg1, void *arg2, void *arg3) {
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
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f7;
    f32 temp_f8;
    s32 temp_18;
    s32 var_23;
    void *temp_16;
    void *temp_17;
    void *temp_19;
    void *temp_2;

    var_23 = -1;
    temp_16 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), void **, 4);
    temp_17 = temp_16 + 0xF8;
    temp_2 = temp_16 + 0x11C;
    if (((M2C_FIELD(temp_16, f32 *, 0x11C) * M2C_FIELD(temp_16, f32 *, 0xF8)) + (M2C_FIELD(temp_2, f32 *, 4) * M2C_FIELD(temp_17, f32 *, 4)) + (M2C_FIELD(temp_2, f32 *, 8) * M2C_FIELD(temp_17, f32 *, 8))) > 0.0f) {
        var_23 = 1;
    }
    temp_18 = M2C_FIELD(arg0, s32 *, 0xAC);
    temp_19 = temp_16 + 0xE0;
    sp8 = 0.0f;
    temp_f20 = M2C_FIELD(arg0, f32 *, 0x44);
    sp0 = 0.0f;
    sp4 = 0.0f;
    if (temp_18 == 1) {
        func_0017A010(&sp10, arg0);
        sp0 = sp10;
        sp4 = sp14;
        sp8 = sp18;
    } else {
        func_0017A010(&sp20, arg0);
        temp_f1 = M2C_FIELD(temp_16, f32 *, 0xF8) * temp_f20;
        temp_f2 = M2C_FIELD(temp_17, f32 *, 4) * temp_f20;
        temp_f0 = M2C_FIELD(temp_17, f32 *, 8) * temp_f20;
        sp40 = temp_f1;
        temp_f3 = (f32) (arg1 * var_23) / (f32) (temp_18 - 1);
        sp44 = temp_f2;
        sp48 = temp_f0;
        temp_f0_2 = temp_f0 * temp_f3;
        temp_f1_2 = temp_f1 * temp_f3;
        temp_f2_2 = temp_f2 * temp_f3;
        temp_f4 = sp28 + temp_f0_2;
        sp38 = temp_f0_2;
        temp_f6 = sp20 + temp_f1_2;
        sp30 = temp_f1_2;
        temp_f5 = sp24 + temp_f2_2;
        sp34 = temp_f2_2;
        sp8 = temp_f4;
        sp0 = temp_f6;
        sp4 = temp_f5;
        sp10 = temp_f6;
        sp14 = temp_f5;
        sp18 = temp_f4;
    }
    temp_f7 = 2.0f * temp_f20;
    temp_f1_3 = temp_f20 * 3.0f;
    temp_f0_3 = M2C_FIELD(temp_19, f32 *, 8) * temp_f1_3;
    temp_f3_2 = M2C_FIELD(temp_19, f32 *, 4) * temp_f1_3;
    temp_f2_3 = M2C_FIELD(temp_16, f32 *, 0xE0) * temp_f1_3;
    sp28 = temp_f0_3;
    temp_f8 = sp8 - temp_f0_3;
    temp_f0_4 = sp4 - temp_f3_2;
    sp24 = temp_f3_2;
    temp_f1_4 = sp0 - temp_f2_3;
    sp20 = temp_f2_3;
    M2C_FIELD(arg3, f32 *, 8) = temp_f8;
    M2C_FIELD(arg3, f32 *, 4) = temp_f0_4;
    M2C_FIELD(arg3, f32 *, 0) = temp_f1_4;
    sp10 = temp_f1_4;
    sp14 = temp_f0_4;
    sp18 = temp_f8;
    temp_f0_5 = M2C_FIELD(temp_19, f32 *, 8) * temp_f7;
    temp_f1_5 = M2C_FIELD(temp_16, f32 *, 0xE0) * temp_f7;
    temp_f2_4 = M2C_FIELD(temp_19, f32 *, 4) * temp_f7;
    temp_f4_2 = sp8 + temp_f0_5;
    sp28 = temp_f0_5;
    temp_f6_2 = sp0 + temp_f1_5;
    sp20 = temp_f1_5;
    temp_f5_2 = sp4 + temp_f2_4;
    sp24 = temp_f2_4;
    M2C_FIELD(arg2, f32 *, 8) = temp_f4_2;
    M2C_FIELD(arg2, f32 *, 0) = temp_f6_2;
    M2C_FIELD(arg2, f32 *, 4) = temp_f5_2;
    sp10 = temp_f6_2;
    sp14 = temp_f5_2;
    sp18 = temp_f4_2;
}
