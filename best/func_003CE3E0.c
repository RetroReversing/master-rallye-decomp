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

s32 func_003F9288(s8 *, s8 *, s32, void *);         /* extern */

s32 func_003CE3E0(void **arg0, s8 *arg1, s32 arg2, s32 arg3) {
    s32 var_16;
    s8 *var_4;
    void *temp_7;

    var_16 = arg2;
    temp_7 = *arg0;
    if ((u32) M2C_FIELD(temp_7, u32 *, -0x10) >= (u32) (var_16 + arg3)) {
        var_4 = temp_7 + var_16;
loop_2:
        if (*var_4 == *arg1) {
            if (func_003F9288(var_4, arg1, arg3, *arg0) != 0) {
                goto block_7;
            }
            return var_16;
        }
block_7:
        var_16 += 1;
        var_4 = *arg0 + var_16;
        if ((u32) M2C_FIELD(*arg0, u32 *, -0x10) < (u32) (var_16 + arg3)) {
            goto block_8;
        }
        goto loop_2;
    }
block_8:
    return 0xFFFFFFFF;
}
