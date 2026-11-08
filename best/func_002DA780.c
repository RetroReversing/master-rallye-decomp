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

u32 func_002DA780(void *arg0, void *arg1, void *arg2) {
    s32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    s32 var_2;
    s32 var_8_2;
    void *temp_3;
    void *temp_4;
    void *var_7;
    void *var_8;
    void *var_9;

    var_9 = arg0;
    var_8 = arg1;
    var_7 = var_9;
loop_1:
    temp_f1 = M2C_FIELD(arg2, f32 *, 0x1C);
loop_4:
    var_8_2 = 1;
    if (!(M2C_FIELD(var_7, f32 *, 0x1C) < temp_f1)) {
        var_8_2 = 0;
    }
    if (var_8_2 != 0) {
        var_7 += 0x20;
        var_9 += 0x20;
        goto loop_4;
    }
    var_8 -= 0x20;
loop_10:
    var_2 = 1;
    if (!(temp_f1 < M2C_FIELD(var_8, f32 *, 0x1C))) {
        var_2 = 0;
    }
    if (var_2 != 0) {
        var_8 -= 0x20;
        goto loop_10;
    }
    temp_3 = var_8 + 4;
    if ((u32) var_9 < (u32) var_8) {
        temp_f1_2 = M2C_FIELD(var_7, f32 *, 0x10);
        temp_4 = var_8 + 0x10;
        var_9 += 0x20;
        temp_f0 = M2C_FIELD(var_7, f32 *, 0xC);
        sp0 = M2C_FIELD(var_7, s32 *, 0);
        sp4 = M2C_FIELD(var_7, f32 *, 4);
        sp8 = M2C_FIELD(var_7, f32 *, 8);
        sp10 = temp_f1_2;
        spC = temp_f0;
        temp_f0_2 = M2C_FIELD(var_7, f32 *, 0x1C);
        M2C_FIELD(&sp10, f32 *, 4) = (f32) M2C_FIELD(var_7, f32 *, 0x14);
        M2C_FIELD(&sp10, f32 *, 8) = (f32) M2C_FIELD(var_7, f32 *, 0x18);
        sp1C = temp_f0_2;
        M2C_FIELD(var_7, s32 *, 0) = (s32) M2C_FIELD(var_8, s32 *, 0);
        M2C_FIELD(var_7, f32 *, 4) = (f32) M2C_FIELD(var_8, f32 *, 4);
        M2C_FIELD(var_7, f32 *, 8) = (f32) M2C_FIELD(temp_3, f32 *, 4);
        M2C_FIELD(var_7, f32 *, 0xC) = (f32) M2C_FIELD(temp_3, f32 *, 8);
        M2C_FIELD(var_7, f32 *, 0x10) = (f32) M2C_FIELD(var_8, f32 *, 0x10);
        M2C_FIELD(var_7, f32 *, 0x14) = (f32) M2C_FIELD(temp_4, f32 *, 4);
        M2C_FIELD(var_7, f32 *, 0x18) = (f32) M2C_FIELD(temp_4, f32 *, 8);
        M2C_FIELD(var_7, f32 *, 0x1C) = (f32) M2C_FIELD(var_8, f32 *, 0x1C);
        M2C_FIELD(var_8, s32 *, 0) = sp0;
        var_7 += 0x20;
        M2C_FIELD(var_8, f32 *, 4) = sp4;
        M2C_FIELD(temp_3, f32 *, 4) = sp8;
        M2C_FIELD(temp_3, f32 *, 8) = temp_f0;
        M2C_FIELD(var_8, f32 *, 0x10) = temp_f1_2;
        M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(&sp10, f32 *, 4);
        M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(&sp10, f32 *, 8);
        M2C_FIELD(var_8, f32 *, 0x1C) = temp_f0_2;
        goto loop_1;
    }
    return (u32) var_9;
}
