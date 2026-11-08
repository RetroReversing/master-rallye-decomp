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

s32 func_003FA9B8(s32);                             /* extern */
s32 func_003FABD0(s32, s32, s32);                   /* extern */

s32 func_001D2588(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_16;
    s32 temp_17;
    s32 temp_21;
    s32 temp_4;
    s32 var_16;
    s32 var_2;

    temp_4 = *arg0;
    if (temp_4 == 0) {
        goto block_5;
    }
    temp_16 = func_003FA9B8(temp_4);
    temp_21 = func_003FA9B8(arg3);
    temp_17 = (temp_16 < arg2) ? temp_16 : arg2;
    var_16 = (arg1 > -1) ? arg1 : 0;
    var_2 = -1;
    if (var_16 < temp_17) {
loop_3:
        var_2 = var_16;
        if (func_003FABD0(*arg0 + var_16, arg3, temp_21) == 0) {
            var_16 += 1;
            if (var_16 >= temp_17) {
block_5:
                var_2 = -1;
            } else {
                goto loop_3;
            }
        }
    }
    return var_2;
}
