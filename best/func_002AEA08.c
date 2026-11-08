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

void **func_002AD838();                             /* extern */
void *func_002AE718();                              /* extern */

void func_002AEA08(void) {
    void *var_2;

    var_2 = *func_002AD838();
    if (var_2 == NULL) {
        var_2 = func_002AE718();
    }
    M2C_FIELD(var_2, s32 *, 0x14) = 0;
}
