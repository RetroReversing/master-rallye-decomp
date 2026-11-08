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

s32 func_0024C5B0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_2;
    s32 var_2;

    temp_2 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_2 == arg1) {
        var_2 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x1C) == arg2) {
            return 1;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_2;
    }
    var_2 = 0;
    if (temp_2 == arg2) {
        var_2 = 1;
        if (M2C_FIELD(arg0, s32 *, 0x1C) != arg1) {
            var_2 = 0;
        }
    }
    return var_2;
}
