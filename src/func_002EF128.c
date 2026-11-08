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

void *func_002EF128(void *arg0, s32 arg1, void *arg2) {
    void *var_4;
    void *var_6;

    var_4 = arg0;
    var_6 = arg2;
    if (var_4 != arg1) {
        do {
            if (var_6 != NULL) {
                M2C_FIELD(var_6, s32 *, 0) = (s32) M2C_FIELD(var_4, s32 *, 0);
                M2C_FIELD(var_6, s32 *, 4) = (s32) M2C_FIELD(var_4, s32 *, 4);
                M2C_FIELD(var_6, s32 *, 8) = (s32) M2C_FIELD(var_4, s32 *, 8);
            }
            var_4 += 0xC;
            var_6 += 0xC;
        } while (var_4 != arg1);
    }
    return var_6;
}
