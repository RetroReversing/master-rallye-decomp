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

void func_001AADF0(void *arg0) {
    void **temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_2_6;
    void *temp_2_7;
    void *temp_2_8;
    void *temp_2_9;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;

    temp_2 = func_001D6DF8(func_001D6E40(), 0);
    temp_3 = *temp_2;
    if (M2C_FIELD(temp_3, s32 (**)(void *, M2C_UNK), 0xC)(temp_2 + M2C_FIELD(temp_3, s16 *, 8), 0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x124) = (s32) (M2C_FIELD(arg0, s32 *, 0x124) ^ 1);
    }
    temp_3_2 = *temp_2;
    if (M2C_FIELD(temp_3_2, s32 (**)(void *, M2C_UNK), 0x14)(temp_2 + M2C_FIELD(temp_3_2, s16 *, 0x10), 1) != 0) {
        M2C_FIELD(arg0, s32 *, 0x150) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x150) = 0;
    }
    temp_3_3 = *temp_2;
    if (M2C_FIELD(temp_3_3, s32 (**)(void *, M2C_UNK), 0x14)(temp_2 + M2C_FIELD(temp_3_3, s16 *, 0x10), 2) != 0) {
        M2C_FIELD(arg0, s32 *, 0x154) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x154) = 0;
    }
    temp_3_4 = *temp_2;
    if (M2C_FIELD(temp_3_4, s32 (**)(void *, M2C_UNK), 0x14)(temp_2 + M2C_FIELD(temp_3_4, s16 *, 0x10), 3) != 0) {
        M2C_FIELD(arg0, f32 *, 0x164) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
    }
    temp_2_2 = *temp_2;
    if (M2C_FIELD(temp_2_2, f32 (**)(void *, M2C_UNK), 0x3C)(temp_2 + M2C_FIELD(temp_2_2, s16 *, 0x38), 0) > 0.4f) {
        M2C_FIELD(arg0, s32 *, 0x138) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x138) = 0;
    }
    temp_2_3 = *temp_2;
    if (M2C_FIELD(temp_2_3, f32 (**)(void *, M2C_UNK), 0x3C)(temp_2 + M2C_FIELD(temp_2_3, s16 *, 0x38), 0) < -0.4f) {
        M2C_FIELD(arg0, s32 *, 0x134) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x134) = 0;
    }
    temp_2_4 = *temp_2;
    if (M2C_FIELD(temp_2_4, f32 (**)(void *, M2C_UNK), 0x3C)(temp_2 + M2C_FIELD(temp_2_4, s16 *, 0x38), 1) < -0.4f) {
        M2C_FIELD(arg0, s32 *, 0x130) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x130) = 0;
    }
    temp_2_5 = *temp_2;
    if (M2C_FIELD(temp_2_5, f32 (**)(void *, M2C_UNK), 0x3C)(temp_2 + M2C_FIELD(temp_2_5, s16 *, 0x38), 1) > 0.4f) {
        M2C_FIELD(arg0, s32 *, 0x12C) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x12C) = 0;
    }
    temp_2_6 = *temp_2;
    if (M2C_FIELD(temp_2_6, f32 (**)(void *, M2C_UNK), 0x3C)(temp_2 + M2C_FIELD(temp_2_6, s16 *, 0x38), 2) > 0.4f) {
        M2C_FIELD(arg0, s32 *, 0x144) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x144) = 0;
    }
    temp_2_7 = *temp_2;
    if (M2C_FIELD(temp_2_7, f32 (**)(void *, M2C_UNK), 0x3C)(temp_2 + M2C_FIELD(temp_2_7, s16 *, 0x38), 2) < -0.4f) {
        M2C_FIELD(arg0, s32 *, 0x140) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x140) = 0;
    }
    temp_2_8 = *temp_2;
    if (M2C_FIELD(temp_2_8, f32 (**)(void *, M2C_UNK), 0x3C)(temp_2 + M2C_FIELD(temp_2_8, s16 *, 0x38), 3) < -0.4f) {
        M2C_FIELD(arg0, s32 *, 0x14C) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x14C) = 0;
    }
    temp_2_9 = *temp_2;
    if (M2C_FIELD(temp_2_9, f32 (**)(void *, M2C_UNK), 0x3C)(temp_2 + M2C_FIELD(temp_2_9, s16 *, 0x38), 3) > 0.4f) {
        M2C_FIELD(arg0, s32 *, 0x148) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x148) = 0;
}
