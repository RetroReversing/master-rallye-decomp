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

s32 func_001918C0(s32);                             /* extern */
s32 func_00192190(s32, s32);                        /* extern */
s32 func_00193B60();                                /* extern */

void func_0019B4B8(void *arg0) {
    s32 temp_2;
    s32 var_16;
    s32 var_19;

    var_19 = 0;
    var_16 = 0;
    temp_2 = func_001918C0(func_00193B60());
    if (temp_2 > 0) {
        do {
            if (func_00192190(func_00193B60(), var_16) == 1) {
                if (M2C_FIELD(arg0, s32 *, 0x228) == var_19) {
                    M2C_FIELD(arg0, s32 *, 0x224) = var_16;
                }
                var_19 += 1;
            }
            var_16 += 1;
        } while (var_16 < temp_2);
    }
}
