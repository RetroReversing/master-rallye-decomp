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

M2C_UNK func_002BA300(s32, s32, s32, s8);           /* extern */
extern s8 D_0047FDF0;

void func_002B97A8(s32 arg0, s32 arg1, s32 arg2, s8 *arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_16;
    s32 temp_16_2;
    s32 var_16;
    s32 var_18;
    s32 var_9;
    s8 *var_17;
    s8 temp_7;

    var_17 = arg3;
    var_18 = 0;
    if (var_17 == NULL) {
        var_17 = &D_0047FDF0;
    }
    var_9 = 0;
    if (*var_17 != 0) {
        do {
            var_9 += 1;
        } while (var_17[var_9] != 0);
    }
    temp_16 = arg5 - var_9;
    temp_16_2 = (temp_16 <= -1) ? 0 : temp_16;
    var_16 = (arg4 & 1) ? -temp_16_2 : temp_16_2;
    if ((var_16 > 0) && (arg6 > 0)) {
loop_7:
        func_002BA300(arg0, arg1, arg2, 0x20);
        var_16 -= 1;
        var_18 += 1;
        if (var_16 > 0) {
            if (var_18 >= arg6) {

            } else {
                goto loop_7;
            }
        }
    }
loop_11:
    if (*var_17 != 0) {
        if (var_18 < arg6) {
            temp_7 = (s8) (u8) *var_17;
            var_17 += 1;
            func_002BA300(arg0, arg1, arg2, temp_7);
            var_18 += 1;
            goto loop_11;
        }
    }
loop_18:
    if ((var_16 < 0) && (var_18 < arg6)) {
        func_002BA300(arg0, arg1, arg2, 0x20);
        var_16 += 1;
        var_18 += 1;
        goto loop_18;
    }
}
