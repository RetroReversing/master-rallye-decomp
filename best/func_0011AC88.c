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

s32 func_0011A588(M2C_UNK);                         /* extern */
M2C_UNK func_00191FD0(s32, s32);                    /* extern */
s32 func_00193B60();                                /* extern */
s32 func_00194B18(s32);                             /* extern */
s32 func_00194C40();                                /* extern */
s32 func_001965A8(s32);                             /* extern */
s32 func_00196E10();                                /* extern */
s32 func_001D5EB0(s32, M2C_UNK, s32);               /* extern */
s32 func_001D5F70();                                /* extern */

void func_0011AC88(void) {
    s32 temp_17;
    s32 temp_18;
    s32 temp_2;
    s32 temp_3;
    s32 var_16;
    s32 var_16_2;
    s32 var_2;
    s32 var_3;

    var_16 = 1;
    temp_18 = func_0011A588(1);
    temp_2 = func_001965A8(func_00196E10());
    if ((temp_2 == 1) || ((temp_2 >= 2) && (temp_2 == 2))) {
        var_16 = 2;
    }
    temp_17 = func_001D5EB0(func_001D5F70(), 1, 0xA);
    if (func_00194B18(func_00194C40()) == 5) {
        var_16_2 = 3;
        var_2 = temp_17 > 6;
        var_3 = 4;
        goto block_10;
    }
    temp_3 = temp_17 + func_001D5EB0(func_001D5F70(), 0, temp_18);
    if (temp_3 >= 0xA) {
        var_16 += 1;
    } else {
        var_3 = 1;
        if (temp_3 >= 7) {
            var_16_2 = var_16 - 1;
            var_2 = var_16_2 > 0;
block_10:
            var_16 = (var_2 == 0) ? var_3 : var_16_2;
        }
    }
    func_00191FD0(func_00193B60(), var_16);
}
