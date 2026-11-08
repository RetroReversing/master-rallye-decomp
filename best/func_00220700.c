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

M2C_UNK *func_002B1FC0(M2C_UNK, s32);               /* extern */
M2C_UNK *func_003D2910(M2C_UNK, M2C_UNK *);         /* extern */

void func_00220700(M2C_UNK **arg0, void *arg1, s32 arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 sp18;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    s32 sp3C;
    s32 sp40;
    M2C_UNK *sp50;
    M2C_UNK *sp60;
    M2C_UNK *temp_2_2;
    M2C_UNK *temp_3_2;
    M2C_UNK *var_4;
    M2C_UNK *var_5;
    s32 temp_7;
    void *temp_2;
    void *temp_3;

    temp_2 = arg1 + 0xC;
    temp_3 = arg1 + 0x18;
    sp0 = M2C_FIELD(arg1, f32 *, 0);
    sp4 = M2C_FIELD(arg1, f32 *, 4);
    sp8 = M2C_FIELD(arg1, f32 *, 8);
    spC = M2C_FIELD(arg1, f32 *, 0xC);
    temp_7 = M2C_FIELD(arg1, s32 *, 0x3C);
    M2C_FIELD(&spC, f32 *, 4) = (f32) M2C_FIELD(temp_2, f32 *, 4);
    M2C_FIELD(&spC, f32 *, 8) = (f32) M2C_FIELD(temp_2, f32 *, 8);
    sp18 = M2C_FIELD(arg1, f32 *, 0x18);
    M2C_FIELD(&sp18, f32 *, 4) = (f32) M2C_FIELD(temp_3, f32 *, 4);
    M2C_FIELD(&sp18, f32 *, 8) = (f32) M2C_FIELD(temp_3, f32 *, 8);
    sp24 = M2C_FIELD(arg1, f32 *, 0x24);
    sp28 = M2C_FIELD(arg1, f32 *, 0x28);
    sp2C = M2C_FIELD(arg1, f32 *, 0x2C);
    sp30 = M2C_FIELD(arg1, f32 *, 0x30);
    sp34 = M2C_FIELD(arg1, f32 *, 0x34);
    sp38 = M2C_FIELD(arg1, f32 *, 0x38);
    sp3C = temp_7;
    sp40 = arg2;
    sp60 = *arg0;
    var_5 = func_002B1FC0(0x4C, temp_7);
    var_4 = var_5 + 8;
    if (var_5 == NULL) {
        var_5 = func_003D2910(0x4C, var_5);
        var_4 = var_5 + 8;
    }
    if (var_4 != NULL) {
        temp_2_2 = var_5 + 0x14;
        temp_3_2 = var_5 + 0x20;
        M2C_FIELD(var_5, f32 *, 8) = sp0;
        M2C_FIELD(var_4, f32 *, 4) = sp4;
        M2C_FIELD(var_4, f32 *, 8) = sp8;
        M2C_FIELD(var_5, f32 *, 0x14) = spC;
        M2C_FIELD(temp_2_2, f32 *, 4) = (f32) M2C_FIELD(&spC, f32 *, 4);
        M2C_FIELD(temp_2_2, f32 *, 8) = (f32) M2C_FIELD(&spC, f32 *, 8);
        M2C_FIELD(var_5, f32 *, 0x20) = sp18;
        M2C_FIELD(temp_3_2, f32 *, 4) = (f32) M2C_FIELD(&sp18, f32 *, 4);
        M2C_FIELD(temp_3_2, f32 *, 8) = (f32) M2C_FIELD(&sp18, f32 *, 8);
        M2C_FIELD(var_4, f32 *, 0x24) = sp24;
        M2C_FIELD(var_4, f32 *, 0x28) = sp28;
        M2C_FIELD(var_4, f32 *, 0x2C) = sp2C;
        M2C_FIELD(var_4, f32 *, 0x30) = sp30;
        M2C_FIELD(var_4, f32 *, 0x34) = sp34;
        M2C_FIELD(var_4, f32 *, 0x38) = sp38;
        M2C_FIELD(var_4, s32 *, 0x3C) = sp3C;
        M2C_FIELD(var_4, s32 *, 0x40) = sp40;
    }
    M2C_FIELD(var_5, M2C_UNK **, 0) = sp60;
    M2C_FIELD(var_5, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp60, M2C_UNK **, 4);
    *M2C_FIELD(sp60, M2C_UNK **, 4) = var_5;
    M2C_FIELD(sp60, M2C_UNK **, 4) = var_5;
    sp50 = var_5;
}
