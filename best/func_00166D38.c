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

s32 func_00166D38(void *arg0) {
    f32 temp_f5;
    f32 var_f0;
    f32 var_f1;
    f32 var_f3;
    f32 var_f4;
    s32 temp_2;
    s32 temp_3;
    s32 temp_6;
    u32 var_6;
    void *temp_2_2;
    void *temp_3_2;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x74);
    temp_6 = M2C_FIELD(arg0, s32 *, 0x70);
    temp_2 = temp_3 + 1;
    if (temp_3 < temp_6) {
        M2C_FIELD(arg0, s32 *, 0x74) = temp_2;
        temp_3_2 = arg0 + 0x2C;
        var_6 = 0;
        temp_f5 = (f32) temp_2 / (f32) temp_6;
        if (((s32) (M2C_FIELD(temp_3_2, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0x2C)) >> 5) != 0) {
            do {
                var_f4 = temp_f5 * M2C_FIELD(arg0, f32 *, 0x60);
                var_f3 = temp_f5 * M2C_FIELD(arg0, f32 *, 0x64);
                temp_2_2 = M2C_FIELD(arg0, s32 *, 0x2C) + (var_6 << 5);
                var_f1 = temp_f5 * M2C_FIELD(arg0, f32 *, 0x68);
                var_f0 = temp_f5 * M2C_FIELD(arg0, f32 *, 0x6C);
                if (var_f4 < 0.0f) {
                    var_f4 = 0.0f;
                }
                if (var_f3 < 0.0f) {
                    var_f3 = 0.0f;
                }
                if (var_f0 < 0.0f) {
                    var_f0 = 0.0f;
                }
                M2C_FIELD(temp_2_2, f32 *, 0x10) = var_f0;
                if (var_f1 < 0.0f) {
                    var_f1 = 0.0f;
                }
                var_6 += 1;
                M2C_FIELD(temp_2_2, f32 *, 0x18) = var_f4;
                M2C_FIELD(temp_2_2, f32 *, 0x1C) = var_f3;
                M2C_FIELD(temp_2_2, f32 *, 0x14) = var_f1;
            } while (var_6 < (u32) ((s32) (M2C_FIELD(temp_3_2, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0x2C)) >> 5));
        }
        return 1;
    }
    return 0;
}
