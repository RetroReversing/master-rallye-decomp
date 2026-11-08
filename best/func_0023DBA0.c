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

f32 func_003F3E80(void *, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32); /* extern */

void *func_0023DBA0(void *arg0, void *arg2) {
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f15;
    f32 temp_f16;
    f32 temp_f17;
    f32 temp_f18;
    f32 temp_f19;
    f32 temp_f19_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f8;
    f32 var_f4;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_4;
    void *temp_4_2;
    void *temp_5;
    void *temp_6;

    if (M2C_FIELD(arg2, s32 *, 0x28) == 0) {
        temp_3 = M2C_FIELD(arg2, void **, 0x50);
        temp_4 = arg2 + 0xC;
        temp_f3 = M2C_FIELD(arg2, f32 *, 0xC);
        temp_2 = temp_3 + 0x128;
        temp_f7 = M2C_FIELD(temp_4, f32 *, 4);
        temp_f4 = M2C_FIELD(temp_2, f32 *, 8);
        temp_f0 = M2C_FIELD(temp_3, f32 *, 0x128);
        temp_f1 = M2C_FIELD(temp_2, f32 *, 4);
        temp_f6 = M2C_FIELD(temp_4, f32 *, 8);
        M2C_FIELD(arg0, f32 *, 4) = (f32) ((temp_f4 * temp_f3) - (temp_f0 * temp_f6));
        M2C_FIELD(arg0, f32 *, 8) = (f32) ((temp_f0 * temp_f7) - (temp_f1 * temp_f3));
        M2C_FIELD(arg0, f32 *, 0) = (f32) ((temp_f1 * temp_f6) - (temp_f4 * temp_f7));
    } else {
        temp_2_2 = arg2 + 0x2C;
        temp_3_2 = arg2 + 0x38;
        temp_f11 = M2C_FIELD(temp_2_2, f32 *, 8);
        temp_4_2 = arg2 + 0xC;
        temp_f17 = M2C_FIELD(temp_3_2, f32 *, 4);
        temp_f12 = M2C_FIELD(temp_2_2, f32 *, 4);
        temp_f16 = M2C_FIELD(temp_3_2, f32 *, 8);
        temp_f18 = M2C_FIELD(arg2, f32 *, 0x38);
        temp_f5 = M2C_FIELD(arg2, f32 *, 0x2C);
        temp_3_3 = M2C_FIELD(arg2, void **, 0x4C);
        temp_6 = M2C_FIELD(arg2, void **, 0x50);
        temp_f19 = M2C_FIELD(arg2, f32 *, 0xC);
        temp_f20 = M2C_FIELD(temp_4_2, f32 *, 4);
        temp_f10 = (temp_f12 * temp_f16) - (temp_f11 * temp_f17);
        temp_f21 = M2C_FIELD(temp_4_2, f32 *, 8);
        temp_f0_2 = (temp_f11 * temp_f18) - (temp_f5 * temp_f16);
        temp_2_3 = temp_3_3 + 0x128;
        temp_f14 = (temp_f5 * temp_f17) - (temp_f12 * temp_f18);
        temp_5 = temp_6 + 0x128;
        temp_f14_2 = temp_f14 * temp_f14;
        temp_f2 = M2C_FIELD(temp_2_3, f32 *, 8);
        temp_f4_2 = M2C_FIELD(temp_2_3, f32 *, 4);
        temp_f1_2 = M2C_FIELD(temp_3_3, f32 *, 0x128);
        temp_f6_2 = (temp_f1_2 * temp_f12) - (temp_f4_2 * temp_f5);
        temp_f4_3 = (temp_f4_2 * temp_f11) - (temp_f2 * temp_f12);
        temp_f8 = (temp_f2 * temp_f5) - (temp_f1_2 * temp_f11);
        temp_f15 = (temp_f6_2 * temp_f18) - (temp_f4_3 * temp_f16);
        temp_f3_2 = M2C_FIELD(temp_5, f32 *, 8);
        temp_f0_3 = M2C_FIELD(temp_5, f32 *, 4);
        temp_f2_2 = M2C_FIELD(temp_6, f32 *, 0x128);
        sp64 = temp_f15;
        temp_f1_3 = (temp_f2_2 * temp_f17) - (temp_f0_3 * temp_f18);
        temp_f0_4 = (temp_f0_3 * temp_f16) - (temp_f3_2 * temp_f17);
        temp_f7_2 = (temp_f3_2 * temp_f18) - (temp_f2_2 * temp_f16);
        temp_f13 = (temp_f8 * temp_f16) - (temp_f6_2 * temp_f17);
        sp60 = temp_f13;
        temp_f1_4 = ((temp_f12 * temp_f1_3) - (temp_f11 * temp_f7_2)) + temp_f13;
        temp_f2_3 = ((temp_f11 * temp_f0_4) - (temp_f5 * temp_f1_3)) + temp_f15;
        var_f4 = (temp_f4_3 * temp_f17) - (temp_f8 * temp_f18);
        sp68 = var_f4;
        temp_f5_2 = ((temp_f5 * temp_f7_2) - (temp_f12 * temp_f0_4)) + var_f4;
        M2C_ERROR(/* unknown instruction: c1 0xc0104 */);
        temp_f0_5 = (temp_f19 * temp_f1_4) + (temp_f20 * temp_f2_3) + (temp_f21 * temp_f5_2);
        temp_f21_2 = temp_f21 * temp_f0_5;
        temp_f19_2 = temp_f19 * temp_f0_5;
        temp_f20_2 = temp_f20 * temp_f0_5;
        sp70 = temp_f19_2;
        sp74 = temp_f20_2;
        sp58 = temp_f5_2 - temp_f21_2;
        sp50 = temp_f1_4 - temp_f19_2;
        sp54 = temp_f2_3 - temp_f20_2;
        sp78 = temp_f21_2;
        if (var_f4 != var_f4) {
            var_f4 = func_003F3E80(temp_4_2, temp_5, temp_6, arg2, (temp_f10 * temp_f10) + (temp_f0_2 * temp_f0_2) + temp_f14_2, temp_f13, temp_f14_2, temp_f15, temp_f16, temp_f17, temp_f18, temp_f19_2);
        }
        temp_f0_6 = sp50 / var_f4;
        temp_f1_5 = sp54 / var_f4;
        temp_f2_4 = sp58 / var_f4;
        M2C_FIELD(arg0, f32 *, 0) = temp_f0_6;
        M2C_FIELD(arg0, f32 *, 4) = temp_f1_5;
        M2C_FIELD(arg0, f32 *, 8) = temp_f2_4;
        sp50 = temp_f0_6;
        sp54 = temp_f1_5;
        sp58 = temp_f2_4;
    }
    return arg0;
}
