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

s32 func_001D4978(void *arg0, s32 *arg1) {
    s32 *var_4;
    s32 temp_2;

    temp_2 = M2C_FIELD(arg0, s32 *, 4);
    var_4 = M2C_FIELD(arg0, s32 **, 0);
    if (var_4 != temp_2) {
loop_2:
        var_4 += 4;
        if (*var_4 == *arg1) {
            return 1;
        }
        if (var_4 == temp_2) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_2;
    }
    return 0;
}
