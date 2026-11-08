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

M2C_UNK *func_002B1FC0(M2C_UNK);                    /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */
extern M2C_UNK *D_0042E8E8;
extern M2C_UNK D_004864E0;
extern M2C_UNK D_004864F8;

void *func_003690A8(void *arg0, void *arg1) {
    M2C_UNK *sp10;
    M2C_UNK *var_2;
    M2C_UNK *var_4;
    s32 *temp_3;
    s32 *temp_3_2;
    s32 *temp_3_3;
    s32 temp_3_4;

    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &D_004864F8;
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    temp_3 = M2C_FIELD(arg1, s32 **, 0x14);
    M2C_FIELD(arg0, s32 **, 0x14) = temp_3;
    if (temp_3 != NULL) {
        *temp_3 += 1;
    }
    temp_3_2 = M2C_FIELD(arg1, s32 **, 0x18);
    M2C_FIELD(arg0, s32 **, 0x18) = temp_3_2;
    if (temp_3_2 != NULL) {
        *temp_3_2 += 1;
    }
    temp_3_3 = M2C_FIELD(arg1, s32 **, 0x1C);
    M2C_FIELD(arg0, s32 **, 0x1C) = temp_3_3;
    if (temp_3_3 != NULL) {
        *temp_3_3 += 1;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    temp_3_4 = M2C_FIELD(arg1, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x28) = temp_3_4;
    if (temp_3_4 != 0) {
        sp10 = D_0042E8E8;
        var_4 = func_002B1FC0(0xC);
        var_2 = var_4 + 8;
        if (var_4 == NULL) {
            var_4 = func_003D2910(0xC);
            var_2 = var_4 + 8;
        }
        if (var_2 != NULL) {
            M2C_FIELD(var_4, void **, 8) = arg0;
        }
        M2C_FIELD(var_4, M2C_UNK **, 0) = sp10;
        M2C_FIELD(var_4, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp10, M2C_UNK **, 4);
        *M2C_FIELD(sp10, M2C_UNK **, 4) = var_4;
        M2C_FIELD(sp10, M2C_UNK **, 4) = var_4;
        M2C_FIELD(arg0, M2C_UNK **, 0x20) = (M2C_UNK *) D_0042E8E8;
        sp10 = D_0042E8E8;
        M2C_FIELD(arg0, M2C_UNK **, 0x20) = (M2C_UNK *) M2C_FIELD(D_0042E8E8, M2C_UNK **, 4);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &D_004864E0;
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) M2C_FIELD(arg1, s32 *, 0x70);
    M2C_FIELD(arg0, s32 *, 0x74) = (s32) M2C_FIELD(arg1, s32 *, 0x74);
    M2C_FIELD(arg0, s32 *, 0x78) = (s32) M2C_FIELD(arg1, s32 *, 0x78);
    return arg0;
}
