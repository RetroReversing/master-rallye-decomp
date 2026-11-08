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

M2C_UNK *func_002B1FC0(M2C_UNK);                    /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */
extern M2C_UNK D_00426508;

void *func_00229580(void *arg0, void *arg1) {
    M2C_UNK *temp_2;
    M2C_UNK *temp_3;
    M2C_UNK *var_2;
    M2C_UNK *var_2_2;
    void *temp_4;

    var_2 = func_002B1FC0(0xC);
    if (var_2 == NULL) {
        var_2 = func_003D2910(0xC);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = var_2;
    *var_2 = var_2;
    temp_2 = M2C_FIELD(arg0, M2C_UNK **, 0);
    M2C_FIELD(temp_2, M2C_UNK **, 4) = temp_2;
    var_2_2 = func_002B1FC0(0xC);
    if (var_2_2 == NULL) {
        var_2_2 = func_003D2910(0xC);
    }
    M2C_FIELD(arg0, M2C_UNK **, 4) = var_2_2;
    *var_2_2 = var_2_2;
    temp_4 = arg0 + 8;
    temp_3 = M2C_FIELD(arg0, M2C_UNK **, 4);
    M2C_FIELD(temp_3, M2C_UNK **, 4) = temp_3;
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_4, s32 *, 0x10) = -1;
    M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(temp_4, M2C_UNK32 *, 0xC) = 0;
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(temp_4, M2C_UNK32 *, 0xC) = (M2C_UNK32) M2C_FIELD(arg1, M2C_UNK32 *, 0xC);
    M2C_FIELD(temp_4, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    return arg0;
}
