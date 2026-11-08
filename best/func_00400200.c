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

void *func_003FFA18(s32, s32, s32);                 /* extern */
M2C_UNK func_003FFAC0(s32, void *, u32 *, u32);     /* extern */

void *func_00400200(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_16;
    s32 temp_20;
    s32 var_19;
    s32 var_5;
    s32 var_5_2;
    s32 var_7;
    s32 var_7_2;
    u32 *var_18;
    u32 *var_4;
    u32 *var_6;
    u32 temp_2_2;
    u32 temp_3;
    u32 var_3;
    void *temp_2;
    void *temp_7;

    temp_20 = arg2 >> 5;
    var_7 = M2C_FIELD(arg1, s32 *, 8);
    temp_16 = temp_20 + M2C_FIELD(arg1, s32 *, 0x10) + 1;
    var_5 = M2C_FIELD(arg1, s32 *, 4);
    if (var_7 < temp_16) {
        var_19 = arg2 & 0x1F;
        var_18 = arg1 + 0x14;
        do {
            var_7 *= 2;
            var_5 += 1;
        } while (var_7 < temp_16);
    } else {
        var_19 = arg2 & 0x1F;
        var_18 = arg1 + 0x14;
    }
    temp_2 = func_003FFA18(arg0, var_5, var_7);
    var_6 = temp_2 + 0x14;
    if (temp_20 > 0) {
        var_7_2 = temp_20;
        do {
            *var_6 = 0;
            var_7_2 -= 1;
            var_6 += 4;
        } while (var_7_2 != 0);
    }
    var_4 = var_18;
    temp_7 = var_4 + (M2C_FIELD(arg1, s32 *, 0x10) * 4);
    if (var_19 != 0) {
        var_3 = 0;
        do {
            *var_6 = (*var_4 << var_19) | var_3;
            var_6 += 4;
            temp_3 = *var_4;
            var_4 += 4;
            var_3 = temp_3 >> (0x20 - var_19);
        } while ((u32) var_4 < (u32) temp_7);
        *var_6 = var_3;
        var_5_2 = ((var_3 != 0) ? (temp_16 + 1) : temp_16) - 1;
    } else {
        var_5_2 = temp_16 - 1;
        do {
            temp_2_2 = *var_4;
            var_4 += 4;
            *var_6 = temp_2_2;
            var_6 += 4;
        } while ((u32) var_4 < (u32) temp_7);
    }
    M2C_FIELD(temp_2, s32 *, 0x10) = var_5_2;
    func_003FFAC0(arg0, arg1, var_6, (u32) temp_7);
    return temp_2;
}
