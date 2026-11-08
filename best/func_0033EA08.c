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

void func_0033EA08(void *arg0, s32 arg1, void *arg2) {
    void *var_2;
    void *var_4;

    var_4 = arg0;
    var_2 = arg2;
    if (var_4 != arg1) {
        do {
            if (var_2 != NULL) {
                M2C_FIELD(var_2, f32 *, 0) = (f32) M2C_FIELD(var_4, f32 *, 0);
                M2C_FIELD(var_2, f32 *, 4) = (f32) M2C_FIELD(var_4, f32 *, 4);
                M2C_FIELD(var_2, f32 *, 8) = (f32) M2C_FIELD(var_4, f32 *, 8);
            }
            var_4 += 0xC;
            var_2 += 0xC;
        } while (var_4 != arg1);
    }
}
