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

M2C_UNK func_0024F0C8(s32, s32, s32);               /* extern */
M2C_UNK func_0024F110(s32, s32, s32);               /* extern */
M2C_UNK func_0024F158(s32, s32, s32);               /* extern */

void func_0024EF90(s32 arg0, s32 arg1, void *arg2) {
    s32 *temp_2;
    s32 *temp_2_2;
    s32 *temp_2_3;
    s32 temp_17;
    s32 temp_18;
    s32 temp_18_2;
    s32 var_16;
    s32 var_16_2;
    s32 var_16_3;

    temp_18 = (s32) (M2C_FIELD(arg2, s32 *, 4) - M2C_FIELD(arg2, s32 *, 0)) >> 2;
    var_16 = 0;
    if (temp_18 > 0) {
loop_2:
        temp_2 = M2C_FIELD(arg2, s32 *, 0) + (var_16 * 4);
        var_16 += 1;
        func_0024F0C8(arg0, arg1, *temp_2);
        if (var_16 < temp_18) {
            goto loop_2;
        }
    }
    var_16_2 = 0;
    temp_18_2 = (s32) (M2C_FIELD((arg2 + 0xC), s32 *, 4) - M2C_FIELD(arg2, s32 *, 0xC)) >> 2;
    if (temp_18_2 > 0) {
loop_7:
        temp_2_2 = M2C_FIELD(arg2, s32 *, 0xC) + (var_16_2 * 4);
        var_16_2 += 1;
        func_0024F110(arg0, arg1, *temp_2_2);
        if (var_16_2 < temp_18_2) {
            goto loop_7;
        }
    }
    temp_17 = (s32) (M2C_FIELD((arg2 + 0x18), s32 *, 4) - M2C_FIELD(arg2, s32 *, 0x18)) >> 2;
    var_16_3 = 0;
    if (temp_17 > 0) {
loop_12:
        temp_2_3 = M2C_FIELD(arg2, s32 *, 0x18) + (var_16_3 * 4);
        var_16_3 += 1;
        func_0024F158(arg0, arg1, *temp_2_3);
        if (var_16_3 < temp_17) {
            goto loop_12;
        }
    }
}
