/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

M2C_UNK func_003AD930(s32, M2C_UNK *);              /* extern */
M2C_UNK *func_003B1FD0(s32, s32);                   /* extern */

s32 func_003AD9C8(s32 arg0, s32 arg1, M2C_UNK **arg2, s32 arg3) {
    M2C_UNK *sp0;
    M2C_UNK *temp_2;

    temp_2 = func_003B1FD0(arg1, arg3);
    sp0 = temp_2;
    M2C_FIELD(temp_2, M2C_UNK **, 0) = *arg2;
    M2C_FIELD(temp_2, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(*arg2, M2C_UNK **, 4);
    *M2C_FIELD(*arg2, M2C_UNK **, 4) = temp_2;
    M2C_FIELD(*arg2, M2C_UNK **, 4) = sp0;
    func_003AD930(arg0, sp0);
    return arg0;
}
