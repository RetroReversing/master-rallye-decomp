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

s32 func_00191710(s32);                             /* extern */
s32 func_00193B60();                                /* extern */
u32 func_00194B18(s32);                             /* extern */
s32 func_00194C40();                                /* extern */

s32 func_0011ABE8(void) {
    s32 temp_17;
    s32 var_16;
    u32 temp_2;

    var_16 = -1;
    temp_17 = func_00191710(func_00193B60());
    temp_2 = func_00194B18(func_00194C40());
    switch (temp_2) {
    case 0:
        var_16 = 0xA;
        break;
    case 1:
        var_16 = 0xD;
        break;
    case 2:
        var_16 = 0x10;
        break;
    case 3:
        var_16 = 0x13;
        break;
    case 4:
        var_16 = 0x16;
        break;
    case 5:
        var_16 = 0x24;
        break;
    }
    return temp_17 - var_16;
}
