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

s32 func_003A82B0(s32, s32);                        /* extern */
M2C_UNK func_003A8310(s32, s32, s32);               /* extern */

s32 func_003AF198(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp0;

    sp0 = func_003A82B0(arg0, arg1);
    func_003A8310(arg2, arg3, sp0);
    return sp0;
}
