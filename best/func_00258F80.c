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

void func_00258F80(void *arg0, void *arg1, void *arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    s32 var_7;
    s32 var_8;
    void *temp_2;
    void *temp_3;

    var_7 = 0;
    if (M2C_FIELD(arg0, s32 *, 8) > 0) {
        var_8 = 0;
        do {
            var_7 += 1;
            temp_2 = var_8 + M2C_FIELD(arg0, s32 *, 0x10);
            temp_f1 = M2C_FIELD(temp_2, f32 *, 0);
            temp_f3 = M2C_FIELD(temp_2, f32 *, 4);
            temp_f7 = M2C_FIELD(temp_2, f32 *, 8);
            temp_f0 = (M2C_FIELD(arg1, f32 *, 0x18) * temp_f1) + (M2C_FIELD(arg1, f32 *, 0x1C) * temp_f3) + (M2C_FIELD(arg1, f32 *, 0x20) * temp_f7);
            temp_f5 = (M2C_FIELD(arg1, f32 *, 0) * temp_f1) + (M2C_FIELD(arg1, f32 *, 4) * temp_f3) + (M2C_FIELD(arg1, f32 *, 8) * temp_f7);
            temp_3 = var_8 + M2C_FIELD(arg0, s32 *, 0x14);
            temp_f4 = (M2C_FIELD(arg1, f32 *, 0xC) * temp_f1) + (M2C_FIELD(arg1, f32 *, 0x10) * temp_f3) + (M2C_FIELD(arg1, f32 *, 0x14) * temp_f7);
            sp18 = temp_f0;
            temp_f6 = temp_f5 + M2C_FIELD(arg2, f32 *, 0);
            sp10 = temp_f5;
            sp14 = temp_f4;
            sp8 = temp_f0 + M2C_FIELD(arg2, f32 *, 8);
            sp0 = temp_f6;
            sp4 = temp_f4 + M2C_FIELD(arg2, f32 *, 4);
            M2C_FIELD(temp_3, f32 *, 0) = temp_f6;
            M2C_FIELD(temp_3, f32 *, 4) = sp4;
            M2C_FIELD(temp_3, f32 *, 8) = sp8;
            var_8 += 0xC;
        } while (var_7 < M2C_FIELD(arg0, s32 *, 8));
    }
}
