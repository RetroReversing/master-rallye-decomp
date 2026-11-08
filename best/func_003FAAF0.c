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

extern M2C_UNK D_0048BD29;

s32 func_003FAAF0(s8 *arg0, s8 *arg1, s32 arg2) {
    s32 var_9;
    s8 *var_10;
    s8 *var_11;
    s8 temp_7_2;
    s8 temp_8;
    u8 temp_6;
    u8 temp_7;

    var_10 = arg0;
    var_11 = arg1;
    if (arg2 == 0) {
        return 0;
    }
    var_9 = arg2 - 1;
    if (var_9 != 0xFFFFFFFF) {
loop_4:
        temp_8 = *var_10;
        temp_7_2 = *var_11;
        if (((!(*(temp_8 + &D_0048BD29) & 1) ? temp_8 : (temp_8 + 0x20)) == (!(*(temp_7_2 + &D_0048BD29) & 1) ? temp_7_2 : (temp_7_2 + 0x20))) && (var_9 != 0) && (temp_8 != 0)) {
            var_9 -= 1;
            if (temp_7_2 != 0) {
                var_10 += 1;
                var_11 += 1;
                if (var_9 == 0xFFFFFFFF) {

                } else {
                    goto loop_4;
                }
            }
        }
    }
    temp_7 = *var_10;
    temp_6 = *var_11;
    return (!(*(temp_7 + &D_0048BD29) & 1) ? temp_7 : (temp_7 + 0x20)) - (!(*(temp_6 + &D_0048BD29) & 1) ? temp_6 : (temp_6 + 0x20));
}
