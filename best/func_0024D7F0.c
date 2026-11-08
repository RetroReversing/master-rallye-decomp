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

s32 func_0024D8F8(s32, s32);                        /* extern */
s32 func_0024D940(s32, s32, s32, s32, s32, s32, s32, M2C_UNK); /* extern */

s32 func_0024D7F0(s32 arg0, void *arg1, void *arg2) {
    s32 var_2;

    if ((func_0024D8F8(M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg2, s32 *, 8)) == 0) || (var_2 = 1, (func_0024D940(arg0, M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg2, s32 *, 8), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 0), 0) == 0))) {
        var_2 = 0;
    }
    return var_2;
}
