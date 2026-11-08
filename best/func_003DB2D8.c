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

void *func_003DB190(s32, s32);                      /* extern */
void *func_003DB208(void *, M2C_UNK, s32);          /* extern */

void *func_003DB2D8(void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_lo;
    s32 var_17;
    s32 var_17_2;
    s32 var_18;
    s32 var_5;
    s32 var_7;
    s8 *var_16;
    s8 *var_16_2;
    s8 temp_6;
    s8 var_6;
    void *var_4;

    temp_lo = (s32) (arg3 + 8) / 9;
    var_7 = 1;
    var_5 = 0;
    if (temp_lo > 1) {
        var_18 = arg2 < 0xA;
        do {
            var_7 *= 2;
            var_5 += 1;
        } while (var_7 < temp_lo);
    } else {
        var_18 = arg2 < 0xA;
    }
    var_17 = 9;
    var_4 = func_003DB190(var_5, var_7);
    M2C_FIELD(var_4, s32 *, 0x14) = arg4;
    M2C_FIELD(var_4, s32 *, 0x10) = 1;
    if (var_18 == 0) {
        var_16 = arg1 + 9;
        var_6 = M2C_FIELD(arg1, s8 *, 9);
loop_7:
        var_17 += 1;
        var_16 += 1;
        var_4 = func_003DB208(var_4, 0xA, var_6 - 0x30);
        if (var_17 < arg2) {
            var_6 = *var_16;
            goto loop_7;
        }
        var_16_2 = var_16 + 1;
    } else {
        var_16_2 = arg1 + 0xA;
    }
    var_17_2 = arg3 - var_17;
    if (var_17 < arg3) {
        do {
            temp_6 = *var_16_2;
            var_16_2 += 1;
            var_17_2 -= 1;
            var_4 = func_003DB208(var_4, 0xA, temp_6 - 0x30);
        } while (var_17_2 != 0);
    }
    return var_4;
}
