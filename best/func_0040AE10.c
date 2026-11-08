/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

M2C_UNK func_00403360();                            /* extern */
s32 sceSifGetReg_2(M2C_UNK);                        /* extern */

s32 func_0040AE10(void) {
    s32 var_2;

    var_2 = 0;
    if (sceSifGetReg_2(4) & 0x40000) {
        func_00403360();
        var_2 = 1;
    }
    return var_2;
}
