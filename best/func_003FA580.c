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

s32 func_003FA580(s8 *arg0, s8 *arg1) {
    s8 *var_10;
    s8 *var_9;
    s8 temp_7_2;
    u8 temp_6;
    u8 temp_7;
    u8 var_6;

    var_9 = arg0;
    var_10 = arg1;
    var_6 = (u8) *var_9;
    if (*var_9 != 0) {
loop_2:
        temp_7_2 = *var_10;
        if ((!(*((s8) var_6 + &D_0048BD29) & 1) ? (s8) var_6 : ((s8) var_6 + 0x20)) == (!(*(temp_7_2 + &D_0048BD29) & 1) ? temp_7_2 : (temp_7_2 + 0x20))) {
            var_9 += 1;
            var_10 += 1;
            var_6 = (u8) *var_9;
            if (*var_9 == 0) {

            } else {
                goto loop_2;
            }
        }
    }
    temp_7 = *var_9;
    temp_6 = *var_10;
    return (!(*(temp_7 + &D_0048BD29) & 1) ? temp_7 : (temp_7 + 0x20)) - (!(*(temp_6 + &D_0048BD29) & 1) ? temp_6 : (temp_6 + 0x20));
}
