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

u32 func_003CE800(void **arg0, s8 arg1, u32 arg2) {
    s8 sp0;
    s8 *var_2_2;
    u32 var_2;
    u32 var_6;
    void *temp_7;

    var_6 = arg2;
    temp_7 = *arg0;
    sp0 = arg1;
    if (var_6 < (u32) M2C_FIELD(temp_7, u32 *, -0x10)) {
        var_2_2 = temp_7 + var_6;
loop_2:
        var_2 = var_6;
        if (*var_2_2 == arg1) {
            var_6 += 1;
            var_2_2 = temp_7 + var_6;
            if (var_6 >= (u32) M2C_FIELD(temp_7, u32 *, -0x10)) {
                goto block_4;
            }
            goto loop_2;
        }
    } else {
block_4:
        var_2 = 0xFFFFFFFF;
    }
    return var_2;
}
