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

M2C_UNK func_003CD948(s32 *, s32, s32, s32, s32);   /* extern */
s32 func_003FA9B8(s32);                             /* extern */

void func_003D0020(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_16;

    temp_16 = arg1 - *arg0;
    func_003CD948(arg0, temp_16, arg2 - arg1, arg3, func_003FA9B8(arg3));
}
