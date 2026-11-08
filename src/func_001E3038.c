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

M2C_UNK func_001E3150(void *, void *);              /* extern */

void func_001E3038(void *arg0) {
    void *var_16;

    var_16 = M2C_FIELD(arg0, void **, 0);
    if (var_16 != M2C_FIELD(arg0, s32 *, 4)) {
        do {
            if ((M2C_FIELD(var_16, s32 *, 8) ^ 0xC) != 0) {
                func_001E3150(arg0, var_16 + 0x18);
            }
            var_16 += 0x1C;
        } while (var_16 != M2C_FIELD(arg0, s32 *, 4));
    }
}
