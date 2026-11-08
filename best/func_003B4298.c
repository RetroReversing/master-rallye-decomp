/* machine draft (m2c) for ee-gcc-2.95.2 -O1 -G0 -fno-omit-frame-pointer -fno-delayed-branch, tried by autopilot */
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

M2C_UNK func_003A38B0(s32, s32);                    /* extern */
s32 func_003B4860(s32, s32, s32);                   /* extern */

s32 func_003B4298(void *arg0, s32 arg1, s32 arg2) {
    s32 sp0;

    sp0 = func_003B4860(arg2, M2C_FIELD(arg0, s32 *, 4), arg1);
    func_003A38B0(sp0, M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - (arg2 - arg1));
    return arg1;
}
