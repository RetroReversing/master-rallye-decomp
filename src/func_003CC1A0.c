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

extern M2C_UNK D_004361F0;
extern s32 D_004361F4;
extern M2C_UNK D_0049BC40;
extern M2C_UNK D_0049D200;

M2C_UNK *func_003CC1A0(M2C_UNK **arg0, M2C_UNK **arg1) {
    *arg0 = &D_0049D200;
    *arg1 = &D_004361F0;
    M2C_FIELD(&D_0049D200, s32 *, 0x3C) = (s32) D_004361F4;
    return &D_0049BC40;
}
