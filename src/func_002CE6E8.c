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

M2C_UNK func_002CE730(s32);                         /* extern */
M2C_UNK func_0030D4D0(M2C_UNK);                     /* extern */

void func_002CE6E8(void) {
    s32 var_16;

    var_16 = 2;
    do {
        func_002CE730(var_16);
        var_16 += 1;
        func_0030D4D0(0);
    } while (var_16 < 0x2F);
    func_0030D4D0(0);
}
