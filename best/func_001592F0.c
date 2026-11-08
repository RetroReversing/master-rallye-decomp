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

M2C_UNK D_002AD390(void *);                         /* extern */
extern M2C_UNK D_0044DBF8;

void func_001592F0(void *arg0, s32 arg1) {
    s32 temp_3;
    void *temp_16;
    void *temp_16_2;
    void *temp_2;
    void *temp_2_2;
    void *var_16;
    void *var_16_2;

    temp_3 = arg0 + 0x5E4;
    M2C_FIELD(arg0, M2C_UNK **, 0xC98) = &D_0044DBF8;
    if (temp_3 != 0) {
        temp_16 = arg0 + 0xC98;
        if (temp_3 != temp_16) {
            var_16 = temp_16 - 0x2C;
loop_3:
            temp_2 = M2C_FIELD(var_16, void **, 0x28);
            M2C_FIELD(temp_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_16 + M2C_FIELD(temp_2, s16 *, 8), 0);
            if (temp_3 != var_16) {
                var_16 -= 0x2C;
                goto loop_3;
            }
        }
    }
    if (arg0 != NULL) {
        temp_16_2 = arg0 + 0x5E4;
        var_16_2 = temp_16_2 - 0x34;
        if (arg0 != temp_16_2) {
            do {
                temp_2_2 = M2C_FIELD(var_16_2, void **, 0x30);
                M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_16_2 + M2C_FIELD(temp_2_2, s16 *, 8), 0);
                var_16_2 -= 0x34;
            } while (arg0 != var_16_2);
        }
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
