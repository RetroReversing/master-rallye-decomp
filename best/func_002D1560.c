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

s32 func_001D4010(void *);                          /* extern */
s32 func_002CDD18(s32);                             /* extern */
s32 func_002CE080(s32, s32, f32);                   /* extern */
M2C_UNK func_002CE5D8(s32, f32, f32);               /* extern */
M2C_UNK func_002CE730(s32);                         /* extern */
s32 func_002D1460(void *);                          /* extern */
f32 func_003F3E80(f32);                             /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern s32 D_004267AC;
extern M2C_UNK D_00483B70;

void func_002D1560(void *arg0, void *arg1, void *arg2, s32 arg3) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f1;
    f32 var_f20;
    s32 temp_19;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3;
    s32 temp_4;
    s32 temp_4_2;
    s32 var_19;
    void *var_17;
    void *var_20;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_3 != 0) {
        var_20 = arg1 + 0x38;
        if (temp_3 != 1) {

        } else {
            if ((M2C_FIELD(arg1, s32 *, 0x1C) == 0) && (func_002CDD18(M2C_FIELD(arg0, s32 *, 8)) == 0)) {
                M2C_FIELD(arg0, s32 *, 8) = -1;
                if (M2C_FIELD(arg1, s32 *, 0x18) != 0) {
                    D_004267AC -= 1;
                }
                M2C_FIELD(arg1, s32 *, 0x18) = 0;
                M2C_FIELD(arg0, s32 *, 0x1C) = 0;
                M2C_FIELD(arg0, s32 *, 0x10) = 0;
            }
            var_20 = arg1 + 0x38;
            if (M2C_FIELD(arg1, s32 *, 0x18) == 0) {
                temp_4 = M2C_FIELD(arg0, s32 *, 8);
                if (temp_4 >= 0) {
                    func_002CE730(temp_4);
                    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
                    M2C_FIELD(arg0, s32 *, 8) = -1;
                    M2C_FIELD(arg0, s32 *, 0x10) = 0;
                    goto block_21;
                }
            }
        }
        goto block_22;
    }
    temp_19 = M2C_FIELD(arg1, s32 *, 0x18);
    if (temp_19 == 1) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        temp_2 = func_002D1460(arg0);
        if ((temp_2 >= 0) && (func_002CE080(func_001D4010(arg0 + 0x34), temp_2, 0.0f) != 0)) {
            M2C_FIELD(arg0, s32 *, 8) = temp_2;
            M2C_FIELD(arg0, s32 *, 0x1C) = temp_19;
        } else {
            M2C_FIELD(arg0, s32 *, 8) = -1;
        }
block_21:
        var_20 = arg1 + 0x38;
block_22:
        var_f20 = 0.0f;
        var_17 = arg2;
        if (arg3 > 0) {
            var_19 = arg3;
            do {
                temp_f0 = M2C_FIELD(var_17, f32 *, 0) - M2C_FIELD(var_20, f32 *, 0);
                temp_f2 = M2C_FIELD(var_17, f32 *, 4) - M2C_FIELD(var_20, f32 *, 4);
                temp_f1 = M2C_FIELD(var_17, f32 *, 8) - M2C_FIELD(var_20, f32 *, 8);
                var_f1 = temp_f1 * temp_f1;
                M2C_ERROR(/* unknown instruction: c1 0xc0044 */);
                if (var_f1 != var_f1) {
                    var_f1 = func_003F3E80((temp_f0 * temp_f0) + (temp_f2 * temp_f2) + var_f1);
                }
                temp_f3 = M2C_FIELD(arg1, f32 *, 0x2C);
                temp_f0_2 = M2C_FIELD(arg1, f32 *, 0x28);
                if (temp_f3 < var_f1) {
                    var_f0 = 0.0f;
                } else if (!(var_f1 < temp_f0_2)) {
                    var_f0 = ((temp_f3 - var_f1) / (temp_f3 - temp_f0_2)) * M2C_FIELD(arg1, f32 *, 0x20);
                } else {
                    var_f0 = M2C_FIELD(arg1, f32 *, 0x20);
                }
                if (arg3 >= 2) {
                    var_f20 *= 0.65f;
                }
                var_f20 += var_f0;
                var_19 -= 1;
                if (var_f20 > 1.0f) {
                    var_f20 = 1.0f;
                }
                var_17 += 0xC;
            } while (var_19 != 0);
        }
        if (var_f20 < 0.078f) {
            temp_4_2 = M2C_FIELD(arg0, s32 *, 8);
            M2C_FIELD(arg0, f32 *, 0x20) = 0.0f;
            if (temp_4_2 != -1) {
                func_002CE730(temp_4_2);
                M2C_FIELD(arg0, s32 *, 8) = -1;
                M2C_FIELD(arg0, s32 *, 0x10) = 1;
            }
        } else {
            M2C_FIELD(arg0, f32 *, 0x20) = var_f20;
            M2C_FIELD(arg0, f32 *, 0x30) = (f32) (f32) M2C_FIELD(arg0, s32 *, 0x14);
            M2C_FIELD(arg1, s32 *, 8) = 0;
            temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x20);
            if ((temp_f1_2 != M2C_FIELD(arg0, f32 *, 0x2C)) || (M2C_FIELD(arg0, s32 *, 8) == -1)) {
                if (M2C_FIELD(arg0, s32 *, 8) == -1) {
                    if ((temp_f1_2 >= 0.09f) && ((M2C_FIELD(arg0, s32 *, 0x10) == 0) || (M2C_FIELD(arg1, s32 *, 0x1C) != 0))) {
                        if (M2C_FIELD(arg1, s32 *, 0x18) != 0) {
                            temp_2_2 = func_002D1460(arg0);
                            if ((temp_2_2 >= 0) && (func_002CE080(func_001D4010(arg0 + 0x34), temp_2_2, M2C_FIELD(arg0, f32 *, 0x20)) != 0)) {
                                M2C_FIELD(arg0, s32 *, 8) = temp_2_2;
                                M2C_FIELD(arg0, s32 *, 0x10) = 0;
                            }
                        }
                    }
                    if (M2C_FIELD(arg0, s32 *, 8) != -1) {
                        goto block_53;
                    }
                } else {
block_53:
                    temp_f12 = M2C_FIELD(arg0, f32 *, 0x20);
                    func_002CE5D8(M2C_FIELD(arg0, s32 *, 8), temp_f12, temp_f12);
                }
            }
            M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
        }
    } else {
        if (arg1 != NULL) {
            if (M2C_FIELD(arg1, s32 *, 0) == 0xADADADAD) {
                M2C_FIELD(arg1, s32 *, 8) = 0;
                return;
            }
            goto block_12;
        }
block_12:
        func_003F9698(&D_00483B70);
    }
}
