/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

void func_0026D990(void **arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    s32 var_12;
    s8 temp_3_2;
    s8 temp_9;
    void **temp_7;
    void **var_8;
    void *temp_11;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_4;
    void *temp_5;

    var_8 = arg0;
    temp_11 = arg2 + 0xC0;
loop_2:
    temp_7 = var_8 - 4;
    temp_2 = *temp_7;
    var_12 = 0;
    temp_3 = M2C_FIELD(arg1, void **, 0x50);
    temp_4 = M2C_FIELD(temp_2, void **, 0x50);
    temp_5 = temp_3 + 0x50;
    temp_9 = M2C_FIELD(temp_2, s8 *, 0x48);
    temp_2_2 = temp_4 + 0x50;
    temp_f1 = M2C_FIELD(arg2, f32 *, 0xC0);
    temp_f2 = M2C_FIELD(temp_11, f32 *, 4);
    temp_f3 = temp_f1 - M2C_FIELD(temp_4, f32 *, 0x50);
    temp_f5 = temp_f2 - M2C_FIELD(temp_5, f32 *, 4);
    temp_f1_2 = temp_f1 - M2C_FIELD(temp_3, f32 *, 0x50);
    temp_f2_2 = temp_f2 - M2C_FIELD(temp_2_2, f32 *, 4);
    temp_f0 = M2C_FIELD(temp_11, f32 *, 8);
    temp_3_2 = M2C_FIELD(arg1, s8 *, 0x48);
    temp_f4 = temp_f0 - M2C_FIELD(temp_2_2, f32 *, 8);
    temp_f0_2 = temp_f0 - M2C_FIELD(temp_5, f32 *, 8);
    if ((temp_9 < temp_3_2) || ((temp_3_2 == temp_9) && (((temp_f3 * temp_f3) + (temp_f2_2 * temp_f2_2) + (temp_f4 * temp_f4)) < ((temp_f1_2 * temp_f1_2) + (temp_f5 * temp_f5) + (temp_f0_2 * temp_f0_2))))) {
        var_12 = 1;
    }
    if (var_12 != 0) {
        *var_8 = *temp_7;
        var_8 = temp_7;
        goto loop_2;
    }
    *var_8 = arg1;
}
