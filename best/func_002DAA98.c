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

void func_002DAA98(void *arg0, void *arg1) {
    s32 var_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_4;
    void *temp_4_2;
    void *temp_5;
    void *temp_5_2;
    void *temp_6;
    void *temp_6_2;
    void *temp_7;
    void *var_8;

    var_8 = arg0;
loop_3:
    temp_7 = var_8 - 0x20;
    var_2 = 1;
    if (!(M2C_FIELD(arg1, f32 *, 0x1C) < M2C_FIELD(temp_7, f32 *, 0x1C))) {
        var_2 = 0;
    }
    if (var_2 != 0) {
        temp_3 = temp_7 + 4;
        temp_4 = var_8 + 4;
        temp_6 = temp_7 + 0x10;
        M2C_FIELD(var_8, s32 *, 0) = (s32) M2C_FIELD(temp_7, s32 *, 0);
        temp_5 = var_8 + 0x10;
        M2C_FIELD(var_8, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
        M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(temp_3, f32 *, 4);
        M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(temp_3, f32 *, 8);
        M2C_FIELD(var_8, f32 *, 0x10) = (f32) M2C_FIELD(temp_7, f32 *, 0x10);
        M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
        M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
        M2C_FIELD(var_8, f32 *, 0x1C) = (f32) M2C_FIELD(temp_7, f32 *, 0x1C);
        var_8 = temp_7;
        goto loop_3;
    }
    temp_3_2 = arg1 + 4;
    temp_4_2 = var_8 + 4;
    temp_6_2 = arg1 + 0x10;
    M2C_FIELD(var_8, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    temp_5_2 = var_8 + 0x10;
    M2C_FIELD(var_8, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_4_2, f32 *, 4) = (f32) M2C_FIELD(temp_3_2, f32 *, 4);
    M2C_FIELD(temp_4_2, f32 *, 8) = (f32) M2C_FIELD(temp_3_2, f32 *, 8);
    M2C_FIELD(var_8, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(temp_5_2, f32 *, 4) = (f32) M2C_FIELD(temp_6_2, f32 *, 4);
    M2C_FIELD(temp_5_2, f32 *, 8) = (f32) M2C_FIELD(temp_6_2, f32 *, 8);
    M2C_FIELD(var_8, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
}
