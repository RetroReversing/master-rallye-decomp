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

void func_00121A58(void *arg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 var_f1;
    f32 var_f4;
    s32 temp_3;
    u32 var_5;
    void *temp_3_2;
    void *temp_4;
    void *temp_4_2;
    void *temp_4_3;

    temp_4 = arg0 + 0x10;
    var_5 = 0;
    if (((s32) (M2C_FIELD(temp_4, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0x10)) >> 3) != 0) {
        do {
            temp_3 = var_5 * 8;
            temp_4_2 = M2C_FIELD(arg0, s32 *, 0x10) + temp_3;
            if (M2C_FIELD(temp_4_2, s32 *, 4) != 0) {
                temp_4_3 = M2C_FIELD(M2C_FIELD(temp_4_2, void **, 0), void **, 0x4C);
                var_f4 = 1.0f;
                var_f1 = M2C_FIELD(temp_4_3, f32 *, 0x54) + 2.0f;
                M2C_FIELD(temp_4_3, f32 *, 0x54) = var_f1;
                if (!(var_f1 < 0.0f)) {
                    if (!(var_f1 >= 0.0f)) {
                        goto block_11;
                    }
                    if (!(var_f1 < 100.0f)) {
block_11:
                        var_f1 = M2C_FIELD(temp_4_3, f32 *, 0x54);
                        if ((M2C_FIELD(temp_4_3, f32 *, 0x54) >= 100.0f) && (var_f1 < 200.0f)) {
                            var_f4 = 1.0f;
                        } else if ((var_f1 >= 200.0f) && (var_f1 < 450.0f)) {
                            var_f4 = 1.0f - ((var_f1 - 200.0f) / 250.0f);
                        } else if (var_f1 >= 450.0f) {
                            goto block_18;
                        }
                    } else {
                        var_f4 = (var_f1 - 0.0f) / 100.0f;
                    }
                } else {
block_18:
                    var_f4 = 0.0f;
                }
                if (var_f1 >= 480.0f) {
                    M2C_FIELD(temp_4_3, s64 *, 0x78) = (s64) (M2C_FIELD(temp_4_3, s64 *, 0x78) & ~1);
                    M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x10) + temp_3), s32 *, 4) = 0;
                }
                spC = var_f4;
                temp_3_2 = temp_4_3 + 0x10;
                sp4 = 1.0f;
                sp8 = 1.0f;
                sp0 = 1.0f;
                M2C_FIELD(temp_4_3, f32 *, 0x10) = 1.0f;
                M2C_FIELD(temp_3_2, f32 *, 4) = sp4;
                M2C_FIELD(temp_3_2, f32 *, 8) = sp8;
                M2C_FIELD(temp_3_2, f32 *, 0xC) = spC;
                M2C_FIELD(temp_4_3, s32 *, 0x88) = (s32) (M2C_FIELD(temp_4_3, s32 *, 0x88) + 1);
            }
            var_5 += 1;
        } while (var_5 < (u32) ((s32) (M2C_FIELD(temp_4, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0x10)) >> 3));
    }
}
