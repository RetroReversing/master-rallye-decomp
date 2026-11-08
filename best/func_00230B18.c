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

s32 func_00230B18(s32 arg0, void *arg1) {
    s32 temp_2_2;
    s32 var_17;
    s32 var_19;
    void *temp_2;
    void *temp_3;
    void *var_16;

    var_19 = 0;
    temp_3 = M2C_FIELD(arg1, void **, 0x10);
    temp_2 = M2C_FIELD(temp_3, void *(**)(void *), 0x1C)(arg1 + M2C_FIELD(temp_3, s16 *, 0x18));
    var_16 = M2C_FIELD(arg1, void **, 0);
    if (temp_2 != NULL) {
        var_19 = M2C_FIELD(temp_2, s32 *, 0x20) * 3;
    }
    var_17 = 0;
    if (var_16 != NULL) {
        do {
            temp_2_2 = func_00230B18(arg0, var_16);
            var_16 = M2C_FIELD(var_16, void **, 4);
            var_17 += temp_2_2;
        } while (var_16 != NULL);
    }
    return var_17 + var_19;
}
