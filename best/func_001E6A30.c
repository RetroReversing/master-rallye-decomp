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

void *func_001E6A70();                              /* extern */

s32 func_001E6A30(void) {
    void *temp_2;
    void *temp_3;

    temp_2 = func_001E6A70();
    if (temp_2 != NULL) {
        temp_3 = M2C_FIELD(temp_2, void **, 4);
        return M2C_FIELD(temp_3, s32 (**)(void *, void *), 0x14)(temp_2 + M2C_FIELD(temp_3, s16 *, 0x10), temp_2);
    }
    return 0;
}
