/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s32 func_00244DE0(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5, void *arg6) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f14;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f8;
    f32 temp_f9;

    temp_f10 = M2C_FIELD(arg1, f32 *, 4);
    temp_f11 = M2C_FIELD(arg3, f32 *, 4);
    temp_f14 = M2C_FIELD(arg1, f32 *, 0);
    temp_f13 = M2C_FIELD(arg3, f32 *, 0);
    temp_f12 = M2C_FIELD(arg3, f32 *, 8);
    temp_f4 = M2C_FIELD(arg1, f32 *, 8);
    temp_f6 = M2C_FIELD(arg4, f32 *, 4);
    temp_f5 = M2C_FIELD(arg4, f32 *, 0);
    temp_f7 = M2C_FIELD(arg4, f32 *, 8);
    temp_f1 = -(M2C_FIELD(arg1, f32 *, 0xC) + ((temp_f14 * temp_f13) + (temp_f10 * temp_f11) + (temp_f4 * temp_f12))) / ((temp_f14 * temp_f5) + (temp_f10 * temp_f6) + (temp_f4 * temp_f7));
    temp_f5_2 = temp_f5 * temp_f1;
    temp_f6_2 = temp_f6 * temp_f1;
    temp_f7_2 = temp_f7 * temp_f1;
    temp_f13_2 = temp_f13 + temp_f5_2;
    sp10 = temp_f5_2;
    temp_f11_2 = temp_f11 + temp_f6_2;
    sp14 = temp_f6_2;
    temp_f12_2 = temp_f12 + temp_f7_2;
    sp18 = temp_f7_2;
    temp_f2 = temp_f13_2 - M2C_FIELD(arg2, f32 *, 0);
    sp0 = temp_f13_2;
    temp_f8 = temp_f11_2 - M2C_FIELD(arg2, f32 *, 4);
    sp4 = temp_f11_2;
    sp8 = temp_f12_2;
    temp_f9 = temp_f12_2 - M2C_FIELD(arg2, f32 *, 8);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x14);
    temp_f0_2 = temp_f0 * temp_f0;
    if (((temp_f2 * temp_f2) + (temp_f8 * temp_f8) + (temp_f9 * temp_f9)) < (temp_f0_2 * temp_f0_2)) {
        if (temp_f1 < 0.0f) {
            M2C_FIELD(arg6, f32 *, 0) = temp_f14;
            M2C_FIELD(arg6, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
            M2C_FIELD(arg6, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
            M2C_FIELD(arg5, f32 *, 8) = temp_f12_2;
            M2C_FIELD(arg5, f32 *, 0) = temp_f13_2;
            M2C_FIELD(arg5, f32 *, 4) = temp_f11_2;
            return 1;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
