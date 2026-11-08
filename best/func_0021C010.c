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

u32 func_0021C010(void *arg0, void *arg1, void *arg2) {
    s32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp1C;
    f32 sp20;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    s32 temp_2;
    s32 var_2;
    s32 var_8;
    void *temp_3;
    void *temp_4;
    void *var_5;
    void *var_7;
    void *var_9;

    var_5 = arg1;
    var_9 = arg0;
    var_7 = var_9;
loop_1:
    var_5 -= 0x24;
    temp_f1 = M2C_FIELD(arg2, f32 *, 0x20);
loop_4:
    var_8 = 1;
    if (!(M2C_FIELD(var_7, f32 *, 0x20) < temp_f1)) {
        var_8 = 0;
    }
    if (var_8 != 0) {
        var_7 += 0x24;
        var_9 += 0x24;
        goto loop_4;
    }
loop_11:
    var_2 = 1;
    if (!(temp_f1 < M2C_FIELD(var_5, f32 *, 0x20))) {
        var_2 = 0;
    }
    if (var_2 != 0) {
        var_5 -= 0x24;
        goto loop_11;
    }
    temp_3 = var_5 + 4;
    if ((u32) var_9 < (u32) var_5) {
        temp_2 = M2C_FIELD(var_7, s32 *, 0);
        temp_f0 = M2C_FIELD(var_7, f32 *, 0xC);
        temp_4 = var_5 + 0x10;
        temp_f1_2 = M2C_FIELD(var_7, f32 *, 0x10);
        var_9 += 0x24;
        sp0 = temp_2;
        sp4 = M2C_FIELD(var_7, f32 *, 4);
        sp8 = M2C_FIELD(var_7, f32 *, 8);
        spC = temp_f0;
        sp10 = temp_f1_2;
        temp_f1_3 = M2C_FIELD(var_7, f32 *, 0x20);
        temp_f0_2 = M2C_FIELD(var_7, f32 *, 0x1C);
        M2C_FIELD(&sp10, f32 *, 4) = (f32) M2C_FIELD(var_7, f32 *, 0x14);
        M2C_FIELD(&sp10, f32 *, 8) = (f32) M2C_FIELD(var_7, f32 *, 0x18);
        sp1C = temp_f0_2;
        sp20 = temp_f1_3;
        M2C_FIELD(var_7, s32 *, 0) = (s32) M2C_FIELD(var_5, s32 *, 0);
        M2C_FIELD(var_7, f32 *, 4) = (f32) M2C_FIELD(var_5, f32 *, 4);
        M2C_FIELD(var_7, f32 *, 8) = (f32) M2C_FIELD(temp_3, f32 *, 4);
        M2C_FIELD(var_7, f32 *, 0xC) = (f32) M2C_FIELD(temp_3, f32 *, 8);
        M2C_FIELD(var_7, f32 *, 0x10) = (f32) M2C_FIELD(var_5, f32 *, 0x10);
        M2C_FIELD(var_7, f32 *, 0x14) = (f32) M2C_FIELD(temp_4, f32 *, 4);
        M2C_FIELD(var_7, f32 *, 0x18) = (f32) M2C_FIELD(temp_4, f32 *, 8);
        M2C_FIELD(var_7, f32 *, 0x1C) = (f32) M2C_FIELD(var_5, f32 *, 0x1C);
        M2C_FIELD(var_7, f32 *, 0x20) = (f32) M2C_FIELD(var_5, f32 *, 0x20);
        M2C_FIELD(var_5, s32 *, 0) = temp_2;
        var_7 += 0x24;
        M2C_FIELD(var_5, f32 *, 4) = sp4;
        M2C_FIELD(temp_3, f32 *, 4) = sp8;
        M2C_FIELD(temp_3, f32 *, 8) = temp_f0;
        M2C_FIELD(var_5, f32 *, 0x10) = temp_f1_2;
        M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(&sp10, f32 *, 4);
        M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(&sp10, f32 *, 8);
        M2C_FIELD(var_5, f32 *, 0x1C) = temp_f0_2;
        M2C_FIELD(var_5, f32 *, 0x20) = temp_f1_3;
        goto loop_1;
    }
    return (u32) var_9;
}
