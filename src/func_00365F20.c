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

void *func_00365F20(void *arg0, s32 arg1, void *arg2) {
    s32 var_5;
    void *var_4;

    var_4 = arg0;
    var_5 = arg1;
    if (var_5 != 0) {
        do {
            var_5 -= 1;
            if (var_4 != NULL) {
                M2C_FIELD(var_4, s64 *, 0) = (s64) M2C_FIELD(arg2, s64 *, 0);
                M2C_FIELD(var_4, s64 *, 8) = (s64) M2C_FIELD(arg2, s64 *, 8);
                M2C_FIELD(var_4, s64 *, 0x10) = (s64) M2C_FIELD(arg2, s64 *, 0x10);
                M2C_FIELD(var_4, s64 *, 0x18) = (s64) M2C_FIELD(arg2, s64 *, 0x18);
                M2C_FIELD(var_4, s64 *, 0x20) = (s64) M2C_FIELD(arg2, s64 *, 0x20);
                M2C_FIELD(var_4, s64 *, 0x28) = (s64) M2C_FIELD(arg2, s64 *, 0x28);
            }
            var_4 += 0x30;
        } while (var_5 != 0);
    }
    return var_4;
}
