/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

extern f32 D_0042DC40;

void func_00321838(void *arg1, s32 *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f3;
    s32 temp_11;
    s32 temp_24;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_5;
    s32 temp_6;
    s32 temp_6_2;
    s32 temp_7;
    s32 temp_7_2;
    s32 temp_7_3;
    s32 temp_9;
    s32 var_2;
    s32 var_3;
    s32 var_3_2;
    s32 var_3_3;
    s32 var_4;
    s32 var_4_2;
    u32 temp_5_2;
    void *temp_8;
    void *var_8;

    temp_8 = M2C_FIELD(arg1, void **, 0x10);
    temp_f0 = 2.0f * D_0042DC40;
    temp_24 = M2C_FIELD(arg1, s32 *, 0x30);
    temp_11 = M2C_BITWISE(s32, temp_f0) >> 0x1F;
    temp_4 = M2C_BITWISE(s32, temp_f0) & 0x7FFFFF;
    temp_2 = ((s32) (M2C_BITWISE(s32, temp_f0) & 0x7FFFFFFF) >> 0x17) - 0x7F;
    temp_7 = ~(temp_2 >> 0x1F);
    temp_f3 = D_0042DC40 * 4.0f;
    var_3 = (((u32) ((temp_4 | 0x800000) << 8) >> (0x1F - temp_2)) & temp_7) ^ temp_11;
    if (!((temp_4 << 8) & ((1 << (0x1F - (temp_2 & temp_7))) - 1))) {
        var_3 -= temp_11;
    }
    temp_7_2 = M2C_BITWISE(s32, temp_f3) >> 0x1F;
    temp_5 = M2C_BITWISE(s32, temp_f3) & 0x7FFFFF;
    temp_3 = ((s32) (M2C_BITWISE(s32, temp_f3) & 0x7FFFFFFF) >> 0x17) - 0x7F;
    temp_6 = ~(temp_3 >> 0x1F);
    var_4 = (((u32) ((temp_5 | 0x800000) << 8) >> (0x1F - temp_3)) & temp_6) ^ temp_7_2;
    if (!((temp_5 << 8) & ((1 << (0x1F - (temp_3 & temp_6))) - 1))) {
        var_4 -= temp_7_2;
    }
    temp_f0_2 = (M2C_FIELD((*arg2 + (temp_24 * 0x30)), f32 *, 0x24) * 0.05f) + 6.0f;
    temp_7_3 = M2C_BITWISE(s32, temp_f0_2) >> 0x1F;
    temp_4_2 = M2C_BITWISE(s32, temp_f0_2) & 0x7FFFFF;
    temp_2_2 = ((s32) (M2C_BITWISE(s32, temp_f0_2) & 0x7FFFFFFF) >> 0x17) - 0x7F;
    temp_9 = 0x1F - temp_2_2;
    temp_6_2 = ~(temp_2_2 >> 0x1F);
    temp_5_2 = (temp_4_2 | 0x800000) << 8;
    temp_4_3 = (temp_4_2 << 8) & ((1 << (0x1F - (temp_2_2 & temp_6_2))) - 1);
    var_3_2 = ((temp_5_2 >> temp_9) & temp_6_2) ^ temp_7_3;
    if (temp_4_3 == 0) {
        var_3_2 -= temp_7_3;
    }
    var_2 = ((temp_5_2 >> temp_9) & temp_6_2) ^ temp_7_3;
    if (temp_4_3 == 0) {
        var_2 -= temp_7_3;
    }
    var_4_2 = M2C_FIELD(temp_8, s32 *, 0xC) - 1;
    if (var_4_2 >= 0) {
        var_3_3 = (var_4_2 + temp_24) * 0x30;
        var_8 = (var_4_2 << 6) + 0x20 + M2C_FIELD(temp_8, s32 *, 0);
        do {
            var_4_2 -= 1;
            temp_f0_3 = M2C_FIELD((*arg2 + var_3_3), f32 *, 0x24);
            var_3_3 -= 0x30;
            M2C_FIELD(var_8, f32 *, 8) = (f32) M2C_FIELD(var_8, f32 *, 0);
            temp_f0_4 = temp_f0_3 * 0.05f;
            M2C_FIELD(var_8, f32 *, 0xC) = (f32) ((temp_f0_4 + (temp_f3 - (f32) var_4)) - (f32) var_2);
            M2C_FIELD(var_8, f32 *, 4) = (f32) ((temp_f0_4 + (temp_f0 - (f32) var_3)) - (f32) var_3_2);
            var_8 -= 0x40;
        } while (var_4_2 >= 0);
    }
}
