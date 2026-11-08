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

void ***func_002015D8();                            /* extern */

void **func_0021EA20(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_4;
    s32 var_5;
    void **temp_17;
    void *temp_2;
    void *temp_2_2;
    void *temp_7;
    void *var_16;

    temp_17 = *func_002015D8();
    temp_2 = *temp_17;
    M2C_FIELD(temp_2, M2C_UNK (**)(void *), 0x44)(temp_17 + M2C_FIELD(temp_2, s16 *, 0x40));
    var_4 = 6;
    var_5 = 6 * 0xC;
    do {
        var_16 = M2C_FIELD((var_5 + arg0), void **, 0x28);
        if (var_16 != (arg0 + ((var_4 * 0xC) + 0x24))) {
            do {
                temp_7 = M2C_FIELD(var_16, void **, 0);
                if (M2C_FIELD(temp_7, s32 *, 0x58) & arg3) {
                    temp_2_2 = *temp_17;
                    M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, s32, s32, void *), 0x4C)(temp_17 + M2C_FIELD(temp_2_2, s16 *, 0x48), arg1, arg2, temp_7);
                }
                var_16 = M2C_FIELD(var_16, void **, 4);
            } while (var_16 != (arg0 + ((var_4 * 0xC) + 0x24)));
        }
        var_4 -= 1;
        var_5 = var_4 * 0xC;
    } while (var_4 >= 0);
    return temp_17;
}
