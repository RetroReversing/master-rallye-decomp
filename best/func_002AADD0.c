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

s32 D_002AD408(M2C_UNK, void *);                    /* extern */
void *func_00276FA0(s32, M2C_UNK, M2C_UNK);         /* extern */
void *func_002B8C18();                              /* extern */

s32 func_002AADD0(s32 arg1, void *arg2) {
    s32 var_19;
    s32 var_2;
    s32 var_3;
    s32 var_5;
    s32 var_5_2;
    void *temp_16;
    void *temp_19;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_3_5;
    void *temp_3_6;
    void *temp_3_7;
    void *temp_6;
    void *temp_6_2;
    void *temp_6_3;
    void *temp_7;
    void *temp_7_2;
    void *var_5_3;

    var_19 = 0;
    temp_2 = func_002B8C18();
    temp_3 = M2C_FIELD(temp_2, void **, 8);
    if (M2C_FIELD(temp_3, s32 (**)(void *, s32, M2C_UNK, M2C_UNK), 0x4C)(temp_2 + M2C_FIELD(temp_3, s16 *, 0x48), arg1, 1, 0) != 0) {
        temp_3_2 = M2C_FIELD(temp_2, void **, 8);
        M2C_FIELD(temp_3_2, M2C_UNK (**)(void *, f32), 0x7C)(temp_2 + M2C_FIELD(temp_3_2, s16 *, 0x78), M2C_FIELD(arg2, f32 *, 0xC));
        temp_3_3 = M2C_FIELD(temp_2, void **, 8);
        var_5 = 0;
        temp_6 = M2C_FIELD(arg2, void **, 0);
        temp_7 = temp_3_3 + 0x88;
        if (temp_6 != NULL) {
            var_5 = M2C_FIELD(temp_6, s32 *, 8);
        }
        M2C_FIELD(temp_7, M2C_UNK (**)(void *, s32, void *, void *), 4)(temp_2 + M2C_FIELD(temp_3_3, s16 *, 0x88), var_5, temp_6, temp_7);
        temp_3_4 = M2C_FIELD(temp_2, void **, 8);
        var_5_2 = 0;
        temp_6_2 = M2C_FIELD(arg2, void **, 0);
        temp_7_2 = temp_3_4 + 0x88;
        if (temp_6_2 != NULL) {
            var_5_2 = M2C_FIELD(temp_6_2, s32 *, 0xC);
        }
        M2C_FIELD(temp_7_2, M2C_UNK (**)(void *, s32, void *, void *), 4)(temp_2 + M2C_FIELD(temp_3_4, s16 *, 0x88), var_5_2, temp_6_2, temp_7_2);
        temp_3_5 = M2C_FIELD(temp_2, void **, 8);
        M2C_FIELD(temp_3_5, M2C_UNK (**)(void *, f32), 0x7C)(temp_2 + M2C_FIELD(temp_3_5, s16 *, 0x78), M2C_FIELD(arg2, f32 *, 4));
        temp_3_6 = M2C_FIELD(temp_2, void **, 8);
        M2C_FIELD(temp_3_6, M2C_UNK (**)(void *, f32), 0x7C)(temp_2 + M2C_FIELD(temp_3_6, s16 *, 0x78), M2C_FIELD(arg2, f32 *, 8));
        temp_3_7 = M2C_FIELD(temp_2, void **, 8);
        var_5_3 = M2C_FIELD(arg2, void **, 0);
        temp_19 = temp_3_7 + 0x70;
        temp_16 = temp_2 + M2C_FIELD(temp_3_7, s16 *, 0x70);
        if (var_5_3 == NULL) {
            var_5_3 = func_00276FA0(D_002AD408(0x10, var_5_3), 0x32, 0x32);
        }
        temp_6_3 = M2C_FIELD(arg2, void **, 0);
        var_3 = 0;
        if (temp_6_3 != NULL) {
            var_3 = M2C_FIELD(temp_6_3, s32 *, 8);
        }
        var_2 = 0;
        if (temp_6_3 != NULL) {
            var_2 = M2C_FIELD(temp_6_3, s32 *, 0xC);
        }
        var_19 = M2C_FIELD(temp_19, s32 (**)(void *, s32, s32), 4)(temp_16, M2C_FIELD(var_5_3, s32 *, 4), var_3 * var_2 * 4);
    }
    if (temp_2 != NULL) {
        temp_2_2 = M2C_FIELD(temp_2, void **, 8);
        M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_2 + M2C_FIELD(temp_2_2, s16 *, 8), 3);
    }
    return var_19;
}
