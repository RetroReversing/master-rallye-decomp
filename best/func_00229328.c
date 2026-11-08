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
extern M2C_UNK D_00426508;

void *func_00229328(void *arg0, void *arg1) {
    M2C_UNK *sp30;
    M2C_UNK **temp_2_3;
    M2C_UNK *temp_2;
    M2C_UNK *temp_2_2;
    M2C_UNK *var_18;
    M2C_UNK *var_2;
    M2C_UNK *var_2_2;
    M2C_UNK *var_2_3;
    M2C_UNK *var_2_4;
    M2C_UNK *var_4;
    M2C_UNK *var_4_2;
    void **temp_2_5;
    void *temp_16;
    void *temp_21;
    void *temp_2_4;
    void *temp_2_6;
    void *temp_3;
    void *var_16;
    void *var_18_2;

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
    temp_3 = arg0 + 8;
    temp_2_2 = M2C_FIELD(arg0, M2C_UNK **, 4);
    M2C_FIELD(temp_2_2, M2C_UNK **, 4) = temp_2_2;
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_3, s32 *, 0x10) = -1;
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(temp_3, M2C_UNK32 *, 0xC) = 0;
    temp_2_3 = M2C_FIELD(arg1, M2C_UNK ***, 0);
    var_18 = *temp_2_3;
    temp_21 = arg1 + 8;
    if (var_18 != temp_2_3) {
        var_16 = M2C_FIELD(var_18, void **, 8);
loop_6:
        temp_2_4 = D_002AD408(0xC);
        M2C_FIELD(temp_2_4, f32 *, 0) = (f32) M2C_FIELD(var_16, f32 *, 0);
        M2C_FIELD(temp_2_4, f32 *, 4) = (f32) M2C_FIELD(var_16, f32 *, 4);
        sp30 = M2C_FIELD(arg0, M2C_UNK **, 0);
        M2C_FIELD(temp_2_4, f32 *, 8) = (f32) M2C_FIELD(var_16, f32 *, 8);
        var_4 = func_002B1FC0(0xC);
        var_2_3 = var_4 + 8;
        if (var_4 == NULL) {
            var_4 = func_003D2910(0xC);
            var_2_3 = var_4 + 8;
        }
        if (var_2_3 != NULL) {
            M2C_FIELD(var_4, void **, 8) = temp_2_4;
        }
        M2C_FIELD(var_4, M2C_UNK **, 0) = sp30;
        M2C_FIELD(var_4, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp30, M2C_UNK **, 4);
        *M2C_FIELD(sp30, M2C_UNK **, 4) = var_4;
        M2C_FIELD(sp30, M2C_UNK **, 4) = var_4;
        var_18 = *var_18;
        if (var_18 != M2C_FIELD(arg1, M2C_UNK ***, 0)) {
            var_16 = M2C_FIELD(var_18, void **, 8);
            goto loop_6;
        }
    }
    temp_2_5 = M2C_FIELD(arg1, void ***, 4);
    var_18_2 = *temp_2_5;
    if (var_18_2 != temp_2_5) {
        do {
            temp_16 = M2C_FIELD(var_18_2, void **, 8);
            temp_2_6 = D_002AD408(0xC);
            M2C_FIELD(temp_2_6, f32 *, 0) = (f32) M2C_FIELD(temp_16, f32 *, 0);
            M2C_FIELD(temp_2_6, f32 *, 4) = (f32) M2C_FIELD(temp_16, f32 *, 4);
            sp30 = M2C_FIELD(arg0, M2C_UNK **, 4);
            M2C_FIELD(temp_2_6, f32 *, 8) = (f32) M2C_FIELD(temp_16, f32 *, 8);
            var_4_2 = func_002B1FC0(0xC);
            var_2_4 = var_4_2 + 8;
            if (var_4_2 == NULL) {
                var_4_2 = func_003D2910(0xC);
                var_2_4 = var_4_2 + 8;
            }
            if (var_2_4 != NULL) {
                M2C_FIELD(var_4_2, void **, 8) = temp_2_6;
            }
            M2C_FIELD(var_4_2, M2C_UNK **, 0) = sp30;
            M2C_FIELD(var_4_2, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp30, M2C_UNK **, 4);
            *M2C_FIELD(sp30, M2C_UNK **, 4) = var_4_2;
            M2C_FIELD(sp30, M2C_UNK **, 4) = var_4_2;
            var_18_2 = M2C_FIELD(var_18_2, void **, 0);
        } while (var_18_2 != M2C_FIELD(arg1, void ***, 4));
    }
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(temp_21, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(temp_21, f32 *, 8);
    M2C_FIELD(temp_3, M2C_UNK32 *, 0xC) = (M2C_UNK32) M2C_FIELD(temp_21, M2C_UNK32 *, 0xC);
    M2C_FIELD(temp_3, s32 *, 0x10) = (s32) M2C_FIELD(temp_21, s32 *, 0x10);
    return arg0;
}
