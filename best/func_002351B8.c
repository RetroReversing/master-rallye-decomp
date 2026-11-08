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

f32 func_001CF4C0(f32 *);                           /* extern */
M2C_UNK func_00234A60(void *, void *, void *, s32); /* extern */
extern f32 D_004264A0;
extern f32 D_00478468;

void func_002351B8(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f3;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f8;
    s32 var_3;
    s32 var_3_2;
    void *temp_18;
    void *temp_2;
    void *temp_2_2;

    temp_18 = M2C_FIELD(arg0, void **, 0);
    temp_2 = M2C_FIELD(arg0, void **, 4);
    sp10 = M2C_FIELD(temp_2, f32 *, 0) - M2C_FIELD(temp_18, f32 *, 0);
    sp14 = M2C_FIELD(temp_2, f32 *, 4) - M2C_FIELD(temp_18, f32 *, 4);
    sp18 = M2C_FIELD(temp_2, f32 *, 8) - M2C_FIELD(temp_18, f32 *, 8);
    temp_f0 = func_001CF4C0(&sp10);
    if (temp_f0 < D_00478468) {
        sp10 = 0.0f;
        sp14 = 0.0f;
        sp18 = 0.0f;
    } else {
        sp10 /= temp_f0;
        M2C_FIELD(&sp10, f32 *, 4) = (f32) (M2C_FIELD(&sp10, f32 *, 4) / temp_f0);
        M2C_FIELD(&sp10, f32 *, 8) = (f32) (M2C_FIELD(&sp10, f32 *, 8) / temp_f0);
    }
    temp_f1 = M2C_FIELD(arg1, f32 *, 0);
    temp_f5 = M2C_FIELD(arg1, f32 *, 4);
    temp_f3 = M2C_FIELD(arg1, f32 *, 8);
    temp_f7 = M2C_FIELD(&sp10, f32 *, 4);
    temp_f6 = M2C_FIELD(&sp10, f32 *, 8);
    temp_f0_2 = -(M2C_FIELD(arg1, f32 *, 0xC) + ((temp_f1 * M2C_FIELD(temp_18, f32 *, 0)) + (temp_f5 * M2C_FIELD(temp_18, f32 *, 4)) + (temp_f3 * M2C_FIELD(temp_18, f32 *, 8)))) / ((temp_f1 * sp10) + (temp_f5 * temp_f7) + (temp_f3 * temp_f6));
    temp_f6_2 = temp_f6 * temp_f0_2;
    temp_f8 = sp10 * temp_f0_2;
    temp_f7_2 = temp_f7 * temp_f0_2;
    sp28 = temp_f6_2;
    sp20 = temp_f8;
    sp24 = temp_f7_2;
    M2C_FIELD(arg4, f32 *, 8) = (f32) (M2C_FIELD(temp_18, f32 *, 8) + temp_f6_2);
    M2C_FIELD(arg4, f32 *, 0) = (f32) (M2C_FIELD(temp_18, f32 *, 0) + temp_f8);
    M2C_FIELD(arg4, f32 *, 4) = (f32) (M2C_FIELD(temp_18, f32 *, 4) + temp_f7_2);
    temp_2_2 = M2C_FIELD(arg0, void **, 0);
    temp_f1_2 = (M2C_FIELD(arg1, f32 *, 0) * M2C_FIELD(temp_2_2, f32 *, 0)) + (M2C_FIELD(arg1, f32 *, 4) * M2C_FIELD(temp_2_2, f32 *, 4)) + (M2C_FIELD(arg1, f32 *, 8) * M2C_FIELD(temp_2_2, f32 *, 8)) + M2C_FIELD(arg1, f32 *, 0xC);
    var_3 = 0;
    if (D_004264A0 <= temp_f1_2) {
        var_3 = 1;
    } else if (temp_f1_2 <= -D_004264A0) {
        var_3 = -1;
    }
    if (var_3 != -1) {
        func_00234A60(arg2, M2C_FIELD(arg0, void **, 4), arg4, M2C_FIELD(arg0, s32 *, 0x20));
        func_00234A60(arg3, M2C_FIELD(arg0, void **, 0), arg4, M2C_FIELD(arg0, s32 *, 0x20));
        M2C_FIELD(arg2, void **, 0x1C) = arg1;
        M2C_FIELD(arg2, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
        var_3_2 = M2C_FIELD(arg0, s32 *, 0x18);
    } else {
        func_00234A60(arg2, M2C_FIELD(arg0, void **, 0), arg4, M2C_FIELD(arg0, s32 *, 0x20));
        func_00234A60(arg3, M2C_FIELD(arg0, void **, 4), arg4, M2C_FIELD(arg0, s32 *, 0x20));
        M2C_FIELD(arg2, void **, 0x1C) = arg1;
        M2C_FIELD(arg2, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
        var_3_2 = M2C_FIELD(arg0, s32 *, 0x1C);
    }
    M2C_FIELD(arg3, void **, 0x1C) = arg1;
    M2C_FIELD(arg3, s32 *, 0x18) = var_3_2;
}
