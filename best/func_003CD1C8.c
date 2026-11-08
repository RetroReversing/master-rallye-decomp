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
s32 func_00405E90(M2C_UNK *, M2C_UNK, M2C_UNK, s32 *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern s32 D_004361F0;
extern s32 D_004361F4;
extern M2C_UNK D_0049BC40;
extern s32 D_0049BCC0;
extern M2C_UNK D_0049D200;

s32 func_003CD1C8(s32 arg0) {
    s32 temp_2;

    if (PollSema_2(D_004361F4) < 0) {
        return -0xC8;
    }
    if (M2C_FIELD(&D_0049BC40, s32 *, 0x24) == 0) {
        SignalSema_2(D_004361F4);
        return -0x64;
    }
    D_0049BCC0 = arg0;
    temp_2 = func_00405E90(&D_0049BC40, 0xA, 1, &D_0049BCC0, 0x30, &D_0049D200, 4, 0, 0);
    if (temp_2 == 0) {
        D_004361F0 = 0xA;
    } else {
        SignalSema_2(D_004361F4);
    }
    return temp_2;
}
