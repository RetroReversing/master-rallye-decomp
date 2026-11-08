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

u32 func_00216AD8(u32 arg0, u32 arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    f32 sp10;
    f32 sp20;
    f32 sp30;
    f32 sp40;
    s32 temp_2;
    u32 var_16;
    u32 var_17;
    u32 var_18;
    void *temp_3;
    void *temp_3_2;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_7;

    var_18 = arg0;
    var_17 = arg1;
    var_16 = var_18;
loop_1:
    var_17 -= 0x50;
loop_3:
    temp_3 = *D_00426428;
    if (M2C_FIELD(temp_3, s32 (**)(void *, u32, s32, void **), 0xC)(D_00426428 + M2C_FIELD(temp_3, s16 *, 8), var_18, arg2, D_00426428) != 0) {
        var_16 += 0x50;
        var_18 += 0x50;
        goto loop_3;
    }
loop_8:
    temp_3_2 = *D_00426428;
    if (M2C_FIELD(temp_3_2, s32 (**)(void *, s32, u32, void **), 0xC)(D_00426428 + M2C_FIELD(temp_3_2, s16 *, 8), arg2, var_17, D_00426428) != 0) {
        var_17 -= 0x50;
        goto loop_8;
    }
    temp_4 = var_17 + 0x10;
    if (var_18 < var_17) {
        temp_2 = M2C_FIELD(var_16, s32 *, 4);
        temp_5 = var_17 + 0x20;
        temp_6 = var_17 + 0x30;
        temp_7 = var_17 + 0x40;
        var_18 += 0x50;
        sp0 = M2C_FIELD(var_16, s32 *, 0);
        sp4 = temp_2;
        sp10 = M2C_FIELD(var_16, f32 *, 0x10);
        M2C_FIELD(&sp10, f32 *, 4) = (f32) M2C_FIELD(var_16, f32 *, 0x14);
        M2C_FIELD(&sp10, f32 *, 8) = (f32) M2C_FIELD(var_16, f32 *, 0x18);
        M2C_FIELD(&sp10, f32 *, 0xC) = (f32) M2C_FIELD(var_16, f32 *, 0x1C);
        sp20 = M2C_FIELD(var_16, f32 *, 0x20);
        M2C_FIELD(&sp20, f32 *, 4) = (f32) M2C_FIELD(var_16, f32 *, 0x24);
        M2C_FIELD(&sp20, f32 *, 8) = (f32) M2C_FIELD(var_16, f32 *, 0x28);
        M2C_FIELD(&sp20, f32 *, 0xC) = (f32) M2C_FIELD(var_16, f32 *, 0x2C);
        sp30 = M2C_FIELD(var_16, f32 *, 0x30);
        M2C_FIELD(&sp30, f32 *, 0xC) = (f32) M2C_FIELD(var_16, f32 *, 0x3C);
        M2C_FIELD(&sp30, f32 *, 8) = (f32) M2C_FIELD(var_16, f32 *, 0x38);
        M2C_FIELD(&sp30, f32 *, 4) = (f32) M2C_FIELD(var_16, f32 *, 0x34);
        sp40 = M2C_FIELD(var_16, f32 *, 0x40);
        M2C_FIELD(&sp40, f32 *, 4) = (f32) M2C_FIELD(var_16, f32 *, 0x44);
        M2C_FIELD(&sp40, f32 *, 8) = (f32) M2C_FIELD(var_16, f32 *, 0x48);
        M2C_FIELD(&sp40, f32 *, 0xC) = (f32) M2C_FIELD(var_16, f32 *, 0x4C);
        M2C_FIELD(var_16, s32 *, 0) = (s32) M2C_FIELD(var_17, s32 *, 0);
        M2C_FIELD(var_16, s32 *, 4) = (s32) M2C_FIELD(var_17, s32 *, 4);
        M2C_FIELD(var_16, f32 *, 0x10) = (f32) M2C_FIELD(var_17, f32 *, 0x10);
        M2C_FIELD(var_16, f32 *, 0x14) = (f32) M2C_FIELD(temp_4, f32 *, 4);
        M2C_FIELD(var_16, f32 *, 0x18) = (f32) M2C_FIELD(temp_4, f32 *, 8);
        M2C_FIELD(var_16, f32 *, 0x1C) = (f32) M2C_FIELD(temp_4, f32 *, 0xC);
        M2C_FIELD(var_16, f32 *, 0x20) = (f32) M2C_FIELD(var_17, f32 *, 0x20);
        M2C_FIELD(var_16, f32 *, 0x24) = (f32) M2C_FIELD(temp_5, f32 *, 4);
        M2C_FIELD(var_16, f32 *, 0x28) = (f32) M2C_FIELD(temp_5, f32 *, 8);
        M2C_FIELD(var_16, f32 *, 0x2C) = (f32) M2C_FIELD(temp_5, f32 *, 0xC);
        M2C_FIELD(var_16, f32 *, 0x30) = (f32) M2C_FIELD(var_17, f32 *, 0x30);
        M2C_FIELD(var_16, f32 *, 0x34) = (f32) M2C_FIELD(temp_6, f32 *, 4);
        M2C_FIELD(var_16, f32 *, 0x38) = (f32) M2C_FIELD(temp_6, f32 *, 8);
        M2C_FIELD(var_16, f32 *, 0x3C) = (f32) M2C_FIELD(temp_6, f32 *, 0xC);
        M2C_FIELD(var_16, f32 *, 0x40) = (f32) M2C_FIELD(var_17, f32 *, 0x40);
        M2C_FIELD(var_16, f32 *, 0x44) = (f32) M2C_FIELD(temp_7, f32 *, 4);
        M2C_FIELD(var_16, f32 *, 0x48) = (f32) M2C_FIELD(temp_7, f32 *, 8);
        M2C_FIELD(var_16, f32 *, 0x4C) = (f32) M2C_FIELD(temp_7, f32 *, 0xC);
        M2C_FIELD(var_17, s32 *, 0) = sp0;
        var_16 += 0x50;
        M2C_FIELD(var_17, s32 *, 4) = temp_2;
        M2C_FIELD(var_17, f32 *, 0x10) = sp10;
        M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(&sp10, f32 *, 4);
        M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(&sp10, f32 *, 8);
        M2C_FIELD(temp_4, f32 *, 0xC) = (f32) M2C_FIELD(&sp10, f32 *, 0xC);
        M2C_FIELD(var_17, f32 *, 0x20) = sp20;
        M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(&sp20, f32 *, 4);
        M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(&sp20, f32 *, 8);
        M2C_FIELD(temp_5, f32 *, 0xC) = (f32) M2C_FIELD(&sp20, f32 *, 0xC);
        M2C_FIELD(var_17, f32 *, 0x30) = sp30;
        M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(&sp30, f32 *, 4);
        M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(&sp30, f32 *, 8);
        M2C_FIELD(temp_6, f32 *, 0xC) = (f32) M2C_FIELD(&sp30, f32 *, 0xC);
        M2C_FIELD(var_17, f32 *, 0x40) = sp40;
        M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(&sp40, f32 *, 4);
        M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(&sp40, f32 *, 8);
        M2C_FIELD(temp_7, f32 *, 0xC) = (f32) M2C_FIELD(&sp40, f32 *, 0xC);
        goto loop_1;
    }
    return var_18;
}
