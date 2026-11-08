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

extern f32 D_004264A0;
extern s32 D_00426610;

void func_002365E0(void *arg0, void *arg1, void *arg2, f32 *arg3) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    s32 var_8;
    s32 var_9;
    u8 temp_11;
    void *temp_3;

    if (D_00426610 != 0) {
        temp_11 = M2C_FIELD(arg0, u8 *, 3);
        var_8 = 0;
        if (temp_11 != 0) {
loop_3:
            var_9 = 0;
            temp_f3 = M2C_FIELD(arg1, f32 *, 0);
            temp_f5 = M2C_FIELD(arg1, f32 *, 4);
            temp_f4 = M2C_FIELD(arg1, f32 *, 8);
            temp_3 = D_00426610 + ((var_8 + (M2C_FIELD(arg0, s32 *, 0) & 0xFFFFFF)) * 0x14);
            temp_f1 = (M2C_FIELD(temp_3, f32 *, 0) * temp_f3) + (M2C_FIELD(temp_3, f32 *, 4) * temp_f5) + (M2C_FIELD(temp_3, f32 *, 8) * temp_f4) + M2C_FIELD(temp_3, f32 *, 0xC);
            if (D_004264A0 <= temp_f1) {
                var_9 = 1;
            } else if (temp_f1 <= -D_004264A0) {
                var_9 = -1;
            }
            if ((u32) (var_9 + 1) >= 2U) {
                var_8 += 1;
            } else {
                var_8 += 1;
                if (M2C_FIELD(arg2, s32 *, 0x10) >= 0) {
                    temp_f0 = fabsf((M2C_FIELD(temp_3, f32 *, 0) * temp_f3) + (M2C_FIELD(temp_3, f32 *, 4) * temp_f5) + (M2C_FIELD(temp_3, f32 *, 8) * temp_f4) + M2C_FIELD(temp_3, f32 *, 0xC));
                    if (temp_f0 < *arg3) {
                        *arg3 = temp_f0;
                        M2C_FIELD(arg2, f32 *, 0) = (f32) M2C_FIELD(temp_3, f32 *, 0);
                        M2C_FIELD(arg2, f32 *, 4) = (f32) M2C_FIELD(temp_3, f32 *, 4);
                        M2C_FIELD(arg2, f32 *, 8) = (f32) M2C_FIELD(temp_3, f32 *, 8);
                        M2C_FIELD(arg2, f32 *, 0xC) = (f32) M2C_FIELD(temp_3, f32 *, 0xC);
                        M2C_FIELD(arg2, s32 *, 0x10) = (s32) M2C_FIELD(temp_3, s32 *, 0x10);
                    }
                }
            }
            if (var_8 < (s32) temp_11) {
                goto loop_3;
            }
        }
    }
}
