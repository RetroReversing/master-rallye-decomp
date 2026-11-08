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

M2C_UNK func_002D1938(s32, f32);                    /* extern */
M2C_UNK func_002D1AF0(s32, void *, s32, s32, f32);  /* extern */

void func_002D0ED0(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f12;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f3;
    s32 *var_18;
    s32 temp_4;
    s32 var_19;
    s32 var_21;
    void *var_16;

    temp_4 = M2C_FIELD(arg1, s32 *, 0x48) - 1;
    M2C_FIELD(arg0, s32 *, 0x238) = (s32) (M2C_FIELD(arg0, s32 *, 0x238) + 1);
    if ((temp_4 != (M2C_FIELD(arg1, s32 *, 0x44) - 1)) || (temp_4 != M2C_FIELD(arg0, s32 *, 0x234))) {
        if (temp_4 > 0) {
            if (M2C_FIELD(arg0, s32 *, 0x234) >= temp_4) {
                var_f0 = 1.0f;
            } else {
                goto block_6;
            }
            goto block_7;
        }
        if (temp_4 == -1) {
block_6:
            var_f0 = 0.7f;
block_7:
            M2C_FIELD(arg0, f32 *, 0x244) = var_f0;
        }
        M2C_FIELD(arg0, s32 *, 0x238) = 0;
    }
    if (temp_4 != 0) {
        M2C_FIELD(arg0, s32 *, 0x234) = temp_4;
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x244);
    if (temp_f1 < 1.0f) {
        M2C_FIELD(arg0, f32 *, 0x244) = (f32) (temp_f1 + 0.09f);
    }
    if (M2C_FIELD(arg0, f32 *, 0x244) > 1.0f) {
        M2C_FIELD(arg0, f32 *, 0x244) = 1.0f;
    }
    if ((temp_4 > 0) && ((temp_4 - 1) > 0)) {
        M2C_FIELD(arg0, f32 *, 0x23C) = (f32) (((f32) (temp_4 - 2) * -0.02f) + 1.0f);
    } else {
        M2C_FIELD(arg0, f32 *, 0x23C) = 1.0f;
    }
    var_19 = 0;
    temp_f21 = M2C_FIELD(arg1, f32 *, 0x20) * M2C_FIELD(arg0, f32 *, 0x244);
    if (M2C_FIELD(arg0, s32 *, 0x230) > 0) {
        var_18 = arg0 + 0x220;
        var_16 = arg0 + 0x190;
        var_21 = 0;
        do {
            if ((*var_18 != 0) && (M2C_FIELD((arg0 + var_21), s32 *, 0x1B0) != 0)) {
                var_f12 = 0.0f;
                var_f2 = temp_f21;
                if (temp_f21 < 0.0f) {
                    var_f2 = -temp_f21;
                }
                if (var_f2 < 0.01f) {
                    var_f2 = 0.01f;
                }
                temp_f1_2 = M2C_FIELD(var_16, f32 *, 8);
                if (temp_f1_2 < var_f2) {
                    temp_f3 = M2C_FIELD(var_16, f32 *, 0x14);
                    if (var_f2 < temp_f3) {
                        temp_f0 = M2C_FIELD(var_16, f32 *, 0xC);
                        if (!(var_f2 < temp_f0)) {
                            temp_f1_3 = M2C_FIELD(var_16, f32 *, 0x10);
                            if (temp_f1_3 < var_f2) {
                                var_f12 = (temp_f3 - var_f2) / (temp_f3 - temp_f1_3);
                            } else {
                                var_f12 = 1.0f;
                            }
                        } else {
                            var_f12 = 1.0f - ((temp_f0 - var_f2) / (temp_f0 - temp_f1_2));
                        }
                    }
                }
                var_f0_2 = temp_f21;
                var_f3 = 0.01f;
                if (var_f0_2 < 0.0f) {
                    var_f0_2 = -var_f0_2;
                }
                if (var_f0_2 < 0.01f) {
                    var_f0_2 = 0.01f;
                }
                temp_f2 = M2C_FIELD(var_16, f32 *, 8);
                if (temp_f2 < var_f0_2) {
                    temp_f1_4 = M2C_FIELD(var_16, f32 *, 0x14);
                    if (var_f0_2 < temp_f1_4) {
                        temp_f0_2 = (var_f0_2 - temp_f2) / (temp_f1_4 - temp_f2);
                        var_f2_2 = 0.0f;
                        if (!(temp_f0_2 < 0.0f)) {
                            var_f2_2 = temp_f0_2;
                            if (temp_f0_2 > 1.0f) {
                                var_f2_2 = 1.0f;
                            }
                        }
                        temp_f1_5 = M2C_FIELD(var_16, f32 *, 0x18);
                        var_f3 = (var_f2_2 * (M2C_FIELD(var_16, f32 *, 0x1C) - temp_f1_5)) + temp_f1_5;
                    }
                }
                temp_f20 = var_f3 * M2C_FIELD(arg0, f32 *, 0x23C);
                func_002D1AF0(*var_18, arg1, arg2, arg3, var_f12);
                func_002D1938(*var_18, temp_f20 * 22100.0f);
            }
            var_19 += 1;
            var_18 += 4;
            var_16 += 0x24;
            var_21 += 0x24;
        } while (var_19 < M2C_FIELD(arg0, s32 *, 0x230));
    }
}
