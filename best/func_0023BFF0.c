/* machine draft (m2c), tried by autopilot */
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

s32 func_0023BFF0(void *arg1, void *arg2) {
    s32 temp_2;
    s32 temp_3;
    s32 temp_4;
    s32 var_2;

    temp_3 = M2C_FIELD(arg1, s32 *, 0x4C);
    temp_4 = M2C_FIELD(arg2, s32 *, 0x4C);
    temp_2 = M2C_FIELD(arg2, s32 *, 0x50);
    if (temp_3 == temp_4) {
        var_2 = 0;
        if (M2C_FIELD(arg1, s32 *, 0x50) == temp_2) {
            return 1;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_2;
    }
    var_2 = 0;
    if (temp_3 == temp_2) {
        var_2 = 1;
        if (M2C_FIELD(arg1, s32 *, 0x50) != temp_4) {
            var_2 = 0;
        }
    }
    return var_2;
}
