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

void func_002EDC88(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f14;
    f32 temp_f15;
    f32 temp_f16;
    f32 temp_f17;
    f32 temp_f18;
    f32 temp_f19;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;
    void *temp_2;

    temp_f12 = M2C_FIELD(arg3, f32 *, 0);
    temp_f16 = M2C_FIELD(arg3, f32 *, 8);
    temp_f13 = M2C_FIELD(arg3, f32 *, 4);
    temp_f17 = M2C_FIELD(arg5, f32 *, 0) - temp_f12;
    temp_f18 = M2C_FIELD(arg5, f32 *, 8) - temp_f16;
    temp_f19 = M2C_FIELD(arg2, f32 *, 4);
    temp_f15 = M2C_FIELD(arg5, f32 *, 4) - temp_f13;
    temp_f21 = M2C_FIELD(arg2, f32 *, 8);
    temp_f20 = M2C_FIELD(arg2, f32 *, 0);
    temp_f8 = (temp_f19 * temp_f18) - (temp_f21 * temp_f15);
    sp10 = temp_f17;
    temp_f11 = M2C_FIELD(arg4, f32 *, 4) - temp_f13;
    sp14 = temp_f15;
    temp_f14 = M2C_FIELD(arg4, f32 *, 0) - temp_f12;
    sp18 = temp_f18;
    temp_f9 = (temp_f21 * temp_f17) - (temp_f20 * temp_f18);
    sp20 = temp_f8;
    sp4 = temp_f11;
    sp0 = temp_f14;
    temp_f6 = M2C_FIELD(arg4, f32 *, 8) - temp_f16;
    sp24 = temp_f9;
    temp_f4 = (temp_f20 * temp_f15) - (temp_f19 * temp_f17);
    sp8 = temp_f6;
    temp_f10 = (temp_f14 * temp_f8) + (temp_f11 * temp_f9) + (temp_f6 * temp_f4);
    sp28 = temp_f4;
    if ((temp_f10 >= 1.1920929e-7f) && (temp_f3 = M2C_FIELD(arg1, f32 *, 4) - temp_f13, temp_f5 = M2C_FIELD(arg1, f32 *, 0) - temp_f12, temp_f7 = M2C_FIELD(arg1, f32 *, 8) - temp_f16, sp34 = temp_f3, sp30 = temp_f5, temp_f8_2 = (temp_f5 * temp_f8) + (temp_f3 * temp_f9) + (temp_f7 * temp_f4), sp38 = temp_f7, (temp_f8_2 >= 0.0f)) && (temp_f8_2 <= temp_f10) && (temp_f4_2 = (temp_f7 * temp_f14) - (temp_f5 * temp_f6), temp_f7_2 = (temp_f3 * temp_f6) - (temp_f7 * temp_f11), sp44 = temp_f4_2, sp40 = temp_f7_2, temp_f5_2 = (temp_f5 * temp_f11) - (temp_f3 * temp_f14), temp_f0 = (temp_f20 * temp_f7_2) + (temp_f19 * temp_f4_2) + (temp_f21 * temp_f5_2), sp48 = temp_f5_2, (temp_f0 >= 0.0f))) {
        if ((temp_f8_2 + temp_f0) <= temp_f10) {
            temp_f1 = ((temp_f17 * temp_f7_2) + (temp_f15 * temp_f4_2) + (temp_f18 * temp_f5_2)) * (1.0f / temp_f10);
            if (temp_f1 >= 0.0f) {
                temp_2 = arg0 + 0x28;
                if (temp_f1 < M2C_FIELD(arg0, f32 *, 0x18)) {
                    M2C_FIELD(arg0, f32 *, 0x18) = temp_f1;
                    M2C_FIELD(arg0, f32 *, 0x28) = (f32) ((temp_f11 * temp_f18) - (temp_f6 * temp_f15));
                    M2C_FIELD(temp_2, f32 *, 8) = (f32) ((temp_f14 * temp_f15) - (temp_f11 * temp_f17));
                    M2C_FIELD(temp_2, f32 *, 4) = (f32) ((temp_f6 * temp_f17) - (temp_f14 * temp_f18));
                }
            }
        }
    }
}
