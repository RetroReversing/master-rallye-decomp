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

s32 func_0026BC78(s32, s32);                        /* extern */

s32 func_003C7458(void *arg0, s32 arg1) {
    s32 temp_18;
    s32 var_16;
    s32 var_17;
    s32 var_2;

    temp_18 = (s32) ((M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0)) * 0xAAAAAAAB) >> 3;
    var_16 = 0;
    if (temp_18 > 0) {
        var_17 = 0;
loop_2:
        var_2 = var_16;
        if (func_0026BC78(M2C_FIELD(arg0, s32 *, 0) + var_17, arg1) == 0) {
            var_16 += 1;
            var_17 += 0x18;
            if (var_16 >= temp_18) {
                goto block_4;
            }
            goto loop_2;
        }
    } else {
block_4:
        var_2 = -1;
    }
    return var_2;
}
