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

s32 func_003FA580();

u32 func_002CD360(void *arg0, s32 arg1) {
    char *var_16;
    u32 var_17;
    u32 var_19;
    u32 var_2;

    var_19 = -1U;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        var_16 = M2C_FIELD(arg0, s32 **, 0xC);
        var_17 = 0;
loop_4:
        var_2 = -1U;
        if (var_17 < (u32) M2C_FIELD(arg0, u32 *, 4)) {
            if (func_003FA580(arg1, *(s32 *)var_16) != 0) {
                var_17 += 1;
                var_16 += 4;
                goto loop_4;
            }
            var_19 = var_17;
            goto block_9;
        }
    } else {
block_9:
        var_2 = var_19;
    }
    return var_2;
}
