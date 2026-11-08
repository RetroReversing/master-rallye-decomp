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

s32 func_001F21A0(s32, s32);                        /* extern */

s32 func_001F23E0(void *arg0, s32 arg1, s32 *arg2) {
    s32 var_16;
    s32 var_4;

    var_16 = M2C_FIELD(arg0, s32 *, 0);
    if (var_16 != M2C_FIELD(arg0, s32 *, 4)) {
        var_4 = var_16;
loop_2:
        if (func_001F21A0(var_4, arg1) != 0) {
            *arg2 = (s32) ((var_16 - M2C_FIELD(arg0, s32 *, 0)) * 0xBA2E8BA3) >> 3;
            return 1;
        }
        var_16 += 0x58;
        var_4 = var_16;
        if (var_16 == M2C_FIELD(arg0, s32 *, 4)) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    return 0;
}
