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

M2C_UNK D_002AD390(void *);                         /* extern */
M2C_UNK func_002B2028(void *);                      /* extern */
extern M2C_UNK D_004864F8;

void func_00362C48(void *arg0, s32 arg1) {
    void *sp10;
    s32 temp_2_2;
    s32 temp_2_4;
    s32 temp_2_6;
    s32 var_2;
    void **temp_3;
    void *temp_16;
    void *temp_2;
    void *temp_2_3;
    void *temp_2_5;
    void *temp_2_7;
    void *temp_6;
    void *temp_6_2;
    void *temp_6_3;

    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &D_004864F8;
    if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
        temp_2 = M2C_FIELD(arg0, void **, 0x20);
        sp10 = temp_2;
        temp_16 = M2C_FIELD(temp_2, void **, 0);
        temp_3 = M2C_FIELD(temp_2, void ***, 4);
        *temp_3 = temp_16;
        M2C_FIELD(temp_16, void ***, 4) = temp_3;
        func_002B2028(sp10);
    }
    temp_6 = M2C_FIELD(arg0, void **, 0x1C);
    if (temp_6 != NULL) {
        temp_2_2 = M2C_FIELD(temp_6, s32 *, 0) - 1;
        M2C_FIELD(temp_6, s32 *, 0) = temp_2_2;
        if (temp_2_2 == 0) {
            temp_2_3 = M2C_FIELD(temp_6, void **, 4);
            M2C_FIELD(temp_2_3, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(temp_6 + M2C_FIELD(temp_2_3, s16 *, 8), 3, temp_6);
        }
    }
    temp_6_2 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_6_2 != NULL) {
        temp_2_4 = M2C_FIELD(temp_6_2, s32 *, 0) - 1;
        M2C_FIELD(temp_6_2, s32 *, 0) = temp_2_4;
        if (temp_2_4 == 0) {
            temp_2_5 = M2C_FIELD(temp_6_2, void **, 4);
            M2C_FIELD(temp_2_5, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(temp_6_2 + M2C_FIELD(temp_2_5, s16 *, 8), 3, temp_6_2);
        }
    }
    temp_6_3 = M2C_FIELD(arg0, void **, 0x14);
    var_2 = arg1 & 1;
    if (temp_6_3 != NULL) {
        temp_2_6 = M2C_FIELD(temp_6_3, s32 *, 0) - 1;
        M2C_FIELD(temp_6_3, s32 *, 0) = temp_2_6;
        if (temp_2_6 == 0) {
            temp_2_7 = M2C_FIELD(temp_6_3, void **, 4);
            M2C_FIELD(temp_2_7, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(temp_6_3 + M2C_FIELD(temp_2_7, s16 *, 8), 3, temp_6_3);
        }
        var_2 = arg1 & 1;
    }
    if (var_2 != 0) {
        D_002AD390(arg0);
    }
}
