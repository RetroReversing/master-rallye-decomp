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

M2C_UNK func_003D4D70(s32, s32);                    /* extern */
s32 func_003D4EA0(void **);                         /* extern */

s32 func_003D5BC8(void **arg0, s32 arg1) {
    s32 temp_5;
    s32 var_2;
    u8 temp_3;
    void *temp_2;
    void *temp_4;

    temp_4 = *arg0;
    temp_3 = M2C_FIELD(temp_4, u8 *, 0x1A);
    if (temp_3 != 0) {
        M2C_FIELD(temp_4, u8 *, 0x1A) = (u8) (temp_3 | 2);
        return 0;
    }
    temp_5 = M2C_FIELD(temp_4, s32 *, 4);
    if ((temp_5 != 0) && ((arg1 == 0) || (temp_2 = M2C_FIELD(temp_4, void **, 0), (((M2C_FIELD(temp_2, s32 *, 8) - M2C_FIELD(temp_2, s32 *, 4)) < arg1) != 0)))) {
        func_003D4D70(temp_5, temp_5);
    }
    var_2 = 1;
    if (arg1 == 0) {
        var_2 = 1;
        if (((s64) ((M2C_FIELD(*arg0, s64 *, 0x10) & 1) << 0x20) >> 0x20) != 0) {
            var_2 = func_003D4EA0(arg0);
        }
    }
    return var_2;
}
