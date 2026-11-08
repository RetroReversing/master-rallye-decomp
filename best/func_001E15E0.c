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

s32 func_001D4010(void *, s32);                     /* extern */
s32 func_003FA760(s32, s32);                        /* extern */

void func_001E15E0(void *arg0, void *arg1, s32 arg2) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_5_3;
    s32 temp_5_4;
    s32 var_2;
    s32 var_3;
    s32 var_3_2;
    void *temp_16;
    void *temp_16_2;

    temp_5 = M2C_FIELD(arg1, s32 *, 0x14);
    temp_16 = temp_5 + (arg2 * 8);
    var_2 = arg2 + 1;
    if (M2C_FIELD(temp_16, s32 *, 0) == M2C_FIELD(arg0, s32 *, 4)) {
        temp_2 = func_001D4010(arg0 + 0x40, temp_5);
        temp_5_2 = M2C_FIELD(temp_16, s32 *, 4);
        var_3 = 0;
        if ((temp_5_2 != 0) && (temp_2 != 0)) {
            var_3 = func_003FA760(temp_2, temp_5_2) == 0;
        }
        M2C_FIELD(arg0, s32 *, 0xC0) = var_3;
        var_2 = arg2 + 1;
    }
    temp_5_3 = M2C_FIELD(arg0, s32 *, 8);
    temp_16_2 = M2C_FIELD(arg1, s32 *, 0x14) + (var_2 * 8);
    if (M2C_FIELD(temp_16_2, s32 *, 0) == temp_5_3) {
        temp_2_2 = func_001D4010(arg0 + 0x40, temp_5_3);
        temp_5_4 = M2C_FIELD(temp_16_2, s32 *, 4);
        var_3_2 = 0;
        if ((temp_5_4 != 0) && (temp_2_2 != 0)) {
            var_3_2 = func_003FA760(temp_2_2, temp_5_4) == 0;
        }
        M2C_FIELD(arg0, s32 *, 0xC4) = var_3_2;
    }
}
