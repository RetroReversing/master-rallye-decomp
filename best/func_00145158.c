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

void *func_001E3820(s32, s32, s32);                 /* extern */
void *func_001FDBA8(s32, s32);                      /* extern */
s32 func_001FDE60();                                /* extern */
f32 func_003F3E80(f32);                             /* extern */
extern f32 D_0044BEC8;

void func_00145158(void *arg0, void *arg1) {
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
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    void *sp80;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f1;
    f32 temp_f1_10;
    f32 temp_f1_11;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f1_6;
    f32 temp_f1_7;
    f32 temp_f1_8;
    f32 temp_f1_9;
    f32 temp_f2;
    f32 temp_f2_10;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f2_7;
    f32 temp_f2_8;
    f32 temp_f2_9;
    f32 temp_f3;
    f32 temp_f3_10;
    f32 temp_f3_11;
    f32 temp_f3_12;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f3_5;
    f32 temp_f3_6;
    f32 temp_f3_7;
    f32 temp_f3_8;
    f32 temp_f3_9;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f4_4;
    f32 temp_f4_5;
    f32 temp_f4_6;
    f32 temp_f4_7;
    f32 temp_f4_8;
    f32 temp_f4_9;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f0_6;
    f32 var_f0_7;
    f32 var_f0_8;
    f32 var_f0_9;
    f32 var_f20;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f3;
    f32 var_f3_2;
    f32 var_f4;
    f32 var_f4_2;
    s32 temp_2_10;
    s32 var_17_2;
    s32 var_18_2;
    s32 var_2;
    void *temp_16;
    void *temp_16_2;
    void *temp_20;
    void *temp_2;
    void *temp_2_11;
    void *temp_2_12;
    void *temp_2_13;
    void *temp_2_14;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_2_6;
    void *temp_2_7;
    void *temp_2_8;
    void *temp_2_9;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_4;
    void *temp_4_2;
    void *temp_5;
    void *temp_6;
    void *var_16;
    void *var_16_2;
    void *var_16_3;
    void *var_17;
    void *var_18;
    void *var_21;
    void *var_3;
    void *var_3_2;

    temp_2 = func_001E3820(func_001E4280(), arg0 + 0x198, arg0 + 0x19C);
    if (temp_2 != NULL) {
        temp_2_2 = M2C_FIELD(temp_2, void **, 8);
        temp_f5 = M2C_FIELD(temp_2_2, f32 *, 0xE0);
        temp_20 = temp_2_2 + 0xF0;
        temp_2_3 = temp_2_2 + 0xE0;
        sp0 = temp_f5;
        temp_f3 = M2C_FIELD(temp_2_3, f32 *, 4);
        sp4 = temp_f3;
        temp_f4 = M2C_FIELD(temp_2_3, f32 *, 8);
        sp8 = temp_f4;
        temp_2_4 = M2C_FIELD(temp_2, void **, 8);
        temp_3 = temp_2_4 + 0x18;
        temp_f0 = M2C_FIELD(temp_2_4, f32 *, 0x18) * 0.1f;
        temp_f1 = M2C_FIELD(temp_3, f32 *, 4) * 0.1f;
        temp_f2 = M2C_FIELD(temp_3, f32 *, 8) * 0.1f;
        temp_f5_2 = temp_f5 + temp_f0;
        sp10 = temp_f0;
        temp_f3_2 = temp_f3 + temp_f1;
        sp14 = temp_f1;
        temp_f4_2 = temp_f4 + temp_f2;
        sp18 = temp_f2;
        sp0 = temp_f5_2;
        sp4 = temp_f3_2;
        var_f0 = (temp_f5_2 * temp_f5_2) + (temp_f3_2 * temp_f3_2);
        temp_f12 = var_f0 + (temp_f4_2 * temp_f4_2);
        sp8 = temp_f4_2;
        if (temp_f12 <= 1.1920929e-7f) {
            sp0 = 0.0f;
            sp4 = 0.0f;
            sp8 = 0.0f;
        } else {
            M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
            if (var_f0 != var_f0) {
                var_f0 = func_003F3E80(temp_f12);
            }
            temp_f1_2 = 1.0f / var_f0;
            sp0 *= temp_f1_2;
            sp8 *= temp_f1_2;
            sp4 *= temp_f1_2;
        }
        sp4 = 0.0f;
        var_f0_2 = (sp0 * sp0) + sp4;
        temp_f12_2 = var_f0_2 + (sp8 * sp8);
        if (!(temp_f12_2 <= 1.1920929e-7f)) {
            M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
            if (var_f0_2 != var_f0_2) {
                var_f0_2 = func_003F3E80(temp_f12_2);
            }
            temp_f1_3 = 1.0f / var_f0_2;
            sp0 *= temp_f1_3;
            sp8 *= temp_f1_3;
            sp4 *= temp_f1_3;
        } else {
            sp8 = sp4;
            sp0 = sp4;
        }
        sp14 = 0.0f;
        sp10 = 1.0f;
        sp18 = 0.0f;
        temp_2_5 = func_001FDBA8(func_001FDE60(), arg0 + 0x14);
        if (temp_2_5 != NULL) {
            var_16 = M2C_FIELD(temp_2_5, void **, 0);
            var_f20 = D_0044BEC8;
            var_21 = NULL;
            var_18 = var_16;
            sp80 = arg0 + 0x18C;
            if (var_16 != M2C_FIELD(temp_2_5, s32 *, 4)) {
                var_17 = var_16 - 0x10;
                do {
                    var_17 += 0x50;
                    var_18 += 0x50;
                    temp_f2_2 = M2C_FIELD(var_17, f32 *, 0);
                    sp30 = temp_f2_2;
                    temp_f3_3 = M2C_FIELD(var_17, f32 *, 4);
                    sp34 = temp_f3_3;
                    temp_f4_3 = M2C_FIELD(var_17, f32 *, 8);
                    sp38 = temp_f4_3;
                    temp_f2_3 = temp_f2_2 - M2C_FIELD(temp_2_2, f32 *, 0xF0);
                    temp_f3_4 = temp_f3_3 - M2C_FIELD(temp_20, f32 *, 4);
                    temp_f4_4 = temp_f4_3 - M2C_FIELD(temp_20, f32 *, 8);
                    sp20 = temp_f2_3;
                    sp24 = temp_f3_4;
                    var_f0_3 = (temp_f2_3 * temp_f2_3) + (temp_f3_4 * temp_f3_4);
                    M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
                    sp28 = temp_f4_4;
                    if (var_f0_3 != var_f0_3) {
                        var_f0_3 = func_003F3E80(var_f0_3 + (temp_f4_4 * temp_f4_4));
                    }
                    var_2 = 1;
                    if (!(var_f0_3 < var_f20)) {
                        var_2 = 0;
                    }
                    if (var_2 != 0) {
                        temp_f2_4 = M2C_FIELD(var_17, f32 *, 0);
                        sp50 = temp_f2_4;
                        temp_f3_5 = M2C_FIELD(var_17, f32 *, 4);
                        sp54 = temp_f3_5;
                        temp_f4_5 = M2C_FIELD(var_17, f32 *, 8);
                        sp58 = temp_f4_5;
                        temp_f2_5 = temp_f2_4 - M2C_FIELD(temp_2_2, f32 *, 0xF0);
                        temp_f3_6 = temp_f3_5 - M2C_FIELD(temp_20, f32 *, 4);
                        temp_f4_6 = temp_f4_5 - M2C_FIELD(temp_20, f32 *, 8);
                        sp40 = temp_f2_5;
                        sp44 = temp_f3_6;
                        var_f0_4 = (temp_f2_5 * temp_f2_5) + (temp_f3_6 * temp_f3_6);
                        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
                        sp48 = temp_f4_6;
                        if (var_f0_4 != var_f0_4) {
                            var_f0_4 = func_003F3E80(var_f0_4 + (temp_f4_6 * temp_f4_6));
                        }
                        var_f20 = var_f0_4;
                        if (var_18 != M2C_FIELD(temp_2_5, s32 *, 4)) {
                            var_16 = var_18;
                            var_21 = var_16;
                        } else {
                            var_21 = M2C_FIELD(temp_2_5, void **, 0);
                            var_16 = var_18;
                        }
                    }
                } while (var_18 != M2C_FIELD(temp_2_5, s32 *, 4));
            }
            if (var_21 != NULL) {
                if (var_16 == M2C_FIELD(temp_2_5, s32 *, 4)) {
                    var_16_2 = var_16 - 0x50;
                    temp_2_6 = var_21 + 0x40;
                    if (var_16_2 != NULL) {
                        var_f4 = M2C_FIELD(var_21, f32 *, 0x40);
                        var_3 = var_16_2 + 0x40;
                        sp30 = var_f4;
                        var_f3 = M2C_FIELD(temp_2_6, f32 *, 4);
                        sp34 = var_f3;
                        var_f2 = M2C_FIELD(temp_2_6, f32 *, 8);
                        sp38 = var_f2;
                        var_f0_5 = M2C_FIELD(var_16_2, f32 *, 0x40);
                        goto block_35;
                    }
                } else {
                    var_16_2 = var_16 + 0x50;
                    temp_2_7 = var_16_2 + 0x40;
                    if (var_16_2 != NULL) {
                        var_f4 = M2C_FIELD(var_16_2, f32 *, 0x40);
                        var_3 = var_21 + 0x40;
                        sp30 = var_f4;
                        var_f3 = M2C_FIELD(temp_2_7, f32 *, 4);
                        sp34 = var_f3;
                        var_f2 = M2C_FIELD(temp_2_7, f32 *, 8);
                        sp38 = var_f2;
                        var_f0_5 = M2C_FIELD(var_21, f32 *, 0x40);
block_35:
                        sp40 = var_f0_5;
                        temp_f4_7 = var_f4 - var_f0_5;
                        temp_f1_4 = M2C_FIELD(var_3, f32 *, 4);
                        sp44 = temp_f1_4;
                        temp_f3_7 = var_f3 - temp_f1_4;
                        temp_f0_2 = M2C_FIELD(var_3, f32 *, 8);
                        sp10 += temp_f4_7;
                        temp_f2_6 = var_f2 - temp_f0_2;
                        sp48 = temp_f0_2;
                        sp20 = temp_f4_7;
                        sp14 += temp_f3_7;
                        sp24 = temp_f3_7;
                        sp28 = temp_f2_6;
                        sp18 += temp_f2_6;
                    }
                }
                if (var_21 != NULL) {
                    if (var_16_2 != M2C_FIELD(temp_2_5, void **, 0)) {
                        temp_16 = var_16_2 - 0x50;
                        temp_2_8 = var_21 + 0x40;
                        if (temp_16 != NULL) {
                            var_f4_2 = M2C_FIELD(var_21, f32 *, 0x40);
                            var_3_2 = temp_16 + 0x40;
                            sp30 = var_f4_2;
                            var_f3_2 = M2C_FIELD(temp_2_8, f32 *, 4);
                            sp34 = var_f3_2;
                            var_f2_2 = M2C_FIELD(temp_2_8, f32 *, 8);
                            sp38 = var_f2_2;
                            var_f0_6 = M2C_FIELD(temp_16, f32 *, 0x40);
                            goto block_44;
                        }
                    } else {
                        temp_16_2 = var_16_2 + 0x50;
                        temp_2_9 = temp_16_2 + 0x40;
                        if (temp_16_2 != NULL) {
                            var_f4_2 = M2C_FIELD(temp_16_2, f32 *, 0x40);
                            var_3_2 = var_21 + 0x40;
                            sp30 = var_f4_2;
                            var_f3_2 = M2C_FIELD(temp_2_9, f32 *, 4);
                            sp34 = var_f3_2;
                            var_f2_2 = M2C_FIELD(temp_2_9, f32 *, 8);
                            sp38 = var_f2_2;
                            var_f0_6 = M2C_FIELD(var_21, f32 *, 0x40);
block_44:
                            sp40 = var_f0_6;
                            temp_f4_8 = var_f4_2 - var_f0_6;
                            temp_f1_5 = M2C_FIELD(var_3_2, f32 *, 4);
                            sp44 = temp_f1_5;
                            temp_f3_8 = var_f3_2 - temp_f1_5;
                            temp_f0_3 = M2C_FIELD(var_3_2, f32 *, 8);
                            sp10 += temp_f4_8;
                            temp_f2_7 = var_f2_2 - temp_f0_3;
                            sp48 = temp_f0_3;
                            sp20 = temp_f4_8;
                            sp14 += temp_f3_8;
                            sp24 = temp_f3_8;
                            sp28 = temp_f2_7;
                            sp18 += temp_f2_7;
                        }
                    }
                }
            }
            sp14 = 0.0f;
            var_f0_7 = (sp10 * sp10) + sp14;
            temp_f12_3 = var_f0_7 + (sp18 * sp18);
            if (!(temp_f12_3 <= 1.1920929e-7f)) {
                M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
                if (var_f0_7 != var_f0_7) {
                    var_f0_7 = func_003F3E80(temp_f12_3);
                }
                temp_f1_6 = 1.0f / var_f0_7;
                sp10 *= temp_f1_6;
                sp18 *= temp_f1_6;
                sp14 *= temp_f1_6;
            } else {
                sp18 = sp14;
                sp10 = sp14;
            }
            temp_2_10 = M2C_FIELD(arg0, s32 *, 0x20) + 1;
            M2C_FIELD(arg0, s32 *, 0x20) = temp_2_10;
            if (temp_2_10 >= 0x1E) {
                M2C_FIELD(arg0, s32 *, 0x20) = 0;
            }
            var_18_2 = 0;
            var_16_3 = arg0 + 0x24;
            var_17_2 = 0x1D;
            temp_2_11 = (M2C_FIELD(arg0, s32 *, 0x20) * 0xC) + arg0;
            temp_2_12 = temp_2_11 + 0x24;
            M2C_FIELD(temp_2_12, f32 *, 4) = sp14;
            M2C_FIELD(temp_2_11, f32 *, 0x24) = sp10;
            M2C_FIELD(temp_2_12, f32 *, 8) = sp18;
            sp20 = 0.0f;
            sp24 = 0.0f;
            sp28 = 0.0f;
            do {
                temp_f0_4 = M2C_FIELD(var_16_3, f32 *, 0);
                temp_f2_8 = M2C_FIELD(var_16_3, f32 *, 4);
                temp_f1_7 = M2C_FIELD(var_16_3, f32 *, 8);
                var_f0_8 = (temp_f0_4 * temp_f0_4) + (temp_f2_8 * temp_f2_8);
                M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
                if (var_f0_8 != var_f0_8) {
                    var_f0_8 = func_003F3E80(var_f0_8 + (temp_f1_7 * temp_f1_7));
                }
                if (sp20 < var_f0_8) {
                    var_18_2 += 1;
                    sp20 += M2C_FIELD(var_16_3, f32 *, 0);
                    sp24 += M2C_FIELD(var_16_3, f32 *, 4);
                    sp28 += M2C_FIELD(var_16_3, f32 *, 8);
                }
                var_17_2 -= 1;
                var_16_3 += 0xC;
            } while (var_17_2 >= 0);
            if (var_18_2 > 0) {
                temp_f0_5 = 1.0f / (f32) var_18_2;
                temp_f1_8 = sp20 * temp_f0_5;
                temp_f3_9 = sp24 * temp_f0_5;
                temp_f2_9 = sp28 * temp_f0_5;
                sp30 = temp_f1_8;
                var_f0_9 = temp_f3_9 * temp_f3_9;
                sp34 = temp_f3_9;
                sp38 = temp_f2_9;
                sp10 = temp_f1_8;
                sp14 = temp_f3_9;
                temp_f12_4 = (temp_f1_8 * temp_f1_8) + var_f0_9 + (temp_f2_9 * temp_f2_9);
                sp18 = temp_f2_9;
                if (temp_f12_4 <= 1.1920929e-7f) {
                    sp10 = 0.0f;
                    sp14 = 0.0f;
                    sp18 = 0.0f;
                } else {
                    M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
                    if (var_f0_9 != var_f0_9) {
                        var_f0_9 = func_003F3E80(temp_f12_4);
                    }
                    temp_f1_9 = 1.0f / var_f0_9;
                    sp10 *= temp_f1_9;
                    sp18 *= temp_f1_9;
                    sp14 *= temp_f1_9;
                }
            }
            sp34 = 0.0f;
            temp_2_13 = M2C_FIELD(arg1, void **, 0x4C);
            sp48 = M2C_FIELD(sp80, f32 *, 8);
            temp_3_2 = temp_2_13 + 0x20;
            temp_f10 = -sp10;
            temp_4 = temp_2_13 + 0x30;
            temp_5 = temp_2_13 + 0x40;
            sp40 = M2C_FIELD(arg0, f32 *, 0x18C);
            temp_6 = temp_2_13 + 0x50;
            sp44 = M2C_FIELD(sp80, f32 *, 4);
            sp68 = sp34;
            sp60 = 1.0f;
            sp6C = sp34;
            sp64 = sp34;
            temp_f3_10 = (sp18 * sp0) + (sp4 * sp34) + (temp_f10 * sp8);
            sp30 = sp18;
            sp38 = temp_f10;
            M2C_FIELD(temp_2_13, f32 *, 0x20) = 1.0f;
            M2C_FIELD(temp_3_2, f32 *, 4) = sp64;
            temp_f4_9 = (sp10 * sp0) + (sp14 * sp4) + (sp18 * sp8);
            M2C_FIELD(temp_3_2, f32 *, 8) = sp68;
            M2C_FIELD(temp_3_2, f32 *, 0xC) = sp6C;
            sp60 = sp34;
            M2C_FIELD(&sp60, f32 *, 4) = 1.0f;
            sp68 = sp34;
            sp6C = sp34;
            M2C_FIELD(temp_2_13, f32 *, 0x30) = sp60;
            M2C_FIELD(temp_4, f32 *, 4) = sp64;
            M2C_FIELD(temp_4, f32 *, 8) = sp68;
            M2C_FIELD(temp_4, f32 *, 0xC) = sp6C;
            sp60 = sp34;
            sp64 = sp34;
            M2C_FIELD(&sp60, f32 *, 8) = 1.0f;
            sp6C = sp34;
            M2C_FIELD(temp_2_13, f32 *, 0x40) = sp60;
            M2C_FIELD(temp_5, f32 *, 4) = sp64;
            M2C_FIELD(temp_5, f32 *, 8) = sp68;
            M2C_FIELD(temp_5, f32 *, 0xC) = sp6C;
            sp68 = sp34;
            sp60 = sp34;
            sp64 = sp34;
            M2C_FIELD(&sp60, f32 *, 0xC) = 1.0f;
            M2C_FIELD(temp_2_13, f32 *, 0x50) = sp60;
            M2C_FIELD(temp_6, f32 *, 4) = sp64;
            M2C_FIELD(temp_6, f32 *, 8) = sp68;
            M2C_FIELD(temp_6, f32 *, 0xC) = sp6C;
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x4C), f32 *, 0x20) = temp_f4_9;
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x4C), f32 *, 0x24) = (f32) -temp_f3_10;
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x4C), f32 *, 0x30) = temp_f3_10;
            M2C_FIELD(M2C_FIELD(arg1, void **, 0x4C), f32 *, 0x34) = temp_f4_9;
            temp_2_14 = M2C_FIELD(arg1, void **, 0x4C);
            temp_f3_11 = M2C_FIELD(arg0, f32 *, 0x1C);
            temp_f1_10 = M2C_FIELD(temp_2_14, f32 *, 0x30);
            temp_4_2 = temp_2_14 + 0x30;
            temp_3_3 = temp_2_14 + 0x50;
            sp60 = temp_f1_10;
            temp_f1_11 = temp_f1_10 * temp_f3_11;
            temp_f0_6 = M2C_FIELD(temp_4_2, f32 *, 4);
            sp64 = temp_f0_6;
            temp_f6 = sp40 + temp_f1_11;
            temp_f0_7 = temp_f0_6 * temp_f3_11;
            temp_f2_10 = M2C_FIELD(temp_4_2, f32 *, 8);
            sp70 = temp_f1_11;
            temp_f3_12 = temp_f2_10 * temp_f3_11;
            sp74 = temp_f0_7;
            sp68 = temp_f2_10;
            sp40 = temp_f6;
            sp78 = temp_f3_12;
            sp44 += temp_f0_7;
            sp48 += temp_f3_12;
            M2C_FIELD(temp_2_14, f32 *, 0x50) = temp_f6;
            M2C_FIELD(temp_3_3, f32 *, 4) = sp44;
            M2C_FIELD(temp_3_3, f32 *, 0xC) = 1.0f;
            M2C_FIELD(temp_3_3, f32 *, 8) = sp48;
        }
    }
}
