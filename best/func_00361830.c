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

extern M2C_UNK **D_0042E8E8;

void func_00361830(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK *sp0;
    M2C_UNK **sp10;
    M2C_UNK **temp_4;
    M2C_UNK *temp_2;
    M2C_UNK *temp_3;
    s32 temp_2_10;
    s32 temp_2_2;
    s32 temp_2_4;
    s32 temp_2_6;
    s32 temp_2_8;
    s32 var_2;
    void *temp_16;
    void *temp_2_11;
    void *temp_2_3;
    void *temp_2_5;
    void *temp_2_7;
    void *temp_2_9;
    void *temp_6;
    void *temp_6_2;
    void *temp_6_3;
    void *temp_6_4;
    void *temp_6_5;

    temp_2 = *D_0042E8E8;
    sp10 = D_0042E8E8;
    sp0 = temp_2;
    if (temp_2 != D_0042E8E8) {
        do {
            temp_16 = M2C_FIELD(sp0, void **, 8);
            temp_4 = D_0042E8E8;
            if (M2C_FIELD(temp_16, s32 *, 0x24) != 0) {
                if (arg1 >= (arg0 - M2C_FIELD(temp_16, s32 *, 0))) {
                    temp_6 = M2C_FIELD(temp_16, void **, 0x18);
                    var_2 = 0;
                    if (temp_6 == NULL) {
                        var_2 = M2C_FIELD(temp_16, void **, 0x1C) == NULL;
                    }
                    if ((var_2 == 0) && (arg2 < (arg0 - M2C_FIELD(temp_16, s32 *, 4))) && (M2C_FIELD(temp_16, s32 *, 0x28) != 0)) {
                        if (temp_6 != NULL) {
                            temp_2_2 = M2C_FIELD(temp_6, s32 *, 0) - 1;
                            M2C_FIELD(temp_6, s32 *, 0) = temp_2_2;
                            if (temp_2_2 == 0) {
                                temp_2_3 = M2C_FIELD(temp_6, void **, 4);
                                M2C_FIELD(temp_2_3, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(temp_6 + M2C_FIELD(temp_2_3, s16 *, 8), 3, temp_6);
                            }
                            M2C_FIELD(temp_16, void **, 0x18) = NULL;
                        }
                        temp_6_2 = M2C_FIELD(temp_16, void **, 0x1C);
                        if (temp_6_2 != NULL) {
                            temp_2_4 = M2C_FIELD(temp_6_2, s32 *, 0) - 1;
                            M2C_FIELD(temp_6_2, s32 *, 0) = temp_2_4;
                            if (temp_2_4 == 0) {
                                temp_2_5 = M2C_FIELD(temp_6_2, void **, 4);
                                M2C_FIELD(temp_2_5, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(temp_6_2 + M2C_FIELD(temp_2_5, s16 *, 8), 3, temp_6_2);
                            }
                            M2C_FIELD(temp_16, void **, 0x1C) = NULL;
                        }
                    }
                } else {
                    temp_6_3 = M2C_FIELD(temp_16, void **, 0x14);
                    if (temp_6_3 != NULL) {
                        temp_2_6 = M2C_FIELD(temp_6_3, s32 *, 0) - 1;
                        M2C_FIELD(temp_6_3, s32 *, 0) = temp_2_6;
                        if (temp_2_6 == 0) {
                            temp_2_7 = M2C_FIELD(temp_6_3, void **, 4);
                            M2C_FIELD(temp_2_7, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(temp_6_3 + M2C_FIELD(temp_2_7, s16 *, 8), 3, temp_6_3);
                        }
                        M2C_FIELD(temp_16, void **, 0x14) = NULL;
                    }
                    temp_6_4 = M2C_FIELD(temp_16, void **, 0x18);
                    if (temp_6_4 != NULL) {
                        temp_2_8 = M2C_FIELD(temp_6_4, s32 *, 0) - 1;
                        M2C_FIELD(temp_6_4, s32 *, 0) = temp_2_8;
                        if (temp_2_8 == 0) {
                            temp_2_9 = M2C_FIELD(temp_6_4, void **, 4);
                            M2C_FIELD(temp_2_9, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(temp_6_4 + M2C_FIELD(temp_2_9, s16 *, 8), 3, temp_6_4);
                        }
                        M2C_FIELD(temp_16, void **, 0x18) = NULL;
                    }
                    temp_6_5 = M2C_FIELD(temp_16, void **, 0x1C);
                    if (temp_6_5 != NULL) {
                        temp_2_10 = M2C_FIELD(temp_6_5, s32 *, 0) - 1;
                        M2C_FIELD(temp_6_5, s32 *, 0) = temp_2_10;
                        if (temp_2_10 == 0) {
                            temp_2_11 = M2C_FIELD(temp_6_5, void **, 4);
                            M2C_FIELD(temp_2_11, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(temp_6_5 + M2C_FIELD(temp_2_11, s16 *, 8), 3, temp_6_5);
                        }
                        M2C_FIELD(temp_16, void **, 0x1C) = NULL;
                    }
                    M2C_FIELD(temp_16, s32 *, 0x24) = 0;
                    M2C_FIELD(temp_16, s32 *, 8) = -1;
                    M2C_FIELD(temp_16, s32 *, 0xC) = -1;
                    M2C_FIELD(temp_16, s32 *, 0x10) = -1;
                    M2C_FIELD(temp_16, s32 *, 0) = 0xFFFFFFFF;
                    M2C_FIELD(temp_16, s32 *, 4) = 0xFFFFFFFF;
                }
            }
            temp_3 = M2C_FIELD(sp0, M2C_UNK **, 0);
            sp10 = temp_4;
            sp0 = temp_3;
        } while (temp_3 != temp_4);
    }
}
