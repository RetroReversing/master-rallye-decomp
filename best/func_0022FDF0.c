/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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
M2C_UNK func_00232570(s32);                         /* extern */
s32 func_00232AF0(s32);                             /* extern */
s32 func_00232B40(s32, s32 **, void *, s32);        /* extern */
s32 *func_00258688(s32, s32, s32);                  /* extern */
M2C_UNK func_00258F20(s32 *, s32, s32);             /* extern */
M2C_UNK func_00258F80(s32 *, M2C_UNK *, M2C_UNK *, s32); /* extern */
extern M2C_UNK D_00426478;
extern M2C_UNK D_00426508;

s32 **func_0022FDF0(s32 **arg0, void *arg1, void **arg2) {
    s32 *sp0;
    s32 *sp10;
    s32 *temp_2_2;
    s32 temp_17;
    s32 temp_20;
    s32 temp_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_2_6;
    s32 temp_5;
    s32 temp_6;
    s32 var_16;
    s32 var_16_2;
    s32 var_16_3;
    s32 var_16_4;
    s32 var_17;
    s32 var_17_2;
    s32 var_17_3;
    s32 var_19;
    s32 var_7;
    void *temp_2_5;
    void *temp_2_7;
    void *temp_6_2;

    temp_20 = (s32) ((M2C_FIELD(arg1, s32 *, 0x14) - M2C_FIELD(arg1, s32 *, 0x10)) * 0xB6DB6DB7) >> 2;
    if (temp_20 > 0) {
        var_17 = 0;
        var_16 = temp_20;
        do {
            var_16 -= 1;
            func_00232570(M2C_FIELD(arg1, s32 *, 0x10) + var_17);
            var_17 += 0x1C;
        } while (var_16 != 0);
    }
    var_19 = 0;
    if (temp_20 > 0) {
        var_17_2 = 0;
        var_16_2 = temp_20;
        do {
            var_16_2 -= 1;
            temp_2 = func_00232AF0(M2C_FIELD(arg1, s32 *, 0x10) + var_17_2);
            var_17_2 += 0x1C;
            var_19 += temp_2;
        } while (var_16_2 != 0);
    }
    temp_17 = (s32) (M2C_FIELD((arg1 + 0x28), s32 *, 4) - M2C_FIELD(arg1, s32 *, 0x28)) >> 4;
    temp_2_2 = func_00258688(D_002AD408(0x1C), temp_17, var_19);
    sp0 = temp_2_2;
    if (temp_2_2 != NULL) {
        *temp_2_2 += 1;
    }
    var_16_3 = 0;
    if (temp_17 > 0) {
        do {
            temp_5 = var_16_3;
            temp_6 = M2C_FIELD(arg1, s32 *, 0x28) + (var_16_3 * 0x10);
            var_16_3 += 1;
            func_00258F20(sp0, temp_5, temp_6);
        } while (var_16_3 < temp_17);
    }
    var_7 = 0;
    if (temp_20 > 0) {
        var_16_4 = temp_20;
        var_17_3 = 0;
        do {
            sp10 = sp0;
            if (sp0 != NULL) {
                M2C_FIELD(sp0, s32 *, 0) += 1;
            }
            temp_2_3 = func_00232B40(M2C_FIELD(arg1, s32 *, 0x10) + var_17_3, &sp10, arg1, var_7);
            var_17_3 += 0x1C;
            var_16_4 -= 1;
            var_7 = temp_2_3;
        } while (var_16_4 != 0);
    }
    func_00258F80(sp0, &D_00426478, &D_00426508, var_7);
    *arg0 = sp0;
    if (sp0 != NULL) {
        M2C_FIELD(sp0, s32 *, 0) += 1;
    }
    if (sp0 != NULL) {
        temp_2_4 = M2C_FIELD(sp0, s32 *, 0) - 1;
        M2C_FIELD(sp0, s32 *, 0) = temp_2_4;
        if (temp_2_4 == 0) {
            temp_2_5 = M2C_FIELD(sp0, void **, 4);
            M2C_FIELD(temp_2_5, M2C_UNK (**)(void *, M2C_UNK, s32 *), 0xC)(sp0 + M2C_FIELD(temp_2_5, s16 *, 8), 3, sp0);
        }
    }
    temp_6_2 = *arg2;
    if (temp_6_2 != NULL) {
        temp_2_6 = M2C_FIELD(temp_6_2, s32 *, 0) - 1;
        M2C_FIELD(temp_6_2, s32 *, 0) = temp_2_6;
        if (temp_2_6 == 0) {
            temp_2_7 = M2C_FIELD(temp_6_2, void **, 4);
            M2C_FIELD(temp_2_7, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(temp_6_2 + M2C_FIELD(temp_2_7, s16 *, 8), 3, temp_6_2);
        }
    }
    return arg0;
}
