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

s32 D_002AD408(M2C_UNK);                            /* extern */
M2C_UNK func_001DAD18(s32, void *);                 /* extern */
M2C_UNK func_0021E740(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_0021F4B0(s32);                           /* extern */
s32 func_00262E68(s32);                             /* extern */

void *func_0021E290(void *arg0) {
    s32 *var_2_2;
    s32 temp_2_2;
    s32 var_3;
    s32 var_4;
    s32 var_4_2;
    void **var_3_2;
    void *temp_2;
    void *var_2;

    var_3 = 3;
    var_2 = arg0 + 0x18;
    do {
        M2C_FIELD(var_2, s32 *, 0) = 0;
        var_3 -= 1;
        M2C_FIELD(var_2, void **, 8) = var_2;
        M2C_FIELD(var_2, void **, 4) = var_2;
        var_2 += 0xC;
    } while (var_3 != -1);
    temp_2 = arg0 + 0x60;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, void **, 0x60) = NULL;
    M2C_FIELD(temp_2, void **, 8) = temp_2;
    var_4 = 3;
    M2C_FIELD(temp_2, void **, 4) = temp_2;
    var_2_2 = arg0 + 0x10;
    do {
        *var_2_2 = 0;
        var_4 -= 1;
        var_2_2 -= 4;
    } while (var_4 >= 0);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    temp_2_2 = func_00262E68(D_002AD408(0x80));
    M2C_FIELD(arg0, s32 *, 0x74) = -1;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = temp_2_2;
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) | 1) & ~2 & ~4);
    func_0021E740(arg0, 3, -5);
    var_3_2 = arg0 + 0x18;
    M2C_FIELD(arg0, s8 *, 0x6C) = 3;
    var_4_2 = 3;
    do {
        *var_3_2 = arg0;
        var_4_2 -= 1;
        var_3_2 += 0xC;
    } while (var_4_2 >= 0);
    M2C_FIELD(arg0, void **, 0x60) = arg0;
    func_001DAD18(M2C_FIELD(func_0021F4B0(var_4_2), s32 *, 0x18), temp_2);
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    return arg0;
}
