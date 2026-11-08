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

extern f32 D_004264A0;
extern s32 D_00426610;

s32 func_00236518(void *arg0, void *arg1) {
    f32 temp_f1;
    s32 var_2;
    s32 var_7;
    u8 temp_9;
    void *var_3;

    if (D_00426610 == 0) {
        /* Duplicate return node #1. Try simplifying control flow for better match */
        return 0;
    }
    temp_9 = M2C_FIELD(arg0, u8 *, 3);
    var_7 = 0;
    if (temp_9 != 0) {
        var_3 = ((M2C_FIELD(arg0, s32 *, 0) & 0xFFFFFF) * 0x14) + D_00426610;
loop_4:
        temp_f1 = (M2C_FIELD(var_3, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(var_3, f32 *, 4) * M2C_FIELD(arg1, f32 *, 4)) + (M2C_FIELD(var_3, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8)) + M2C_FIELD(var_3, f32 *, 0xC);
        var_2 = 0;
        if (D_004264A0 <= temp_f1) {
            var_2 = 1;
        } else if (temp_f1 <= -D_004264A0) {
            var_2 = -1;
        }
        var_7 += 1;
        if (var_2 == -1) {
            var_3 += 0x14;
            if (var_7 >= (s32) temp_9) {
                /* Duplicate return node #10. Try simplifying control flow for better match */
                return 1;
            }
            goto loop_4;
        }
        return 0;
    }
    return 1;
}
