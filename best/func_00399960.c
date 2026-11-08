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

M2C_UNK func_003F93CC(s32, s32, s32);               /* extern */

s32 func_00399960(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp0;

    sp0 = (s32) (arg1 - arg0) >> 2;
    func_003F93CC(arg2 - (sp0 * 4), arg0, sp0 * 4);
    return arg2 - (sp0 * 4);
}
