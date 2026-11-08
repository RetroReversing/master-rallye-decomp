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

s32 func_00405E90(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern s32 D_00436150;
extern M2C_UNK D_0049B980;
extern M2C_UNK D_0049BBC0;

s32 func_003CA090(void) {
    M2C_FIELD(&D_0049BBC0, s32 *, 0) = 0xF;
    if (func_00405E90(&D_0049B980, 1, 0, &D_0049BBC0, 0x80, &D_0049BBC0, 0x80, 0, 0) >= 0) {
        if (M2C_FIELD(&D_0049BBC0, s32 *, 0xC) == 1) {
            D_00436150 = 0;
        }
        return M2C_FIELD(&D_0049BBC0, s32 *, 0xC);
    }
    return 0;
}
