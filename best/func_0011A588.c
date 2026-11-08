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

s32 func_00194D58(s32, M2C_UNK);                    /* extern */
s32 func_00196028();                                /* extern */
s32 func_001965A8(s32);                             /* extern */
s32 func_00196E10();                                /* extern */
s32 func_001D5EB0(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_001D5F70();                                /* extern */

s32 func_0011A588(s32 arg1) {
    M2C_UNK var_5;
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_16_3;
    s32 temp_16_4;
    s32 temp_16_5;
    s32 temp_16_6;
    s32 temp_16_7;
    s32 temp_16_8;
    s32 temp_16_9;
    s32 temp_2;
    s32 var_16;
    s32 var_16_2;
    s32 var_4;

    var_16 = 0;
    temp_2 = func_001965A8(func_00196E10());
    switch (temp_2) {                               /* irregular */
    case 0:
        temp_16 = ((func_00194D58(func_00196028(), 0) ^ 1) != 0) ? 0 : 1;
        temp_16_2 = ((func_00194D58(func_00196028(), 4) ^ 1) == 0) ? (temp_16 + 1) : temp_16;
        temp_16_3 = ((func_00194D58(func_00196028(), 8) ^ 1) == 0) ? (temp_16_2 + 1) : temp_16_2;
        var_16_2 = ((func_00194D58(func_00196028(), 0xC) ^ 1) == 0) ? (temp_16_3 + 1) : temp_16_3;
        var_4 = func_00196028();
        var_5 = 0x10;
block_11:
        var_16 = ((func_00194D58(var_4, var_5) ^ 1) == 0) ? (var_16_2 + 1) : var_16_2;
        break;
    case 1:
        temp_16_4 = ((func_00194D58(func_00196028(), 0x14) ^ 1) != 0) ? 0 : 1;
        temp_16_5 = ((func_00194D58(func_00196028(), 0x18) ^ 1) == 0) ? (temp_16_4 + 1) : temp_16_4;
        temp_16_6 = ((func_00194D58(func_00196028(), 0x1C) ^ 1) == 0) ? (temp_16_5 + 1) : temp_16_5;
        var_16_2 = ((func_00194D58(func_00196028(), 0x20) ^ 1) == 0) ? (temp_16_6 + 1) : temp_16_6;
        var_4 = func_00196028();
        var_5 = 0x24;
        goto block_11;
    case 2:
        temp_16_7 = ((func_00194D58(func_00196028(), 0x28) ^ 1) != 0) ? 0 : 1;
        temp_16_8 = ((func_00194D58(func_00196028(), 0x2C) ^ 1) == 0) ? (temp_16_7 + 1) : temp_16_7;
        temp_16_9 = ((func_00194D58(func_00196028(), 0x30) ^ 1) == 0) ? (temp_16_8 + 1) : temp_16_8;
        var_16_2 = ((func_00194D58(func_00196028(), 0x34) ^ 1) == 0) ? (temp_16_9 + 1) : temp_16_9;
        var_4 = func_00196028();
        var_5 = 0x38;
        goto block_11;
    }
    if (arg1 != 0) {
        if (var_16 == 5) {
            return func_001D5EB0(func_001D5F70(), 2, 5);
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return var_16;
    }
    return var_16;
}
