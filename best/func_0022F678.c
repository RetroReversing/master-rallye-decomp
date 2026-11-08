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

s32 func_00232380(s32, s32);                        /* extern */

s32 func_0022F678(void *arg0, s32 arg1) {
    s32 temp_18;
    s32 var_16;
    s32 var_17;

    temp_18 = (s32) ((M2C_FIELD(arg0, s32 *, 0x14) - M2C_FIELD(arg0, s32 *, 0x10)) * 0xB6DB6DB7) >> 2;
    var_16 = 0;
    if (temp_18 > 0) {
        var_17 = 0;
loop_2:
        var_16 += 1;
        if (func_00232380(M2C_FIELD(arg0, s32 *, 0x10) + var_17, arg1) == 1) {
            return 0;
        }
        var_17 += 0x1C;
        if (var_16 >= temp_18) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    return 1;
}
