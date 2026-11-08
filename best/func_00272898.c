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

s32 func_003F9288(s8 *, s8 *, s32);                 /* extern */

s32 func_00272898(void **arg0, s8 *arg1, s32 arg2, s32 arg3) {
    s32 var_16;
    s8 *temp_2;
    u32 var_3;

    var_16 = arg2;
    var_3 = var_16 + arg3;
loop_10:
    if ((u32) M2C_FIELD(*arg0, u32 *, -0x10) >= var_3) {
        temp_2 = *arg0 + var_16;
        if (*temp_2 != *arg1) {
            goto block_9;
        }
        if (func_003F9288(temp_2, arg1, arg3) != 0) {
block_9:
            var_16 += 1;
            var_3 = var_16 + arg3;
            goto loop_10;
        }
        return var_16;
    }
    return 0xFFFFFFFF;
}
