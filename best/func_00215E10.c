/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

extern void **D_00426428;

void func_00215E10(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4, void *arg5, void *arg6, void *arg7) {
    s32 temp_4;
    s32 var_17;
    s32 var_18;
    u32 temp_2;
    u32 temp_4_2;
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_3;
    void *temp_3_2;
    void *temp_4_3;
    void *temp_5;
    void *temp_6;
    void *temp_6_2;
    void *temp_7;
    void *temp_7_2;
    void *temp_8;
    void *temp_9;
    void *var_10;
    void *var_11;
    void *var_8;
    void *var_9;

    var_8 = arg4;
    var_9 = arg5;
    var_10 = arg6;
    var_11 = arg7;
    var_18 = arg1;
    temp_2 = var_18 - 1;
    var_17 = (s32) (temp_2 + (temp_2 >> 0x1F)) >> 1;
loop_3:
    if (arg2 < var_18) {
        temp_3 = *D_00426428;
        if (M2C_FIELD(temp_3, s32 (**)(void *, s32, void *, void **, void *, void *, void *, void *), 0xC)(D_00426428 + M2C_FIELD(temp_3, s16 *, 8), (var_17 * 0x50) + arg0, arg3, D_00426428, var_8, var_9, var_10, var_11) != 0) {
            temp_4 = var_18 * 0x50;
            var_18 = var_17;
            temp_2_2 = (var_17 * 0x50) + arg0;
            temp_3_2 = temp_4 + arg0;
            temp_6 = temp_2_2 + 0x10;
            temp_7 = temp_3_2 + 0x10;
            M2C_FIELD(temp_3_2, s32 *, 0) = (s32) M2C_FIELD(temp_2_2, s32 *, 0);
            var_9 = temp_2_2 + 0x20;
            var_8 = temp_3_2 + 0x20;
            var_10 = temp_2_2 + 0x30;
            var_11 = temp_3_2 + 0x30;
            temp_12 = temp_2_2 + 0x40;
            temp_13 = temp_3_2 + 0x40;
            M2C_FIELD(temp_3_2, s32 *, 4) = (s32) M2C_FIELD(temp_2_2, s32 *, 4);
            temp_4_2 = var_18 - 1;
            var_17 = (s32) (temp_4_2 + (temp_4_2 >> 0x1F)) >> 1;
            M2C_FIELD(temp_3_2, f32 *, 0x10) = (f32) M2C_FIELD(temp_2_2, f32 *, 0x10);
            M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
            M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
            M2C_FIELD(temp_7, f32 *, 0xC) = (f32) M2C_FIELD(temp_6, f32 *, 0xC);
            M2C_FIELD(temp_3_2, f32 *, 0x20) = (f32) M2C_FIELD(temp_2_2, f32 *, 0x20);
            M2C_FIELD(var_8, f32 *, 4) = (f32) M2C_FIELD(var_9, f32 *, 4);
            M2C_FIELD(var_8, f32 *, 8) = (f32) M2C_FIELD(var_9, f32 *, 8);
            M2C_FIELD(var_8, f32 *, 0xC) = (f32) M2C_FIELD(var_9, f32 *, 0xC);
            M2C_FIELD(temp_3_2, f32 *, 0x30) = (f32) M2C_FIELD(temp_2_2, f32 *, 0x30);
            M2C_FIELD(var_11, f32 *, 4) = (f32) M2C_FIELD(var_10, f32 *, 4);
            M2C_FIELD(var_11, f32 *, 8) = (f32) M2C_FIELD(var_10, f32 *, 8);
            M2C_FIELD(var_11, f32 *, 0xC) = (f32) M2C_FIELD(var_10, f32 *, 0xC);
            M2C_FIELD(temp_3_2, f32 *, 0x40) = (f32) M2C_FIELD(temp_2_2, f32 *, 0x40);
            M2C_FIELD(temp_13, f32 *, 4) = (f32) M2C_FIELD(temp_12, f32 *, 4);
            M2C_FIELD(temp_13, f32 *, 8) = (f32) M2C_FIELD(temp_12, f32 *, 8);
            M2C_FIELD(temp_13, f32 *, 0xC) = (f32) M2C_FIELD(temp_12, f32 *, 0xC);
            goto loop_3;
        }
    }
    temp_5 = arg3 + 0x10;
    temp_7_2 = arg3 + 0x20;
    temp_9 = arg3 + 0x30;
    temp_11 = arg3 + 0x40;
    temp_2_3 = (var_18 * 0x50) + arg0;
    M2C_FIELD(temp_2_3, s32 *, 0) = (s32) M2C_FIELD(arg3, s32 *, 0);
    temp_4_3 = temp_2_3 + 0x10;
    temp_6_2 = temp_2_3 + 0x20;
    temp_8 = temp_2_3 + 0x30;
    temp_10 = temp_2_3 + 0x40;
    M2C_FIELD(temp_2_3, s32 *, 4) = (s32) M2C_FIELD(arg3, s32 *, 4);
    M2C_FIELD(temp_2_3, f32 *, 0x10) = (f32) M2C_FIELD(arg3, f32 *, 0x10);
    M2C_FIELD(temp_4_3, f32 *, 4) = (f32) M2C_FIELD(temp_5, f32 *, 4);
    M2C_FIELD(temp_4_3, f32 *, 8) = (f32) M2C_FIELD(temp_5, f32 *, 8);
    M2C_FIELD(temp_4_3, f32 *, 0xC) = (f32) M2C_FIELD(temp_5, f32 *, 0xC);
    M2C_FIELD(temp_2_3, f32 *, 0x20) = (f32) M2C_FIELD(arg3, f32 *, 0x20);
    M2C_FIELD(temp_6_2, f32 *, 4) = (f32) M2C_FIELD(temp_7_2, f32 *, 4);
    M2C_FIELD(temp_6_2, f32 *, 8) = (f32) M2C_FIELD(temp_7_2, f32 *, 8);
    M2C_FIELD(temp_6_2, f32 *, 0xC) = (f32) M2C_FIELD(temp_7_2, f32 *, 0xC);
    M2C_FIELD(temp_2_3, f32 *, 0x30) = (f32) M2C_FIELD(arg3, f32 *, 0x30);
    M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_9, f32 *, 4);
    M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_9, f32 *, 8);
    M2C_FIELD(temp_8, f32 *, 0xC) = (f32) M2C_FIELD(temp_9, f32 *, 0xC);
    M2C_FIELD(temp_2_3, f32 *, 0x40) = (f32) M2C_FIELD(arg3, f32 *, 0x40);
    M2C_FIELD(temp_10, f32 *, 4) = (f32) M2C_FIELD(temp_11, f32 *, 4);
    M2C_FIELD(temp_10, f32 *, 8) = (f32) M2C_FIELD(temp_11, f32 *, 8);
    M2C_FIELD(temp_10, f32 *, 0xC) = (f32) M2C_FIELD(temp_11, f32 *, 0xC);
}
