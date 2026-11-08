/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s64 func_003DFBB8(s32, s32);                        /* extern */
extern M2C_UNK D_0043ADC0;

s32 func_003E0158(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_5;
    s32 var_17;
    s32 var_4;
    s64 temp_6;
    void *temp_16;
    void *temp_18;
    void *temp_2;
    void *temp_3;

    var_17 = 0;
    temp_18 = M2C_FIELD(arg0, void **, 0x40);
    temp_16 = M2C_FIELD(temp_18, void **, 0x44);
    temp_5 = M2C_FIELD(temp_18, s32 *, 0x48);
    temp_6 = func_003DFBB8(arg1, arg2);
    var_4 = 0;
    if (temp_5 > 0) {
        if (temp_6 != M2C_FIELD(temp_16, s64 *, 0)) {
            var_4 = 1;
loop_5:
            if (var_4 < temp_5) {
                temp_2 = (var_4 * 0x18) + temp_16;
                if (temp_6 != M2C_FIELD(temp_2, s64 *, 0)) {
                    var_4 += 1;
                    goto loop_5;
                }
                var_17 = M2C_FIELD(temp_2, s32 *, 0x10);
            }
        } else {
            var_17 = M2C_FIELD(temp_16, s32 *, 0x10);
        }
    }
    if (var_4 < 0x40) {
        M2C_FIELD(temp_18, s32 *, 0x48) = (s32) (temp_5 + 1);
        temp_3 = (var_4 * 0x18) + temp_16;
        M2C_FIELD(temp_3, s64 *, 0) = temp_6;
        M2C_FIELD(temp_3, s32 *, 0x14) = arg4;
        M2C_FIELD(temp_3, s32 *, 0x10) = arg3;
        M2C_FIELD(temp_3, s64 *, 8) = (s64) M2C_FIELD((&D_0043ADC0 + (arg1 * 0x10)), s64 *, 8);
    }
    return var_17;
}
