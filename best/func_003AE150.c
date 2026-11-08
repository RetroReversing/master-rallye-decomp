/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

s32 func_002DDA20();                                /* extern */
M2C_UNK func_002FD7D0(M2C_UNK *, s32, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_003A45E8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_003A4790(void *, M2C_UNK *);           /* extern */
s32 func_003B1EE0(s32);                             /* extern */
M2C_UNK func_003B2190(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK D_00487488;

void func_003AE150(s32 arg0, void *arg1) {
    M2C_UNK sp10;
    M2C_UNK sp20;

    M2C_FIELD(arg1, s32 *, 0x28) = 0x15;
    M2C_FIELD(arg1, s32 *, 0x2C) = 1;
    M2C_FIELD(arg1, s32 *, 0x3C) = 0;
    M2C_FIELD(arg1, s32 *, 0x40) = 0;
    M2C_FIELD(arg1, f32 *, 0x44) = 0.3f;
    func_003A45E8(&sp20, &D_00487488);
    func_002FD7D0(&sp10, func_003B1EE0(func_002DDA20()), &sp20, 0, 0, 0, 0, 1, 1);
    func_003B2190(&sp10, 2);
    func_003A4790(arg1 + 0x38, &D_00487488);
}
