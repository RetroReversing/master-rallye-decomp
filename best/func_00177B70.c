/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

M2C_UNK D_002AD390(void *);                         /* extern */
M2C_UNK D_002AD530(void *);                         /* extern */
M2C_UNK func_0016D508(s32, M2C_UNK);                /* extern */
M2C_UNK func_00171378(void *, M2C_UNK);             /* extern */
M2C_UNK func_00178E50(s32, M2C_UNK);                /* extern */
M2C_UNK func_002682D0(s32, M2C_UNK);                /* extern */
M2C_UNK func_002B2028(void *, void *);              /* extern */
extern M2C_UNK D_0040E618;

void func_00177B70(void *arg0, s32 arg1) {
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_4;
    s32 temp_4_8;
    s32 temp_4_9;
    void *temp_16;
    void *temp_17;
    void *temp_2;
    void *temp_2_5;
    void *temp_4_2;
    void *temp_4_3;
    void *temp_4_4;
    void *temp_4_5;
    void *temp_4_6;
    void *temp_4_7;
    void *temp_5;
    void *temp_5_2;
    void *temp_5_3;
    void *temp_5_4;
    void *temp_6;
    void *var_16;
    void *var_16_2;

    temp_6 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_6 != NULL) {
        temp_2 = M2C_FIELD(temp_6, void **, 0x14);
        M2C_FIELD(temp_2, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(temp_6 + M2C_FIELD(temp_2, s16 *, 8), 3, temp_6);
    }
    temp_4 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_4 != 0) {
        func_0016D508(temp_4, 3);
    }
    temp_17 = M2C_FIELD(arg0, void **, 8);
    if (temp_17 != NULL) {
        temp_5 = M2C_FIELD(temp_17, void **, 0x244);
        temp_4_2 = temp_5 - 0x10;
        temp_2_2 = M2C_FIELD(temp_4_2, s32 *, 8) - 1;
        M2C_FIELD(temp_4_2, s32 *, 8) = temp_2_2;
        if (temp_2_2 == 0) {
            if ((M2C_FIELD(temp_4_2, s32 *, 4) + 0x10) != 0) {
                func_002B2028(temp_4_2, temp_5);
            } else {
                M2C_FIELD(temp_5, void **, -0x10) = (void *) M2C_FIELD(&D_0040E618, void **, -4);
                M2C_FIELD(&D_0040E618, void **, -4) = temp_4_2;
            }
        }
        temp_5_2 = M2C_FIELD(temp_17, void **, 0x194);
        temp_4_3 = temp_5_2 - 0x10;
        temp_2_3 = M2C_FIELD(temp_4_3, s32 *, 8) - 1;
        M2C_FIELD(temp_4_3, s32 *, 8) = temp_2_3;
        if (temp_2_3 == 0) {
            if ((M2C_FIELD(temp_4_3, s32 *, 4) + 0x10) != 0) {
                func_002B2028(temp_4_3, temp_5_2);
            } else {
                M2C_FIELD(temp_5_2, void **, -0x10) = (void *) M2C_FIELD(&D_0040E618, void **, -4);
                M2C_FIELD(&D_0040E618, void **, -4) = temp_4_3;
            }
        }
        temp_5_3 = M2C_FIELD(temp_17, void **, 0x134);
        temp_4_4 = temp_5_3 - 0x10;
        temp_2_4 = M2C_FIELD(temp_4_4, s32 *, 8) - 1;
        M2C_FIELD(temp_4_4, s32 *, 8) = temp_2_4;
        if (temp_2_4 == 0) {
            if ((M2C_FIELD(temp_4_4, s32 *, 4) + 0x10) != 0) {
                var_16 = temp_17 + 0x90;
                func_002B2028(temp_4_4, temp_5_3);
            } else {
                M2C_FIELD(temp_5_3, void **, -0x10) = (void *) M2C_FIELD(&D_0040E618, void **, -4);
                M2C_FIELD(&D_0040E618, void **, -4) = temp_4_4;
                goto block_17;
            }
        } else {
block_17:
            var_16 = temp_17 + 0x90;
        }
        temp_4_5 = M2C_FIELD(var_16, void **, 0x3C);
        if (temp_4_5 != NULL) {
            D_002AD530(temp_4_5);
        }
        temp_4_6 = M2C_FIELD(var_16, void **, 0x44);
        if (temp_4_6 != NULL) {
            D_002AD530(temp_4_6);
        }
        temp_4_7 = M2C_FIELD(var_16, void **, 0x48);
        if (temp_4_7 != NULL) {
            D_002AD530(temp_4_7);
        }
        func_00171378(temp_17 + 0xC0, 2);
        D_002AD390(temp_17);
    }
    temp_5_4 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_5_4 != NULL) {
        temp_16 = (M2C_FIELD(temp_5_4, s32 *, -0x10) * 0x190) + temp_5_4;
        if (temp_5_4 != temp_16) {
            var_16_2 = temp_16 - 0x190;
loop_28:
            temp_2_5 = M2C_FIELD(var_16_2, void **, 0x14);
            M2C_FIELD(temp_2_5, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_16_2 + M2C_FIELD(temp_2_5, s16 *, 8), 0);
            if (M2C_FIELD(arg0, void **, 0x10) != var_16_2) {
                var_16_2 -= 0x190;
                goto loop_28;
            }
        }
        D_002AD530(M2C_FIELD(arg0, void **, 0x10) - 0x10);
    }
    temp_4_8 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_4_8 != 0) {
        func_00178E50(temp_4_8, 3);
    }
    temp_4_9 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_4_9 != 0) {
        func_002682D0(temp_4_9, 3);
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
