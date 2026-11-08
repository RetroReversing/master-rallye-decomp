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

void func_002DA068(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 var_10;
    s32 var_2;
    s32 var_3;
    u32 temp_2;
    u32 temp_3;
    void *temp_2_2;
    void *temp_3_2;
    void *temp_4;
    void *temp_4_2;
    void *temp_5;
    void *temp_5_2;
    void *temp_6;
    void *temp_6_2;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    var_10 = arg1;
    temp_2 = var_10 - 1;
    var_3 = (s32) (temp_2 + (temp_2 >> 0x1F)) >> 1;
loop_3:
    if (arg2 < var_10) {
        temp_9 = (var_3 << 5) + arg0;
        var_2 = 1;
        if (!(M2C_FIELD(temp_9, f32 *, 0x1C) < M2C_FIELD(arg3, f32 *, 0x1C))) {
            var_2 = 0;
        }
        if (var_2 != 0) {
            temp_4 = (var_10 << 5) + arg0;
            temp_6 = temp_9 + 4;
            M2C_FIELD(temp_4, s32 *, 0) = (s32) M2C_FIELD(temp_9, s32 *, 0);
            temp_5 = temp_4 + 4;
            temp_7 = temp_9 + 0x10;
            temp_8 = temp_4 + 0x10;
            var_10 = var_3;
            temp_3 = var_10 - 1;
            M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(temp_9, f32 *, 4);
            var_3 = (s32) (temp_3 + (temp_3 >> 0x1F)) >> 1;
            M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
            M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
            M2C_FIELD(temp_4, f32 *, 0x10) = (f32) M2C_FIELD(temp_9, f32 *, 0x10);
            M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
            M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
            M2C_FIELD(temp_4, f32 *, 0x1C) = (f32) M2C_FIELD(temp_9, f32 *, 0x1C);
            goto loop_3;
        }
    }
    temp_2_2 = (var_10 << 5) + arg0;
    temp_5_2 = arg3 + 4;
    M2C_FIELD(temp_2_2, s32 *, 0) = (s32) M2C_FIELD(arg3, s32 *, 0);
    temp_4_2 = temp_2_2 + 4;
    temp_3_2 = arg3 + 0x10;
    temp_6_2 = temp_2_2 + 0x10;
    M2C_FIELD(temp_2_2, f32 *, 4) = (f32) M2C_FIELD(arg3, f32 *, 4);
    M2C_FIELD(temp_4_2, f32 *, 4) = (f32) M2C_FIELD(temp_5_2, f32 *, 4);
    M2C_FIELD(temp_4_2, f32 *, 8) = (f32) M2C_FIELD(temp_5_2, f32 *, 8);
    M2C_FIELD(temp_2_2, f32 *, 0x10) = (f32) M2C_FIELD(arg3, f32 *, 0x10);
    M2C_FIELD(temp_6_2, f32 *, 4) = (f32) M2C_FIELD(temp_3_2, f32 *, 4);
    M2C_FIELD(temp_6_2, f32 *, 8) = (f32) M2C_FIELD(temp_3_2, f32 *, 8);
    M2C_FIELD(temp_2_2, f32 *, 0x1C) = (f32) M2C_FIELD(arg3, f32 *, 0x1C);
}
