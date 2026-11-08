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

M2C_UNK func_003D4168(void **, s32, M2C_UNK);       /* extern */
M2C_UNK func_003D4D70(s32);                         /* extern */

void **func_003D4720(void **arg0, s32 arg1) {
    M2C_UNK var_6;
    s32 temp_4_2;
    s32 var_2;
    s32 var_5;
    void *temp_4;

    temp_4 = *arg0;
    if (M2C_FIELD(temp_4, u8 *, 0x1A) != 0) {
        var_2 = 0;
    } else {
        temp_4_2 = M2C_FIELD(temp_4, s32 *, 4);
        var_2 = 1;
        if (temp_4_2 != 0) {
            func_003D4D70(temp_4_2);
            var_2 = 1;
        }
    }
    var_5 = arg1;
    if (var_2 != 0) {
        var_6 = 1;
        if ((var_5 < 0) && !(M2C_FIELD(*arg0, s64 *, 0x10) & 0x60)) {
            var_5 = 0 - var_5;
            var_6 = -1;
        }
        func_003D4168(arg0, var_5, var_6);
    }
    return arg0;
}
