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

void *func_002B8C18();                              /* extern */

s32 func_002AA800(s32 arg1, void *arg2) {
    s32 var_19;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_3_5;
    void *temp_3_6;
    void *temp_3_7;
    void *temp_5;

    var_19 = 0;
    temp_2 = func_002B8C18();
    temp_3 = M2C_FIELD(temp_2, void **, 8);
    if (M2C_FIELD(temp_3, s32 (**)(void *, s32, M2C_UNK, M2C_UNK), 0x4C)(temp_2 + M2C_FIELD(temp_3, s16 *, 0x48), arg1, 1, 0) != 0) {
        temp_3_2 = M2C_FIELD(temp_2, void **, 8);
        M2C_FIELD(temp_3_2, M2C_UNK (**)(void *, f32), 0x7C)(temp_2 + M2C_FIELD(temp_3_2, s16 *, 0x78), M2C_FIELD(arg2, f32 *, 0xC));
        temp_3_3 = M2C_FIELD(temp_2, void **, 8);
        M2C_FIELD(temp_3_3, M2C_UNK (**)(void *, s32), 0x8C)(temp_2 + M2C_FIELD(temp_3_3, s16 *, 0x88), M2C_FIELD(M2C_FIELD(arg2, void **, 0), s32 *, 8));
        temp_3_4 = M2C_FIELD(temp_2, void **, 8);
        M2C_FIELD(temp_3_4, M2C_UNK (**)(void *, s32), 0x8C)(temp_2 + M2C_FIELD(temp_3_4, s16 *, 0x88), M2C_FIELD(M2C_FIELD(arg2, void **, 0), s32 *, 0xC));
        temp_3_5 = M2C_FIELD(temp_2, void **, 8);
        M2C_FIELD(temp_3_5, M2C_UNK (**)(void *, f32), 0x7C)(temp_2 + M2C_FIELD(temp_3_5, s16 *, 0x78), M2C_FIELD(arg2, f32 *, 4));
        temp_3_6 = M2C_FIELD(temp_2, void **, 8);
        M2C_FIELD(temp_3_6, M2C_UNK (**)(void *, f32), 0x7C)(temp_2 + M2C_FIELD(temp_3_6, s16 *, 0x78), M2C_FIELD(arg2, f32 *, 8));
        temp_3_7 = M2C_FIELD(arg2, void **, 0);
        temp_5 = M2C_FIELD(temp_2, void **, 8);
        var_19 = M2C_FIELD(temp_5, s32 (**)(void *, s32, s32), 0x74)(temp_2 + M2C_FIELD(temp_5, s16 *, 0x70), M2C_FIELD(temp_3_7, s32 *, 4), M2C_FIELD(temp_3_7, s32 *, 8) * M2C_FIELD(temp_3_7, s32 *, 0xC));
    }
    if (temp_2 != NULL) {
        temp_2_2 = M2C_FIELD(temp_2, void **, 8);
        M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_2 + M2C_FIELD(temp_2_2, s16 *, 8), 3);
    }
    return var_19;
}
