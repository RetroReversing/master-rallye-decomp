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

M2C_UNK func_002CA1D0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_003F94D0(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK D_00482598;

void *func_002CA138(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x9C) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00482598;
    func_003F94D0(arg0 + 4, -1, 0x80);
    func_003F94D0(arg0 + 0x84, 0, 0x18);
    func_002CA1D0(arg0, 0x61, 0);
    func_002CA1D0(arg0, 0x7A, 1);
    func_002CA1D0(arg0, 0x68, 2);
    func_002CA1D0(arg0, 0x6E, 3);
    return arg0;
}
