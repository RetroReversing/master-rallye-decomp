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

void func_001F8198(void *arg0, s32 arg1, M2C_UNK **arg2, s32 arg3) {
    M2C_UNK *sp10;
    M2C_UNK *var_2;
    M2C_UNK *var_4;
    s32 var_16;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_3_5;
    void *temp_3_6;
    void *var_16_2;
    void *var_4_2;

    var_16 = (arg1 != 0) ? 0 : 1;
    if (arg1 == 2) {
        temp_3 = M2C_FIELD(arg0, void **, 0x10);
        var_16 = (M2C_FIELD(temp_3, s32 (**)(void *), 0x1C)(arg0 + M2C_FIELD(temp_3, s16 *, 0x18)) != 0) ? 1 : var_16;
    }
    if (arg1 == 1) {
        temp_3_2 = M2C_FIELD(arg0, void **, 0x10);
        var_16 = (M2C_FIELD(temp_3_2, s32 (**)(void *), 0x24)(arg0 + M2C_FIELD(temp_3_2, s16 *, 0x20)) != 0) ? arg1 : var_16;
    }
    if (arg1 == 3) {
        temp_3_3 = M2C_FIELD(arg0, void **, 0x10);
        var_16 = (M2C_FIELD(temp_3_3, s32 (**)(void *), 0x14)(arg0 + M2C_FIELD(temp_3_3, s16 *, 0x10)) != 0) ? 1 : var_16;
    }
    if (arg1 == 4) {
        temp_3_4 = M2C_FIELD(arg0, void **, 0x10);
        var_16 = (M2C_FIELD(temp_3_4, s32 (**)(void *), 0x34)(arg0 + M2C_FIELD(temp_3_4, s16 *, 0x30)) != 0) ? 1 : var_16;
    }
    if (arg1 == 5) {
        temp_3_5 = M2C_FIELD(arg0, void **, 0x10);
        var_16 = (M2C_FIELD(temp_3_5, s32 (**)(void *), 0x3C)(arg0 + M2C_FIELD(temp_3_5, s16 *, 0x38)) != 0) ? 1 : var_16;
    }
    if (arg1 == 6) {
        temp_3_6 = M2C_FIELD(arg0, void **, 0x10);
        var_16 = (M2C_FIELD(temp_3_6, s32 (**)(void *), 0x2C)(arg0 + M2C_FIELD(temp_3_6, s16 *, 0x28)) != 0) ? 1 : var_16;
    }
    if (var_16 != 0) {
        sp10 = *arg2;
        var_4 = func_002B1FC0(0xC);
        var_2 = var_4 + 8;
        if (var_4 == NULL) {
            var_4 = func_003D2910(0xC);
            var_2 = var_4 + 8;
        }
        if (var_2 != NULL) {
            M2C_FIELD(var_4, void **, 8) = arg0;
        }
        M2C_FIELD(var_4, M2C_UNK **, 0) = sp10;
        M2C_FIELD(var_4, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(sp10, M2C_UNK **, 4);
        *M2C_FIELD(sp10, M2C_UNK **, 4) = var_4;
        M2C_FIELD(sp10, M2C_UNK **, 4) = var_4;
        if (arg3 != 1) {
            goto block_18;
        }
    } else {
block_18:
        var_16_2 = M2C_FIELD(arg0, void **, 0);
        if (var_16_2 != NULL) {
            var_4_2 = var_16_2;
            do {
                func_001F8198(var_4_2, arg1, arg2, arg3);
                var_16_2 = M2C_FIELD(var_16_2, void **, 4);
                var_4_2 = var_16_2;
            } while (var_16_2 != NULL);
        }
    }
}
