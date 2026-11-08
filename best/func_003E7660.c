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

void func_003E7660(s32 **arg0) {
    s32 *var_16;
    s32 var_2;
    void *temp_2;

    var_16 = *arg0;
    if (var_16 != NULL) {
        var_2 = *var_16;
loop_2:
        if (var_2 != 0) {
            temp_2 = M2C_FIELD(var_16, void **, 0x10);
            M2C_FIELD(temp_2, M2C_UNK (**)(void *), 0xC)(var_16 + M2C_FIELD(temp_2, s16 *, 8));
        }
        var_16 = M2C_FIELD(var_16, s32 **, 0xC);
        if (var_16 != NULL) {
            var_2 = *var_16;
            goto loop_2;
        }
    }
}
