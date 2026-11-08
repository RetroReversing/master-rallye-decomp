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

s32 PollSema_2(s32);                                /* extern */
M2C_UNK SignalSema_2(s32);                          /* extern */
M2C_UNK func_004055A0(M2C_UNK *, M2C_UNK, s32 *);   /* extern */
s32 func_00405E90(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern s32 D_004361F0;
extern s32 D_004361F4;
extern M2C_UNK D_0049BC40;
extern s32 D_0049BC68;
extern s32 D_0049BC6C;
extern s32 D_0049BC70;
extern M2C_UNK D_0049BCC0;
extern M2C_UNK D_0049C140;
extern M2C_UNK D_0049D200;
extern M2C_UNK func_003CCAC8;

s32 func_003CCB20(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_2;

    if (PollSema_2(D_004361F4) < 0) {
        return -0xC8;
    }
    if (M2C_FIELD(&D_0049BC40, s32 *, 0x24) == 0) {
        SignalSema_2(D_004361F4);
        return -0x64;
    }
    M2C_FIELD(&D_0049BCC0, s32 *, 4) = arg0;
    M2C_FIELD(&D_0049BCC0, s32 *, 8) = arg1;
    M2C_FIELD(&D_0049BCC0, M2C_UNK **, 0x1C) = &D_0049C140;
    if (arg2 != 0) {
        M2C_FIELD(&D_0049BCC0, s32 *, 0x14) = 1;
    } else {
        M2C_FIELD(&D_0049BCC0, s32 *, 0x14) = 0;
    }
    if (arg3 != 0) {
        M2C_FIELD(&D_0049BCC0, s32 *, 0x10) = 1;
    } else {
        M2C_FIELD(&D_0049BCC0, s32 *, 0x10) = 0;
    }
    if (arg4 != 0) {
        M2C_FIELD(&D_0049BCC0, s32 *, 0xC) = 1;
    } else {
        M2C_FIELD(&D_0049BCC0, s32 *, 0xC) = 0;
    }
    D_0049BC68 = arg2;
    D_0049BC6C = arg3;
    D_0049BC70 = arg4;
    func_004055A0(&D_0049C140, 0xC0, &D_0049BC70);
    temp_2 = func_00405E90(&D_0049BC40, 1, 1, &D_0049BCC0, 0x30, &D_0049D200, 4, &func_003CCAC8, &D_0049C140);
    if (temp_2 == 0) {
        D_004361F0 = 1;
    } else {
        SignalSema_2(D_004361F4);
    }
    return temp_2;
}
