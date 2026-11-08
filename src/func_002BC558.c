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

s32 func_002B1FC0(M2C_UNK);                         /* extern */
extern s32 D_00428C80;
extern s32 D_00428C84;
extern M2C_UNK D_004804A0;

M2C_UNK **func_002BC558(M2C_UNK **arg0) {
    *arg0 = &D_004804A0;
    D_00428C84 = func_002B1FC0(0x3010) & 0xFFFFFFF0;
    D_00428C80 = 1;
    return arg0;
}
