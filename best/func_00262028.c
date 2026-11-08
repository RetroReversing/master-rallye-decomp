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

M2C_UNK func_00152DC8(void *);                      /* extern */
M2C_UNK func_00152E30(void *);                      /* extern */
M2C_UNK func_00152E98(void *);                      /* extern */
M2C_UNK func_00262B00(s32, M2C_UNK);                /* extern */
M2C_UNK func_00262D58(s32, M2C_UNK);                /* extern */
M2C_UNK *func_002B1FC0(M2C_UNK);                    /* extern */
M2C_UNK func_002B2028(M2C_UNK *);                   /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */

void func_00262028(void *arg0) {
    M2C_UNK *sp0;
    M2C_UNK *sp10;
    M2C_UNK *sp20;
    M2C_UNK *sp30;
    M2C_UNK *sp40;
    M2C_UNK *sp50;
    M2C_UNK **temp_3_2;
    M2C_UNK **temp_3_4;
    M2C_UNK *temp_16;
    M2C_UNK *temp_16_2;
    M2C_UNK *temp_2;
    M2C_UNK *temp_2_2;
    M2C_UNK *temp_2_3;
    M2C_UNK *temp_2_4;
    M2C_UNK *temp_3;
    M2C_UNK *temp_3_3;
    M2C_UNK *var_2;
    M2C_UNK *var_2_2;
    M2C_UNK *var_4;
    M2C_UNK *var_4_2;
    s32 temp_18;
    s32 temp_18_2;

    M2C_FIELD(arg0, s32 *, 0x44) = 1;
    temp_3 = M2C_FIELD(arg0, M2C_UNK **, 4);
    temp_2 = *temp_3;
    sp10 = temp_3;
    sp0 = temp_2;
    if (temp_2 != temp_3) {
        do {
            temp_18 = M2C_FIELD(sp0, s32 *, 8);
            sp30 = M2C_FIELD(arg0, M2C_UNK **, 8);
            var_4 = func_002B1FC0(0xC);
            var_2 = var_4 + 8;
            if (var_4 == NULL) {
                var_4 = func_003D2910(0xC);
                var_2 = var_4 + 8;
            }
            if (var_2 != NULL) {
                M2C_FIELD(var_4, s32 *, 8) = (s32) M2C_FIELD(sp0, s32 *, 8);
            }
            M2C_FIELD(var_4, M2C_UNK **, 0) = (M2C_UNK *) sp30;
            M2C_FIELD(var_4, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp30, M2C_UNK **, 4);
            *M2C_FIELD(sp30, M2C_UNK **, 4) = var_4;
            M2C_FIELD(sp30, M2C_UNK **, 4) = var_4;
            sp20 = sp0;
            temp_16 = M2C_FIELD(sp0, M2C_UNK **, 0);
            temp_3_2 = M2C_FIELD(sp0, M2C_UNK ***, 4);
            *temp_3_2 = temp_16;
            M2C_FIELD(temp_16, M2C_UNK ***, 4) = temp_3_2;
            func_002B2028(sp20);
            sp0 = temp_16;
            sp10 = temp_16;
            if (temp_18 != 0) {
                func_00262D58(temp_18, 3);
            }
            temp_2_2 = M2C_FIELD(arg0, M2C_UNK **, 4);
            sp10 = temp_2_2;
        } while (sp0 != temp_2_2);
    }
    temp_2_3 = M2C_FIELD(arg0, M2C_UNK **, 0xC);
    temp_3_3 = *temp_2_3;
    sp20 = temp_2_3;
    sp10 = temp_3_3;
    if (temp_3_3 != temp_2_3) {
        do {
            temp_18_2 = M2C_FIELD(sp10, s32 *, 8);
            sp50 = M2C_FIELD(arg0, M2C_UNK **, 0x10);
            var_4_2 = func_002B1FC0(0xC);
            var_2_2 = var_4_2 + 8;
            if (var_4_2 == NULL) {
                var_4_2 = func_003D2910(0xC);
                var_2_2 = var_4_2 + 8;
            }
            if (var_2_2 != NULL) {
                M2C_FIELD(var_4_2, s32 *, 8) = (s32) M2C_FIELD(sp10, s32 *, 8);
            }
            M2C_FIELD(var_4_2, M2C_UNK **, 0) = sp50;
            M2C_FIELD(var_4_2, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp50, M2C_UNK **, 4);
            *M2C_FIELD(sp50, M2C_UNK **, 4) = var_4_2;
            M2C_FIELD(sp50, M2C_UNK **, 4) = var_4_2;
            sp40 = var_4_2;
            sp30 = sp10;
            temp_16_2 = M2C_FIELD(sp10, M2C_UNK **, 0);
            temp_3_4 = M2C_FIELD(sp10, M2C_UNK ***, 4);
            *temp_3_4 = temp_16_2;
            M2C_FIELD(temp_16_2, M2C_UNK ***, 4) = temp_3_4;
            func_002B2028(sp30);
            sp10 = temp_16_2;
            sp20 = temp_16_2;
            if (temp_18_2 != 0) {
                func_00262B00(temp_18_2, 3);
            }
            temp_2_4 = M2C_FIELD(arg0, M2C_UNK **, 0xC);
            sp20 = temp_2_4;
        } while (sp10 != temp_2_4);
    }
    func_00152E30(arg0 + 4);
    func_00152E98(arg0 + 0xC);
    func_00152DC8(arg0);
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 1;
}
