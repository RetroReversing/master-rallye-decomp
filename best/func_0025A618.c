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

s32 D_002AD408(M2C_UNK);                            /* extern */
void *func_002337D0(s32);                           /* extern */
M2C_UNK func_002338E8(void *, M2C_UNK);             /* extern */
M2C_UNK func_00233910(void *, f32 *, f32 *);        /* extern */
M2C_UNK func_00233988(void *, M2C_UNK);             /* extern */
void *func_00233B70(s32, void *);                   /* extern */
M2C_UNK func_00233CA8(void *);                      /* extern */
void *func_0023EE28(s32, void *);                   /* extern */
M2C_UNK func_0023F370(void *, M2C_UNK);             /* extern */
M2C_UNK func_0023F7D8(void *);                      /* extern */
M2C_UNK func_0024F6E0(void **, s32 *);              /* extern */
f32 func_003F3E80(f32);                             /* extern */
extern M2C_UNK D_00426508;

void func_0025A618(void *arg0, void *arg1, void *arg2) {
    s32 *sp0;
    void *sp10;
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
    void *sp60;
    s32 *sp70;
    s32 *sp80;
    s32 *sp90;
    s32 *spA0;
    f32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_11;
    f32 temp_f0_12;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f26;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f3;
    f32 var_f12;
    f32 var_f1;
    f32 var_f20;
    f32 var_f21;
    f32 var_f22;
    f32 var_f23;
    f32 var_f24;
    f32 var_f25;
    s32 *temp_3;
    s32 *temp_3_2;
    s32 *temp_3_3;
    s32 *temp_3_4;
    s32 *temp_3_5;
    s32 temp_18;
    s32 temp_2_11;
    s32 temp_2_13;
    s32 temp_2_16;
    s32 temp_2_18;
    s32 temp_2_20;
    s32 temp_2_22;
    s32 temp_2_3;
    s32 temp_2_5;
    s32 temp_2_7;
    s32 temp_2_9;
    s32 temp_4_2;
    s32 var_3;
    s32 var_3_2;
    s32 var_3_3;
    void *temp_16;
    void *temp_16_2;
    void *temp_20;
    void *temp_2;
    void *temp_2_10;
    void *temp_2_12;
    void *temp_2_14;
    void *temp_2_15;
    void *temp_2_17;
    void *temp_2_19;
    void *temp_2_21;
    void *temp_2_23;
    void *temp_2_2;
    void *temp_2_4;
    void *temp_2_6;
    void *temp_2_8;
    void *temp_4;
    void *temp_4_3;
    void *var_2;
    void *var_2_2;
    void *var_2_3;

    M2C_FIELD(arg0, void **, 0) = arg1;
    temp_4 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_4 != NULL) {
        func_002338E8(temp_4, 3);
    }
    M2C_FIELD(arg0, void **, 0xC) = func_002337D0(D_002AD408(0x38));
    temp_3 = M2C_FIELD(arg1, s32 **, 0x24);
    sp0 = temp_3;
    if (temp_3 != NULL) {
        *temp_3 += 1;
    }
    func_0024F6E0(&sp10, sp0);
    temp_4_2 = M2C_FIELD(sp10, s32 *, 8);
    temp_2 = M2C_FIELD(sp10, void **, 0x10);
    temp_f0 = M2C_FIELD(temp_2, f32 *, 0);
    sp20 = temp_f0;
    var_f22 = temp_f0;
    var_f25 = var_f22;
    temp_f0_2 = M2C_FIELD(temp_2, f32 *, 4);
    sp24 = temp_f0_2;
    var_f21 = temp_f0_2;
    var_f24 = var_f21;
    temp_f0_3 = M2C_FIELD(temp_2, f32 *, 8);
    var_f20 = temp_f0_3;
    sp28 = temp_f0_3;
    var_f23 = var_f20;
    if (temp_4_2 > 1) {
        var_2 = temp_2 + 0xC;
        var_3 = temp_4_2 - 1;
        do {
            temp_f0_4 = M2C_FIELD(var_2, f32 *, 0);
            if (temp_f0_4 < var_f22) {
                var_f22 = temp_f0_4;
            } else if (var_f25 < temp_f0_4) {
                var_f25 = temp_f0_4;
            }
            temp_f0_5 = M2C_FIELD(var_2, f32 *, 4);
            if (temp_f0_5 < var_f21) {
                var_f21 = temp_f0_5;
            } else if (var_f24 < temp_f0_5) {
                var_f24 = temp_f0_5;
            }
            temp_f0_6 = M2C_FIELD(var_2, f32 *, 8);
            if (temp_f0_6 < var_f20) {
                var_f20 = temp_f0_6;
            } else if (var_f23 < temp_f0_6) {
                var_f23 = temp_f0_6;
            }
            var_3 -= 1;
            var_2 += 0xC;
        } while (var_3 != 0);
    }
    temp_f1 = (var_f25 - var_f22) * 0.1f;
    temp_f2 = (var_f24 - var_f21) * 0.1f;
    temp_f3 = (var_f23 - var_f20) * 0.1f;
    temp_f31 = var_f25 + temp_f1;
    temp_f30 = var_f24 + temp_f2;
    temp_f29 = var_f23 + temp_f3;
    temp_f28 = var_f22 - temp_f1;
    sp40 = temp_f31;
    temp_f27 = var_f21 - temp_f2;
    sp44 = temp_f30;
    temp_f26 = var_f20 - temp_f3;
    sp48 = temp_f29;
    sp30 = temp_f28;
    sp34 = temp_f27;
    sp38 = temp_f26;
    func_00233910(M2C_FIELD(arg0, void **, 0xC), &sp30, &sp40);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 0x2C);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0) = 1;
    func_00233988(M2C_FIELD(arg0, void **, 0xC), 1);
    temp_4_3 = M2C_FIELD(arg0, void **, 4);
    if (temp_4_3 != NULL) {
        func_0023F370(temp_4_3, 3);
    }
    temp_2_2 = func_0023EE28(D_002AD408(0x38), arg1);
    M2C_FIELD(arg0, void **, 4) = temp_2_2;
    M2C_FIELD(temp_2_2, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x2C);
    sp54 = M2C_FIELD(&D_00426508, f32 *, 4);
    sp50 = M2C_FIELD(&D_00426508, f32 *, 0);
    sp58 = M2C_FIELD(&D_00426508, f32 *, 8);
    temp_3_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 **, 0x24);
    sp70 = temp_3_2;
    if (temp_3_2 != NULL) {
        *temp_3_2 += 1;
    }
    func_0024F6E0(&sp60, sp70);
    temp_20 = M2C_FIELD(sp60, void **, 0x10);
    if (sp60 != NULL) {
        temp_2_3 = M2C_FIELD(sp60, s32 *, 0) - 1;
        M2C_FIELD(sp60, s32 *, 0) = temp_2_3;
        if (temp_2_3 == 0) {
            temp_2_4 = M2C_FIELD(sp60, void **, 4);
            M2C_FIELD(temp_2_4, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(sp60 + M2C_FIELD(temp_2_4, s16 *, 8), 3, sp60);
        }
    }
    if (sp70 != NULL) {
        temp_2_5 = M2C_FIELD(sp70, s32 *, 0) - 1;
        M2C_FIELD(sp70, s32 *, 0) = temp_2_5;
        if (temp_2_5 == 0) {
            temp_2_6 = M2C_FIELD(sp70, void **, 4);
            M2C_FIELD(temp_2_6, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(sp70 + M2C_FIELD(temp_2_6, s16 *, 8), 3, sp70);
        }
    }
    temp_3_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 **, 0x24);
    sp80 = temp_3_3;
    if (temp_3_3 != NULL) {
        *temp_3_3 += 1;
    }
    func_0024F6E0(&sp60, sp80);
    temp_18 = M2C_FIELD(sp60, s32 *, 8);
    if (sp60 != NULL) {
        temp_2_7 = M2C_FIELD(sp60, s32 *, 0) - 1;
        M2C_FIELD(sp60, s32 *, 0) = temp_2_7;
        if (temp_2_7 == 0) {
            temp_2_8 = M2C_FIELD(sp60, void **, 4);
            M2C_FIELD(temp_2_8, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(sp60 + M2C_FIELD(temp_2_8, s16 *, 8), 3, sp60);
        }
    }
    if (sp80 != NULL) {
        temp_2_9 = M2C_FIELD(sp80, s32 *, 0) - 1;
        M2C_FIELD(sp80, s32 *, 0) = temp_2_9;
        if (temp_2_9 == 0) {
            temp_2_10 = M2C_FIELD(sp80, void **, 4);
            M2C_FIELD(temp_2_10, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(sp80 + M2C_FIELD(temp_2_10, s16 *, 8), 3, sp80);
        }
    }
    var_2_2 = temp_20;
    if (temp_18 > 0) {
        var_3_2 = temp_18;
        do {
            temp_f0_7 = M2C_FIELD(var_2_2, f32 *, 0);
            if (!(fabsf(temp_f0_7 - var_f22) < fabsf(temp_f0_7 - var_f25))) {
                M2C_FIELD(var_2_2, f32 *, 0) = temp_f31;
            } else {
                M2C_FIELD(var_2_2, f32 *, 0) = temp_f28;
            }
            temp_f0_8 = M2C_FIELD(var_2_2, f32 *, 4);
            if (!(fabsf(temp_f0_8 - var_f21) < fabsf(temp_f0_8 - var_f24))) {
                M2C_FIELD(var_2_2, f32 *, 4) = temp_f30;
            } else {
                M2C_FIELD(var_2_2, f32 *, 4) = temp_f27;
            }
            temp_f0_9 = M2C_FIELD(var_2_2, f32 *, 8);
            if (!(fabsf(temp_f0_9 - var_f20) < fabsf(temp_f0_9 - var_f23))) {
                M2C_FIELD(var_2_2, f32 *, 8) = temp_f29;
            } else {
                M2C_FIELD(var_2_2, f32 *, 8) = temp_f26;
            }
            var_3_2 -= 1;
            sp50 += M2C_FIELD(var_2_2, f32 *, 0);
            sp54 += M2C_FIELD(var_2_2, f32 *, 4);
            temp_f0_10 = M2C_FIELD(var_2_2, f32 *, 8);
            var_2_2 += 0xC;
            sp58 += temp_f0_10;
        } while (var_3_2 != 0);
    }
    temp_f1_2 = 1.0f / (f32) temp_18;
    sp58 *= temp_f1_2;
    sp50 *= temp_f1_2;
    sp54 *= temp_f1_2;
    temp_3_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 **, 0x28);
    sp90 = temp_3_4;
    if (temp_3_4 != NULL) {
        *temp_3_4 += 1;
    }
    func_0024F6E0(&sp60, sp90);
    temp_16 = M2C_FIELD(sp60, void **, 0x10);
    if (sp60 != NULL) {
        temp_2_11 = M2C_FIELD(sp60, s32 *, 0) - 1;
        M2C_FIELD(sp60, s32 *, 0) = temp_2_11;
        if (temp_2_11 == 0) {
            temp_2_12 = M2C_FIELD(sp60, void **, 4);
            M2C_FIELD(temp_2_12, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(sp60 + M2C_FIELD(temp_2_12, s16 *, 8), 3, sp60);
        }
    }
    if (sp90 != NULL) {
        temp_2_13 = M2C_FIELD(sp90, s32 *, 0) - 1;
        M2C_FIELD(sp90, s32 *, 0) = temp_2_13;
        if (temp_2_13 == 0) {
            temp_2_14 = M2C_FIELD(sp90, void **, 4);
            M2C_FIELD(temp_2_14, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(sp90 + M2C_FIELD(temp_2_14, s16 *, 8), 3, sp90);
        }
    }
    M2C_FIELD(temp_16, f32 *, 0) = sp50;
    M2C_FIELD(temp_16, f32 *, 4) = sp54;
    M2C_FIELD(temp_16, f32 *, 8) = sp58;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x34) = 1;
    func_0023F7D8(M2C_FIELD(arg0, void **, 4));
    temp_2_15 = func_00233B70(D_002AD408(0x14), arg2);
    M2C_FIELD(arg0, void **, 8) = temp_2_15;
    M2C_FIELD(temp_2_15, s32 *, 8) = (s32) M2C_FIELD(arg2, s32 *, 8);
    temp_3_5 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 **, 0);
    spA0 = temp_3_5;
    if (temp_3_5 != NULL) {
        *temp_3_5 += 1;
    }
    func_0024F6E0(&sp60, spA0);
    temp_16_2 = M2C_FIELD(sp60, void **, 0x10);
    if (sp60 != NULL) {
        temp_2_16 = M2C_FIELD(sp60, s32 *, 0) - 1;
        M2C_FIELD(sp60, s32 *, 0) = temp_2_16;
        if (temp_2_16 == 0) {
            temp_2_17 = M2C_FIELD(sp60, void **, 4);
            M2C_FIELD(temp_2_17, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(sp60 + M2C_FIELD(temp_2_17, s16 *, 8), 3, sp60);
        }
    }
    if (spA0 != NULL) {
        temp_2_18 = M2C_FIELD(spA0, s32 *, 0) - 1;
        M2C_FIELD(spA0, s32 *, 0) = temp_2_18;
        if (temp_2_18 == 0) {
            temp_2_19 = M2C_FIELD(spA0, void **, 4);
            M2C_FIELD(temp_2_19, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(spA0 + M2C_FIELD(temp_2_19, s16 *, 8), 3, spA0);
        }
    }
    var_f12 = 0.0f;
    M2C_FIELD(temp_16_2, f32 *, 0) = sp50;
    var_f1 = sp54;
    M2C_FIELD(temp_16_2, f32 *, 4) = var_f1;
    M2C_FIELD(temp_16_2, f32 *, 8) = sp58;
    if (temp_18 > 0) {
        var_2_3 = temp_20;
        var_3_3 = temp_18;
        do {
            temp_f0_11 = M2C_FIELD(var_2_3, f32 *, 0) - sp50;
            temp_f2_2 = M2C_FIELD(var_2_3, f32 *, 4) - sp54;
            temp_f1_3 = M2C_FIELD(var_2_3, f32 *, 8) - sp58;
            var_f1 = temp_f1_3 * temp_f1_3;
            temp_f0_12 = (temp_f0_11 * temp_f0_11) + (temp_f2_2 * temp_f2_2) + var_f1;
            if (var_f12 < temp_f0_12) {
                var_f12 = temp_f0_12;
            }
            var_3_3 -= 1;
            var_2_3 += 0xC;
        } while (var_3_3 != 0);
    }
    M2C_ERROR(/* unknown instruction: c1 0xc0044 */);
    if (var_f1 != var_f1) {
        var_f1 = func_003F3E80(var_f12);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), f32 *, 4) = (f32) (var_f1 * 1.001f);
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x10) = 1;
    func_00233CA8(M2C_FIELD(arg0, void **, 8));
    if (sp10 != NULL) {
        temp_2_20 = M2C_FIELD(sp10, s32 *, 0) - 1;
        M2C_FIELD(sp10, s32 *, 0) = temp_2_20;
        if (temp_2_20 == 0) {
            temp_2_21 = M2C_FIELD(sp10, void **, 4);
            M2C_FIELD(temp_2_21, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(sp10 + M2C_FIELD(temp_2_21, s16 *, 8), 3, sp10);
        }
    }
    if (sp0 != NULL) {
        temp_2_22 = M2C_FIELD(sp0, s32 *, 0) - 1;
        M2C_FIELD(sp0, s32 *, 0) = temp_2_22;
        if (temp_2_22 == 0) {
            temp_2_23 = M2C_FIELD(sp0, void **, 4);
            M2C_FIELD(temp_2_23, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(sp0 + M2C_FIELD(temp_2_23, s16 *, 8), 3, sp0);
        }
    }
}
