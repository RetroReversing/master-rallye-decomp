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

s32 func_00242C88(void *arg0, void **arg1, s32 arg2) {
    s32 var_2;
    void *temp_3;

    if (arg1 != NULL) {
        temp_3 = *arg1;
        return M2C_FIELD(temp_3, s32 (**)(void *, s32, void **), 0x1C)(arg1 + M2C_FIELD(temp_3, s16 *, 0x18), arg2, arg1);
    }
    var_2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        var_2 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
            var_2 = func_00237558((s32) arg0, (void **) arg2);
        }
    }
    return var_2;
}
