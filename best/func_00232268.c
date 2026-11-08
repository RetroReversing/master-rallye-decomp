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

extern M2C_UNK D_00426508;
extern f32 D_004265E4;

void *func_00232268(void *arg0, void *arg1, void *arg2, s32 *arg3) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;
    void *temp_3;

    temp_f9 = (M2C_FIELD(arg2, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg2, f32 *, 4) * M2C_FIELD(arg1, f32 *, 4)) + (M2C_FIELD(arg2, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8));
    if ((-D_004265E4 < temp_f9) && (temp_f9 < D_004265E4)) {
        *arg3 = 0;
        M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    } else {
        temp_3 = arg2 + 0xC;
        *arg3 = 1;
        temp_f7 = M2C_FIELD(arg2, f32 *, 0xC);
        temp_f8 = M2C_FIELD(temp_3, f32 *, 4);
        temp_f6 = M2C_FIELD(temp_3, f32 *, 8);
        temp_f0 = (M2C_FIELD(arg1, f32 *, 0xC) - ((temp_f7 * M2C_FIELD(arg1, f32 *, 0)) + (temp_f8 * M2C_FIELD(arg1, f32 *, 4)) + (temp_f6 * M2C_FIELD(arg1, f32 *, 8)))) / temp_f9;
        temp_f4 = M2C_FIELD(arg2, f32 *, 8) * temp_f0;
        temp_f3 = M2C_FIELD(arg2, f32 *, 4) * temp_f0;
        temp_f5 = M2C_FIELD(arg2, f32 *, 0) * temp_f0;
        temp_f6_2 = temp_f6 + temp_f4;
        sp18 = temp_f4;
        temp_f8_2 = temp_f8 + temp_f3;
        sp14 = temp_f3;
        temp_f7_2 = temp_f7 + temp_f5;
        sp10 = temp_f5;
        M2C_FIELD(arg0, f32 *, 8) = temp_f6_2;
        M2C_FIELD(arg0, f32 *, 4) = temp_f8_2;
        M2C_FIELD(arg0, f32 *, 0) = temp_f7_2;
        sp0 = temp_f7_2;
        sp4 = temp_f8_2;
        sp8 = temp_f6_2;
    }
    return arg0;
}
