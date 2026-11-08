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

void *D_002AD408(M2C_UNK);                          /* extern */
M2C_UNK *func_002B1FC0(M2C_UNK);                    /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */

void *func_00229780(void *arg0, void *arg1) {
    M2C_UNK *sp10;
    M2C_UNK **temp_2;
    M2C_UNK **temp_2_3;
    M2C_UNK *var_18;
    M2C_UNK *var_18_2;
    M2C_UNK *var_2;
    M2C_UNK *var_2_2;
    M2C_UNK *var_4;
    M2C_UNK *var_4_2;
    void *temp_21;
    void *temp_22;
    void *temp_2_2;
    void *temp_2_4;
    void *var_16;
    void *var_16_2;

    temp_2 = M2C_FIELD(arg1, M2C_UNK ***, 0);
    var_18 = *temp_2;
    if (var_18 != temp_2) {
        var_16 = M2C_FIELD(var_18, void **, 8);
loop_2:
        temp_2_2 = D_002AD408(0xC);
        M2C_FIELD(temp_2_2, f32 *, 0) = (f32) M2C_FIELD(var_16, f32 *, 0);
        M2C_FIELD(temp_2_2, f32 *, 4) = (f32) M2C_FIELD(var_16, f32 *, 4);
        sp10 = M2C_FIELD(arg0, M2C_UNK **, 0);
        M2C_FIELD(temp_2_2, f32 *, 8) = (f32) M2C_FIELD(var_16, f32 *, 8);
        var_4 = func_002B1FC0(0xC);
        var_2 = var_4 + 8;
        if (var_4 == NULL) {
            var_4 = func_003D2910(0xC);
            var_2 = var_4 + 8;
        }
        if (var_2 != NULL) {
            M2C_FIELD(var_4, void **, 8) = temp_2_2;
        }
        M2C_FIELD(var_4, M2C_UNK **, 0) = sp10;
        M2C_FIELD(var_4, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp10, M2C_UNK **, 4);
        *M2C_FIELD(sp10, M2C_UNK **, 4) = var_4;
        M2C_FIELD(sp10, M2C_UNK **, 4) = var_4;
        var_18 = *var_18;
        if (var_18 != M2C_FIELD(arg1, M2C_UNK ***, 0)) {
            var_16 = M2C_FIELD(var_18, void **, 8);
            goto loop_2;
        }
    }
    temp_2_3 = M2C_FIELD(arg1, M2C_UNK ***, 4);
    temp_22 = arg0 + 8;
    var_18_2 = *temp_2_3;
    temp_21 = arg1 + 8;
    if (var_18_2 != temp_2_3) {
        var_16_2 = M2C_FIELD(var_18_2, void **, 8);
loop_11:
        temp_2_4 = D_002AD408(0xC);
        M2C_FIELD(temp_2_4, f32 *, 0) = (f32) M2C_FIELD(var_16_2, f32 *, 0);
        M2C_FIELD(temp_2_4, f32 *, 4) = (f32) M2C_FIELD(var_16_2, f32 *, 4);
        sp10 = M2C_FIELD(arg0, M2C_UNK **, 4);
        M2C_FIELD(temp_2_4, f32 *, 8) = (f32) M2C_FIELD(var_16_2, f32 *, 8);
        var_4_2 = func_002B1FC0(0xC);
        var_2_2 = var_4_2 + 8;
        if (var_4_2 == NULL) {
            var_4_2 = func_003D2910(0xC);
            var_2_2 = var_4_2 + 8;
        }
        if (var_2_2 != NULL) {
            M2C_FIELD(var_4_2, void **, 8) = temp_2_4;
        }
        M2C_FIELD(var_4_2, M2C_UNK **, 0) = sp10;
        M2C_FIELD(var_4_2, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp10, M2C_UNK **, 4);
        *M2C_FIELD(sp10, M2C_UNK **, 4) = var_4_2;
        M2C_FIELD(sp10, M2C_UNK **, 4) = var_4_2;
        var_18_2 = *var_18_2;
        if (var_18_2 != M2C_FIELD(arg1, M2C_UNK ***, 4)) {
            var_16_2 = M2C_FIELD(var_18_2, void **, 8);
            goto loop_11;
        }
    }
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(temp_22, f32 *, 4) = (f32) M2C_FIELD(temp_21, f32 *, 4);
    M2C_FIELD(temp_22, f32 *, 8) = (f32) M2C_FIELD(temp_21, f32 *, 8);
    M2C_FIELD(temp_22, f32 *, 0xC) = (f32) M2C_FIELD(temp_21, f32 *, 0xC);
    M2C_FIELD(temp_22, s32 *, 0x10) = (s32) M2C_FIELD(temp_21, s32 *, 0x10);
    return arg0;
}
