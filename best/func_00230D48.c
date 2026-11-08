/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

s32 D_002AD408(M2C_UNK);                            /* extern */
M2C_UNK func_001CA600(void *, void *);              /* extern */
M2C_UNK func_001CA7C8(void *, void *);              /* extern */
M2C_UNK func_001CA990(void *, void *);              /* extern */
void *func_00233B48(s32);                           /* extern */
void *func_0023EDD0(s32);                           /* extern */
M2C_UNK func_00241160(void *);                      /* extern */
void *func_002440E0(s32);                           /* extern */

void *func_00230D48(void **arg1) {
    s32 *sp0;
    s32 *temp_3;
    s32 *temp_3_2;
    s32 *temp_3_3;
    s32 *temp_3_4;
    s32 *temp_3_5;
    s32 *temp_6;
    s32 *temp_6_2;
    s32 *temp_6_3;
    s32 *temp_6_4;
    s32 *temp_6_5;
    s32 temp_2_11;
    s32 temp_2_13;
    s32 temp_2_15;
    s32 temp_2_17;
    s32 temp_2_20;
    s32 temp_2_22;
    s32 temp_2_2;
    s32 temp_2_4;
    s32 temp_2_6;
    s32 temp_2_8;
    void *temp_19;
    void *temp_2;
    void *temp_2_10;
    void *temp_2_12;
    void *temp_2_14;
    void *temp_2_16;
    void *temp_2_18;
    void *temp_2_19;
    void *temp_2_21;
    void *temp_2_23;
    void *temp_2_3;
    void *temp_2_5;
    void *temp_2_7;
    void *temp_2_9;

    temp_19 = func_002440E0(D_002AD408(0x20));
    temp_2 = func_0023EDD0(D_002AD408(0x38));
    func_001CA600(temp_2, *arg1);
    func_001CA7C8(temp_2 + 0xC, *arg1 + 0xC);
    func_001CA990(temp_2 + 0x18, *arg1 + 0x18);
    temp_3 = M2C_FIELD(*arg1, s32 **, 0x24);
    sp0 = temp_3;
    if (temp_3 != NULL) {
        *temp_3 += 1;
    }
    temp_6 = M2C_FIELD(temp_2, s32 **, 0x24);
    if (temp_6 != sp0) {
        if (temp_6 != NULL) {
            temp_2_2 = M2C_FIELD(temp_6, s32 *, 0) - 1;
            M2C_FIELD(temp_6, s32 *, 0) = temp_2_2;
            if (temp_2_2 == 0) {
                temp_2_3 = M2C_FIELD(temp_6, void **, 4);
                M2C_FIELD(temp_2_3, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(temp_6 + M2C_FIELD(temp_2_3, s16 *, 8), 3, temp_6);
            }
        }
        M2C_FIELD(temp_2, s32 **, 0x24) = sp0;
        if (sp0 != NULL) {
            M2C_FIELD(sp0, s32 *, 0) += 1;
        }
    }
    if (sp0 != NULL) {
        temp_2_4 = M2C_FIELD(sp0, s32 *, 0) - 1;
        M2C_FIELD(sp0, s32 *, 0) = temp_2_4;
        if (temp_2_4 == 0) {
            temp_2_5 = M2C_FIELD(sp0, void **, 4);
            M2C_FIELD(temp_2_5, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(sp0 + M2C_FIELD(temp_2_5, s16 *, 8), 3, sp0);
        }
    }
    temp_3_2 = M2C_FIELD(*arg1, s32 **, 0x28);
    sp0 = temp_3_2;
    if (temp_3_2 != NULL) {
        *temp_3_2 += 1;
    }
    temp_6_2 = M2C_FIELD(temp_2, s32 **, 0x28);
    if (temp_6_2 != sp0) {
        if (temp_6_2 != NULL) {
            temp_2_6 = M2C_FIELD(temp_6_2, s32 *, 0) - 1;
            M2C_FIELD(temp_6_2, s32 *, 0) = temp_2_6;
            if (temp_2_6 == 0) {
                temp_2_7 = M2C_FIELD(temp_6_2, void **, 4);
                M2C_FIELD(temp_2_7, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(temp_6_2 + M2C_FIELD(temp_2_7, s16 *, 8), 3, temp_6_2);
            }
        }
        M2C_FIELD(temp_2, s32 **, 0x28) = sp0;
        if (sp0 != NULL) {
            M2C_FIELD(sp0, s32 *, 0) += 1;
        }
    }
    if (sp0 != NULL) {
        temp_2_8 = M2C_FIELD(sp0, s32 *, 0) - 1;
        M2C_FIELD(sp0, s32 *, 0) = temp_2_8;
        if (temp_2_8 == 0) {
            temp_2_9 = M2C_FIELD(sp0, void **, 4);
            M2C_FIELD(temp_2_9, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(sp0 + M2C_FIELD(temp_2_9, s16 *, 8), 3, sp0);
        }
    }
    func_00241160(temp_2);
    M2C_FIELD(temp_19, void **, 0) = temp_2;
    temp_2_10 = func_0023EDD0(D_002AD408(0x38));
    func_001CA600(temp_2_10, *arg1 + 0x2C);
    func_001CA7C8(temp_2_10 + 0xC, *arg1 + 0x38);
    func_001CA990(temp_2_10 + 0x18, *arg1 + 0x44);
    temp_3_3 = M2C_FIELD(*arg1, s32 **, 0x50);
    sp0 = temp_3_3;
    if (temp_3_3 != NULL) {
        *temp_3_3 += 1;
    }
    temp_6_3 = M2C_FIELD(temp_2_10, s32 **, 0x24);
    if (temp_6_3 != sp0) {
        if (temp_6_3 != NULL) {
            temp_2_11 = M2C_FIELD(temp_6_3, s32 *, 0) - 1;
            M2C_FIELD(temp_6_3, s32 *, 0) = temp_2_11;
            if (temp_2_11 == 0) {
                temp_2_12 = M2C_FIELD(temp_6_3, void **, 4);
                M2C_FIELD(temp_2_12, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(temp_6_3 + M2C_FIELD(temp_2_12, s16 *, 8), 3, temp_6_3);
            }
        }
        M2C_FIELD(temp_2_10, s32 **, 0x24) = sp0;
        if (sp0 != NULL) {
            M2C_FIELD(sp0, s32 *, 0) += 1;
        }
    }
    if (sp0 != NULL) {
        temp_2_13 = M2C_FIELD(sp0, s32 *, 0) - 1;
        M2C_FIELD(sp0, s32 *, 0) = temp_2_13;
        if (temp_2_13 == 0) {
            temp_2_14 = M2C_FIELD(sp0, void **, 4);
            M2C_FIELD(temp_2_14, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(sp0 + M2C_FIELD(temp_2_14, s16 *, 8), 3, sp0);
        }
    }
    temp_3_4 = M2C_FIELD(*arg1, s32 **, 0x54);
    sp0 = temp_3_4;
    if (temp_3_4 != NULL) {
        *temp_3_4 += 1;
    }
    temp_6_4 = M2C_FIELD(temp_2_10, s32 **, 0x28);
    if (temp_6_4 != sp0) {
        if (temp_6_4 != NULL) {
            temp_2_15 = M2C_FIELD(temp_6_4, s32 *, 0) - 1;
            M2C_FIELD(temp_6_4, s32 *, 0) = temp_2_15;
            if (temp_2_15 == 0) {
                temp_2_16 = M2C_FIELD(temp_6_4, void **, 4);
                M2C_FIELD(temp_2_16, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(temp_6_4 + M2C_FIELD(temp_2_16, s16 *, 8), 3, temp_6_4);
            }
        }
        M2C_FIELD(temp_2_10, s32 **, 0x28) = sp0;
        if (sp0 != NULL) {
            M2C_FIELD(sp0, s32 *, 0) += 1;
        }
    }
    if (sp0 != NULL) {
        temp_2_17 = M2C_FIELD(sp0, s32 *, 0) - 1;
        M2C_FIELD(sp0, s32 *, 0) = temp_2_17;
        if (temp_2_17 == 0) {
            temp_2_18 = M2C_FIELD(sp0, void **, 4);
            M2C_FIELD(temp_2_18, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(sp0 + M2C_FIELD(temp_2_18, s16 *, 8), 3, sp0);
        }
    }
    func_00241160(temp_2_10);
    M2C_FIELD(temp_19, void **, 4) = temp_2_10;
    temp_2_19 = func_00233B48(D_002AD408(0x14));
    M2C_FIELD(temp_2_19, f32 *, 4) = (f32) M2C_FIELD(*arg1, f32 *, 0x68);
    temp_3_5 = M2C_FIELD(*arg1, s32 **, 0x64);
    sp0 = temp_3_5;
    if (temp_3_5 != NULL) {
        *temp_3_5 += 1;
    }
    temp_6_5 = M2C_FIELD(temp_2_19, s32 **, 0);
    if (temp_6_5 != sp0) {
        if (temp_6_5 != NULL) {
            temp_2_20 = M2C_FIELD(temp_6_5, s32 *, 0) - 1;
            M2C_FIELD(temp_6_5, s32 *, 0) = temp_2_20;
            if (temp_2_20 == 0) {
                temp_2_21 = M2C_FIELD(temp_6_5, void **, 4);
                M2C_FIELD(temp_2_21, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(temp_6_5 + M2C_FIELD(temp_2_21, s16 *, 8), 3, temp_6_5);
            }
        }
        M2C_FIELD(temp_2_19, s32 **, 0) = sp0;
        if (sp0 != NULL) {
            M2C_FIELD(sp0, s32 *, 0) += 1;
        }
    }
    if (sp0 != NULL) {
        temp_2_22 = M2C_FIELD(sp0, s32 *, 0) - 1;
        M2C_FIELD(sp0, s32 *, 0) = temp_2_22;
        if (temp_2_22 == 0) {
            temp_2_23 = M2C_FIELD(sp0, void **, 4);
            M2C_FIELD(temp_2_23, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(sp0 + M2C_FIELD(temp_2_23, s16 *, 8), 3, sp0);
        }
    }
    M2C_FIELD(temp_19, void **, 8) = temp_2_19;
    return temp_19;
}
