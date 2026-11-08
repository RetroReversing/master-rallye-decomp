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

extern f32 D_004264A0;

s32 func_0024C648(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 var_4;
    s32 var_7;
    void *temp_2;
    void *temp_2_2;

    temp_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0xC);
    temp_f1 = (M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(temp_2, f32 *, 0)) + (M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(temp_2, f32 *, 4)) + (M2C_FIELD(arg1, f32 *, 8) * M2C_FIELD(temp_2, f32 *, 8)) + M2C_FIELD(arg1, f32 *, 0xC);
    var_7 = 0;
    if (D_004264A0 <= temp_f1) {
        var_7 = 1;
    } else if (temp_f1 <= -D_004264A0) {
        var_7 = -1;
    }
    temp_2_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0xC);
    temp_f1_2 = (M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(temp_2_2, f32 *, 0)) + (M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(temp_2_2, f32 *, 4)) + (M2C_FIELD(arg1, f32 *, 8) * M2C_FIELD(temp_2_2, f32 *, 8)) + M2C_FIELD(arg1, f32 *, 0xC);
    var_4 = 0;
    if (D_004264A0 <= temp_f1_2) {
        var_4 = 1;
    } else if (temp_f1_2 <= -D_004264A0) {
        var_4 = -1;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4) = var_7;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4) = var_4;
    if ((var_7 == 0) || (var_4 == 0)) {
        return 0;
    }
    return var_7 != var_4;
}
