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

M2C_UNK D_002AD530(s32);                            /* extern */
M2C_UNK func_00151A28(void **, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
f32 func_0015ACB0();                                /* extern */
M2C_UNK func_00171308(M2C_UNK *);                   /* extern */
M2C_UNK func_00171378(f32 *, M2C_UNK);              /* extern */
M2C_UNK func_0018FAC0(M2C_UNK *);                   /* extern */
M2C_UNK func_0018FAC8(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_00190008(M2C_UNK *, s32, f32 *);           /* extern */
M2C_UNK func_002B2028(void *, void *);              /* extern */
s32 func_003FA9B8(M2C_UNK *);                       /* extern */
extern M2C_UNK D_0040E618;
extern M2C_UNK D_0040E658;
extern M2C_UNK D_0044F6A8;

f32 func_00167368(s32 arg1) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    s32 sp6C;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    f32 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp8C;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    f32 sp9C;
    f32 spA0;
    f32 spA4;
    f32 spA8;
    f32 spAC;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    f32 spBC;
    f32 spC0;
    f32 spC4;
    f32 spC8;
    f32 spCC;
    f32 spD0;
    f32 spD4;
    f32 spD8;
    f32 spDC;
    f32 spE0;
    f32 spE4;
    s32 spE8;
    s32 spEC;
    M2C_UNK spF0;
    s32 spF8;
    s32 spFC;
    s32 sp104;
    s32 sp108;
    f32 sp10C;
    f32 sp110;
    f32 sp114;
    s32 sp118;
    M2C_UNK sp11C;
    void *sp164;
    M2C_UNK sp17C;
    void *sp1C4;
    s32 sp1DC;
    s32 sp1E0;
    s32 sp1E4;
    s32 sp1E8;
    s32 sp1EC;
    s32 sp1F0;
    s32 sp1F4;
    s32 sp1F8;
    s32 sp1FC;
    s32 sp200;
    s32 sp204;
    s32 sp208;
    s32 sp20C;
    s32 sp210;
    s32 sp214;
    s32 sp218;
    s32 sp21C;
    s32 sp220;
    s32 sp224;
    s32 sp228;
    s32 sp22C;
    s32 sp230;
    s32 sp234;
    s32 sp238;
    s32 sp23C;
    s32 sp240;
    s32 sp244;
    s32 sp248;
    s32 sp24C;
    s32 sp250;
    s32 sp254;
    s32 sp258;
    s32 sp25C;
    s32 sp260;
    s32 sp264;
    s32 sp268;
    s32 sp26C;
    s32 sp270;
    void *sp274;
    f32 sp280;
    s32 sp284;
    s32 sp288;
    void *sp290;
    void *sp2A0;
    M2C_UNK sp2B0;
    f32 temp_f20;
    f32 temp_f22;
    s32 temp_2;
    s32 temp_2_10;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_2_5;
    s32 temp_2_6;
    s32 temp_2_7;
    s32 temp_2_8;
    s32 temp_2_9;
    s32 temp_4_10;
    s32 temp_4_11;
    s32 temp_4_15;
    s32 temp_4_16;
    s32 var_3;
    s32 var_3_2;
    s32 var_3_4;
    s32 var_3_5;
    s32 var_3_7;
    void *temp_4;
    void *temp_4_12;
    void *temp_4_13;
    void *temp_4_14;
    void *temp_4_2;
    void *temp_4_3;
    void *temp_4_4;
    void *temp_4_5;
    void *temp_4_6;
    void *temp_4_7;
    void *temp_4_8;
    void *temp_4_9;
    void *temp_5;
    void *temp_5_2;
    void *var_3_3;
    void *var_3_6;

    sp280 = 0.0f;
    sp284 = 0;
    sp288 = 0;
    sp30 = sp280;
    sp34 = sp280;
    sp38 = sp280;
    sp3C = sp280;
    sp40 = sp280;
    sp44 = sp280;
    sp48 = sp280;
    sp4C = sp280;
    sp50 = sp280;
    sp54 = sp280;
    sp58 = sp280;
    sp5C = sp280;
    sp60 = sp280;
    sp64 = sp280;
    sp68 = sp280;
    sp6C = 0;
    sp70 = sp280;
    sp74 = sp280;
    sp78 = sp280;
    sp7C = sp280;
    sp80 = sp280;
    sp84 = sp280;
    sp88 = sp280;
    sp8C = sp280;
    sp90 = sp280;
    sp94 = sp280;
    sp98 = sp280;
    sp9C = sp280;
    spA0 = sp280;
    spA4 = sp280;
    spA8 = sp280;
    spAC = sp280;
    spB0 = sp280;
    spB4 = sp280;
    spB8 = sp280;
    spBC = sp280;
    func_00171308(&spF0);
    spC0 = sp280;
    spC4 = sp280;
    spC8 = sp280;
    spCC = sp280;
    spD0 = sp280;
    spD4 = sp280;
    spD8 = sp280;
    spDC = sp280;
    spE0 = sp280;
    spE4 = sp280;
    spE8 = 0;
    spEC = 0;
    spF8 = 0;
    spFC = 0;
    M2C_FIELD(&spC0, s32 *, 0x40) = 1;
    sp114 = sp280;
    sp104 = 0;
    sp108 = 0;
    sp10C = sp280;
    sp110 = sp280;
    sp118 = 0;
    if (M2C_FIELD(&D_0040E658, s32 *, 0xC) != 0) {
        var_3 = func_00151930(&D_0040E658);
    } else {
        var_3 = (s32) (&D_0040E658 + 0x10);
        M2C_FIELD(&D_0040E658, s32 *, 8) = (s32) (M2C_FIELD(&D_0040E658, s32 *, 8) + 1);
    }
    sp164 = (void *) var_3;
    M2C_FIELD(&sp11C, s32 *, 0) = 0;
    M2C_FIELD(&sp11C, s32 *, 4) = 0;
    M2C_FIELD(&sp11C, s32 *, 8) = 0;
    M2C_FIELD(&sp11C, s32 *, 0xC) = 0;
    M2C_FIELD(&sp11C, s32 *, 0x10) = 0;
    M2C_FIELD(&sp11C, s32 *, 0x14) = 0;
    M2C_FIELD(&sp11C, s32 *, 0x18) = 0;
    M2C_FIELD(&sp11C, s32 *, 0x1C) = 0;
    M2C_FIELD(&sp11C, s32 *, 0x20) = 0;
    M2C_FIELD(&sp11C, s32 *, 0x24) = 0;
    M2C_FIELD(&sp11C, s32 *, 0x28) = 0;
    M2C_FIELD(&sp11C, s32 *, 0x2C) = 0;
    M2C_FIELD(&sp11C, s32 *, 0x30) = 0;
    M2C_FIELD(&sp11C, s32 *, 0x34) = 0;
    M2C_FIELD(&sp11C, s32 *, 0x38) = 0;
    M2C_FIELD(&sp11C, s32 *, 0x3C) = 0;
    M2C_FIELD(&sp11C, s32 *, 0x40) = 0;
    M2C_FIELD(&sp11C, s32 *, 0x44) = 0;
    if (M2C_FIELD(&D_0040E658, s32 *, 0xC) != 0) {
        var_3_2 = func_00151930(&D_0040E658);
    } else {
        var_3_2 = (s32) (&D_0040E658 + 0x10);
        M2C_FIELD(&D_0040E658, s32 *, 8) = (s32) (M2C_FIELD(&D_0040E658, s32 *, 8) + 1);
    }
    sp290 = (void *) var_3_2;
    func_00151A28(&sp290, 0, 0xFFFFFFFF, &D_0044F6A8, func_003FA9B8(&D_0044F6A8));
    if (&sp290 != (&sp11C + 0x48)) {
        temp_5 = M2C_FIELD(&sp11C, void **, 0x48);
        temp_4 = temp_5 - 0x10;
        temp_2 = M2C_FIELD(temp_4, s32 *, 8) - 1;
        M2C_FIELD(temp_4, s32 *, 8) = temp_2;
        if (temp_2 == 0) {
            if ((M2C_FIELD(temp_4, s32 *, 4) + 0x10) != 0) {
                func_002B2028(temp_4, temp_5);
            } else {
                M2C_FIELD(temp_5, void **, -0x10) = (void *) M2C_FIELD(&D_0040E618, void **, -4);
                M2C_FIELD(&D_0040E618, void **, -4) = temp_4;
            }
        }
        var_3_3 = sp290;
        temp_4_2 = var_3_3 - 0x10;
        if (M2C_FIELD(temp_4_2, s32 *, 0xC) == 0) {
            M2C_FIELD(temp_4_2, s32 *, 8) = (s32) (M2C_FIELD(temp_4_2, s32 *, 8) + 1);
        } else {
            var_3_3 = func_00151930(temp_4_2);
        }
        M2C_FIELD(&sp11C, void **, 0x48) = var_3_3;
    }
    temp_4_3 = sp290 - 0x10;
    temp_2_2 = M2C_FIELD(temp_4_3, s32 *, 8) - 1;
    M2C_FIELD(temp_4_3, s32 *, 8) = temp_2_2;
    if (temp_2_2 == 0) {
        if ((M2C_FIELD(temp_4_3, s32 *, 4) + 0x10) != 0) {
            func_002B2028(temp_4_3, sp290);
        } else {
            M2C_FIELD(sp290, void **, -0x10) = (void *) M2C_FIELD(&D_0040E618, void **, -4);
            M2C_FIELD(&D_0040E618, void **, -4) = temp_4_3;
        }
    }
    M2C_FIELD(&sp11C, s32 *, 0x5C) = 0;
    M2C_FIELD(&sp11C, s32 *, 0x4C) = 0;
    M2C_FIELD(&sp11C, s32 *, 0x50) = 0;
    M2C_FIELD(&sp11C, s32 *, 0x54) = 0;
    M2C_FIELD(&sp11C, s32 *, 0x58) = 0;
    if (M2C_FIELD(&D_0040E658, s32 *, 0xC) != 0) {
        var_3_4 = func_00151930(&D_0040E658);
    } else {
        var_3_4 = (s32) (&D_0040E658 + 0x10);
        M2C_FIELD(&D_0040E658, s32 *, 8) = (s32) (M2C_FIELD(&D_0040E658, s32 *, 8) + 1);
    }
    sp1C4 = (void *) var_3_4;
    M2C_FIELD(&sp17C, s32 *, 0) = 0;
    M2C_FIELD(&sp17C, s32 *, 4) = 0;
    M2C_FIELD(&sp17C, s32 *, 8) = 0;
    M2C_FIELD(&sp17C, s32 *, 0xC) = 0;
    M2C_FIELD(&sp17C, s32 *, 0x10) = 0;
    M2C_FIELD(&sp17C, s32 *, 0x14) = 0;
    M2C_FIELD(&sp17C, s32 *, 0x18) = 0;
    M2C_FIELD(&sp17C, s32 *, 0x1C) = 0;
    M2C_FIELD(&sp17C, s32 *, 0x20) = 0;
    M2C_FIELD(&sp17C, s32 *, 0x24) = 0;
    M2C_FIELD(&sp17C, s32 *, 0x28) = 0;
    M2C_FIELD(&sp17C, s32 *, 0x2C) = 0;
    M2C_FIELD(&sp17C, s32 *, 0x30) = 0;
    M2C_FIELD(&sp17C, s32 *, 0x34) = 0;
    M2C_FIELD(&sp17C, s32 *, 0x38) = 0;
    M2C_FIELD(&sp17C, s32 *, 0x3C) = 0;
    M2C_FIELD(&sp17C, s32 *, 0x40) = 0;
    M2C_FIELD(&sp17C, s32 *, 0x44) = 0;
    if (M2C_FIELD(&D_0040E658, s32 *, 0xC) != 0) {
        var_3_5 = func_00151930(&D_0040E658);
    } else {
        var_3_5 = (s32) (&D_0040E658 + 0x10);
        M2C_FIELD(&D_0040E658, s32 *, 8) = (s32) (M2C_FIELD(&D_0040E658, s32 *, 8) + 1);
    }
    sp2A0 = (void *) var_3_5;
    func_00151A28(&sp2A0, 0, 0xFFFFFFFF, &D_0044F6A8, func_003FA9B8(&D_0044F6A8));
    if (&sp2A0 != (&sp17C + 0x48)) {
        temp_5_2 = M2C_FIELD(&sp17C, void **, 0x48);
        temp_4_4 = temp_5_2 - 0x10;
        temp_2_3 = M2C_FIELD(temp_4_4, s32 *, 8) - 1;
        M2C_FIELD(temp_4_4, s32 *, 8) = temp_2_3;
        if (temp_2_3 == 0) {
            if ((M2C_FIELD(temp_4_4, s32 *, 4) + 0x10) != 0) {
                func_002B2028(temp_4_4, temp_5_2);
            } else {
                M2C_FIELD(temp_5_2, void **, -0x10) = (void *) M2C_FIELD(&D_0040E618, void **, -4);
                M2C_FIELD(&D_0040E618, void **, -4) = temp_4_4;
            }
        }
        var_3_6 = sp2A0;
        temp_4_5 = var_3_6 - 0x10;
        if (M2C_FIELD(temp_4_5, s32 *, 0xC) == 0) {
            M2C_FIELD(temp_4_5, s32 *, 8) = (s32) (M2C_FIELD(temp_4_5, s32 *, 8) + 1);
        } else {
            var_3_6 = func_00151930(temp_4_5);
        }
        M2C_FIELD(&sp17C, void **, 0x48) = var_3_6;
    }
    temp_4_6 = sp2A0 - 0x10;
    temp_2_4 = M2C_FIELD(temp_4_6, s32 *, 8) - 1;
    M2C_FIELD(temp_4_6, s32 *, 8) = temp_2_4;
    if (temp_2_4 == 0) {
        if ((M2C_FIELD(temp_4_6, s32 *, 4) + 0x10) != 0) {
            func_002B2028(temp_4_6, sp2A0);
        } else {
            M2C_FIELD(sp2A0, void **, -0x10) = (void *) M2C_FIELD(&D_0040E618, void **, -4);
            M2C_FIELD(&D_0040E618, void **, -4) = temp_4_6;
        }
    }
    M2C_FIELD(&sp17C, s32 *, 0x5C) = 0;
    M2C_FIELD(&sp17C, s32 *, 0x4C) = 0;
    M2C_FIELD(&sp17C, s32 *, 0x50) = 0;
    M2C_FIELD(&sp17C, s32 *, 0x54) = 0;
    M2C_FIELD(&sp17C, s32 *, 0x58) = 0;
    sp1DC = 0;
    sp1E0 = 0;
    sp1E4 = 0;
    sp1E8 = 0;
    sp1EC = 0;
    sp1F0 = 0;
    sp1F4 = 0;
    sp1F8 = 0;
    sp1FC = 0;
    sp200 = 0;
    sp204 = 0;
    sp208 = 0;
    sp20C = 0;
    sp210 = 0;
    sp214 = 0;
    sp218 = 0;
    sp21C = 0;
    sp220 = 0;
    sp224 = 0;
    sp228 = 0;
    sp22C = 0;
    sp230 = 0;
    sp234 = 0;
    sp238 = 0;
    sp23C = 0;
    sp240 = 0;
    sp244 = 0;
    sp248 = 0;
    sp24C = 0;
    sp250 = 0;
    sp254 = 0;
    sp258 = 0;
    sp25C = 0;
    sp260 = 0;
    sp264 = 0;
    sp268 = 0;
    sp26C = 0;
    sp270 = 0;
    if (M2C_FIELD(&D_0040E658, s32 *, 0xC) != 0) {
        var_3_7 = func_00151930(&D_0040E658);
    } else {
        var_3_7 = (s32) (&D_0040E658 + 0x10);
        M2C_FIELD(&D_0040E658, s32 *, 8) = (s32) (M2C_FIELD(&D_0040E658, s32 *, 8) + 1);
    }
    sp274 = (void *) var_3_7;
    func_0018FAC0(&sp2B0);
    if (func_00190008(&sp2B0, arg1, &sp30) != 0) {
        temp_f22 = M2C_FIELD(((spF8 * 4) + spFC), f32 *, -4);
        temp_f20 = ((((2.0f * spC8 * func_0015ACB0() * sp54 * 0.06f) / spD0) * 0.6213712f) / temp_f22) / 2.4f;
        func_0018FAC8(&sp2B0, 2);
        temp_4_7 = sp274 - 0x10;
        temp_2_5 = M2C_FIELD(temp_4_7, s32 *, 8) - 1;
        M2C_FIELD(temp_4_7, s32 *, 8) = temp_2_5;
        if (temp_2_5 == 0) {
            if ((M2C_FIELD(temp_4_7, s32 *, 4) + 0x10) != 0) {
                func_002B2028(temp_4_7, sp274);
            } else {
                M2C_FIELD(sp274, void **, -0x10) = (void *) M2C_FIELD(&D_0040E618, void **, -4);
                M2C_FIELD(&D_0040E618, void **, -4) = temp_4_7;
            }
        }
        temp_4_8 = sp1C4 - 0x10;
        temp_2_6 = M2C_FIELD(temp_4_8, s32 *, 8) - 1;
        M2C_FIELD(temp_4_8, s32 *, 8) = temp_2_6;
        if (temp_2_6 == 0) {
            if ((M2C_FIELD(temp_4_8, s32 *, 4) + 0x10) != 0) {
                func_002B2028(temp_4_8, sp1C4);
            } else {
                M2C_FIELD(sp1C4, void **, -0x10) = (void *) M2C_FIELD(&D_0040E618, void **, -4);
                M2C_FIELD(&D_0040E618, void **, -4) = temp_4_8;
            }
        }
        temp_4_9 = sp164 - 0x10;
        temp_2_7 = M2C_FIELD(temp_4_9, s32 *, 8) - 1;
        M2C_FIELD(temp_4_9, s32 *, 8) = temp_2_7;
        if (temp_2_7 == 0) {
            if ((M2C_FIELD(temp_4_9, s32 *, 4) + 0x10) != 0) {
                func_002B2028(temp_4_9, sp164);
            } else {
                M2C_FIELD(sp164, void **, -0x10) = (void *) M2C_FIELD(&D_0040E618, void **, -4);
                M2C_FIELD(&D_0040E618, void **, -4) = temp_4_9;
            }
        }
        if (spFC != 0) {
            D_002AD530(spFC);
        }
        temp_4_10 = M2C_FIELD(&spC0, s32 *, 0x44);
        if (temp_4_10 != 0) {
            D_002AD530(temp_4_10);
        }
        temp_4_11 = M2C_FIELD(&spC0, s32 *, 0x48);
        if (temp_4_11 != 0) {
            D_002AD530(temp_4_11);
        }
        func_00171378(&spC0 + 0x30, 2);
        return temp_f20;
    }
    func_0018FAC8(&sp2B0, 2);
    temp_4_12 = sp274 - 0x10;
    temp_2_8 = M2C_FIELD(temp_4_12, s32 *, 8) - 1;
    M2C_FIELD(temp_4_12, s32 *, 8) = temp_2_8;
    if (temp_2_8 == 0) {
        if ((M2C_FIELD(temp_4_12, s32 *, 4) + 0x10) != 0) {
            func_002B2028(temp_4_12, sp274);
        } else {
            M2C_FIELD(sp274, void **, -0x10) = (void *) M2C_FIELD(&D_0040E618, void **, -4);
            M2C_FIELD(&D_0040E618, void **, -4) = temp_4_12;
        }
    }
    temp_4_13 = sp1C4 - 0x10;
    temp_2_9 = M2C_FIELD(temp_4_13, s32 *, 8) - 1;
    M2C_FIELD(temp_4_13, s32 *, 8) = temp_2_9;
    if (temp_2_9 == 0) {
        if ((M2C_FIELD(temp_4_13, s32 *, 4) + 0x10) != 0) {
            func_002B2028(temp_4_13, sp1C4);
        } else {
            M2C_FIELD(sp1C4, void **, -0x10) = (void *) M2C_FIELD(&D_0040E618, void **, -4);
            M2C_FIELD(&D_0040E618, void **, -4) = temp_4_13;
        }
    }
    temp_4_14 = sp164 - 0x10;
    temp_2_10 = M2C_FIELD(temp_4_14, s32 *, 8) - 1;
    M2C_FIELD(temp_4_14, s32 *, 8) = temp_2_10;
    if (temp_2_10 == 0) {
        if ((M2C_FIELD(temp_4_14, s32 *, 4) + 0x10) != 0) {
            func_002B2028(temp_4_14, sp164);
        } else {
            M2C_FIELD(sp164, void **, -0x10) = (void *) M2C_FIELD(&D_0040E618, void **, -4);
            M2C_FIELD(&D_0040E618, void **, -4) = temp_4_14;
        }
    }
    if (spFC != 0) {
        D_002AD530(spFC);
    }
    temp_4_15 = M2C_FIELD(&spC0, s32 *, 0x44);
    if (temp_4_15 != 0) {
        D_002AD530(temp_4_15);
    }
    temp_4_16 = M2C_FIELD(&spC0, s32 *, 0x48);
    if (temp_4_16 != 0) {
        D_002AD530(temp_4_16);
    }
    func_00171378(&spC0 + 0x30, 2);
    return 0.0f;
}
