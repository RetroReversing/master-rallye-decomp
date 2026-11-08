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

s32 func_002C06E0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern s32 D_00428C88;
extern M2C_UNK D_00480418;

s32 func_002BC4D8(void) {
    if (D_00428C88 == 0) {
        if (func_002C06E0(0x1070, 2, 4, 8, 4, 4, 4, 4, 4, 4) != 0) {
            func_003F9698(&D_00480418);
        } else {
            D_00428C88 = 1;
        }
    }
    return D_00428C88;
}
