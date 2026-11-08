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

void func_003E4BC8(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_4;
    s32 temp_9;
    s32 var_2;
    s32 var_4;

    temp_4 = *arg0;
    temp_9 = 0x10 << arg1;
    var_4 = (arg4 != 0) ? (temp_4 >> 1) : temp_4;
    if (arg2 > 0) {
        var_4 = var_4 + 1 + (((arg2 - 1) << arg1) + arg3);
        var_2 = var_4 * 2;
        if (var_4 >= temp_9) {
            var_4 -= temp_9 * 2;
            goto block_6;
        }
    } else {
        var_2 = var_4 * 2;
        if (arg2 < 0) {
            var_4 = (var_4 - 1) - ((~arg2 << arg1) + arg3);
            if (var_4 < -temp_9) {
                var_4 += temp_9 * 2;
            }
block_6:
            var_2 = var_4 * 2;
        }
    }
    *arg0 = (arg4 == 0) ? var_4 : var_2;
}
