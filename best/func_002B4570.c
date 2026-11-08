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

s32 func_002B3C70(s32, s32, s32, M2C_UNK *);        /* extern */
M2C_UNK func_003FA310(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_003FA634(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_003FA8A4(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK D_0047E258;
extern M2C_UNK D_0047E268;
extern M2C_UNK D_0047E270;

s32 func_002B4570(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    M2C_UNK sp10;
    s32 sp30;
    s32 temp_2;

    sp0 = arg1;
    sp4 = arg2;
    func_003FA8A4(&sp10, &D_0047E258);
    func_003FA634(&sp10, &D_0047E268);
    func_003FA310(&sp10, &D_0047E270, &sp10, 0);
    sp30 = 0;
    temp_2 = func_002B3C70(arg0, sp0, sp4, &sp10);
    sp30 = temp_2;
    if (temp_2 == 1) {
        return 1;
    }
    return 0;
}
