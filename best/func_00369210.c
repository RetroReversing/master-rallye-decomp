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

void *func_00369210(void *arg0, void *arg1) {
    s32 *temp_3;
    s32 *temp_3_2;
    s32 *temp_3_3;
    s32 *temp_6;
    s32 *temp_6_2;
    s32 *temp_6_3;
    s32 temp_2;
    s32 temp_2_3;
    s32 temp_2_5;
    void *temp_2_2;
    void *temp_2_4;
    void *temp_2_6;

    temp_6 = M2C_FIELD(arg0, s32 **, 0x14);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    if (temp_6 != M2C_FIELD(arg1, s32 **, 0x14)) {
        if (temp_6 != NULL) {
            temp_2 = M2C_FIELD(temp_6, s32 *, 0) - 1;
            M2C_FIELD(temp_6, s32 *, 0) = temp_2;
            if (temp_2 == 0) {
                temp_2_2 = M2C_FIELD(temp_6, void **, 4);
                M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(temp_6 + M2C_FIELD(temp_2_2, s16 *, 8), 3, temp_6);
            }
        }
        temp_3 = M2C_FIELD(arg1, s32 **, 0x14);
        M2C_FIELD(arg0, s32 **, 0x14) = temp_3;
        if (temp_3 != NULL) {
            *temp_3 += 1;
        }
    }
    temp_6_2 = M2C_FIELD(arg0, s32 **, 0x18);
    if (temp_6_2 != M2C_FIELD(arg1, s32 **, 0x18)) {
        if (temp_6_2 != NULL) {
            temp_2_3 = M2C_FIELD(temp_6_2, s32 *, 0) - 1;
            M2C_FIELD(temp_6_2, s32 *, 0) = temp_2_3;
            if (temp_2_3 == 0) {
                temp_2_4 = M2C_FIELD(temp_6_2, void **, 4);
                M2C_FIELD(temp_2_4, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(temp_6_2 + M2C_FIELD(temp_2_4, s16 *, 8), 3, temp_6_2);
            }
        }
        temp_3_2 = M2C_FIELD(arg1, s32 **, 0x18);
        M2C_FIELD(arg0, s32 **, 0x18) = temp_3_2;
        if (temp_3_2 != NULL) {
            *temp_3_2 += 1;
        }
    }
    temp_6_3 = M2C_FIELD(arg0, s32 **, 0x1C);
    if (temp_6_3 != M2C_FIELD(arg1, s32 **, 0x1C)) {
        if (temp_6_3 != NULL) {
            temp_2_5 = M2C_FIELD(temp_6_3, s32 *, 0) - 1;
            M2C_FIELD(temp_6_3, s32 *, 0) = temp_2_5;
            if (temp_2_5 == 0) {
                temp_2_6 = M2C_FIELD(temp_6_3, void **, 4);
                M2C_FIELD(temp_2_6, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(temp_6_3 + M2C_FIELD(temp_2_6, s16 *, 8), 3, temp_6_3);
            }
        }
        temp_3_3 = M2C_FIELD(arg1, s32 **, 0x1C);
        M2C_FIELD(arg0, s32 **, 0x1C) = temp_3_3;
        if (temp_3_3 != NULL) {
            *temp_3_3 += 1;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) M2C_FIELD(arg1, s32 *, 0x70);
    M2C_FIELD(arg0, s32 *, 0x74) = (s32) M2C_FIELD(arg1, s32 *, 0x74);
    M2C_FIELD(arg0, s32 *, 0x78) = (s32) M2C_FIELD(arg1, s32 *, 0x78);
    return arg0;
}
