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

void **func_0026D358(void **arg0, void **arg1, void *arg2, void *arg3) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f5_3;
    f32 temp_f6;
    s32 var_11;
    s32 var_13;
    s8 temp_11;
    s8 temp_8;
    u8 temp_12;
    void **var_5;
    void **var_9;
    void *temp_10;
    void *temp_14;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_4;
    void *temp_5;

    var_5 = arg1;
    temp_14 = arg3 + 0xC0;
    var_9 = arg0;
loop_1:
    temp_10 = M2C_FIELD(arg2, void **, 0x50);
    temp_12 = M2C_FIELD(arg2, u8 *, 0x48);
loop_2:
    temp_4 = *var_9;
    temp_f5 = M2C_FIELD(arg3, f32 *, 0xC0);
    temp_3 = M2C_FIELD(temp_4, void **, 0x50);
    temp_5 = temp_10 + 0x50;
    temp_f4 = M2C_FIELD(temp_14, f32 *, 4);
    var_13 = 0;
    temp_2 = temp_3 + 0x50;
    temp_f3 = temp_f5 - M2C_FIELD(temp_3, f32 *, 0x50);
    temp_f5_2 = temp_f5 - M2C_FIELD(temp_10, f32 *, 0x50);
    temp_f2 = temp_f4 - M2C_FIELD(temp_2, f32 *, 4);
    temp_f0 = M2C_FIELD(temp_14, f32 *, 8);
    temp_f4_2 = temp_f4 - M2C_FIELD(temp_5, f32 *, 4);
    temp_f1 = temp_f0 - M2C_FIELD(temp_5, f32 *, 8);
    temp_11 = M2C_FIELD(temp_4, s8 *, 0x48);
    temp_f0_2 = temp_f0 - M2C_FIELD(temp_2, f32 *, 8);
    if (((s8) temp_12 < temp_11) || ((temp_11 == (s8) temp_12) && (((temp_f5_2 * temp_f5_2) + (temp_f4_2 * temp_f4_2) + (temp_f1 * temp_f1)) < ((temp_f3 * temp_f3) + (temp_f2 * temp_f2) + (temp_f0_2 * temp_f0_2))))) {
        var_13 = 1;
    }
    if (var_13 != 0) {
        var_9 += 4;
        goto loop_2;
    }
    temp_3_2 = temp_10 + 0x50;
    temp_f6 = M2C_FIELD(arg3, f32 *, 0xC0);
    temp_f5_3 = M2C_FIELD(temp_14, f32 *, 4);
    temp_f1_2 = temp_f6 - M2C_FIELD(temp_10, f32 *, 0x50);
    var_5 -= 4;
    temp_f2_2 = temp_f5_3 - M2C_FIELD(temp_3_2, f32 *, 4);
    temp_f3_2 = M2C_FIELD(temp_14, f32 *, 8);
    temp_f0_3 = temp_f3_2 - M2C_FIELD(temp_3_2, f32 *, 8);
loop_10:
    temp_2_2 = *var_5;
    var_11 = 0;
    temp_3_3 = M2C_FIELD(temp_2_2, void **, 0x50);
    temp_8 = M2C_FIELD(temp_2_2, s8 *, 0x48);
    temp_2_3 = temp_3_3 + 0x50;
    temp_f1_3 = temp_f6 - M2C_FIELD(temp_3_3, f32 *, 0x50);
    temp_f2_3 = temp_f5_3 - M2C_FIELD(temp_2_3, f32 *, 4);
    temp_f0_4 = temp_f3_2 - M2C_FIELD(temp_2_3, f32 *, 8);
    if ((temp_8 < (s8) temp_12) || (((s8) temp_12 == temp_8) && (((temp_f1_3 * temp_f1_3) + (temp_f2_3 * temp_f2_3) + (temp_f0_4 * temp_f0_4)) < ((temp_f1_2 * temp_f1_2) + (temp_f2_2 * temp_f2_2) + (temp_f0_3 * temp_f0_3))))) {
        var_11 = 1;
    }
    if (var_11 != 0) {
        var_5 -= 4;
        goto loop_10;
    }
    if ((u32) var_9 < (u32) var_5) {
        temp_2_4 = *var_9;
        *var_9 = temp_2_2;
        *var_5 = temp_2_4;
        var_9 += 4;
        goto loop_1;
    }
    return var_9;
}
