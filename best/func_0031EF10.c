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

void func_0031EF10(void *arg0, s32 *arg1) {
    s32 temp_3;
    s32 temp_7;
    s32 var_6;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *var_5;

    temp_2 = M2C_FIELD(arg0, void **, 0x10);
    var_6 = 0;
    temp_7 = M2C_FIELD(temp_2, s32 *, 0xC);
    if (temp_7 > 0) {
        var_5 = M2C_FIELD(temp_2, s32 *, 0) + 0x30;
        do {
            temp_3 = (var_6 + M2C_FIELD(arg0, s32 *, 0x30)) * 0x30;
            var_6 += 1;
            temp_2_2 = temp_3 + *arg1;
            temp_2_3 = temp_2_2 + 0x20;
            M2C_FIELD(var_5, f32 *, 0) = (f32) M2C_FIELD(temp_2_2, f32 *, 0x20);
            M2C_FIELD(var_5, f32 *, 4) = (f32) M2C_FIELD(temp_2_3, f32 *, 4);
            M2C_FIELD(var_5, f32 *, 0xC) = 1.0f;
            M2C_FIELD(var_5, f32 *, 8) = (f32) M2C_FIELD(temp_2_3, f32 *, 8);
            var_5 += 0x40;
        } while (var_6 < temp_7);
    }
}
