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

M2C_UNK func_00221048(s32);                         /* extern */
M2C_UNK func_0034C240(void *);                      /* extern */
extern M2C_UNK D_0042E730;

void func_00345908(void *arg0) {
    s32 temp_2;
    s32 temp_2_3;
    s32 temp_2_5;
    void *temp_2_2;
    void *temp_2_4;
    void *temp_2_6;

    func_00221048(M2C_FIELD(arg0, s32 *, 4));
    func_0034C240(arg0 + 0x10);
    if (M2C_FIELD(&D_0042E730, void **, 0x14) != NULL) {
        temp_2 = M2C_FIELD(M2C_FIELD(&D_0042E730, void **, 0x14), s32 *, 0) - 1;
        M2C_FIELD(M2C_FIELD(&D_0042E730, void **, 0x14), s32 *, 0) = temp_2;
        if (temp_2 == 0) {
            temp_2_2 = M2C_FIELD(M2C_FIELD(&D_0042E730, void **, 0x14), void **, 4);
            M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(M2C_FIELD(&D_0042E730, void **, 0x14) + M2C_FIELD(temp_2_2, s16 *, 8), 3, M2C_FIELD(&D_0042E730, void **, 0x14));
        }
        M2C_FIELD(&D_0042E730, void **, 0x14) = NULL;
    }
    if (M2C_FIELD(&D_0042E730, void **, 0x18) != NULL) {
        temp_2_3 = M2C_FIELD(M2C_FIELD(&D_0042E730, void **, 0x18), s32 *, 0) - 1;
        M2C_FIELD(M2C_FIELD(&D_0042E730, void **, 0x18), s32 *, 0) = temp_2_3;
        if (temp_2_3 == 0) {
            temp_2_4 = M2C_FIELD(M2C_FIELD(&D_0042E730, void **, 0x18), void **, 4);
            M2C_FIELD(temp_2_4, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(M2C_FIELD(&D_0042E730, void **, 0x18) + M2C_FIELD(temp_2_4, s16 *, 8), 3, M2C_FIELD(&D_0042E730, void **, 0x18));
        }
        M2C_FIELD(&D_0042E730, void **, 0x18) = NULL;
    }
    if (M2C_FIELD(&D_0042E730, void **, 0x1C) != NULL) {
        temp_2_5 = M2C_FIELD(M2C_FIELD(&D_0042E730, void **, 0x1C), s32 *, 0) - 1;
        M2C_FIELD(M2C_FIELD(&D_0042E730, void **, 0x1C), s32 *, 0) = temp_2_5;
        if (temp_2_5 == 0) {
            temp_2_6 = M2C_FIELD(M2C_FIELD(&D_0042E730, void **, 0x1C), void **, 4);
            M2C_FIELD(temp_2_6, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(M2C_FIELD(&D_0042E730, void **, 0x1C) + M2C_FIELD(temp_2_6, s16 *, 8), 3, M2C_FIELD(&D_0042E730, void **, 0x1C));
        }
        M2C_FIELD(&D_0042E730, void **, 0x1C) = NULL;
    }
    M2C_FIELD(&D_0042E730, s32 *, 0x10) = -1;
    M2C_FIELD(&D_0042E730, s32 *, 4) = 0xFFFFFFFF;
    M2C_FIELD(&D_0042E730, s32 *, 0x24) = 0;
    M2C_FIELD(&D_0042E730, s32 *, 8) = -1;
    M2C_FIELD(&D_0042E730, s32 *, 0xC) = -1;
    M2C_FIELD(&D_0042E730, s32 *, 0) = 0xFFFFFFFF;
}
