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

M2C_UNK func_003F94D0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_00494CB0;
extern s32 D_00494CC0;
extern M2C_UNK D_00494CC8;

M2C_UNK *func_002AD888(void) {
    if (D_00494CC0 == 0) {
        D_00494CC0 = 1;
        func_003F94D0(&D_00494CB0, 0, 0x10);
        M2C_FIELD(&D_00494CB0, M2C_UNK **, 4) = &D_00494CC8;
    }
    return &D_00494CB0;
}
