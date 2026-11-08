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

M2C_UNK *func_002B1FC0(M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */
extern M2C_UNK *D_0042E8E8;
extern M2C_UNK D_004864C8;
extern M2C_UNK D_004864F8;

void *func_00362B50(void *arg0) {
    M2C_UNK *sp10;
    M2C_UNK *var_2;
    M2C_UNK *var_7;

    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &D_004864F8;
    M2C_FIELD(arg0, s32 *, 4) = 0xFFFFFFFF;
    M2C_FIELD(arg0, s32 *, 0x10) = -1;
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
    M2C_FIELD(arg0, s32 *, 0) = 0xFFFFFFFF;
    M2C_FIELD(arg0, s32 *, 8) = -1;
    M2C_FIELD(arg0, s32 *, 0xC) = -1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    sp10 = D_0042E8E8;
    var_7 = func_002B1FC0(0xC, -1, 1);
    var_2 = var_7 + 8;
    if (var_7 == NULL) {
        var_7 = func_003D2910(0xC);
        var_2 = var_7 + 8;
    }
    if (var_2 != NULL) {
        M2C_FIELD(var_7, void **, 8) = arg0;
    }
    M2C_FIELD(var_7, M2C_UNK **, 0) = sp10;
    M2C_FIELD(var_7, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp10, M2C_UNK **, 4);
    *M2C_FIELD(sp10, M2C_UNK **, 4) = var_7;
    M2C_FIELD(sp10, M2C_UNK **, 4) = var_7;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = (M2C_UNK *) D_0042E8E8;
    sp10 = D_0042E8E8;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = (M2C_UNK *) M2C_FIELD(D_0042E8E8, M2C_UNK **, 4);
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &D_004864C8;
    return arg0;
}
