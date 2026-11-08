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

void **func_001D6DF8(s32, M2C_UNK);                 /* extern */
s32 func_001D6E40();                                /* extern */

s32 func_00115AC0(void *arg0) {
    f32 var_f0;
    s32 var_2;
    void **temp_2;
    void *temp_3;
    void *temp_3_10;
    void *temp_3_11;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_3_5;
    void *temp_3_6;
    void *temp_3_7;
    void *temp_3_8;
    void *temp_3_9;

    temp_2 = func_001D6DF8(func_001D6E40(), 0);
    temp_3 = *temp_2;
    var_2 = 0;
    if (M2C_FIELD(temp_3, u32 (**)(void *), 0x44)(temp_2 + M2C_FIELD(temp_3, s16 *, 0x40)) >= 0x10U) {
        temp_3_2 = *temp_2;
        if (M2C_FIELD(temp_3_2, s32 (**)(void *, M2C_UNK), 0x14)(temp_2 + M2C_FIELD(temp_3_2, s16 *, 0x10), 0xC) != 0) {
            M2C_FIELD(arg0, f32 *, 0x14) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) + 1.0f);
            return 1;
        }
        temp_3_3 = *temp_2;
        if (M2C_FIELD(temp_3_3, s32 (**)(void *, M2C_UNK), 0x14)(temp_2 + M2C_FIELD(temp_3_3, s16 *, 0x10), 0xE) != 0) {
            M2C_FIELD(arg0, f32 *, 0x14) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) - 1.0f);
            return 1;
        }
        temp_3_4 = *temp_2;
        if (M2C_FIELD(temp_3_4, s32 (**)(void *, M2C_UNK), 0x14)(temp_2 + M2C_FIELD(temp_3_4, s16 *, 0x10), 0xF) != 0) {
            M2C_FIELD(arg0, f32 *, 0x10) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) - 1.0f);
            return 1;
        }
        temp_3_5 = *temp_2;
        if (M2C_FIELD(temp_3_5, s32 (**)(void *, M2C_UNK), 0x14)(temp_2 + M2C_FIELD(temp_3_5, s16 *, 0x10), 0xD) != 0) {
            M2C_FIELD(arg0, f32 *, 0x10) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) + 1.0f);
            return 1;
        }
        temp_3_6 = *temp_2;
        if (M2C_FIELD(temp_3_6, s32 (**)(void *, M2C_UNK), 0x14)(temp_2 + M2C_FIELD(temp_3_6, s16 *, 0x10), 5) != 0) {
            M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) - 1.0f);
            return 1;
        }
        temp_3_7 = *temp_2;
        if (M2C_FIELD(temp_3_7, s32 (**)(void *, M2C_UNK), 0x14)(temp_2 + M2C_FIELD(temp_3_7, s16 *, 0x10), 7) != 0) {
            M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) + 1.0f);
            return 1;
        }
        temp_3_8 = *temp_2;
        if (M2C_FIELD(temp_3_8, s32 (**)(void *, M2C_UNK), 0xC)(temp_2 + M2C_FIELD(temp_3_8, s16 *, 8), 3) != 0) {
            M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) + 0.0349f);
            return 1;
        }
        temp_3_9 = *temp_2;
        if (M2C_FIELD(temp_3_9, s32 (**)(void *, M2C_UNK), 0xC)(temp_2 + M2C_FIELD(temp_3_9, s16 *, 8), 1) != 0) {
            M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) - 0.0349f);
            return 1;
        }
        temp_3_10 = *temp_2;
        var_2 = 1;
        if (M2C_FIELD(temp_3_10, s32 (**)(void *, M2C_UNK), 0xC)(temp_2 + M2C_FIELD(temp_3_10, s16 *, 8), 0) != 0) {
            var_f0 = M2C_FIELD(arg0, f32 *, 0x1C) + 0.0349f;
            goto block_24;
        }
        temp_3_11 = *temp_2;
        if (M2C_FIELD(temp_3_11, s32 (**)(void *, M2C_UNK), 0xC)(temp_2 + M2C_FIELD(temp_3_11, s16 *, 8), 2) != 0) {
            var_2 = 1;
            var_f0 = M2C_FIELD(arg0, f32 *, 0x1C) - 0.0349f;
block_24:
            M2C_FIELD(arg0, f32 *, 0x1C) = var_f0;
            /* Duplicate return node #25. Try simplifying control flow for better match */
            return var_2;
        }
        return 0;
    }
    return var_2;
}
