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

u32 func_003CE620(void **arg0, s8 *arg1, u32 arg2, u32 arg3) {
    u8 sp0;
    s8 *var_2_3;
    u32 var_2;
    u32 var_2_4;
    u32 var_6;
    u32 var_8;
    u8 *var_2_2;
    u8 temp_2;
    void *temp_4;

    var_6 = arg2;
    temp_4 = *arg0;
    if (var_6 < (u32) M2C_FIELD(temp_4, u32 *, -0x10)) {
        var_2_2 = temp_4 + var_6;
loop_2:
        var_8 = 0;
        temp_2 = *var_2_2;
        sp0 = temp_2;
        if (arg3 != 0) {
            var_2_3 = arg1;
loop_4:
            var_2_4 = var_8;
            if (*var_2_3 != (s8) temp_2) {
                var_8 += 1;
                var_2_3 = arg1 + var_8;
                if (var_8 >= arg3) {
                    goto block_6;
                }
                goto loop_4;
            }
        } else {
block_6:
            var_2_4 = 0xFFFFFFFF;
        }
        var_2 = var_6;
        if (var_2_4 == 0xFFFFFFFF) {
            var_6 += 1;
            var_2_2 = temp_4 + var_6;
            if (var_6 >= (u32) M2C_FIELD(temp_4, u32 *, -0x10)) {
                goto block_9;
            }
            goto loop_2;
        }
    } else {
block_9:
        var_2 = 0xFFFFFFFF;
    }
    return var_2;
}
