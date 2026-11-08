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

M2C_UNK func_003D4D70(s32);                         /* extern */
M2C_UNK func_003D5050(void **);                     /* extern */
s32 func_003DA0C8(s32, s32, M2C_UNK, s32, s32, s64, M2C_UNK, s16); /* extern */

void **func_003D4820(void **arg0, s32 arg1) {
    M2C_UNK var_2_2;
    M2C_UNK var_6;
    M2C_UNK var_6_2;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_7;
    s32 var_2;
    s32 var_8;
    s64 temp_3;
    s64 temp_9;
    void *temp_12;
    void *temp_3_2;
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
    if (var_2 != 0) {
        temp_12 = *arg0;
        temp_3 = M2C_FIELD(temp_12, s64 *, 0x10);
        temp_4_3 = temp_3 & 0x1800;
        if (temp_4_3 == 0x1000) {
            var_6 = 0x66;
        } else {
            if (temp_4_3 == 0x800) {
                var_6_2 = 0x65;
                var_2_2 = 0x45;
            } else {
                var_6_2 = 0x67;
                var_2_2 = 0x47;
            }
            var_6 = (temp_3 & 0x200) ? var_2_2 : var_6_2;
        }
        var_8 = M2C_FIELD(temp_12, s32 *, 0x1C);
        temp_9 = M2C_FIELD(temp_12, s64 *, 0x10);
        if (var_8 <= 0) {
            var_8 = !(temp_9 & 0x1000) ? 6 : var_8;
        }
        temp_7 = M2C_FIELD(temp_12, s32 *, 8);
        M2C_FIELD(temp_12, s32 *, 8) = 0;
        temp_3_2 = *arg0;
        if (func_003DA0C8(arg1, M2C_FIELD(temp_12, s32 *, 0), var_6, temp_7, var_8, (s64) (temp_9 << 0x20) >> 0x20, !(temp_9 & 0x400) ? 0 : 0x2B, M2C_FIELD(temp_12, s16 *, 0x18)) < 0) {
            M2C_FIELD(temp_3_2, u8 *, 0x1A) = (u8) (M2C_FIELD(temp_3_2, u8 *, 0x1A) | 6);
        }
        if (M2C_FIELD(*arg0, s64 *, 0x10) & 0x6000) {
            func_003D5050(arg0);
        }
    }
    return arg0;
}
