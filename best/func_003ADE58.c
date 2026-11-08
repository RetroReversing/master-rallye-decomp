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

s32 D_002AD408(M2C_UNK);                            /* extern */
s32 func_002DDA20();                                /* extern */
M2C_UNK func_002FD7D0(M2C_UNK *, s32, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_00327F30(s32, void *);                     /* extern */
M2C_UNK func_003A33E8(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_003A3460(M2C_UNK *, s32);              /* extern */
M2C_UNK func_003A45E8(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_003A4718(void *);                          /* extern */
M2C_UNK func_003A4790(void *, M2C_UNK *);           /* extern */
s32 func_003A6F18(M2C_UNK *, M2C_UNK *, M2C_UNK);   /* extern */
s32 func_003B1EE0(s32);                             /* extern */
M2C_UNK func_003B2190(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK D_00487480;
extern M2C_UNK D_00487488;

void func_003ADE58(s32 arg0, void *arg1) {
    M2C_UNK sp10;
    M2C_UNK sp20;
    M2C_UNK sp30;

    M2C_FIELD(arg1, s32 *, 0x28) = 3;
    M2C_FIELD(arg1, s32 *, 0x2C) = 0;
    M2C_FIELD(arg1, s32 *, 0x3C) = 0;
    M2C_FIELD(arg1, s32 *, 0x40) = 0;
    M2C_FIELD(arg1, f32 *, 0x44) = 0.3f;
    M2C_FIELD(arg1, s32 *, 0x24) = func_00327F30(D_002AD408(0x10), arg1 + 0x4C);
    func_003A3460(&sp10, func_003A4718(arg1 + 0x38));
    if (func_003A6F18(&sp10, &D_00487480, 0) == 0xFFFFFFFF) {
        func_003A45E8(&sp30, &D_00487488);
        func_002FD7D0(&sp20, func_003B1EE0(func_002DDA20()), &sp30, 0, 0, 0, 0, 1, 1);
        func_003B2190(&sp20, 2);
        func_003A4790(arg1 + 0x38, &D_00487488);
    }
    func_003A33E8(&sp10, 2);
}
