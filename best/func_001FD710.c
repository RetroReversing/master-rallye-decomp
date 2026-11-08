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

s32 func_001FD710(void *arg0, f32 *arg1, f32 *arg2) {
    char *var_2;
    char *var_3;
    char *var_3_2;
    char *var_8;
    char *var_8_2;
    char *var_9;
    f32 temp_f0;
    f32 temp_f1;
    s32 temp_7;
    s32 var_10;
    s32 var_7;
    s32 var_7_2;

    temp_7 = M2C_FIELD(arg0, s32 *, 0);
    if (((s32) ((M2C_FIELD(arg0, s32 *, 4) - temp_7) * 0xCCCCCCCD) >> 4) == 0) {
        return 0;
    }
    var_3 = temp_7 + 0x40;
    var_8 = arg1;
    var_2 = arg2;
    var_7 = 2;
    do {
        temp_f0 = *(f32 *)var_3;
        var_7 -= 1;
        var_3 += 4;
        *(f32 *)var_2 = temp_f0;
        *(f32 *)var_8 = temp_f0;
        var_2 += 4;
        var_8 += 4;
    } while (var_7 >= 0);
    var_7_2 = temp_7 + 0x50;
    if (var_7_2 != M2C_FIELD(arg0, s32 *, 4)) {
        var_10 = var_7_2 + 0x50;
        do {
            var_9 = var_7_2 + 0x40;
            var_3_2 = arg1;
            var_8_2 = arg2;
loop_7:
            temp_f1 = *(f32 *)var_9;
            if ((*(f32 *)var_8_2 < temp_f1) || (var_7_2 == M2C_FIELD(arg0, s32 *, 0))) {
                *(f32 *)var_8_2 = temp_f1;
            }
            if ((*(f32 *)var_9 < *(f32 *)var_3_2) || (var_7_2 == M2C_FIELD(arg0, s32 *, 0))) {
                *(f32 *)var_3_2 = *(f32 *)var_9;
            }
            var_3_2 += 4;
            var_9 += 4;
            var_8_2 += 4;
            if ((s32) var_3_2 < (s32) (arg1 + 0xC)) {
                goto loop_7;
            }
            var_7_2 = var_10;
            var_10 = var_7_2 + 0x50;
        } while (var_7_2 != M2C_FIELD(arg0, s32 *, 4));
    }
    return 1;
}
