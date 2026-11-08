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

M2C_UNK func_00152720(void *, s32 *, s32 *, s32 *, s32 *); /* extern */
M2C_UNK *func_002B1FC0(M2C_UNK);                    /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */

void func_001FB718(void *arg0, s32 arg1, M2C_UNK **arg2, void *arg3) {
    M2C_UNK *sp10;
    s32 sp20;
    M2C_UNK *temp_4;
    M2C_UNK *temp_5;
    M2C_UNK *temp_6;
    M2C_UNK *var_7;
    M2C_UNK *var_8;
    s32 *temp_3;
    s32 *temp_7;
    s32 temp_2;
    s32 var_17;
    void *var_16;

    temp_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 **, 0x34);
    var_17 = M2C_FIELD(temp_3, s32 *, 0);
    if (var_17 != M2C_FIELD(temp_3, s32 *, 4)) {
        var_16 = var_17 + 0x28;
        do {
            if ((M2C_FIELD(var_16, s32 *, -0xC) == arg1) || (M2C_FIELD(var_16, s32 *, -8) == arg1) || (M2C_FIELD(var_16, s32 *, -4) == arg1)) {
                sp10 = *arg2;
                var_7 = func_002B1FC0(0x3C);
                var_8 = var_7 + 8;
                if (var_7 == NULL) {
                    var_7 = func_003D2910(0x3C);
                    var_8 = var_7 + 8;
                }
                temp_4 = var_7 + 0x18;
                if (var_8 != NULL) {
                    temp_5 = var_7 + 0x24;
                    temp_6 = var_7 + 0x30;
                    M2C_FIELD(var_7, s32 *, 8) = (s32) M2C_FIELD(var_16, s32 *, -0x28);
                    M2C_FIELD(var_8, s32 *, 4) = (s32) M2C_FIELD(var_16, s32 *, -0x24);
                    M2C_FIELD(var_8, s32 *, 8) = (s32) M2C_FIELD(var_16, s32 *, -0x20);
                    M2C_FIELD(var_8, s32 *, 0xC) = (s32) M2C_FIELD(var_16, s32 *, -0x1C);
                    M2C_FIELD(var_7, s32 *, 0x18) = (s32) M2C_FIELD(var_16, s32 *, -0x18);
                    M2C_FIELD(temp_4, s32 *, 4) = (s32) M2C_FIELD(var_16, s32 *, -0x14);
                    M2C_FIELD(temp_4, s32 *, 8) = (s32) M2C_FIELD(var_16, s32 *, -0x10);
                    M2C_FIELD(var_7, s32 *, 0x24) = (s32) M2C_FIELD(var_16, s32 *, -0xC);
                    M2C_FIELD(temp_5, s32 *, 4) = (s32) M2C_FIELD(var_16, s32 *, -8);
                    M2C_FIELD(temp_5, s32 *, 8) = (s32) M2C_FIELD(var_16, s32 *, -4);
                    M2C_FIELD(var_7, s32 *, 0x30) = (s32) M2C_FIELD(var_16, s32 *, 0);
                    M2C_FIELD(temp_6, s32 *, 4) = (s32) M2C_FIELD(var_16, s32 *, 4);
                    M2C_FIELD(temp_6, s32 *, 8) = (s32) M2C_FIELD(var_16, s32 *, 8);
                }
                M2C_FIELD(var_7, M2C_UNK **, 0) = sp10;
                M2C_FIELD(var_7, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp10, M2C_UNK **, 4);
                *M2C_FIELD(sp10, M2C_UNK **, 4) = var_7;
                M2C_FIELD(sp10, M2C_UNK **, 4) = var_7;
                temp_7 = M2C_FIELD(arg3, s32 **, 4);
                temp_2 = (s32) ((var_17 - *M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 **, 0x34)) * 0xC4EC4EC5) >> 2;
                sp20 = temp_2;
                if (temp_7 != M2C_FIELD(arg3, s32 *, 8)) {
                    if (temp_7 != NULL) {
                        *temp_7 = temp_2;
                    }
                    M2C_FIELD(arg3, s32 **, 4) = (s32 *) (M2C_FIELD(arg3, s32 **, 4) + 4);
                } else {
                    func_00152720(arg3, temp_7, &sp20, temp_7, &sp20);
                }
            }
            var_17 += 0x34;
            var_16 += 0x34;
        } while (var_17 != M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 **, 0x34), s32 *, 4));
    }
}
