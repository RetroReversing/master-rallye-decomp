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

void func_0031ED50(void *arg0, s32 *arg1) {
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f1;
    s32 temp_8;
    s32 var_7;
    u8 temp_2_2;
    u8 temp_2_3;
    u8 temp_2_4;
    u8 temp_2_5;
    void *temp_2;
    void *temp_2_6;
    void *temp_3;
    void *temp_4;
    void *temp_6;
    void *var_5;

    temp_2 = M2C_FIELD(arg0, void **, 0x10);
    var_7 = 0;
    temp_8 = M2C_FIELD(temp_2, s32 *, 0xC);
    if (temp_8 > 0) {
        var_5 = M2C_FIELD(temp_2, s32 *, 0) + 0x30;
        do {
            temp_6 = ((var_7 + M2C_FIELD(arg0, s32 *, 0x30)) * 0x30) + *arg1;
            M2C_FIELD(var_5, f32 *, -0x30) = (f32) M2C_FIELD(temp_6, f32 *, 0);
            M2C_FIELD(var_5, f32 *, -0x2C) = (f32) M2C_FIELD(temp_6, f32 *, 4);
            M2C_FIELD(var_5, f32 *, -0x28) = (f32) M2C_FIELD(temp_6, f32 *, 8);
            temp_2_2 = M2C_FIELD(temp_6, u8 *, 0x2C);
            temp_4 = temp_6 + 0x2C;
            if ((s32) temp_2_2 >= 0) {
                var_f0 = (f32) temp_2_2;
            } else {
                var_f0 = 2.0f * (f32) ((temp_2_2 & 1) | (temp_2_2 >> 1));
            }
            M2C_FIELD(var_5, f32 *, -0x20) = (f32) (var_f0 * 0.5f);
            temp_2_3 = M2C_FIELD(temp_4, u8 *, 1);
            if ((s32) temp_2_3 >= 0) {
                var_f0_2 = (f32) temp_2_3;
            } else {
                var_f0_2 = 2.0f * (f32) ((temp_2_3 & 1) | (temp_2_3 >> 1));
            }
            M2C_FIELD(var_5, f32 *, -0x1C) = (f32) (var_f0_2 * 0.5f);
            temp_2_4 = M2C_FIELD(temp_4, u8 *, 2);
            if ((s32) temp_2_4 >= 0) {
                var_f0_3 = (f32) temp_2_4;
            } else {
                var_f0_3 = 2.0f * (f32) ((temp_2_4 & 1) | (temp_2_4 >> 1));
            }
            M2C_FIELD(var_5, f32 *, -0x18) = (f32) (var_f0_3 * 0.5f);
            temp_2_5 = M2C_FIELD(temp_4, u8 *, 3);
            if ((s32) temp_2_5 >= 0) {
                var_f1 = (f32) temp_2_5;
            } else {
                var_f1 = 2.0f * (f32) ((temp_2_5 & 1) | (temp_2_5 >> 1));
            }
            temp_2_6 = temp_6 + 0x10;
            temp_3 = temp_6 + 0x20;
            var_7 += 1;
            M2C_FIELD(var_5, f32 *, -0x14) = (f32) (var_f1 * 0.5f);
            M2C_FIELD(var_5, f32 *, -0x10) = (f32) M2C_FIELD(temp_6, f32 *, 0x10);
            M2C_FIELD(var_5, f32 *, -0xC) = (f32) M2C_FIELD(temp_2_6, f32 *, 4);
            M2C_FIELD(var_5, f32 *, -8) = (f32) M2C_FIELD(temp_2_6, f32 *, 8);
            M2C_FIELD(var_5, f32 *, -4) = (f32) M2C_FIELD(temp_2_6, f32 *, 0xC);
            M2C_FIELD(var_5, f32 *, 0) = (f32) M2C_FIELD(temp_6, f32 *, 0x20);
            M2C_FIELD(var_5, f32 *, 4) = (f32) M2C_FIELD(temp_3, f32 *, 4);
            M2C_FIELD(var_5, f32 *, 0xC) = 1.0f;
            M2C_FIELD(var_5, f32 *, 8) = (f32) M2C_FIELD(temp_3, f32 *, 8);
            var_5 += 0x40;
        } while (var_7 < temp_8);
    }
}
