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

void func_00237610(void *arg0, void *arg1, void *arg2, f32 *arg3) {
    f32 temp_f0;
    f32 temp_f1;
    s32 var_8;
    void **temp_8;
    void **temp_8_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_3;

    temp_2 = arg0 + 4;
    temp_f1 = (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(temp_2, f32 *, 4) * M2C_FIELD(arg1, f32 *, 4)) + (M2C_FIELD(temp_2, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8)) + M2C_FIELD(temp_2, f32 *, 0xC);
    var_8 = 0;
    if (D_004264A0 <= temp_f1) {
        var_8 = 1;
    } else if (temp_f1 <= -D_004264A0) {
        var_8 = -1;
    }
    temp_3 = arg0 + 4;
    if ((u32) (var_8 + 1) < 2U) {
        if (M2C_FIELD(temp_3, s32 *, 0x10) >= 0) {
            temp_f0 = fabsf((M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(temp_3, f32 *, 4) * M2C_FIELD(arg1, f32 *, 4)) + (M2C_FIELD(temp_3, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8)) + M2C_FIELD(temp_3, f32 *, 0xC));
            if (temp_f0 < *arg3) {
                *arg3 = temp_f0;
                M2C_FIELD(arg2, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 4);
                M2C_FIELD(arg2, f32 *, 4) = (f32) M2C_FIELD(temp_3, f32 *, 4);
                M2C_FIELD(arg2, f32 *, 8) = (f32) M2C_FIELD(temp_3, f32 *, 8);
                M2C_FIELD(arg2, f32 *, 0xC) = (f32) M2C_FIELD(temp_3, f32 *, 0xC);
                M2C_FIELD(arg2, s32 *, 0x10) = (s32) M2C_FIELD(temp_3, s32 *, 0x10);
            }
        }
        if (var_8 == -1) {
            temp_8 = M2C_FIELD(arg0, void ***, 0x18);
            temp_2_2 = *temp_8;
            M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, void **), 0x24)(temp_8 + M2C_FIELD(temp_2_2, s16 *, 0x20), temp_8);
        }
    } else if (var_8 == 1) {
        temp_8_2 = M2C_FIELD(arg0, void ***, 0x1C);
        temp_2_3 = *temp_8_2;
        M2C_FIELD(temp_2_3, M2C_UNK (**)(void *, void **), 0x24)(temp_8_2 + M2C_FIELD(temp_2_3, s16 *, 0x20), temp_8_2);
    }
}
