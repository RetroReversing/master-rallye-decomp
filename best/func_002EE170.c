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

void func_002EE170(void *arg0, f32 *arg1, s32 *arg2) {
    f32 *var_10;
    f32 temp_f0;
    s32 *var_7;
    s32 temp_2;
    s32 temp_3;
    s32 temp_3_2;
    s32 temp_6;
    s32 temp_9;
    s32 var_14;
    s32 var_4;
    void *var_8;

    var_7 = arg2;
    var_10 = arg1;
    var_14 = 0;
    var_8 = arg0 + 0x4C;
    do {
        temp_f0 = (*var_10 - M2C_FIELD(var_8, f32 *, -0x18)) / M2C_FIELD(arg0, f32 *, 0xC);
        temp_9 = M2C_BITWISE(s32, temp_f0) >> 0x1F;
        temp_3 = M2C_BITWISE(s32, temp_f0) & 0x7FFFFF;
        temp_2 = ((s32) (M2C_BITWISE(s32, temp_f0) & 0x7FFFFFFF) >> 0x17) - 0x7F;
        temp_6 = ~(temp_2 >> 0x1F);
        var_4 = (((u32) ((temp_3 | 0x800000) << 8) >> (0x1F - temp_2)) & temp_6) ^ temp_9;
        if (!((temp_3 << 8) & ((1 << (0x1F - (temp_2 & temp_6))) - 1))) {
            var_4 -= temp_9;
        }
        *var_7 = var_4;
        if (var_4 < 0) {
            *var_7 = 0;
        }
        temp_3_2 = M2C_FIELD(var_8, s32 *, 0);
        var_14 += 1;
        if (*var_7 >= temp_3_2) {
            *var_7 = temp_3_2 - 1;
        }
        var_8 += 4;
        var_7 += 4;
        var_10 += 4;
    } while (var_14 < 3);
}
