/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s32 CreateSema_2(M2C_UNK *);                        /* extern */
M2C_UNK SignalSema_2(s32);                          /* extern */
M2C_UNK WaitSema_2(s32);                            /* extern */
M2C_UNK func_003CC9E8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
M2C_UNK func_00405650(M2C_UNK);                     /* extern */
s32 func_00405CC0(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_00405E90(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern s32 D_004361F4;
extern M2C_UNK D_00488C40;
extern M2C_UNK D_00488C58;
extern M2C_UNK D_00488C80;
extern M2C_UNK D_0049BC40;
extern M2C_UNK D_0049BCC0;
extern M2C_UNK D_0049D200;
extern M2C_UNK D_FFFFF;

s32 func_003CBFE8(void) {
    M2C_UNK sp10;
    s32 sp14;
    s32 sp18;
    s32 sp24;
    M2C_UNK *var_2;
    s32 temp_16;

    if (D_004361F4 < 0) {
        sp24 = 0;
        sp14 = 1;
        sp18 = 1;
        D_004361F4 = CreateSema_2(&sp10);
    }
    func_003CC9E8(0, 0, 0);
    WaitSema_2(D_004361F4);
    func_00405650(0);
loop_6:
    if (func_00405CC0(&D_0049BC40, 0x80000400, 0) < 0) {
        func_003F9698(&D_00488C40);
loop_8:
        goto loop_8;
    }
    if (M2C_FIELD(&D_0049BC40, s32 *, 0x24) != 0) {
        temp_16 = func_00405E90(&D_0049BC40, 0xFE, 0, &D_0049BCC0, 0x30, &D_0049D200, 0xC, 0, 0);
        SignalSema_2(D_004361F4);
        if (temp_16 >= 0) {
            if (M2C_FIELD(&D_0049D200, s32 *, 4) < 0x20A) {
                func_003F9698(&D_00488C58);
                M2C_FIELD(&D_0049BC40, s32 *, 0x24) = 0;
                return -0x78;
            }
            if (M2C_FIELD(&D_0049D200, s32 *, 8) < 0x20E) {
                func_003F9698(&D_00488C80);
                M2C_FIELD(&D_0049BC40, s32 *, 0x24) = 0;
                return -0x79;
            }
            return M2C_FIELD(&D_0049D200, s32 *, 0);
        }
        M2C_FIELD(&D_0049BC40, s32 *, 0x24) = 0;
        return temp_16 - 0x64;
    }
    var_2 = &D_FFFFF;
    do {

    } while (var_2 != NULL);
    goto loop_6;
}
