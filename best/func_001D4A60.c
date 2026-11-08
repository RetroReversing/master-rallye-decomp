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

s32 func_001D4B28();

void func_001D4A60(s32 arg0) {
    s32 *temp_16;
    s32 *temp_3_2;
    s32 temp_2;
    s32 temp_3;
    s32 temp_4;
    s32 var_17;
    s32 var_6;

    var_17 = 0;
    do {
        temp_3 = var_17 * 4;
        var_6 = 7;
        temp_3_2 = temp_3 + arg0;
        *temp_3_2 = func_001D4B28(var_17, 8) << 0x18;
loop_2:
        temp_2 = *temp_3_2;
        var_6 -= 1;
        temp_4 = temp_2 * 2;
        *temp_3_2 = !(temp_2 & 0x80000000) ? temp_4 : (temp_4 ^ 0x04C11DB7);
        if (var_6 >= 0) {
            goto loop_2;
        }
        temp_16 = temp_3 + arg0;
        var_17 += 1;
        *temp_16 = func_001D4B28(*temp_16, 0x20, var_6);
    } while (var_17 < 0x100);
}
