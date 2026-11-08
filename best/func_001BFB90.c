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

void func_001BFB90(void *arg0) {
    void **var_16;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_3;
    void *temp_5;
    void *temp_5_2;
    void *temp_5_3;
    void *temp_5_4;
    void *var_5;

    temp_3 = arg0 + 4;
    var_16 = M2C_FIELD(arg0, void ***, 4);
    if (var_16 != M2C_FIELD(temp_3, s32 *, 4)) {
        var_5 = *var_16;
loop_2:
        var_16 += 4;
        temp_2 = M2C_FIELD(var_5, void **, 0xDC);
        M2C_FIELD(temp_2, M2C_UNK (**)(void *, void *), 0x1C)(var_5 + M2C_FIELD(temp_2, s16 *, 0x18), var_5);
        if (var_16 != M2C_FIELD(temp_3, s32 *, 4)) {
            var_5 = *var_16;
            goto loop_2;
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x78) != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 0xA8) = 1;
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 0xA8) = 0;
    }
    temp_5 = M2C_FIELD(arg0, void **, 0x1C);
    if (temp_5 != NULL) {
        temp_2_2 = M2C_FIELD(temp_5, void **, 0xDC);
        M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, void *), 0x1C)(temp_5 + M2C_FIELD(temp_2_2, s16 *, 0x18), temp_5);
    }
    temp_5_2 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_5_2 != NULL) {
        temp_2_3 = M2C_FIELD(temp_5_2, void **, 0xDC);
        M2C_FIELD(temp_2_3, M2C_UNK (**)(void *, void *), 0x1C)(temp_5_2 + M2C_FIELD(temp_2_3, s16 *, 0x18), temp_5_2);
    }
    temp_5_3 = M2C_FIELD(arg0, void **, 0x24);
    if (temp_5_3 != NULL) {
        temp_2_4 = M2C_FIELD(temp_5_3, void **, 0xDC);
        M2C_FIELD(temp_2_4, M2C_UNK (**)(void *, void *), 0x1C)(temp_5_3 + M2C_FIELD(temp_2_4, s16 *, 0x18), temp_5_3);
    }
    temp_5_4 = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_5_4 != NULL) {
        temp_2_5 = M2C_FIELD(temp_5_4, void **, 0xDC);
        M2C_FIELD(temp_2_5, M2C_UNK (**)(void *, void *), 0x1C)(temp_5_4 + M2C_FIELD(temp_2_5, s16 *, 0x18), temp_5_4);
    }
}
