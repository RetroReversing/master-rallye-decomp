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
extern s32 D_004411C0;
extern M2C_UNK D_004A16E8;

s32 func_0040A0D8(void) {
    D_004411C0 = -1;
    func_003F94D0(&D_004A16E8, 0, 4);
    return 0;
}
