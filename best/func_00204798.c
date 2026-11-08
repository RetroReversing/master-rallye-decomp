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

void func_00204798(void *arg0) {
    void ***var_16;
    void **temp_5;
    void *temp_2;

    var_16 = M2C_FIELD(arg0, void ****, 0);
    if (var_16 != M2C_FIELD(arg0, s32 *, 4)) {
        do {
            temp_5 = *var_16;
            if (temp_5 != NULL) {
                temp_2 = *temp_5;
                M2C_FIELD(temp_2, M2C_UNK (**)(void *, void **), 0x1C)(temp_5 + M2C_FIELD(temp_2, s16 *, 0x18), temp_5);
            }
            var_16 += 4;
        } while (var_16 != M2C_FIELD(arg0, s32 *, 4));
    }
}
