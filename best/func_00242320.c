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

void func_00242320(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_7;

    temp_7 = M2C_FIELD(arg2, void **, 0);
    temp_2 = M2C_FIELD(arg1, void **, 0);
    temp_f11 = M2C_FIELD(temp_7, f32 *, 0);
    temp_f12 = M2C_FIELD(temp_7, f32 *, 4);
    temp_f3 = M2C_FIELD(temp_2, f32 *, 0);
    temp_f4 = M2C_FIELD(temp_2, f32 *, 4);
    temp_f0 = temp_f3 - temp_f11;
    temp_f10 = M2C_FIELD(temp_7, f32 *, 8);
    temp_f1 = temp_f4 - temp_f12;
    temp_f6 = M2C_FIELD(temp_2, f32 *, 8);
    temp_f5 = M2C_FIELD(arg0, f32 *, 4);
    temp_f2 = temp_f6 - temp_f10;
    if (!(((temp_f0 * temp_f0) + (temp_f1 * temp_f1) + (temp_f2 * temp_f2)) < temp_f5)) {
        temp_3 = M2C_FIELD(arg2, void **, 4);
        temp_f7 = M2C_FIELD(temp_3, f32 *, 0);
        temp_f8 = M2C_FIELD(temp_3, f32 *, 4);
        temp_f0_2 = temp_f3 - temp_f7;
        temp_f9 = M2C_FIELD(temp_3, f32 *, 8);
        temp_f1_2 = temp_f4 - temp_f8;
        temp_f2_2 = temp_f6 - temp_f9;
        if (!(((temp_f0_2 * temp_f0_2) + (temp_f1_2 * temp_f1_2) + (temp_f2_2 * temp_f2_2)) < temp_f5)) {
            temp_2_2 = M2C_FIELD(arg1, void **, 4);
            temp_f3_2 = M2C_FIELD(temp_2_2, f32 *, 0);
            temp_f4_2 = M2C_FIELD(temp_2_2, f32 *, 4);
            temp_f0_3 = temp_f3_2 - temp_f11;
            temp_f6_2 = M2C_FIELD(temp_2_2, f32 *, 8);
            temp_f1_3 = temp_f4_2 - temp_f12;
            temp_f2_3 = temp_f6_2 - temp_f10;
            if (!(((temp_f0_3 * temp_f0_3) + (temp_f1_3 * temp_f1_3) + (temp_f2_3 * temp_f2_3)) < temp_f5)) {
                temp_f0_4 = temp_f3_2 - temp_f7;
                temp_f1_4 = temp_f4_2 - temp_f8;
                temp_f2_4 = temp_f6_2 - temp_f9;
                if (((temp_f0_4 * temp_f0_4) + (temp_f1_4 * temp_f1_4) + (temp_f2_4 * temp_f2_4)) < temp_f5) {
                    M2C_FIELD(arg1, void **, 4) = temp_7;
                    M2C_FIELD(arg1, s32 *, 0x1C) = (s32) M2C_FIELD(arg2, s32 *, 0x18);
                }
                return;
            }
            M2C_FIELD(arg1, void **, 4) = temp_3;
            M2C_FIELD(arg1, s32 *, 0x1C) = (s32) M2C_FIELD(arg2, s32 *, 0x1C);
            return;
        }
        M2C_FIELD(arg1, void **, 0) = temp_7;
        M2C_FIELD(arg1, s32 *, 0x18) = (s32) M2C_FIELD(arg2, s32 *, 0x18);
        return;
    }
    M2C_FIELD(arg1, void **, 0) = (void *) M2C_FIELD(arg2, void **, 4);
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) M2C_FIELD(arg2, s32 *, 0x1C);
}
