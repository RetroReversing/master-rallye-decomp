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
s32 D_002AD5A8(s32);                                /* extern */
M2C_UNK func_0031D7C8(void *, s32, s32);            /* extern */
M2C_UNK func_0031DCE8(void *);                      /* extern */
M2C_UNK func_0031DDD8(void *);                      /* extern */
M2C_UNK func_0031DE48(void *, M2C_UNK *);           /* extern */
M2C_UNK func_003F931C(s32, s32, s32);               /* extern */
M2C_UNK func_003F93CC(s32, s32, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK D_0042DB58;
extern s32 D_0042DB64;
extern s32 D_0043C000;

void func_0031FB80(void **arg1, void *arg2) {
    M2C_UNK32 sp0;
    M2C_UNK32 sp4;
    M2C_UNK32 sp8;
    M2C_UNK sp10;
    s32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    s32 sp50;
    s32 sp54;
    f32 var_f0;
    f32 var_f0_10;
    f32 var_f0_11;
    f32 var_f0_12;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f0_6;
    f32 var_f0_7;
    f32 var_f0_8;
    f32 var_f0_9;
    s32 temp_16;
    s32 temp_17;
    s32 temp_17_2;
    s32 temp_18;
    s32 temp_2;
    s32 temp_4;
    s32 temp_5_2;
    s32 temp_6;
    s32 var_17;
    s32 var_21;
    s32 var_22;
    s32 var_2;
    u8 temp_2_10;
    u8 temp_2_11;
    u8 temp_2_12;
    u8 temp_2_13;
    u8 temp_2_2;
    u8 temp_2_3;
    u8 temp_2_4;
    u8 temp_2_5;
    u8 temp_2_6;
    u8 temp_2_7;
    u8 temp_2_8;
    u8 temp_2_9;
    void *temp_16_2;
    void *temp_16_3;
    void *temp_16_4;
    void *temp_20;
    void *temp_5;
    void *var_16;

    temp_20 = *arg1;
    sp0 = 0;
    sp4 = 0;
    temp_5 = temp_20 + 0x20;
    sp8 = 0;
    M2C_FIELD(temp_20, M2C_UNK32 *, 0x20) = sp0;
    M2C_FIELD(temp_5, M2C_UNK32 *, 4) = sp4;
    var_21 = (s32) ((M2C_FIELD(arg2, s32 *, 4) - M2C_FIELD(arg2, s32 *, 0)) * 0xAAAAAAAB) >> 4;
    M2C_FIELD(temp_5, M2C_UNK32 *, 0xC) = sp0;
    M2C_FIELD(temp_5, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(M2C_FIELD(temp_20, void **, 0x14), s32 *, 0xC) = 0;
    M2C_FIELD(M2C_FIELD(temp_20, void **, 0x10), s32 *, 0xC) = 0;
    M2C_FIELD(temp_20, s32 *, 0x34) = -1;
    temp_17 = M2C_FIELD(&D_0042DB58, s32 *, 0);
    temp_16 = M2C_FIELD(&D_0042DB58, s32 *, 4);
    func_003F93CC(temp_17, temp_16, 0, &D_0042DB58);
    D_0042DB64 = -1;
    M2C_FIELD(&D_0042DB58, s32 *, 4) = (s32) (M2C_FIELD(&D_0042DB58, s32 *, 4) - (temp_16 - temp_17));
    temp_16_2 = M2C_FIELD(temp_20, void **, 0x10);
    if (M2C_FIELD(temp_16_2, s32 *, 8) < var_21) {
        D_0043C000 = M2C_FIELD(temp_16_2, s32 *, 0x10);
        temp_2 = D_002AD5A8((var_21 << 6) + 0x80);
        temp_6 = M2C_FIELD(temp_16_2, s32 *, 0xC);
        temp_17_2 = (temp_2 + 0x7F) & 0xFFFFFF80;
        if (temp_6 > 0) {
            func_003F931C(temp_17_2, M2C_FIELD(temp_16_2, s32 *, 0), temp_6 << 6);
        }
        temp_4 = M2C_FIELD(temp_16_2, s32 *, 4);
        if (temp_4 != 0) {
            D_002AD530(temp_4);
        }
        M2C_FIELD(temp_16_2, s32 *, 4) = temp_2;
        M2C_FIELD(temp_16_2, s32 *, 0) = temp_17_2;
        M2C_FIELD(temp_16_2, s32 *, 8) = var_21;
        D_0043C000 = 0;
    }
    M2C_FIELD(temp_20, s32 *, 0x30) = 0;
    var_17 = 0;
    sp54 = 0;
    sp50 = M2C_FIELD(arg2, s32 *, 0);
    if (var_21 > 0) {
        var_2 = var_21 < 0x1F;
        do {
            temp_18 = (var_2 != 0) ? var_21 : 0x1E;
            var_21 -= temp_18;
            var_22 = temp_18;
            if (temp_18 > 0) {
                var_16 = (var_17 * 0x30) + 0x2C + sp50;
                sp1C = temp_18 | 0x8000;
loop_10:
                sp40 = M2C_FIELD(var_16, f32 *, -0xC);
                sp44 = M2C_FIELD(var_16, f32 *, -8);
                sp48 = M2C_FIELD(var_16, f32 *, -4);
                M2C_FIELD(&sp40, f32 *, 0xC) = 1.0f;
                sp30 = M2C_FIELD(var_16, f32 *, -0x1C);
                sp34 = M2C_FIELD(var_16, f32 *, -0x18);
                sp38 = M2C_FIELD(var_16, f32 *, -0x14);
                sp3C = M2C_FIELD(var_16, f32 *, -0x10);
                temp_2_2 = M2C_FIELD(var_16, u8 *, 0);
                if ((s32) temp_2_2 >= 0) {
                    var_f0 = (f32) temp_2_2;
                } else {
                    var_f0 = 2.0f * (f32) ((temp_2_2 & 1) | (temp_2_2 >> 1));
                }
                sp20 = var_f0 * 0.5f;
                temp_2_3 = M2C_FIELD(var_16, u8 *, 1);
                if ((s32) temp_2_3 >= 0) {
                    var_f0_2 = (f32) temp_2_3;
                } else {
                    var_f0_2 = 2.0f * (f32) ((temp_2_3 & 1) | (temp_2_3 >> 1));
                }
                sp24 = var_f0_2 * 0.5f;
                temp_2_4 = M2C_FIELD(var_16, u8 *, 2);
                if ((s32) temp_2_4 >= 0) {
                    var_f0_3 = (f32) temp_2_4;
                } else {
                    var_f0_3 = 2.0f * (f32) ((temp_2_4 & 1) | (temp_2_4 >> 1));
                }
                sp28 = var_f0_3 * 0.5f;
                temp_2_5 = M2C_FIELD(var_16, u8 *, 3);
                if ((s32) temp_2_5 >= 0) {
                    var_f0_4 = (f32) temp_2_5;
                } else {
                    var_f0_4 = 2.0f * (f32) ((temp_2_5 & 1) | (temp_2_5 >> 1));
                }
                temp_16_3 = var_16 + 0x30;
                sp2C = var_f0_4 * 0.5f;
                func_0031DE48(temp_20, &sp10);
                sp1C = 1;
                sp40 = M2C_FIELD(temp_16_3, f32 *, -0xC);
                sp44 = M2C_FIELD(temp_16_3, f32 *, -8);
                sp48 = M2C_FIELD(temp_16_3, f32 *, -4);
                M2C_FIELD(&sp40, f32 *, 0xC) = 1.0f;
                sp30 = M2C_FIELD(temp_16_3, f32 *, -0x1C);
                sp34 = M2C_FIELD(temp_16_3, f32 *, -0x18);
                sp38 = M2C_FIELD(temp_16_3, f32 *, -0x14);
                sp3C = M2C_FIELD(temp_16_3, f32 *, -0x10);
                temp_2_6 = M2C_FIELD(var_16, u8 *, 0x30);
                if ((s32) temp_2_6 >= 0) {
                    var_f0_5 = (f32) temp_2_6;
                } else {
                    var_f0_5 = 2.0f * (f32) ((temp_2_6 & 1) | (temp_2_6 >> 1));
                }
                sp20 = var_f0_5 * 0.5f;
                temp_2_7 = M2C_FIELD(temp_16_3, u8 *, 1);
                if ((s32) temp_2_7 >= 0) {
                    var_f0_6 = (f32) temp_2_7;
                } else {
                    var_f0_6 = 2.0f * (f32) ((temp_2_7 & 1) | (temp_2_7 >> 1));
                }
                sp24 = var_f0_6 * 0.5f;
                temp_2_8 = M2C_FIELD(temp_16_3, u8 *, 2);
                if ((s32) temp_2_8 >= 0) {
                    var_f0_7 = (f32) temp_2_8;
                } else {
                    var_f0_7 = 2.0f * (f32) ((temp_2_8 & 1) | (temp_2_8 >> 1));
                }
                sp28 = var_f0_7 * 0.5f;
                temp_2_9 = M2C_FIELD(temp_16_3, u8 *, 3);
                if ((s32) temp_2_9 >= 0) {
                    var_f0_8 = (f32) temp_2_9;
                } else {
                    var_f0_8 = 2.0f * (f32) ((temp_2_9 & 1) | (temp_2_9 >> 1));
                }
                temp_16_4 = temp_16_3 + 0x30;
                sp2C = var_f0_8 * 0.5f;
                func_0031DE48(temp_20, &sp10);
                sp1C = 0;
                sp40 = M2C_FIELD(temp_16_4, f32 *, -0xC);
                sp44 = M2C_FIELD(temp_16_4, f32 *, -8);
                sp48 = M2C_FIELD(temp_16_4, f32 *, -4);
                M2C_FIELD(&sp40, f32 *, 0xC) = 1.0f;
                sp30 = M2C_FIELD(temp_16_4, f32 *, -0x1C);
                sp34 = M2C_FIELD(temp_16_4, f32 *, -0x18);
                sp38 = M2C_FIELD(temp_16_4, f32 *, -0x14);
                sp3C = M2C_FIELD(temp_16_4, f32 *, -0x10);
                temp_2_10 = M2C_FIELD(temp_16_3, u8 *, 0x30);
                if ((s32) temp_2_10 >= 0) {
                    var_f0_9 = (f32) temp_2_10;
                } else {
                    var_f0_9 = 2.0f * (f32) ((temp_2_10 & 1) | (temp_2_10 >> 1));
                }
                sp20 = var_f0_9 * 0.5f;
                temp_2_11 = M2C_FIELD(temp_16_4, u8 *, 1);
                if ((s32) temp_2_11 >= 0) {
                    var_f0_10 = (f32) temp_2_11;
                } else {
                    var_f0_10 = 2.0f * (f32) ((temp_2_11 & 1) | (temp_2_11 >> 1));
                }
                sp24 = var_f0_10 * 0.5f;
                temp_2_12 = M2C_FIELD(temp_16_4, u8 *, 2);
                if ((s32) temp_2_12 >= 0) {
                    var_f0_11 = (f32) temp_2_12;
                } else {
                    var_f0_11 = 2.0f * (f32) ((temp_2_12 & 1) | (temp_2_12 >> 1));
                }
                sp28 = var_f0_11 * 0.5f;
                temp_2_13 = M2C_FIELD(temp_16_4, u8 *, 3);
                if ((s32) temp_2_13 >= 0) {
                    var_f0_12 = (f32) temp_2_13;
                } else {
                    var_f0_12 = 2.0f * (f32) ((temp_2_13 & 1) | (temp_2_13 >> 1));
                }
                var_16 = temp_16_4 + 0x30;
                var_17 = var_17 + 1 + 1 + 1;
                var_22 -= 3;
                sp2C = var_f0_12 * 0.5f;
                func_0031DE48(temp_20, &sp10);
                if (var_22 > 0) {
                    sp1C = 1;
                    goto loop_10;
                }
            }
            temp_5_2 = sp54;
            sp54 = temp_5_2 + temp_18;
            func_0031D7C8(temp_20, temp_5_2, temp_18);
            var_2 = var_21 < 0x1F;
        } while (var_21 > 0);
    }
    func_0031DCE8(temp_20);
    func_0031DDD8(temp_20);
}
