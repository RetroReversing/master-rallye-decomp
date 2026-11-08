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

M2C_UNK func_0010C778(void *, s32);                 /* extern */
s32 func_001E3598(s32, s32);                        /* extern */
s32 func_001E38C8(s32, s32);                        /* extern */

void func_0010C680(void *arg0, s32 arg1) {
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_16_3;
    s32 var_18;

    var_18 = 0;
    temp_16 = arg0 + 0x10;
    if (func_001E38C8(func_001E4280(), temp_16) != 0) {
        var_18 = func_001E3598(func_001E4280(), temp_16) != 0;
    }
    temp_16_2 = arg0 + 0x14;
    if (func_001E38C8(func_001E4280(), temp_16_2) != 0) {
        var_18 |= func_001E3598(func_001E4280(), temp_16_2) != 0;
    }
    temp_16_3 = arg0 + 0x18;
    if (func_001E38C8(func_001E4280(), temp_16_3) != 0) {
        var_18 |= func_001E3598(func_001E4280(), temp_16_3) != 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) != var_18) {
        func_0010C778(arg0, arg1);
    }
}
