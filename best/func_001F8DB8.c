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

s32 func_003FA760(s32, s32);                        /* extern */

s32 func_001F8DB8(void *arg0, s32 arg1) {
    s32 *var_16;
    s32 temp_5;
    s32 var_2;
    s32 var_2_2;

    var_16 = M2C_FIELD(arg0, s32 **, 0);
loop_1:
    var_2 = -1;
    if (var_16 != M2C_FIELD(arg0, s32 *, 4)) {
        temp_5 = *var_16;
        var_2_2 = 0;
        if ((temp_5 != 0) && (arg1 != 0)) {
            var_2_2 = (func_003FA760(arg1, temp_5) == 0) ? 1 : 0;
        }
        if (var_2_2 == 0) {
            var_16 += 0xC;
            goto loop_1;
        }
        var_2 = (s32) ((var_16 - M2C_FIELD(arg0, s32 **, 0)) * 0xAAAAAAAB) >> 2;
    }
    return var_2;
}
