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

void func_003E7D78(s32 arg2) {
    s32 temp_6;
    s32 temp_6_2;
    s32 var_2;
    s32 var_3;
    s32 var_4;
    s32 var_5;
    s32 var_6;

    temp_6 = arg2 * 0xFA;
    temp_6_2 = (s32) ((temp_6 > -1) ? temp_6 : (temp_6 + 0x1F)) >> 5;
    var_6 = (temp_6_2 <= 0) ? 1 : temp_6_2;
    if (var_6 > 0) {
        do {
            var_2 = 0x898;
loop_7:
            if (var_2 >= 0) {
                var_2 -= 1;
                var_3 = 0x30;
loop_4:
                var_3 -= 1;
                if (var_3 >= 0) {
                    goto loop_4;
                }
                goto loop_7;
            }
            var_4 = 0x708;
loop_13:
            if (var_4 >= 0) {
                var_4 -= 1;
                var_5 = 0x30;
loop_10:
                var_5 -= 1;
                if (var_5 >= 0) {
                    goto loop_10;
                }
                goto loop_13;
            }
            var_6 -= 1;
        } while (var_6 != 0);
    }
}
