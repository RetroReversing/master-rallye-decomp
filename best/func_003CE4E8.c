/* machine draft (m2c), tried by autopilot */
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

s32 func_003F9288(s8 *, s8 *, u32);                 /* extern */

s32 func_003CE4E8(void **arg0, s8 *arg1, u32 arg2, u32 arg3) {
    s32 temp_16_2;
    s32 var_16;
    s8 *temp_4;
    u32 temp_16;
    u32 temp_3;

    temp_3 = M2C_FIELD(*arg0, u32 *, -0x10);
    if (temp_3 < arg3) {
        goto block_9;
    }
    temp_16 = temp_3 - arg3;
    temp_16_2 = ((arg2 < temp_16) ? arg2 : temp_16) + 1;
    var_16 = temp_16_2 - 1;
    if (temp_16_2 != 0) {
loop_6:
        temp_4 = *arg0 + var_16;
        if ((*temp_4 != *arg1) || (func_003F9288(temp_4, arg1, arg3) != 0)) {
            var_16 -= 1;
            if (var_16 == 0) {
                goto block_9;
            }
            goto loop_6;
        }
        return var_16;
    }
block_9:
    return 0xFFFFFFFF;
}
