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

void ***func_001D6BB0();                            /* extern */
M2C_UNK func_0021E4F0(s32, f32 *, f32 *);           /* extern */

void func_001A7558(void *arg0, s32 arg1) {
    f32 sp10;
    f32 sp20;
    f32 sp30;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    f32 sp54;
    f32 sp60;
    f32 sp64;
    f32 sp70;
    f32 sp74;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f2;
    f32 temp_f3;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    void **temp_16;
    void *temp_2_4;
    void *temp_3;
    void *temp_9;

    sp44 = 0.0f;
    sp4C = 0.0f;
    sp48 = 0.0f;
    sp40 = sp44;
    M2C_FIELD(&sp40, f32 *, 4) = 1.0f;
    sp4C = sp44;
    sp48 = sp44;
    sp10 = sp40;
    M2C_FIELD(&sp10, f32 *, 4) = sp44;
    M2C_FIELD(&sp10, f32 *, 8) = sp48;
    M2C_FIELD(&sp10, f32 *, 0xC) = sp4C;
    sp40 = sp44;
    M2C_FIELD(&sp40, f32 *, 8) = 1.0f;
    sp4C = sp44;
    sp20 = sp40;
    M2C_FIELD(&sp20, f32 *, 4) = sp44;
    M2C_FIELD(&sp20, f32 *, 8) = sp48;
    M2C_FIELD(&sp20, f32 *, 0xC) = sp4C;
    sp40 = sp44;
    temp_2 = M2C_FIELD(arg0, s32 *, 0x2C);
    sp48 = sp44;
    M2C_FIELD(&sp40, f32 *, 0xC) = 1.0f;
    sp30 = sp40;
    M2C_FIELD(&sp30, f32 *, 4) = sp44;
    M2C_FIELD(&sp30, f32 *, 8) = sp48;
    M2C_FIELD(&sp30, f32 *, 0xC) = sp4C;
    if (temp_2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_2 - 1);
    } else {
        temp_2_2 = M2C_FIELD(arg0, s32 *, 0x28);
        if (temp_2_2 != 0) {
            M2C_FIELD(arg0, s32 *, 0x28) = (s32) (temp_2_2 - 1);
            goto block_6;
        }
        temp_2_3 = M2C_FIELD(arg0, s32 *, 0x30);
        if (temp_2_3 != 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_2_3 - 1);
block_6:
            M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) + 0.29f);
        } else {
            temp_f0 = M2C_FIELD(arg0, f32 *, 0x20) - 0.29f;
            M2C_FIELD(arg0, f32 *, 0x20) = temp_f0;
            if (temp_f0 < sp44) {
                func_0021E4F0(arg1, &sp40, &sp30);
            }
        }
    }
    if (M2C_FIELD(arg0, f32 *, 0x20) < 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x20) = 0.0f;
    }
    if (M2C_FIELD(arg0, f32 *, 0x20) > 1.0f) {
        M2C_FIELD(arg0, f32 *, 0x20) = 1.0f;
    }
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x18);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x20);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x1C);
    temp_f20 = M2C_FIELD(arg0, f32 *, 0x10) + ((temp_f3 * 0.5f) - (temp_f1 * temp_f3 * 0.5f));
    temp_f21 = M2C_FIELD(arg0, f32 *, 0x14) + ((temp_f2 * 0.5f) - (temp_f1 * temp_f2 * 0.5f));
    temp_16 = *func_001D6BB0();
    temp_2_4 = *temp_16;
    M2C_FIELD(temp_2_4, M2C_UNK (**)(void *, M2C_UNK), 0xA4)(temp_16 + M2C_FIELD(temp_2_4, s16 *, 0xA0), 0x3F800000);
    temp_9 = *temp_16;
    M2C_FIELD(temp_9, M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *), 0x9C)(temp_16 + M2C_FIELD(temp_9, s16 *, 0x98), 0, 0, 0, 0xFF, temp_9);
    temp_3 = *temp_16;
    temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x20) * 32.0f;
    sp70 = temp_f20;
    sp40 = temp_f20;
    temp_f1_2 = temp_f21 + temp_f0_2;
    temp_f20_2 = temp_f20 + temp_f0_2;
    sp44 = temp_f21;
    sp54 = temp_f21;
    sp74 = temp_f1_2;
    sp60 = temp_f20_2;
    sp50 = temp_f20_2;
    sp64 = temp_f1_2;
    M2C_FIELD(temp_3, M2C_UNK (**)(void *, f32 *, f32 *, f32 *, f32 *), 0xB4)(temp_16 + M2C_FIELD(temp_3, s16 *, 0xB0), &sp40, &sp50, &sp60, &sp70);
}
