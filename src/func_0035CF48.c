/* identical to func_002DE728 (matched), with its names changed by decomp.wtf */
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

void *func_0035CF48(void *arg0, s32 arg1, void *arg2) {
    void *var_4;
    void *var_6;

    var_4 = arg0;
    var_6 = arg2;
    if (var_4 != arg1) {
        do {
            if (var_6 != NULL) {
                M2C_FIELD(var_6, s64 *, 0) = (s64) M2C_FIELD(var_4, s64 *, 0);
                M2C_FIELD(var_6, s64 *, 8) = (s64) M2C_FIELD(var_4, s64 *, 8);
                M2C_FIELD(var_6, s64 *, 0x10) = (s64) M2C_FIELD(var_4, s64 *, 0x10);
                M2C_FIELD(var_6, s64 *, 0x18) = (s64) M2C_FIELD(var_4, s64 *, 0x18);
                M2C_FIELD(var_6, s64 *, 0x20) = (s64) M2C_FIELD(var_4, s64 *, 0x20);
                M2C_FIELD(var_6, s64 *, 0x28) = (s64) M2C_FIELD(var_4, s64 *, 0x28);
            }
            var_4 += 0x30;
            var_6 += 0x30;
        } while (var_4 != arg1);
    }
    return var_6;
}
