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

s32 func_0017DF10(s32);                             /* extern */
s32 func_0017DF18(s32);                             /* extern */

s32 func_0017DC78(void *arg0) {
    s32 var_16;
    s32 var_17;

    var_17 = 0;
    if (func_0017DF10(M2C_FIELD(arg0, s32 *, 0xC)) == 0) {
        goto block_1;
    }
    var_16 = 0;
loop_3:
    var_17 += 1;
    if (func_0017DF18(M2C_FIELD(arg0, s32 *, 0x10) + var_16) != 0) {
        var_16 += 0x190;
        if (var_17 >= 4) {
            return 1;
        }
        goto loop_3;
    }
block_1:
    return 0;
}
