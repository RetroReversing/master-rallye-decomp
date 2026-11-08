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

M2C_UNK func_00271EB0(s32, M2C_UNK **, s32, s32 *, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00271FC8(void *, M2C_UNK **, s32, s32 *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK *func_002B1FC0(M2C_UNK);                    /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */

void *func_0027C0D8(void *arg0, void *arg1) {
    M2C_UNK *sp20;
    M2C_UNK *sp40;
    M2C_UNK *sp50;
    M2C_UNK *temp_2;
    M2C_UNK *temp_2_3;
    M2C_UNK *temp_9;
    M2C_UNK *temp_9_2;
    M2C_UNK *var_2;
    M2C_UNK *var_2_2;
    s32 *temp_2_2;
    s32 *temp_2_4;

    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    var_2 = func_002B1FC0(0xC);
    if (var_2 == NULL) {
        var_2 = func_003D2910(0xC);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = var_2;
    *var_2 = var_2;
    temp_2 = M2C_FIELD(arg0, M2C_UNK **, 0x14);
    M2C_FIELD(temp_2, M2C_UNK **, 4) = temp_2;
    temp_2_2 = M2C_FIELD(arg1, s32 **, 0x14);
    temp_9 = M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x14), M2C_UNK **, 0);
    sp20 = temp_9;
    func_00271EB0(arg0 + 0x14, &sp20, *temp_2_2, temp_2_2, 0, temp_9, temp_9);
    var_2_2 = func_002B1FC0(0xC);
    if (var_2_2 == NULL) {
        var_2_2 = func_003D2910(0xC);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = var_2_2;
    *var_2_2 = var_2_2;
    temp_2_3 = M2C_FIELD(arg0, M2C_UNK **, 0x18);
    M2C_FIELD(temp_2_3, M2C_UNK **, 4) = temp_2_3;
    temp_2_4 = M2C_FIELD(arg1, s32 **, 0x18);
    temp_9_2 = M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x18), M2C_UNK **, 0);
    sp40 = temp_9_2;
    sp50 = temp_9_2;
    func_00271FC8(arg0 + 0x18, &sp50, *temp_2_4, temp_2_4, 0, temp_9_2);
    return arg0;
}
