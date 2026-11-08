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

f32 func_002A4160(f32 *);                           /* extern */

void func_00288BD0(void *arg1, void *arg2, void *arg3) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;

    temp_f8 = M2C_FIELD(arg3, f32 *, 0);
    temp_f7 = M2C_FIELD(arg3, f32 *, 4);
    temp_f5 = M2C_FIELD(arg3, f32 *, 8);
    sp0 = M2C_FIELD(arg1, f32 *, 0);
    sp4 = M2C_FIELD(arg1, f32 *, 4);
    sp8 = M2C_FIELD(arg1, f32 *, 8);
    sp20 = temp_f8;
    sp24 = temp_f7;
    sp28 = temp_f5;
    sp10 = temp_f8;
    sp14 = temp_f7;
    sp18 = temp_f5;
    sp2C = -((temp_f8 * M2C_FIELD(arg2, f32 *, 0)) + (temp_f7 * M2C_FIELD(arg2, f32 *, 4)) + (temp_f5 * M2C_FIELD(arg2, f32 *, 8)));
    temp_f0 = func_002A4160(&sp20);
    temp_f2 = sp20 * temp_f0;
    temp_f5_2 = sp2C * temp_f0;
    sp20 = temp_f2;
    sp24 *= temp_f0;
    temp_f2_2 = sp0 * temp_f2;
    sp28 *= temp_f0;
    sp2C = temp_f5_2;
    sp30 = sp0;
    sp38 = sp8;
    sp40 = sp0;
    sp48 = sp8;
    temp_f0_2 = temp_f2_2 + (sp4 * M2C_FIELD(&sp20, f32 *, 4)) + (sp8 * M2C_FIELD(&sp20, f32 *, 8)) + temp_f5_2;
    temp_f6 = sp4 - temp_f0_2;
    temp_f4 = sp4 + temp_f0_2;
    sp44 = temp_f6;
    sp34 = temp_f4;
    temp_f1 = M2C_FIELD(&sp20, f32 *, 4);
    temp_f3 = sp8 * M2C_FIELD(&sp20, f32 *, 8);
    if (!(fabsf(temp_f2_2 + (temp_f4 * temp_f1) + temp_f3 + temp_f5_2) < fabsf(temp_f2_2 + (temp_f6 * temp_f1) + temp_f3 + temp_f5_2))) {
        sp4 = temp_f6;
    } else {
        sp4 = temp_f4;
    }
    M2C_FIELD(arg1, f32 *, 0) = sp0;
    M2C_FIELD(arg1, f32 *, 8) = sp8;
    M2C_FIELD(arg1, f32 *, 4) = sp4;
}
