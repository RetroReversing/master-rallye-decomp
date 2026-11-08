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

void func_0017BFC8(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f1;
    f32 var_f2;
    f32 var_f3;
    f32 var_f8;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;

    temp_f3 = M2C_FIELD(arg0, f32 *, 0x58);
    var_f0 = -temp_f3;
    temp_f11 = M2C_FIELD(arg0, f32 *, 0xEC);
    temp_f13 = M2C_FIELD(arg0, f32 *, 0xF0);
    temp_2 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0xC), void **, 4);
    temp_f1 = M2C_FIELD(arg1, f32 *, 0xEC);
    temp_3 = temp_2 + 0xE0;
    temp_f2 = M2C_FIELD(arg1, f32 *, 0x58);
    temp_f12 = M2C_FIELD(temp_2, f32 *, 0x1C);
    if (temp_f11 < var_f0) {
        if (!(temp_f1 < -temp_f2)) {
            var_f0 = -temp_f3;
            goto block_5;
        }
        var_f8 = 0.0f;
    } else {
block_5:
        if (!(var_f0 <= temp_f11)) {
            if (!(-temp_f2 <= temp_f1)) {
                temp_f5 = M2C_FIELD(arg0, f32 *, 0x6C);
                temp_f3_2 = M2C_FIELD(arg0, f32 *, 0x74);
                temp_f6 = M2C_FIELD(temp_3, f32 *, 4);
                var_f2 = M2C_FIELD(arg0, f32 *, 0x2C) * temp_f12 * temp_f6;
                var_f0_2 = (M2C_FIELD(arg0, f32 *, 0x68) * (temp_f5 * temp_f5) * temp_f11) + (M2C_FIELD(arg0, f32 *, 0x28) * temp_f12 * temp_f5 * temp_f6) + (M2C_FIELD(arg0, f32 *, 0x70) * (temp_f3_2 * temp_f3_2) * temp_f13);
            } else {
                goto block_9;
            }
        } else {
block_9:
            temp_f2_2 = M2C_FIELD(arg0, f32 *, 0x6C);
            temp_f3_3 = M2C_FIELD(arg0, f32 *, 0x74);
            temp_f7 = M2C_FIELD(temp_3, f32 *, 4);
            var_f2 = M2C_FIELD(arg0, f32 *, 0x2C) * temp_f12 * temp_f7;
            var_f0_2 = (M2C_FIELD(arg0, f32 *, 0x68) * (temp_f2_2 * temp_f2_2) * temp_f11) + (M2C_FIELD(arg0, f32 *, 0x28) * temp_f12 * temp_f2_2 * temp_f7) + (M2C_FIELD(arg0, f32 *, 0x70) * (temp_f3_3 * temp_f3_3) * temp_f13) + (M2C_FIELD(arg0, f32 *, 0x78) * (temp_f11 - temp_f1)) + (M2C_FIELD(arg0, f32 *, 0x7C) * (temp_f13 - M2C_FIELD(arg1, f32 *, 0xF0)));
        }
        var_f8 = -(var_f0_2 + var_f2);
    }
    temp_2_2 = arg0 + 0xD8;
    temp_f4 = 0.95f - M2C_FIELD(temp_3, f32 *, 4);
    var_f1 = 0.0f;
    if (temp_f4 > 0.0f) {
        var_f1 = temp_f4;
    }
    temp_f0 = 1.0f - (var_f1 * 8.0f);
    var_f3 = 0.25f;
    if (temp_f0 > 0.25f) {
        var_f3 = temp_f0;
    }
    var_f0_3 = -(var_f8 * ((M2C_FIELD(arg0, f32 *, 0xD8) * M2C_FIELD(temp_2, f32 *, 0xE0)) + (M2C_FIELD(temp_2_2, f32 *, 4) * M2C_FIELD(temp_3, f32 *, 4)) + (M2C_FIELD(temp_2_2, f32 *, 8) * M2C_FIELD(temp_3, f32 *, 8))) * var_f3);
    if (var_f0_3 < 0.0f) {
        var_f0_3 = 0.0f;
    }
    M2C_FIELD(arg0, f32 *, 0xFC) = var_f0_3;
}
