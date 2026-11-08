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

void func_001709D8(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    s32 var_2;
    s32 var_2_2;
    s32 var_2_3;
    s32 var_2_4;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_4;
    void *temp_5;
    void *temp_5_2;
    void *temp_5_3;

    temp_3 = M2C_FIELD(arg0, void **, 4);
    temp_5 = M2C_FIELD(temp_3, void **, 0xC);
    var_2 = -1;
    if (M2C_FIELD(temp_5, f32 *, 0x128) > 0.0f) {
        var_2 = 1;
    }
    temp_f0 = (f32) -var_2 * M2C_FIELD(temp_5, f32 *, 0x104);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) (M2C_FIELD(temp_3, f32 *, 4) + temp_f0);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) (M2C_FIELD(temp_3, f32 *, 8) + temp_f0);
    temp_3_2 = M2C_FIELD(arg0, void **, 8);
    temp_5_2 = M2C_FIELD(temp_3_2, void **, 0xC);
    var_2_2 = -1;
    if (M2C_FIELD(temp_5_2, f32 *, 0x128) > 0.0f) {
        var_2_2 = 1;
    }
    temp_f0_2 = (f32) -var_2_2 * M2C_FIELD(temp_5_2, f32 *, 0x104);
    M2C_FIELD(temp_3_2, f32 *, 4) = (f32) (M2C_FIELD(temp_3_2, f32 *, 4) + temp_f0_2);
    M2C_FIELD(temp_3_2, f32 *, 8) = (f32) (M2C_FIELD(temp_3_2, f32 *, 8) + temp_f0_2);
    temp_3_3 = M2C_FIELD(arg0, void **, 0xC);
    temp_5_3 = M2C_FIELD(temp_3_3, void **, 0xC);
    var_2_3 = -1;
    if (M2C_FIELD(temp_5_3, f32 *, 0x128) > 0.0f) {
        var_2_3 = 1;
    }
    temp_f0_3 = (f32) -var_2_3 * M2C_FIELD(temp_5_3, f32 *, 0x104);
    M2C_FIELD(temp_3_3, f32 *, 4) = (f32) (M2C_FIELD(temp_3_3, f32 *, 4) + temp_f0_3);
    M2C_FIELD(temp_3_3, f32 *, 8) = (f32) (M2C_FIELD(temp_3_3, f32 *, 8) + temp_f0_3);
    temp_4 = M2C_FIELD(arg0, void **, 0x10);
    temp_3_4 = M2C_FIELD(temp_4, void **, 0xC);
    var_2_4 = -1;
    if (M2C_FIELD(temp_3_4, f32 *, 0x128) > 0.0f) {
        var_2_4 = 1;
    }
    temp_f0_4 = (f32) -var_2_4 * M2C_FIELD(temp_3_4, f32 *, 0x104);
    M2C_FIELD(temp_4, f32 *, 4) = (f32) (M2C_FIELD(temp_4, f32 *, 4) + temp_f0_4);
    M2C_FIELD(temp_4, f32 *, 8) = (f32) (M2C_FIELD(temp_4, f32 *, 8) + temp_f0_4);
}
