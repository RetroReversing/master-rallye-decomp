/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

M2C_UNK func_001B25D8(void *, void *, s32);         /* extern */
M2C_UNK func_001B28C0(void *, void *, s32);         /* extern */
M2C_UNK func_001B2B90(void *, s32, f32);            /* extern */
M2C_UNK func_001B2DD0(void *, M2C_UNK, f32);        /* extern */
M2C_UNK func_001B2E18(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001B2E28(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_001B67E0();                                /* extern */
s32 func_001B68D0(void *);                          /* extern */
M2C_UNK func_001B6A10(void *, f32);                 /* extern */
s32 func_001B6AA0(void *);                          /* extern */
f32 func_001B6B38(void *, s32);                     /* extern */
f32 func_003F3E80(f32);                             /* extern */

void func_001B6318(void *arg0, void *arg1) {
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f12;
    f32 var_f1;
    f32 var_f1_2;
    s32 temp_2_2;
    s32 var_3;
    s32 var_3_2;
    void *temp_17;
    void *temp_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_3;
    void *temp_3_2;
    void *temp_4;

    M2C_FIELD(arg0, void **, 0xC4) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC8) = 1;
    if ((func_001B67E0() != 0) && (func_001B68D0(arg0) != 0)) {
        if (M2C_FIELD(arg0, s32 *, 0xCC) != 0) {
            func_001B2E18(arg1, 1, 0x3F800000);
            M2C_FIELD(arg0, s32 *, 0xD4) = 0;
            M2C_FIELD(arg0, s32 *, 0xC0) = 0;
            M2C_FIELD(arg0, s32 *, 0x4C) = 0;
        } else {
            func_001B2E18(arg1, 0, 0);
            func_001B2E28(arg1, 1, 0x3D4CCCCD);
        }
        temp_2 = arg0 + 0x64;
        temp_3 = arg0 + 0x7C;
        temp_f0 = M2C_FIELD(temp_2, f32 *, 4) - M2C_FIELD(temp_3, f32 *, 4);
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x64) - M2C_FIELD(arg0, f32 *, 0x7C);
        temp_f1 = M2C_FIELD(temp_2, f32 *, 8) - M2C_FIELD(temp_3, f32 *, 8);
        var_f0 = (temp_f2 * temp_f2) + (temp_f0 * temp_f0);
        M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
        sp8 = temp_f1;
        if (var_f0 != var_f0) {
            var_f0 = func_003F3E80(var_f0 + (temp_f1 * temp_f1));
        }
        M2C_FIELD(arg0, f32 *, 0xD8) = var_f0;
        if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
            func_001B6A10(arg0, var_f0);
            temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x64) - M2C_FIELD(arg0, f32 *, 0x7C);
            temp_f2_2 = M2C_FIELD(temp_2, f32 *, 4) - M2C_FIELD(temp_3, f32 *, 4);
            temp_f1_2 = M2C_FIELD(temp_2, f32 *, 8) - M2C_FIELD(temp_3, f32 *, 8);
            var_f0_2 = temp_f1_2 * temp_f1_2;
            M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
            sp8 = temp_f1_2;
            if (var_f0_2 != var_f0_2) {
                var_f0_2 = func_003F3E80((temp_f0_2 * temp_f0_2) + (temp_f2_2 * temp_f2_2) + var_f0_2);
            }
            M2C_FIELD(arg0, f32 *, 0xD8) = var_f0_2;
        }
        temp_2_2 = func_001B6AA0(arg0);
        M2C_FIELD(arg0, s32 *, 0xD0) = temp_2_2;
        if ((temp_2_2 != 0) && (M2C_FIELD(arg0, s32 *, 0xD4) == 0)) {
            temp_17 = arg0 + 0x58;
            temp_f2_3 = M2C_FIELD(temp_2, f32 *, 4) - M2C_FIELD(temp_3, f32 *, 4);
            temp_f1_3 = M2C_FIELD(temp_2, f32 *, 8) - M2C_FIELD(temp_3, f32 *, 8);
            sp8 = temp_f1_3;
            M2C_FIELD(arg0, f32 *, 0x58) = (f32) (M2C_FIELD(arg0, f32 *, 0x64) - M2C_FIELD(arg0, f32 *, 0x7C));
            M2C_FIELD(temp_17, f32 *, 4) = temp_f2_3;
            M2C_FIELD(temp_17, f32 *, 8) = temp_f1_3;
            var_f1 = temp_f1_3 * temp_f1_3;
            temp_f0_3 = M2C_FIELD(arg0, f32 *, 0x58);
            temp_f12 = (temp_f0_3 * temp_f0_3) + (temp_f2_3 * temp_f2_3) + var_f1;
            if (!(temp_f12 <= 1.1920929e-7f)) {
                M2C_ERROR(/* unknown instruction: c1 0xc0044 */);
                if (var_f1 != var_f1) {
                    var_f1 = func_003F3E80(temp_f12);
                }
                temp_f2_4 = 1.0f / var_f1;
                M2C_FIELD(arg0, f32 *, 0x58) = (f32) (M2C_FIELD(arg0, f32 *, 0x58) * temp_f2_4);
                M2C_FIELD(temp_17, f32 *, 4) = (f32) (M2C_FIELD(temp_17, f32 *, 4) * temp_f2_4);
                M2C_FIELD(temp_17, f32 *, 8) = (f32) (M2C_FIELD(temp_17, f32 *, 8) * temp_f2_4);
            } else {
                M2C_FIELD(arg0, f32 *, 0x58) = 0.0f;
                M2C_FIELD(temp_17, f32 *, 8) = 0.0f;
                M2C_FIELD(temp_17, f32 *, 4) = 0.0f;
            }
        }
        temp_3_2 = arg0 + 0x88;
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) M2C_FIELD(arg0, s32 *, 0xD0);
        temp_f0_4 = M2C_FIELD(temp_2, f32 *, 4) - M2C_FIELD(temp_3, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x88) = (f32) (M2C_FIELD(arg0, f32 *, 0x64) - M2C_FIELD(arg0, f32 *, 0x7C));
        temp_f1_4 = M2C_FIELD(temp_2, f32 *, 8) - M2C_FIELD(temp_3, f32 *, 8);
        sp8 = temp_f1_4;
        M2C_FIELD(temp_3_2, f32 *, 4) = temp_f0_4;
        M2C_FIELD(temp_3_2, f32 *, 8) = temp_f1_4;
        var_f1_2 = temp_f1_4 * temp_f1_4;
        temp_f0_5 = M2C_FIELD(arg0, f32 *, 0x88);
        temp_f12_2 = (temp_f0_5 * temp_f0_5) + (temp_f0_4 * temp_f0_4) + var_f1_2;
        if (temp_f12_2 <= 1.1920929e-7f) {
            M2C_FIELD(arg0, f32 *, 0x88) = 0.0f;
            M2C_FIELD(temp_3_2, f32 *, 4) = 0.0f;
            M2C_FIELD(temp_3_2, f32 *, 8) = 0.0f;
        } else {
            M2C_ERROR(/* unknown instruction: c1 0xc0044 */);
            if (var_f1_2 != var_f1_2) {
                var_f1_2 = func_003F3E80(temp_f12_2);
            }
            temp_f2_5 = 1.0f / var_f1_2;
            M2C_FIELD(arg0, f32 *, 0x88) = (f32) (M2C_FIELD(arg0, f32 *, 0x88) * temp_f2_5);
            M2C_FIELD(temp_3_2, f32 *, 4) = (f32) (M2C_FIELD(temp_3_2, f32 *, 4) * temp_f2_5);
            M2C_FIELD(temp_3_2, f32 *, 8) = (f32) (M2C_FIELD(temp_3_2, f32 *, 8) * temp_f2_5);
        }
        temp_2_3 = arg0 + 0x58;
        if (M2C_FIELD(arg0, s32 *, 0xD0) != 0) {
            var_3 = 1;
            if (!(((M2C_FIELD(arg0, f32 *, 0x88) * M2C_FIELD(arg0, f32 *, 0x58)) + (M2C_FIELD(temp_3_2, f32 *, 4) * M2C_FIELD(temp_2_3, f32 *, 4)) + (M2C_FIELD(temp_3_2, f32 *, 8) * M2C_FIELD(temp_2_3, f32 *, 8))) < 0.0f)) {
                var_3 = 0;
            }
            M2C_FIELD(arg0, s32 *, 0x50) = var_3;
        } else {
            M2C_FIELD(arg0, s32 *, 0x50) = 0;
        }
        temp_f0_6 = func_001B6B38(arg0, M2C_FIELD(arg0, s32 *, 0x50));
        var_3_2 = 1;
        if (temp_f0_6 == 0.0f) {
            var_3_2 = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x4C) = var_3_2;
        if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
            temp_f1_5 = M2C_FIELD(arg0, f32 *, 0x38);
            var_f12 = (M2C_FIELD(arg0, f32 *, 0x30) * 10.0f) / M2C_FIELD(arg0, f32 *, 0xD8);
            if (temp_f1_5 < var_f12) {
                var_f12 = temp_f1_5;
            }
            temp_f0_7 = M2C_FIELD(arg0, f32 *, 0x34);
            if (var_f12 < temp_f0_7) {
                var_f12 = temp_f0_7;
            }
            func_001B2DD0(M2C_FIELD(arg0, void **, 0xC4), 0, var_f12);
        }
        if (M2C_FIELD(arg0, s32 *, 0xCC) != 0) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0xC4), s32 *, 0xCC) = 1;
        }
        func_001B25D8(M2C_FIELD(arg0, void **, 0xC4), temp_3, M2C_FIELD(arg0, s32 *, 0xCC));
        temp_4 = M2C_FIELD(arg0, void **, 0xC4);
        if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
            func_001B28C0(temp_4, temp_3_2, M2C_FIELD(arg0, s32 *, 0xCC));
        } else {
            func_001B28C0(temp_4, arg0 + 0x58, M2C_FIELD(arg0, s32 *, 0xCC));
        }
        func_001B2B90(M2C_FIELD(arg0, void **, 0xC4), M2C_FIELD(arg0, s32 *, 0xCC), temp_f0_6);
        temp_2_4 = arg0 + 0x94;
        M2C_FIELD(arg0, f32 *, 0x94) = (f32) M2C_FIELD(arg0, f32 *, 0x64);
        M2C_FIELD(temp_2_4, f32 *, 4) = (f32) M2C_FIELD(temp_2, f32 *, 4);
        M2C_FIELD(temp_2_4, f32 *, 8) = (f32) M2C_FIELD(temp_2, f32 *, 8);
        M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    }
}
