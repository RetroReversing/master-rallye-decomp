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

void func_0021B848(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 temp_2_2;
    s32 var_11;
    s32 var_3;
    s32 var_5;
    u32 temp_2;
    u32 temp_2_3;
    void *temp_10;
    void *temp_2_4;
    void *temp_3;
    void *temp_3_2;
    void *temp_4;
    void *temp_4_2;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    var_11 = arg1;
    temp_2 = var_11 - 1;
    var_5 = (s32) (temp_2 + (temp_2 >> 0x1F)) >> 1;
loop_3:
    if (arg2 < var_11) {
        var_3 = 1;
        if (!(M2C_FIELD(((var_5 * 0x24) + arg0), f32 *, 0x20) < M2C_FIELD(arg3, f32 *, 0x20))) {
            var_3 = 0;
        }
        if (var_3 != 0) {
            temp_3 = (var_5 * 0x24) + arg0;
            temp_2_2 = var_11 * 0x24;
            temp_7 = temp_3 + 4;
            var_11 = var_5;
            temp_10 = temp_3 + 0x10;
            temp_4 = temp_2_2 + arg0;
            M2C_FIELD(temp_4, s32 *, 0) = (s32) M2C_FIELD(temp_3, s32 *, 0);
            temp_8 = temp_4 + 4;
            temp_9 = temp_4 + 0x10;
            temp_2_3 = var_11 - 1;
            M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(temp_3, f32 *, 4);
            var_5 = (s32) (temp_2_3 + (temp_2_3 >> 0x1F)) >> 1;
            M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
            M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
            M2C_FIELD(temp_4, f32 *, 0x10) = (f32) M2C_FIELD(temp_3, f32 *, 0x10);
            M2C_FIELD(temp_9, f32 *, 4) = (f32) M2C_FIELD(temp_10, f32 *, 4);
            M2C_FIELD(temp_9, f32 *, 8) = (f32) M2C_FIELD(temp_10, f32 *, 8);
            M2C_FIELD(temp_4, f32 *, 0x1C) = (f32) M2C_FIELD(temp_3, f32 *, 0x1C);
            M2C_FIELD(temp_4, f32 *, 0x20) = (f32) M2C_FIELD(temp_3, f32 *, 0x20);
            goto loop_3;
        }
    }
    temp_5 = arg3 + 4;
    temp_6 = arg3 + 0x10;
    temp_2_4 = (var_11 * 0x24) + arg0;
    M2C_FIELD(temp_2_4, s32 *, 0) = (s32) M2C_FIELD(arg3, s32 *, 0);
    temp_4_2 = temp_2_4 + 4;
    temp_3_2 = temp_2_4 + 0x10;
    M2C_FIELD(temp_2_4, f32 *, 4) = (f32) M2C_FIELD(arg3, f32 *, 4);
    M2C_FIELD(temp_4_2, f32 *, 4) = (f32) M2C_FIELD(temp_5, f32 *, 4);
    M2C_FIELD(temp_4_2, f32 *, 8) = (f32) M2C_FIELD(temp_5, f32 *, 8);
    M2C_FIELD(temp_2_4, f32 *, 0x10) = (f32) M2C_FIELD(arg3, f32 *, 0x10);
    M2C_FIELD(temp_3_2, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
    M2C_FIELD(temp_3_2, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
    M2C_FIELD(temp_2_4, f32 *, 0x1C) = (f32) M2C_FIELD(arg3, f32 *, 0x1C);
    M2C_FIELD(temp_2_4, f32 *, 0x20) = (f32) M2C_FIELD(arg3, f32 *, 0x20);
}
