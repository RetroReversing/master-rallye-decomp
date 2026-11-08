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

void *func_00237778(void *arg0, void *arg1, f32 fparg0) {
    f32 temp_f1;
    s32 var_3;
    void **var_6;
    void *temp_2;
    void *temp_3;
    void *var_2;

    temp_2 = arg0 + 4;
    temp_f1 = (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(temp_2, f32 *, 4) * M2C_FIELD(arg1, f32 *, 4)) + (M2C_FIELD(temp_2, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8)) + M2C_FIELD(temp_2, f32 *, 0xC);
    var_2 = arg0;
    if (!(fabsf(temp_f1) < fparg0)) {
        var_3 = 0;
        if (D_004264A0 <= temp_f1) {
            var_3 = 1;
        } else if (temp_f1 <= -D_004264A0) {
            var_3 = -1;
        }
        if (var_3 == -1) {
            var_6 = M2C_FIELD(arg0, void ***, 0x18);
            goto block_9;
        }
        var_2 = arg0;
        if (var_3 == 1) {
            var_6 = M2C_FIELD(arg0, void ***, 0x1C);
block_9:
            temp_3 = *var_6;
            var_2 = M2C_FIELD(temp_3, void *(**)(void *, void **), 0x34)(var_6 + M2C_FIELD(temp_3, s16 *, 0x30), var_6);
        }
    }
    return var_2;
}
