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
M2C_UNK D_002AD530(s32);                            /* extern */
M2C_UNK func_002B2028(s32);                         /* extern */
extern M2C_UNK D_004767A8;
extern M2C_UNK D_004854F0;

void func_00310750(void *arg0, s32 arg1) {
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    void *temp_16;
    void *temp_16_2;
    void *temp_16_3;
    void *temp_16_4;
    void *temp_16_5;
    void *temp_16_6;
    void *temp_17;
    void *temp_18;

    temp_18 = arg0 + 0x80;
    temp_16 = M2C_FIELD(temp_18, void **, 0x14);
    M2C_FIELD(temp_18, M2C_UNK **, 4) = &D_004854F0;
    if (temp_16 != NULL) {
        temp_4 = M2C_FIELD(temp_16, s32 *, 4);
        if (temp_4 != 0) {
            D_002AD530(temp_4);
        }
        D_002AD390(temp_16);
    }
    temp_16_2 = M2C_FIELD(temp_18, void **, 0x10);
    if (temp_16_2 != NULL) {
        func_002B2028(M2C_FIELD(temp_16_2, s32 *, 4));
        D_002AD390(temp_16_2);
    }
    temp_17 = arg0 + 0x40;
    M2C_FIELD(temp_18, M2C_UNK **, 4) = &D_004767A8;
    M2C_FIELD(temp_17, M2C_UNK **, 4) = &D_004854F0;
    temp_16_3 = M2C_FIELD(temp_17, void **, 0x14);
    if (temp_16_3 != NULL) {
        temp_4_2 = M2C_FIELD(temp_16_3, s32 *, 4);
        if (temp_4_2 != 0) {
            D_002AD530(temp_4_2);
        }
        D_002AD390(temp_16_3);
    }
    temp_16_4 = M2C_FIELD(temp_17, void **, 0x10);
    if (temp_16_4 != NULL) {
        func_002B2028(M2C_FIELD(temp_16_4, s32 *, 4));
        D_002AD390(temp_16_4);
    }
    M2C_FIELD(temp_17, M2C_UNK **, 4) = &D_004767A8;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_004854F0;
    temp_16_5 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_16_5 != NULL) {
        temp_4_3 = M2C_FIELD(temp_16_5, s32 *, 4);
        if (temp_4_3 != 0) {
            D_002AD530(temp_4_3);
        }
        D_002AD390(temp_16_5);
    }
    temp_16_6 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_16_6 != NULL) {
        func_002B2028(M2C_FIELD(temp_16_6, s32 *, 4));
        D_002AD390(temp_16_6);
    }
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_004767A8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
