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

extern f32 D_004264A0;

s32 func_00244A58(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f3_5;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f5_3;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f8;
    s32 var_2;
    s32 var_3;
    s32 var_4;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_3;
    void *temp_4;

    temp_f4 = M2C_FIELD(arg1, f32 *, 0);
    temp_2 = arg0 + 0x1C;
    temp_f5 = M2C_FIELD(arg1, f32 *, 4);
    temp_f0 = temp_f4 - M2C_FIELD(arg0, f32 *, 0x1C);
    temp_f6 = M2C_FIELD(arg1, f32 *, 8);
    temp_f2 = temp_f5 - M2C_FIELD(temp_2, f32 *, 4);
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x14);
    temp_f1 = temp_f6 - M2C_FIELD(temp_2, f32 *, 8);
    if (((temp_f0 * temp_f0) + (temp_f2 * temp_f2) + (temp_f1 * temp_f1)) < (temp_f3 * temp_f3)) {
        temp_2_2 = arg0 + 0x34;
        temp_f1_2 = (M2C_FIELD(arg0, f32 *, 0x34) * temp_f4) + (M2C_FIELD(temp_2_2, f32 *, 4) * temp_f5) + (M2C_FIELD(temp_2_2, f32 *, 8) * temp_f6) + M2C_FIELD(temp_2_2, f32 *, 0xC);
        var_4 = 0;
        if (D_004264A0 <= temp_f1_2) {
            var_4 = 1;
        } else if (temp_f1_2 <= -D_004264A0) {
            var_4 = -1;
        }
        temp_2_3 = arg0 + 0x54;
        temp_f1_3 = M2C_FIELD(arg1, f32 *, 0);
        temp_f4_2 = M2C_FIELD(arg1, f32 *, 4);
        temp_f3_2 = M2C_FIELD(arg1, f32 *, 8);
        temp_f1_4 = (M2C_FIELD(arg0, f32 *, 0x54) * temp_f1_3) + (M2C_FIELD(temp_2_3, f32 *, 4) * temp_f4_2) + (M2C_FIELD(temp_2_3, f32 *, 8) * temp_f3_2) + M2C_FIELD(temp_2_3, f32 *, 0xC);
        var_3 = 0;
        if (D_004264A0 <= temp_f1_4) {
            var_3 = 1;
        } else if (temp_f1_4 <= -D_004264A0) {
            var_3 = -1;
        }
        var_2 = 0;
        if (var_4 == var_3) {
            temp_3 = arg0 + 0x1C;
            temp_f7 = M2C_FIELD(arg0, f32 *, 0x1C);
            temp_4 = arg0 + 0x28;
            temp_f0_2 = temp_f1_3 - temp_f7;
            temp_f2_2 = temp_f4_2 - M2C_FIELD(temp_3, f32 *, 4);
            temp_f3_3 = M2C_FIELD(arg0, f32 *, 0x28);
            temp_f1_5 = temp_f3_2 - M2C_FIELD(temp_3, f32 *, 8);
            temp_f8 = M2C_FIELD(arg0, f32 *, 0x14);
            sp0 = temp_f0_2;
            var_2 = 1;
            sp4 = temp_f2_2;
            sp8 = temp_f1_5;
            temp_f5_2 = M2C_FIELD(temp_4, f32 *, 4);
            temp_f6_2 = M2C_FIELD(temp_4, f32 *, 8);
            temp_f0_3 = (temp_f0_2 * temp_f3_3) + (temp_f2_2 * temp_f5_2) + (temp_f1_5 * temp_f6_2);
            temp_f3_4 = temp_f3_3 * temp_f0_3;
            temp_f6_3 = temp_f6_2 * temp_f0_3;
            temp_f5_3 = temp_f5_2 * temp_f0_3;
            sp10 = temp_f3_4;
            temp_f7_2 = temp_f7 + temp_f3_4;
            sp18 = temp_f6_3;
            sp14 = temp_f5_3;
            temp_f1_6 = temp_f1_3 - temp_f7_2;
            temp_f3_5 = M2C_FIELD(temp_3, f32 *, 4) + temp_f5_3;
            sp0 = temp_f7_2;
            temp_f4_3 = M2C_FIELD(temp_3, f32 *, 8) + temp_f6_3;
            temp_f2_3 = temp_f4_2 - temp_f3_5;
            sp4 = temp_f3_5;
            temp_f0_4 = temp_f3_2 - temp_f4_3;
            sp8 = temp_f4_3;
            if (!(((temp_f1_6 * temp_f1_6) + (temp_f2_3 * temp_f2_3) + (temp_f0_4 * temp_f0_4)) < (temp_f8 * temp_f8))) {
                goto block_11;
            }
        }
    } else {
block_11:
        var_2 = 0;
    }
    return var_2;
}
