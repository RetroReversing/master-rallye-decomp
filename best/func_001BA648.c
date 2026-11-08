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

void *func_001FDBA8(s32, s32);                      /* extern */
s32 func_001FDE60();                                /* extern */

void func_001BA648(s32 arg0, void *arg1, s32 *arg2, s32 *arg3) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    s32 temp_17;
    s32 temp_2_2;
    s32 temp_7;
    u32 temp_9;
    void *temp_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_3;
    void *temp_3_2;

    temp_2 = func_001FDBA8(func_001FDE60(), arg0 + 8);
    if (temp_2 != NULL) {
        temp_17 = (s32) ((M2C_FIELD(temp_2, s32 *, 4) - M2C_FIELD(temp_2, s32 *, 0)) * 0xCCCCCCCD) >> 4;
        if (temp_17 >= 2) {
            temp_2_2 = func_001E3650(func_001E4280(), arg0 + 0x3C);
            temp_7 = temp_2_2 + 1;
            temp_9 = temp_2_2 - 1;
            *arg2 = temp_2_2;
            if (temp_7 < temp_17) {
                if ((temp_9 >> 0x1F) != 0) {
                    *arg3 = temp_7;
                } else {
                    temp_f2 = M2C_FIELD(arg1, f32 *, 0);
                    temp_f5 = M2C_FIELD(arg1, f32 *, 4);
                    temp_f6 = M2C_FIELD(arg1, f32 *, 8);
                    temp_2_3 = M2C_FIELD(temp_2, s32 *, 0) + (temp_7 * 0x50);
                    temp_3 = temp_2_3 + 0x40;
                    temp_f4 = M2C_FIELD(temp_2_3, f32 *, 0x40) - temp_f2;
                    temp_f1 = M2C_FIELD(temp_3, f32 *, 8) - temp_f6;
                    temp_f0 = M2C_FIELD(temp_3, f32 *, 4) - temp_f5;
                    temp_2_4 = M2C_FIELD(temp_2, s32 *, 0) + (temp_9 * 0x50);
                    temp_3_2 = temp_2_4 + 0x40;
                    temp_f0_2 = M2C_FIELD(temp_2_4, f32 *, 0x40) - temp_f2;
                    temp_f3 = M2C_FIELD(temp_3_2, f32 *, 4) - temp_f5;
                    temp_f1_2 = M2C_FIELD(temp_3_2, f32 *, 8) - temp_f6;
                    if (((temp_f4 * temp_f4) + (temp_f0 * temp_f0) + (temp_f1 * temp_f1)) < ((temp_f0_2 * temp_f0_2) + (temp_f3 * temp_f3) + (temp_f1_2 * temp_f1_2))) {
                        *arg3 = temp_7;
                    } else {
                        goto block_8;
                    }
                }
            } else {
block_8:
                *arg3 = (s32) temp_9;
            }
        }
    }
}
