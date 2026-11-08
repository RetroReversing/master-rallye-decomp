/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

f32 func_003F3038(s32, f32);                        /* extern */
f32 func_003F5F40(s32, f32);                        /* extern */
f32 func_003F7170(s32, s32, s32, s32, f32, f32, f32, f32); /* extern */
extern M2C_UNK D_0048B7E8;
extern M2C_UNK D_0048B7F0;
extern M2C_UNK D_0048B7F8;
extern f32 D_0048B86C;

f32 func_003F52D0(s32 arg1, f32 fparg0, f32 fparg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f14_3;
    f32 temp_f14_4;
    f32 temp_f15;
    f32 temp_f15_2;
    f32 temp_f15_3;
    f32 temp_f15_4;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f6;
    f32 temp_f9;
    f32 var_7;
    f32 var_f0;
    f32 var_f13;
    f32 var_f13_2;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f20;
    f32 var_f7;
    s32 temp_17;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_3_3;
    s32 temp_3_4;
    s32 temp_3_5;
    s32 temp_3_6;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_7;
    s32 temp_8;
    s32 temp_9;
    s32 temp_9_2;
    s32 var_16;
    s32 var_16_2;
    s32 var_20;
    s32 var_4;
    s32 var_5;
    s32 var_8;
    s32 var_9;
    s32 var_9_2;
    s32 var_9_3;
    u32 temp_10;

    var_5 = arg1;
    temp_17 = M2C_BITWISE(s32, fparg1) & 0x7FFFFFFF;
    var_16 = M2C_BITWISE(s32, fparg0) & 0x7FFFFFFF;
    if (temp_17 == 0) {
        return 1.0f;
    }
    if (var_16 > 0x7F800000) {
        return fparg0 + fparg1;
    }
    if (temp_17 > 0x7F800000) {
        return fparg0 + fparg1;
    }
    var_20 = 0;
    if (M2C_BITWISE(s32, fparg0) < 0) {
        if (temp_17 > 0x4B7FFFFF) {
            var_20 = 2;
        } else if (temp_17 > 0x3F7FFFFF) {
            temp_2 = 0x96 - (temp_17 >> 0x17);
            var_5 = temp_17 >> temp_2;
            if ((var_5 << temp_2) == temp_17) {
                var_20 = 2 - (var_5 & 1);
            }
        }
    }
    switch (temp_17) {                              /* irregular */
    case 0x7F800000:
        if (var_16 == 0x3F800000) {
            return fparg1 - fparg1;
        }
        if (var_16 > 0x3F800000) {
            if (M2C_BITWISE(s32, fparg1) >= 0) {
                return fparg1;
            }
            return 0.0f;
        }
        if (M2C_BITWISE(s32, fparg1) < 0) {
            return -fparg1;
        }
        return 0.0f;
    case 0x3F800000:
        var_f0 = fparg0;
        if (M2C_BITWISE(s32, fparg1) < 0) {
            return 1.0f / fparg0;
        }
        return var_f0;
    default:
        if (M2C_BITWISE(s32, fparg1) == 0x40000000) {
            return fparg0 * fparg0;
        }
        if ((M2C_BITWISE(s32, fparg1) == 0x3F000000) && (M2C_BITWISE(s32, fparg0) >= 0)) {
            return func_003F5F40(var_5, fparg0);
        }
        temp_f12 = func_003F3038(var_5, fparg0);
        if ((var_16 == 0x7F800000) || (var_16 == 0) || (temp_10 = M2C_BITWISE(u32, fparg0) >> 0x1F, (var_16 == 0x3F800000))) {
            var_f13 = temp_f12;
            if (M2C_BITWISE(s32, fparg1) < 0) {
                var_f13 = 1.0f / var_f13;
            }
            var_f0 = var_f13;
            if (M2C_BITWISE(s32, fparg0) < 0) {
                if (((var_16 + 0xC0800000) | var_20) == 0) {
                    temp_f0_2 = var_f13 - var_f13;
                    return temp_f0_2 / temp_f0_2;
                }
                if (var_20 == 1) {
                    var_f13 = -var_f13;
                }
                return var_f13;
            }
            /* Duplicate return node #86. Try simplifying control flow for better match */
            return var_f0;
        }
        if (((temp_10 - 1) | var_20) == 0) {
            temp_f0 = fparg0 - fparg0;
            return temp_f0 / temp_f0;
        }
        if (temp_17 > 0x4D000000) {
            if (var_16 <= 0x3F7FFFF7) {
                if (M2C_BITWISE(s32, fparg1) < 0) {
                    goto block_52;
                }
                goto block_55;
            }
            if (var_16 > 0x3F800007) {
                if (M2C_BITWISE(s32, fparg1) <= 0) {
block_55:
                    return 0.0f;
                }
block_52:
                return D_0048B86C;
            }
            temp_f12_2 = fparg0 - 1.0f;
            temp_f15 = temp_f12_2 * 1.442688f;
            temp_f14 = (temp_f12_2 * 0.0000070526075f) - (temp_f12_2 * temp_f12_2 * (0.5f - (temp_f12_2 * (0.33333334f - (temp_f12_2 * 0.25f)))) * 1.442695f);
            var_4 = M2C_BITWISE(s32, (temp_f15 + temp_f14)) & 0xFFFFF000;
            var_f1_2 = temp_f14 - (M2C_BITWISE(f32, var_4) - temp_f15);
            goto block_65;
        }
        var_9 = 0;
        if (var_16 <= 0x7FFFFF) {
            var_9 = -0x18;
            var_16 = M2C_BITWISE(s32, (temp_f12 * 1.6777216e7f));
        }
        temp_5 = var_16 & 0x7FFFFF;
        var_9_2 = var_9 - 0x7F + (var_16 >> 0x17);
        var_16_2 = temp_5 | 0x3F800000;
        if (temp_5 <= 0x1CC471) {
            var_8 = 0;
        } else {
            var_8 = 1;
            if (temp_5 > 0x5DB3D6) {
                var_8 = 0;
                var_16_2 += 0xFF800000;
                var_9_2 += 1;
            }
        }
        temp_7 = var_8 * 4;
        temp_f2 = *(temp_7 + &D_0048B7E8);
        temp_f15_2 = M2C_BITWISE(f32, var_16_2) - temp_f2;
        temp_f14_2 = 1.0f / (M2C_BITWISE(f32, var_16_2) + temp_f2);
        temp_f20 = temp_f15_2 * temp_f14_2;
        temp_3 = M2C_BITWISE(s32, temp_f20) & 0xFFFFF000;
        temp_3_2 = ((var_16_2 >> 1) | 0x20000000) + ((var_8 << 0x15) + 0x40000);
        temp_f11 = temp_f20 * temp_f20;
        temp_f1 = temp_f14_2 * ((temp_f15_2 - (M2C_BITWISE(f32, temp_3) * M2C_BITWISE(f32, temp_3_2))) - (M2C_BITWISE(f32, temp_3) * (M2C_BITWISE(f32, var_16_2) - (M2C_BITWISE(f32, temp_3_2) - temp_f2))));
        temp_f11_2 = M2C_BITWISE(f32, temp_3) * M2C_BITWISE(f32, temp_3);
        temp_f0_3 = (temp_f11 * temp_f11 * ((temp_f11 * ((temp_f11 * ((temp_f11 * ((temp_f11 * ((temp_f11 * 0.20697501f) + 0.23066075f)) + 0.27272812f)) + 0.33333334f)) + 0.42857143f)) + 0.6f)) + (temp_f1 * (M2C_BITWISE(f32, temp_3) + temp_f20));
        temp_3_3 = M2C_BITWISE(s32, (temp_f11_2 + 3.0f + temp_f0_3)) & 0xFFFFF000;
        temp_f15_3 = M2C_BITWISE(f32, temp_3) * M2C_BITWISE(f32, temp_3_3);
        temp_f14_3 = (temp_f1 * M2C_BITWISE(f32, temp_3_3)) + ((temp_f0_3 - ((M2C_BITWISE(f32, temp_3_3) - 3.0f) - temp_f11_2)) * temp_f20);
        temp_3_4 = M2C_BITWISE(s32, (temp_f15_3 + temp_f14_3)) & 0xFFFFF000;
        temp_f2_2 = M2C_BITWISE(f32, temp_3_4) * 0.961792f;
        temp_f3 = *(temp_7 + &D_0048B7F0);
        temp_f12_3 = (f32) var_9_2;
        temp_f1_2 = (M2C_BITWISE(f32, temp_3_4) * 0.0000047017384f) + ((temp_f14_3 - (M2C_BITWISE(f32, temp_3_4) - temp_f15_3)) * 0.9617967f) + *(temp_7 + &D_0048B7F8);
        var_4 = M2C_BITWISE(s32, (temp_f2_2 + temp_f1_2 + temp_f3 + temp_f12_3)) & 0xFFFFF000;
        var_f1_2 = temp_f1_2 - (((M2C_BITWISE(f32, var_4) - temp_f12_3) - temp_f3) - temp_f2_2);
block_65:
        var_f20 = 1.0f;
        if (((temp_10 - 1) | (var_20 - 1)) == 0) {
            var_f20 = -1.0f;
        }
        temp_3_5 = M2C_BITWISE(s32, fparg1) & 0xFFFFF000;
        var_f7 = M2C_BITWISE(f32, temp_3_5) * M2C_BITWISE(f32, var_4);
        temp_f6 = ((fparg1 - M2C_BITWISE(f32, temp_3_5)) * M2C_BITWISE(f32, var_4)) + (fparg1 * var_f1_2);
        temp_f13 = temp_f6 + var_f7;
        var_7 = temp_f13;
        if (M2C_BITWISE(s32, var_7) > 0x43000000) {
            var_f1 = 1e30f;
            goto block_77;
        }
        if (M2C_BITWISE(s32, var_7) == 0x43000000) {
            if ((temp_f13 - var_f7) < (temp_f6 + 4.2995666e-8f)) {
                var_f1 = 1e30f;
                goto block_77;
            }
            goto block_78;
        }
        if ((M2C_BITWISE(s32, var_7) & 0x7FFFFFFF) <= 0x43160000) {
            if (M2C_BITWISE(s32, var_7) == 0xC3160000) {
                if (temp_f6 <= (temp_f13 - var_f7)) {
                    goto block_76;
                }
                goto block_79;
            }
block_78:
block_79:
            var_9_3 = 0;
            temp_2_2 = M2C_BITWISE(s32, var_7) & 0x7FFFFFFF;
            if (temp_2_2 > 0x3F000000) {
                temp_9 = M2C_BITWISE(s32, var_7) + (0x800000 >> ((temp_2_2 >> 0x17) - 0x7E));
                temp_8 = ((s32) (temp_9 & 0x7FFFFFFF) >> 0x17) - 0x7F;
                var_f7 -= M2C_BITWISE(f32, (temp_9 & ~(0x7FFFFF >> temp_8)));
                temp_9_2 = (s32) ((temp_9 & 0x7FFFFF) | 0x800000) >> (0x17 - temp_8);
                var_9_3 = (M2C_BITWISE(s32, var_7) <= -1) ? -temp_9_2 : temp_9_2;
                var_7 = temp_f6 + var_f7;
            }
            temp_3_6 = M2C_BITWISE(s32, var_7) & 0xFFFFF000;
            temp_f15_4 = M2C_BITWISE(f32, temp_3_6) * 0.69314575f;
            temp_f14_4 = ((temp_f6 - (M2C_BITWISE(f32, temp_3_6) - var_f7)) * 0.6931472f) + (M2C_BITWISE(f32, temp_3_6) * 0.0000014286065f);
            temp_f13_2 = temp_f15_4 + temp_f14_4;
            temp_f12_4 = temp_f13_2 * temp_f13_2;
            temp_f9 = temp_f14_4 - (temp_f13_2 - temp_f15_4);
            temp_f0_4 = temp_f13_2 - (temp_f12_4 * ((temp_f12_4 * ((temp_f12_4 * ((temp_f12_4 * ((temp_f12_4 * 4.138137e-8f) + -0.0000016533902f)) + 0.00006613756f)) + -0.0027777778f)) + 0.16666667f));
            temp_f13_3 = 1.0f - ((((temp_f13_2 * temp_f0_4) / (temp_f0_4 - 2.0f)) - (temp_f9 + (temp_f13_2 * temp_f9))) - temp_f13_2);
            temp_5_2 = M2C_BITWISE(s32, temp_f13_3) + (var_9_3 << 0x17);
            if ((temp_5_2 >> 0x17) <= 0) {
                var_f13_2 = func_003F7170(var_9_3, temp_5_2, 0x7FFFFFFF, M2C_BITWISE(s32, var_7), temp_f13_3, temp_f13_3, temp_f14_4, temp_f15_4);
            } else {
                var_f13_2 = M2C_BITWISE(f32, temp_5_2);
            }
            var_f0 = var_f20 * var_f13_2;
            /* Duplicate return node #86. Try simplifying control flow for better match */
            return var_f0;
        }
block_76:
        var_f1 = 1e-30f;
block_77:
        return var_f20 * var_f1 * var_f1;
    }
}
