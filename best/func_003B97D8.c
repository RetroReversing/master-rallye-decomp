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

s32 func_001D7768(s32, s32);                        /* extern */

void func_003B97D8(void **arg0, void *arg1) {
    s32 temp_2;
    s32 temp_4_2;
    s32 var_17;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_4;
    void *var_16;
    void *var_3;

    temp_4 = M2C_FIELD(arg1, void **, 4);
    var_17 = 1;
    if (temp_4 != NULL) {
        temp_4_2 = M2C_FIELD(temp_4, s32 *, 0x18);
        if (temp_4_2 != 0) {
            temp_2 = func_001D7768(temp_4_2, arg0 + 0x18);
            var_17 = (~temp_2 == 0) ? 1 : temp_2;
        }
    }
    var_16 = *arg0;
    if (var_16 != NULL) {
        var_3 = M2C_FIELD(var_16, void **, 0x10);
loop_5:
        temp_2_2 = M2C_FIELD(var_3, void *(**)(void *), 0x54)(var_16 + M2C_FIELD(var_3, s16 *, 0x50));
        if ((temp_2_2 != NULL) && (M2C_FIELD(temp_2_2, s32 *, 0x18) == var_17)) {
            temp_2_3 = M2C_FIELD(temp_2_2, void **, 0x10);
            M2C_FIELD(temp_2_3, M2C_UNK (**)(void *, void *, void *), 0x5C)(temp_2_2 + M2C_FIELD(temp_2_3, s16 *, 0x58), arg1, temp_2_2);
        }
        var_16 = M2C_FIELD(var_16, void **, 4);
        if (var_16 != NULL) {
            var_3 = M2C_FIELD(var_16, void **, 0x10);
            goto loop_5;
        }
    }
}
