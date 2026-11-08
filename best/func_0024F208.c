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

s32 D_002AD408(M2C_UNK);                            /* extern */
s32 *func_002587D8(s32, s32 *);                     /* extern */
M2C_UNK *func_002B1FC0(M2C_UNK);                    /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */
extern M2C_UNK D_0047A578;

void *func_0024F208(void *arg0, void *arg1) {
    s32 *sp10;
    s32 *sp20;
    M2C_UNK *sp30;
    M2C_UNK *sp40;
    M2C_UNK **temp_3;
    M2C_UNK *temp_16;
    M2C_UNK *temp_2;
    M2C_UNK *var_17;
    M2C_UNK *var_2;
    M2C_UNK *var_2_2;
    M2C_UNK *var_4;
    s32 *temp_2_2;
    s32 *var_3;
    s32 temp_2_3;
    s32 temp_2_5;
    void *temp_2_4;
    void *temp_2_6;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_0047A578;
    var_2 = func_002B1FC0(0xC);
    if (var_2 == NULL) {
        var_2 = func_003D2910(0xC);
    }
    M2C_FIELD(arg0, M2C_UNK **, 8) = var_2;
    *var_2 = var_2;
    temp_2 = M2C_FIELD(arg0, M2C_UNK **, 8);
    M2C_FIELD(temp_2, M2C_UNK **, 4) = temp_2;
    temp_3 = M2C_FIELD(arg1, M2C_UNK ***, 8);
    var_17 = *temp_3;
    if (var_17 != temp_3) {
        var_3 = M2C_FIELD(var_17, s32 **, 8);
loop_4:
        sp10 = var_3;
        if (var_3 != NULL) {
            *var_3 += 1;
        }
        temp_2_2 = func_002587D8(D_002AD408(0x1C), sp10);
        sp20 = temp_2_2;
        if (temp_2_2 != NULL) {
            *temp_2_2 += 1;
        }
        sp40 = M2C_FIELD(arg0, M2C_UNK **, 8);
        var_4 = func_002B1FC0(0xC);
        var_2_2 = var_4 + 8;
        if (var_4 == NULL) {
            var_4 = func_003D2910(0xC);
            var_2_2 = var_4 + 8;
        }
        if (var_2_2 != NULL) {
            M2C_FIELD(var_4, s32 **, 8) = sp20;
            if (sp20 != NULL) {
                M2C_FIELD(sp20, s32 *, 0) += 1;
            }
        }
        M2C_FIELD(var_4, M2C_UNK **, 0) = sp40;
        M2C_FIELD(var_4, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp40, M2C_UNK **, 4);
        *M2C_FIELD(sp40, M2C_UNK **, 4) = var_4;
        M2C_FIELD(sp40, M2C_UNK **, 4) = var_4;
        sp30 = var_4;
        temp_16 = *var_17;
        var_17 = temp_16;
        if (sp20 != NULL) {
            temp_2_3 = M2C_FIELD(sp20, s32 *, 0) - 1;
            M2C_FIELD(sp20, s32 *, 0) = temp_2_3;
            if (temp_2_3 == 0) {
                temp_2_4 = M2C_FIELD(sp20, void **, 4);
                M2C_FIELD(temp_2_4, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(sp20 + M2C_FIELD(temp_2_4, s16 *, 8), 3, sp20);
            }
        }
        if (sp10 != NULL) {
            temp_2_5 = M2C_FIELD(sp10, s32 *, 0) - 1;
            M2C_FIELD(sp10, s32 *, 0) = temp_2_5;
            if (temp_2_5 == 0) {
                temp_2_6 = M2C_FIELD(sp10, void **, 4);
                M2C_FIELD(temp_2_6, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(sp10 + M2C_FIELD(temp_2_6, s16 *, 8), 3, sp10);
            }
        }
        if (temp_16 != M2C_FIELD(arg1, M2C_UNK ***, 8)) {
            var_3 = M2C_FIELD(var_17, s32 **, 8);
            goto loop_4;
        }
    }
    return arg0;
}
