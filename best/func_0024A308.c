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

f32 func_001E9468(s32, s32);                        /* extern */
f32 func_001E94B8(s32, s32);                        /* extern */
s32 func_001EA098(s32);                             /* extern */
M2C_UNK func_0023AA30(f32 *, void *, void *, void *, f32 *, M2C_UNK, M2C_UNK *, M2C_UNK *, f32, f32, f32, f32, s32, s32); /* extern */
M2C_UNK func_0024A790(s32, void *, void *, void *, void *, f32 *, s32, f32); /* extern */
s32 func_0027C020(void *, f32 *, void *, void *, void *); /* extern */
s32 func_002C3C48();                                /* extern */
extern f32 D_004264A0;
extern M2C_UNK D_004264A8;
extern M2C_UNK D_00426508;

s32 func_0024A308(s32 arg0, void *arg1, void *arg3, void *arg4, f32 *arg5) {
    f32 sp10;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp80;
    f32 sp84;
    f32 sp88;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f23;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f4_4;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f5_3;
    f32 temp_f5_4;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f7_3;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 var_f0;
    f32 var_f21;
    s32 temp_17;
    s32 temp_21;
    s32 temp_4;
    s32 var_2;
    s32 var_30;
    s32 var_3;
    void *temp_16;
    void *temp_19;
    void *temp_20;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_3;
    void *temp_3_2;
    void *temp_6;
    void *temp_7;
    void *temp_8;

    var_30 = 0;
    temp_2 = arg4 + 0x14;
    temp_16 = M2C_FIELD(arg4, void **, 0xC);
    sp10 = 0.0f;
    temp_f4 = M2C_FIELD(temp_2, f32 *, 4);
    temp_f5 = M2C_FIELD(temp_2, f32 *, 8);
    temp_f6 = M2C_FIELD(temp_2, f32 *, 0xC);
    temp_4 = M2C_FIELD(temp_2, s32 *, 0x10);
    M2C_FIELD(&sp10, f32 *, 4) = 0.0f;
    M2C_FIELD(&sp10, f32 *, 8) = 0.0f;
    sp10 = M2C_FIELD(arg4, f32 *, 0x14);
    temp_19 = M2C_FIELD(arg3, void **, 0x2C);
    temp_20 = M2C_FIELD(arg1, void **, 0x2C);
    M2C_FIELD(&sp10, f32 *, 4) = temp_f4;
    M2C_FIELD(&sp10, f32 *, 8) = temp_f5;
    M2C_FIELD(&sp10, f32 *, 0xC) = temp_f6;
    M2C_FIELD(&sp10, s32 *, 0x10) = temp_4;
    if (temp_4 < 0) {
        var_2 = 1;
    } else {
        temp_f1 = (sp10 * M2C_FIELD(temp_16, f32 *, 0)) + (temp_f4 * M2C_FIELD(temp_16, f32 *, 4)) + (temp_f5 * M2C_FIELD(temp_16, f32 *, 8)) + temp_f6;
        var_3 = 0;
        if (D_004264A0 <= temp_f1) {
            var_3 = 1;
        } else if (temp_f1 <= -D_004264A0) {
            var_3 = -1;
        }
        var_2 = var_3 == 1;
    }
    if (var_2 != 0) {
        sp10 = M2C_FIELD(&D_004264A8, f32 *, 0);
        M2C_FIELD(&sp10, f32 *, 4) = (f32) M2C_FIELD(&D_004264A8, f32 *, 4);
        M2C_FIELD(&sp10, f32 *, 0xC) = (f32) M2C_FIELD(&D_004264A8, f32 *, 0xC);
        M2C_FIELD(&sp10, f32 *, 8) = (f32) M2C_FIELD(&D_004264A8, f32 *, 8);
        M2C_FIELD(&sp10, s32 *, 0x10) = (s32) M2C_FIELD(&D_004264A8, s32 *, 0x10);
        func_0024A790(arg0, temp_16, arg1, temp_19, temp_20, &sp10, M2C_FIELD(&D_004264A8, s32 *, 0x10), *arg5);
        temp_3 = arg4 + 0x14;
        M2C_FIELD(arg4, f32 *, 0x14) = sp10;
        M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(&sp10, f32 *, 4);
        M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(&sp10, f32 *, 8);
        M2C_FIELD(temp_3, f32 *, 0xC) = (f32) M2C_FIELD(&sp10, f32 *, 0xC);
        M2C_FIELD(temp_3, s32 *, 0x10) = (s32) M2C_FIELD(&sp10, s32 *, 0x10);
    }
    temp_2_2 = temp_19 + 0xA0;
    if (M2C_FIELD(&sp10, s32 *, 0x10) >= 0) {
        temp_3_2 = temp_19 + 0x128;
        temp_6 = temp_19 + 0x11C;
        temp_2_3 = temp_20 + 0xA0;
        temp_7 = temp_20 + 0x128;
        temp_f3 = M2C_FIELD(temp_16, f32 *, 0) - M2C_FIELD(temp_19, f32 *, 0xA0);
        temp_f7 = M2C_FIELD(temp_16, f32 *, 4) - M2C_FIELD(temp_2_2, f32 *, 4);
        temp_f5_2 = M2C_FIELD(temp_16, f32 *, 8) - M2C_FIELD(temp_2_2, f32 *, 8);
        temp_8 = temp_20 + 0x11C;
        sp60 = temp_f3;
        sp64 = temp_f7;
        var_30 = 1;
        sp68 = temp_f5_2;
        temp_f2 = M2C_FIELD(temp_3_2, f32 *, 8);
        temp_f1_2 = M2C_FIELD(temp_3_2, f32 *, 4);
        temp_f0 = M2C_FIELD(temp_19, f32 *, 0x128);
        temp_f6_2 = (temp_f2 * temp_f3) - (temp_f0 * temp_f5_2);
        temp_f4_2 = (temp_f0 * temp_f7) - (temp_f1_2 * temp_f3);
        temp_f1_3 = (temp_f1_2 * temp_f5_2) - (temp_f2 * temp_f7);
        sp54 = temp_f6_2;
        sp58 = temp_f4_2;
        sp50 = temp_f1_3;
        temp_f10 = M2C_FIELD(temp_6, f32 *, 8) + temp_f4_2;
        temp_f8 = M2C_FIELD(temp_6, f32 *, 4) + temp_f6_2;
        temp_f9 = M2C_FIELD(temp_19, f32 *, 0x11C) + temp_f1_3;
        sp48 = temp_f10;
        sp44 = temp_f8;
        sp40 = temp_f9;
        temp_f5_3 = M2C_FIELD(temp_16, f32 *, 0) - M2C_FIELD(temp_20, f32 *, 0xA0);
        temp_f0_2 = M2C_FIELD(temp_16, f32 *, 4) - M2C_FIELD(temp_2_3, f32 *, 4);
        temp_f4_3 = M2C_FIELD(temp_16, f32 *, 8) - M2C_FIELD(temp_2_3, f32 *, 8);
        sp80 = temp_f5_3;
        sp84 = temp_f0_2;
        sp88 = temp_f4_3;
        temp_f3_2 = M2C_FIELD(temp_7, f32 *, 8);
        temp_f1_4 = M2C_FIELD(temp_7, f32 *, 4);
        temp_f2_2 = M2C_FIELD(temp_20, f32 *, 0x128);
        temp_f7_2 = (temp_f1_4 * temp_f4_3) - (temp_f3_2 * temp_f0_2);
        temp_f0_3 = (temp_f2_2 * temp_f0_2) - (temp_f1_4 * temp_f5_3);
        temp_f3_3 = (temp_f3_2 * temp_f5_3) - (temp_f2_2 * temp_f4_3);
        sp70 = temp_f7_2;
        temp_21 = M2C_FIELD(arg3, s32 *, 0x30);
        sp74 = temp_f3_3;
        sp78 = temp_f0_3;
        temp_f1_5 = M2C_FIELD(temp_8, f32 *, 8) + temp_f0_3;
        temp_f4_4 = M2C_FIELD(temp_8, f32 *, 4) + temp_f3_3;
        temp_f5_4 = M2C_FIELD(&sp10, f32 *, 4);
        temp_f2_3 = M2C_FIELD(temp_20, f32 *, 0x11C) + temp_f7_2;
        temp_f10_2 = temp_f10 - temp_f1_5;
        temp_f7_3 = M2C_FIELD(&sp10, f32 *, 8);
        temp_f8_2 = temp_f8 - temp_f4_4;
        sp58 = temp_f1_5;
        temp_f9_2 = temp_f9 - temp_f2_3;
        sp50 = temp_f2_3;
        sp54 = temp_f4_4;
        sp38 = temp_f10_2;
        sp30 = temp_f9_2;
        sp34 = temp_f8_2;
        temp_f1_6 = M2C_FIELD(temp_16, f32 *, 0);
        temp_f6_3 = sp10 * temp_f1_6;
        sp40 = temp_f1_6;
        temp_f0_4 = M2C_FIELD(temp_16, f32 *, 4);
        sp44 = temp_f0_4;
        temp_f0_5 = M2C_FIELD(temp_16, f32 *, 8);
        sp48 = temp_f0_5;
        sp50 = M2C_FIELD(temp_16, f32 *, 0);
        sp54 = M2C_FIELD(temp_16, f32 *, 4);
        sp58 = M2C_FIELD(temp_16, f32 *, 8);
        temp_f23 = fabsf(temp_f6_3 + (M2C_FIELD(&sp10, f32 *, 4) * temp_f0_4) + (M2C_FIELD(&sp10, f32 *, 8) * temp_f0_5) + M2C_FIELD(&sp10, f32 *, 0xC));
        temp_f22 = fabsf(-(M2C_FIELD(&sp10, f32 *, 0xC) + (temp_f6_3 + (temp_f5_4 * M2C_FIELD(temp_16, f32 *, 4)) + (temp_f7_3 * M2C_FIELD(temp_16, f32 *, 8)))) / ((sp10 * temp_f9_2) + (temp_f5_4 * temp_f8_2) + (temp_f7_3 * temp_f10_2)));
        temp_f20 = M2C_FIELD(temp_19, f32 *, 0x1BC);
        temp_17 = func_0027C020(arg1, &sp50, temp_6, temp_7, temp_8);
        var_f21 = temp_f20;
        temp_f0_6 = func_001E94B8(func_001EA098(func_002C3C48()), temp_17);
        if (temp_f0_6 < temp_f20) {
            var_f21 = temp_f0_6;
        }
        temp_f20_2 = M2C_FIELD(temp_19, f32 *, 0x1C0);
        var_f0 = func_001E9468(func_001EA098(func_002C3C48()), temp_17);
        if (var_f0 < temp_f20_2) {
            var_f0 = temp_f20_2;
        }
        func_0023AA30(arg5, temp_19, temp_20, temp_16, &sp10, 0, &D_00426508, &D_00426508, temp_f22, temp_f23, var_f21, var_f0, temp_21, temp_17);
    }
    return var_30;
}
