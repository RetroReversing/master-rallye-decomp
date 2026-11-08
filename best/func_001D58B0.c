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

M2C_UNK func_001D56C0(s32);                         /* extern */

void func_001D58B0(s32 arg0) {
    void *temp_4;
    void *var_16;

    temp_4 = arg0 + 8;
    var_16 = M2C_FIELD(temp_4, void **, 4);
    if (var_16 != temp_4) {
        do {
            func_001D56C0(M2C_FIELD(var_16, s32 *, 0));
            var_16 = M2C_FIELD(var_16, void **, 4);
        } while (var_16 != temp_4);
    }
}
