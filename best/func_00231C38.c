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

f32 func_001CF4C0(void *, f32, f32, f32, f32, f32, f32, f32, f32, f32); /* extern */
M2C_UNK *func_002B1FC0(M2C_UNK);                    /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */
extern f32 D_004265E4;
extern f32 D_00478468;

void *func_00231C38(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, s32 *arg5) {
    M2C_UNK *temp_2;
    M2C_UNK *temp_2_2;
    M2C_UNK *var_2;
    M2C_UNK *var_2_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;

    M2C_FIELD(arg0, f32 *, 0) = 0.0f;
    M2C_FIELD(arg0, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x10) = -1;
    var_2 = func_002B1FC0(0xC);
    if (var_2 == NULL) {
        var_2 = func_003D2910(0xC);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = var_2;
    *var_2 = var_2;
    temp_2 = M2C_FIELD(arg0, M2C_UNK **, 0x14);
    M2C_FIELD(temp_2, M2C_UNK **, 4) = temp_2;
    var_2_2 = func_002B1FC0(0xC);
    if (var_2_2 == NULL) {
        var_2_2 = func_003D2910(0xC);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = var_2_2;
    *var_2_2 = var_2_2;
    temp_2_2 = M2C_FIELD(arg0, M2C_UNK **, 0x18);
    M2C_FIELD(temp_2_2, M2C_UNK **, 4) = temp_2_2;
    temp_f1 = M2C_FIELD(arg1, f32 *, 0);
    temp_f5 = M2C_FIELD(arg1, f32 *, 4);
    temp_f3 = M2C_FIELD(arg1, f32 *, 8);
    temp_f2 = temp_f1 - M2C_FIELD(arg2, f32 *, 0);
    temp_f1_2 = temp_f1 - M2C_FIELD(arg3, f32 *, 0);
    temp_f6 = temp_f3 - M2C_FIELD(arg3, f32 *, 8);
    temp_f0 = temp_f5 - M2C_FIELD(arg2, f32 *, 4);
    temp_f5_2 = temp_f5 - M2C_FIELD(arg3, f32 *, 4);
    temp_f3_2 = temp_f3 - M2C_FIELD(arg2, f32 *, 8);
    temp_f4 = (temp_f2 * temp_f5_2) - (temp_f0 * temp_f1_2);
    temp_f1_3 = (temp_f3_2 * temp_f1_2) - (temp_f2 * temp_f6);
    temp_f0_2 = (temp_f0 * temp_f6) - (temp_f3_2 * temp_f5_2);
    M2C_FIELD(arg0, f32 *, 8) = temp_f4;
    M2C_FIELD(arg0, f32 *, 4) = temp_f1_3;
    M2C_FIELD(arg0, f32 *, 0) = temp_f0_2;
    temp_f0_3 = func_001CF4C0(arg0, temp_f0_2, temp_f1_3, temp_f4, temp_f2, temp_f0, temp_f3_2, temp_f1_2, temp_f5_2, temp_f6);
    if (!(temp_f0_3 < D_00478468)) {
        M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) / temp_f0_3);
        M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) / temp_f0_3);
        M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) / temp_f0_3);
    } else {
        M2C_FIELD(arg0, f32 *, 0) = 0.0f;
        M2C_FIELD(arg0, f32 *, 4) = 0.0f;
        M2C_FIELD(arg0, f32 *, 8) = 0.0f;
    }
    if (fabsf(temp_f0_3) < D_004265E4) {
        *arg5 = 0;
    } else {
        *arg5 = 1;
        temp_f7 = M2C_FIELD(arg0, f32 *, 0);
        temp_f8 = M2C_FIELD(arg0, f32 *, 4);
        temp_f9 = M2C_FIELD(arg0, f32 *, 8);
        if ((((M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(arg4, f32 *, 0)) * temp_f7) + ((M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(arg4, f32 *, 4)) * temp_f8) + ((M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(arg4, f32 *, 8)) * temp_f9)) < 0.0f) {
            M2C_FIELD(arg0, f32 *, 0) = (f32) -temp_f7;
            M2C_FIELD(arg0, f32 *, 4) = (f32) -temp_f8;
            M2C_FIELD(arg0, f32 *, 8) = (f32) -temp_f9;
        }
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) ((M2C_FIELD(arg0, f32 *, 0) * M2C_FIELD(arg1, f32 *, 0)) + (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg1, f32 *, 4)) + (M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8)));
    }
    return arg0;
}
