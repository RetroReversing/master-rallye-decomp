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

s32 func_00235020(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f3;
    s32 var_3;
    s32 var_6;
    void *temp_2;
    void *temp_2_2;
    void *temp_5;

    temp_5 = M2C_FIELD(arg1, void **, 0x24);
    if (temp_5 != NULL) {
        temp_2 = M2C_FIELD(arg0, void **, 0);
        temp_f1 = M2C_FIELD(temp_5, f32 *, 0);
        temp_f2 = M2C_FIELD(temp_5, f32 *, 4);
        var_6 = 0;
        temp_f0 = M2C_FIELD(temp_5, f32 *, 8);
        temp_f3 = M2C_FIELD(temp_5, f32 *, 0xC);
        temp_f1_2 = (temp_f1 * M2C_FIELD(temp_2, f32 *, 0)) + (temp_f2 * M2C_FIELD(temp_2, f32 *, 4)) + (temp_f0 * M2C_FIELD(temp_2, f32 *, 8)) + temp_f3;
        if (D_004264A0 <= temp_f1_2) {
            var_6 = 1;
        } else if (temp_f1_2 <= -D_004264A0) {
            var_6 = -1;
        }
        if (var_6 != 0) {
            temp_2_2 = M2C_FIELD(arg0, void **, 4);
            temp_f1_3 = (temp_f1 * M2C_FIELD(temp_2_2, f32 *, 0)) + (temp_f2 * M2C_FIELD(temp_2_2, f32 *, 4)) + (temp_f0 * M2C_FIELD(temp_2_2, f32 *, 8)) + temp_f3;
            var_3 = 0;
            if (D_004264A0 <= temp_f1_3) {
                var_3 = 1;
            } else if (temp_f1_3 <= -D_004264A0) {
                var_3 = -1;
            }
            return var_3 == 0;
        }
        return 1;
    }
    return 0;
}
