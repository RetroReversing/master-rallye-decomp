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

extern s32 D_0042D5A8;
extern s32 D_0042D5AC;
extern s32 D_0042D5B0;
extern s32 D_0042D5B4;
extern s32 D_0042D5B8;
extern s32 D_0042D5BC;
extern s32 D_0042D5C0;
extern s32 D_0042D5C4;
extern s32 D_0042D5CC;
extern s32 D_0042D5D0;
extern s32 D_0042D5D4;
extern s8 D_0042D5D8;
extern s8 D_0042D5D9;
extern s8 D_0042D5DA;
extern s32 D_0042D5DC;
extern s32 D_0042D5E0;
extern s32 D_0042D5E4;
extern u32 D_0042D5E8;
extern s32 D_0042D5EC;
extern s32 D_0042D5F0;
extern M2C_UNK D_0042D600;
extern u8 D_0042D630;
extern s32 D_0042D66C;
extern s32 D_0048D514;
extern s32 D_0048D518;
extern s32 D_0048D51C;
extern s32 D_0048D520;
extern s32 D_0048D524;
extern s32 D_0048D528;
extern s32 D_0048D52C;
extern s8 D_004A2AE8;
extern M2C_UNK D_004A2B18;
extern M2C_UNK D_004A2B48;
extern s32 D_004A2BC0;
extern M2C_UNK D_004A43C0;
extern M2C_UNK D_004A43F0;
extern M2C_UNK D_004A4420;
extern M2C_UNK D_004A4480;
extern M2C_UNK D_004A4540;
extern M2C_UNK D_004A4600;
extern s32 D_004A46C0;
extern s32 D_004A46E8;
extern s32 D_004A4710;
extern s32 D_004A4738;

void func_0030CD88(void) {
    s32 *temp_2_2;
    s32 *temp_5_2;
    s32 *var_11;
    s32 *var_12;
    s32 *var_13;
    s32 *var_15_2;
    s32 *var_18;
    s32 *var_19;
    s32 *var_20;
    s32 *var_24;
    s32 *var_25;
    s32 *var_6_2;
    s32 *var_7_2;
    s32 *var_8;
    s32 *var_9_2;
    s32 temp_10;
    s32 temp_10_2;
    s32 temp_11;
    s32 temp_12;
    s32 temp_13;
    s32 temp_24;
    s32 temp_2;
    s32 temp_3;
    s32 temp_3_3;
    s32 temp_3_4;
    s32 temp_3_5;
    s32 temp_3_6;
    s32 temp_4_2;
    s32 temp_5;
    s32 temp_8;
    s32 var_10;
    s32 var_14;
    s32 var_14_2;
    s32 var_14_3;
    s32 var_15;
    s32 var_6;
    s32 var_7;
    s32 var_9;
    s8 *temp_3_2;
    s8 *var_3;
    s8 *var_5;
    s8 temp_16;
    s8 var_2;
    u8 *var_4;
    u8 *var_5_2;
    u8 temp_4;

    temp_3 = (&D_004A2BC0)[(D_004A2BC0 * 5) + 1];
    D_0042D5BC = 0;
    D_0042D5CC = temp_3;
    if (temp_3 != D_0042D66C) {
        D_0042D66C = temp_3;
        var_4 = &D_0042D630;
        var_3 = &D_004A2AE8;
        do {
            if (*var_3 == 1) {
                *var_3 = 0;
            }
            if (*var_4 != 0x99) {
                *var_4 = 0xFF;
            }
            var_4 += 1;
            var_3 += 1;
        } while ((s32) var_4 < (s32) (&D_0042D630 + 0x30));
        var_15 = 0;
        if (D_004A2BC0 > 0) {
            var_14 = D_004A2BC0;
            var_20 = &D_004A2BC0 + 4;
            var_25 = &D_004A2BC0 + 0x14;
            var_24 = &D_004A2BC0 + 0x10;
            var_18 = &D_004A2BC0 + 0xC;
            var_19 = &D_004A2BC0 + 8;
            do {
                temp_13 = *var_20;
                temp_12 = (temp_13 >> 4) & 0x3F;
                temp_3_2 = &(&D_004A2AE8)[temp_12];
                if (*temp_3_2 != 3) {
                    *temp_3_2 = 1;
                } else {
                    *temp_3_2 = 4;
                }
                temp_16 = (temp_13 >> 0xA) & 0x3F;
                temp_3_3 = temp_13 & 3;
                *(temp_12 + &D_004A43F0) = (temp_13 >> 2) & 3;
                if (temp_3_3 != 0) {
                    D_0042D5BC = temp_3_3;
                    D_0042D5C0 = temp_12;
                }
                temp_3_4 = temp_12 * 4;
                temp_10 = *var_24;
                *((temp_12 * 2) + &D_004A4420) = (s16) (temp_13 >> 0x10);
                *(temp_3_4 + &D_004A4480) = *var_19;
                *(temp_3_4 + &D_004A4540) = *var_18 & 0xFFFF;
                *(temp_12 + &D_004A2B18) = (s8) ((u32) *var_18 >> 0x1F);
                *(temp_12 + &D_004A2B48) = (s8) temp_10;
                if ((temp_10 << 0x18) == 0) {
                    (&D_0042D630)[temp_16] = (u8) temp_12;
                    *(temp_12 + &D_004A43C0) = temp_16;
                } else {
                    *(temp_12 + &D_004A43C0) = 0x50;
                }
                temp_3_5 = *var_25;
                var_25 += 0x14;
                var_24 += 0x14;
                *(temp_3_4 + &D_004A4600) = temp_3_5;
                var_18 += 0x14;
                var_19 += 0x14;
                var_20 += 0x14;
                var_14 -= 1;
                var_15 += 5;
            } while (var_14 != 0);
        }
        var_5 = &D_004A2AE8;
        temp_11 = var_15 + 4;
        temp_24 = var_15 + 0xC;
        var_2 = D_004A2AE8;
loop_19:
        if (var_2 == 4) {
            *var_5 = 3;
        } else if (var_2 == 3) {
            *var_5 = 0;
        }
        var_5 += 1;
        if ((s32) var_5 < (s32) (&D_004A2AE8 + 0x30)) {
            var_2 = *var_5;
            goto loop_19;
        }
        temp_8 = (&D_004A2BC0)[temp_11];
        D_0042D5C4 = (&D_004A2BC0)[var_15 + 2];
        D_0042D5AC = (&D_004A2BC0)[var_15 + 3];
        D_0048D514 = temp_8;
        var_9 = var_15 + 6;
        var_14_2 = 0;
        D_0042D5A8 = (&D_004A2BC0)[var_15 + 5];
        var_10 = 0;
        D_0042D5B0 = temp_8;
        D_0048D518 = temp_11;
        do {
            var_5_2 = var_10 + &D_0042D600;
            var_7 = 0x1E;
            var_6 = 0xF;
loop_28:
            temp_4 = ((s32) (&D_004A2BC0)[var_9] >> var_7) & 3;
            if (temp_4 != 0) {
                *var_5_2 = temp_4;
            } else if (*var_5_2 != 3) {
                *var_5_2 = temp_4;
            } else {
                *var_5_2 = 4;
            }
            var_5_2 += 1;
            var_6 -= 1;
            var_7 -= 2;
            if (var_6 >= 0) {
                goto loop_28;
            }
            var_14_2 += 1;
            var_10 += 0x10;
            var_9 += 1;
        } while (var_14_2 < 3);
        D_0042D5D0 = (&D_004A2BC0)[var_15 + 9];
        D_0048D51C = (&D_004A2BC0)[var_15 + 0xA];
        D_0042D5D4 = (&D_004A2BC0)[var_15 + 0xB];
        var_12 = &D_004A46C0;
        var_11 = &(&D_004A2BC0)[temp_24 + 0x1B];
        var_15_2 = &D_004A4738;
        var_13 = &D_004A4710;
        var_8 = &D_004A46E8;
        var_9_2 = &(&D_004A2BC0)[temp_24];
        var_6_2 = &(&D_004A2BC0)[temp_24 + 9];
        var_7_2 = &(&D_004A2BC0)[temp_24 + 0x12];
        var_14_3 = 8;
        do {
            temp_2 = *var_9_2;
            var_14_3 -= 1;
            temp_3_6 = *var_6_2;
            var_9_2 += 4;
            temp_4_2 = *var_7_2;
            var_6_2 += 4;
            temp_5 = *var_11;
            var_7_2 += 4;
            *var_12 = temp_2;
            var_11 += 4;
            *var_8 = temp_3_6;
            var_12 += 4;
            *var_13 = temp_4_2;
            var_8 += 4;
            *var_15_2 = temp_5;
            var_13 += 4;
            var_15_2 += 4;
        } while (var_14_3 >= 0);
        temp_5_2 = &(&D_004A2BC0)[temp_24 + 0x27];
        temp_2_2 = &(&D_004A2BC0)[temp_24 + 0x2E];
        temp_10_2 = temp_24 + 0x2F;
        D_0048D520 = (&D_004A2BC0)[temp_24 + 0x24];
        D_0048D524 = (&D_004A2BC0)[temp_24 + 0x25];
        D_0042D5EC = (&D_004A2BC0)[temp_24 + 0x26];
        D_0042D5E8 = (u32) *temp_5_2 >> 8;
        D_0042D5E4 = *temp_5_2 & 0xFF;
        D_0042D5E0 = (&D_004A2BC0)[temp_24 + 0x28];
        D_0042D5DC = (&D_004A2BC0)[temp_24 + 0x29];
        D_0048D528 = (&D_004A2BC0)[temp_24 + 0x2A];
        D_0048D52C = (&D_004A2BC0)[temp_24 + 0x2B];
        D_0042D5B8 = (&D_004A2BC0)[temp_24 + 0x2C];
        D_0042D5B4 = (&D_004A2BC0)[temp_24 + 0x2D];
        D_0042D5D8 = *temp_2_2 & 1;
        D_0042D5D9 = ((u32) *temp_2_2 >> 1) & 1;
        D_0042D5DA = ((u32) *temp_2_2 >> 2) & 1;
        D_0042D5F0 = (&D_004A2BC0)[temp_10_2];
        D_0048D518 = temp_10_2;
    }
}
