/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

void func_00330530(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f3;
    f32 temp_f4;
    s32 var_2;
    s32 var_2_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_5;
    void *temp_6;

    temp_2 = arg0 + 0x30;
    temp_5 = arg1 + 0x20;
    temp_3 = arg0 + 0x20;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
    temp_6 = arg0 + 0x10;
    var_2 = 0;
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(temp_5, f32 *, 4);
    sp0 = M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(temp_3, f32 *, 4) = 0.0f;
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(temp_5, f32 *, 8);
    sp4 = M2C_FIELD(temp_2, f32 *, 4);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x20);
    sp8 = M2C_FIELD(temp_2, f32 *, 8);
    if ((-0.0000011920929f <= temp_f0) && (temp_f0 <= 0.0000011920929f)) {
        var_2 = 1;
    }
    if (var_2 != 0) {
        temp_f1 = M2C_FIELD(temp_3, f32 *, 8);
        var_2_2 = 0;
        if ((-0.0000011920929f <= temp_f1) && (temp_f1 <= 0.0000011920929f)) {
            var_2_2 = 1;
        }
        if (var_2_2 != 0) {
            M2C_FIELD(arg0, f32 *, 0x20) = 1.0f;
        }
    }
    temp_2_2 = arg0 + 0x30;
    M2C_FIELD(arg0, f32 *, 0x10) = 0.0f;
    M2C_FIELD(temp_6, f32 *, 4) = 1.0f;
    M2C_FIELD(temp_6, s32 *, 8) = 0;
    temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x10);
    temp_f3 = M2C_FIELD(arg0, f32 *, 0x20);
    temp_f4 = M2C_FIELD(temp_3, f32 *, 8);
    temp_f1_2 = M2C_FIELD(temp_3, f32 *, 4) * temp_f0_2;
    M2C_FIELD(arg0, f32 *, 0x30) = sp0;
    M2C_FIELD(arg0, f32 *, 4) = (f32) ((temp_f3 * temp_f0_2) - (temp_f4 * temp_f0_2));
    M2C_FIELD(arg0, f32 *, 8) = (f32) (temp_f1_2 - temp_f3);
    M2C_FIELD(arg0, f32 *, 0) = (f32) (temp_f4 - temp_f1_2);
    M2C_FIELD(temp_2_2, f32 *, 0xC) = 1.0f;
    M2C_FIELD(temp_2_2, f32 *, 4) = sp4;
    M2C_FIELD(temp_2_2, f32 *, 8) = sp8;
}
