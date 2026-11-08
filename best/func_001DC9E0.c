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

s32 func_001DC9E0(void *arg0) {
    s32 temp_14;
    s32 temp_2;
    s32 var_3;
    s32 var_5;
    s32 var_7;
    s32 var_9;

    var_9 = 1;
    var_7 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x10) > 0) {
        temp_14 = M2C_FIELD(arg0, s32 *, 0xC);
loop_2:
        var_5 = 0;
        if ((temp_14 > 0) && (var_9 != 0)) {
            var_3 = var_7 * temp_14;
loop_5:
            temp_2 = (var_3 + var_5) * 4;
            var_5 += 1;
            var_9 = ((u8) M2C_FIELD((temp_2 + M2C_FIELD(arg0, s32 *, 8)), u8 *, 3) <= 0xEFU) ? 0 : var_9;
            if (var_5 < temp_14) {
                if (var_9 != 0) {
                    var_3 = var_7 * temp_14;
                    goto loop_5;
                }
            }
        }
        var_7 += 1;
        if ((var_7 < M2C_FIELD(arg0, s32 *, 0x10)) && (var_9 != 0)) {
            goto loop_2;
        }
    }
    return var_9;
}
