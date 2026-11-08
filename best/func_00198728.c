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

void func_00198728(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f3;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 var_f0;
    f32 var_f6;
    s32 temp_10;
    s32 temp_10_2;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_4;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_5;
    s32 temp_5_3;
    s32 var_3;
    s32 var_3_2;
    s32 var_3_3;
    s32 var_4;
    void *temp_2_3;
    void *temp_2_5;
    void *temp_5_2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x34);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x24);
    if (temp_f1 < temp_f2) {
        temp_f3 = M2C_FIELD(arg0, f32 *, 0x38);
        if (temp_f3 < M2C_FIELD(arg0, f32 *, 0x30)) {
            temp_f2_2 = temp_f2 / temp_f1;
            temp_10 = M2C_BITWISE(s32, temp_f2_2) >> 0x1F;
            temp_5 = M2C_BITWISE(s32, temp_f2_2) & 0x7FFFFF;
            temp_2 = ((M2C_BITWISE(u32, temp_f2_2) >> 0x17) & 0xFF) - 0x7F;
            temp_4 = ~(temp_2 >> 0x1F);
            var_3 = (((u32) ((temp_5 | 0x800000) << 8) >> (0x1F - temp_2)) & temp_4) ^ temp_10;
            if (!((temp_5 << 8) & ((1 << (0x1F - (temp_2 & temp_4))) - 1))) {
                var_3 -= temp_10;
            }
            temp_f2_3 = (f32) var_3;
            temp_5_2 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
            M2C_FIELD(arg0, f32 *, 0x38) = (f32) (temp_f3 + (M2C_FIELD(arg0, f32 *, 0x2C) * temp_f2_3));
            temp_2_2 = (s32) ((M2C_FIELD((temp_5_2 + 0x174), s32 *, 4) - M2C_FIELD(temp_5_2, s32 *, 0x174)) * 0xAAAAAAAB) >> 4;
            if (temp_2_2 > 0) {
                var_3_2 = temp_2_2;
                var_4 = 0;
                do {
                    var_3_2 -= 1;
                    temp_2_3 = M2C_FIELD(temp_5_2, s32 *, 0x174) + var_4;
                    temp_f0 = M2C_FIELD(temp_2_3, f32 *, 0x10);
                    var_4 += 0x30;
                    M2C_FIELD(temp_2_3, f32 *, 0x10) = (f32) (temp_f0 - (M2C_FIELD(arg0, f32 *, 0x2C) * temp_f2_3));
                } while (var_3_2 != 0);
            }
        }
    }
    temp_f2_4 = M2C_FIELD(arg0, f32 *, 0x18);
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 8);
    if (temp_f1_2 < temp_f2_4) {
        temp_f5 = M2C_FIELD(arg0, f32 *, 0x1C);
        if (temp_f5 < M2C_FIELD(arg0, f32 *, 0x14)) {
            temp_f2_5 = temp_f2_4 / temp_f1_2;
            temp_10_2 = M2C_BITWISE(s32, temp_f2_5) >> 0x1F;
            temp_5_3 = M2C_BITWISE(s32, temp_f2_5) & 0x7FFFFF;
            temp_2_4 = ((M2C_BITWISE(u32, temp_f2_5) >> 0x17) & 0xFF) - 0x7F;
            temp_4_2 = ~(temp_2_4 >> 0x1F);
            var_3_3 = (((u32) ((temp_5_3 | 0x800000) << 8) >> (0x1F - temp_2_4)) & temp_4_2) ^ temp_10_2;
            if (!((temp_5_3 << 8) & ((1 << (0x1F - (temp_2_4 & temp_4_2))) - 1))) {
                var_3_3 -= temp_10_2;
            }
            temp_2_5 = M2C_FIELD(arg0, void **, 0);
            temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x10) * (f32) var_3_3;
            M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
            var_f6 = 5000.0f;
            M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (temp_f5 + temp_f0_2);
            temp_f2_6 = M2C_FIELD(temp_2_5, f32 *, 0x68);
            temp_f5_2 = temp_f2_6 - temp_f0_2;
            temp_f1_3 = M2C_FIELD(temp_2_5, f32 *, 0x70) * (1.0f - (temp_f0_2 / temp_f2_6));
            if (temp_f5_2 > 5000.0f) {
                var_f6 = temp_f5_2;
            }
            var_f0 = 1000.0f;
            M2C_FIELD(temp_2_5, f32 *, 0x68) = var_f6;
            if (temp_f1_3 > 1000.0f) {
                var_f0 = temp_f1_3;
            }
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x70) = var_f0;
        }
    }
}
