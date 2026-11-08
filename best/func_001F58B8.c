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

s32 func_001D64D0(s32, s32);                        /* extern */
s32 func_001F50C0(s32 *, s32);                      /* extern */
s32 func_001F5480(s32 *, s32);                      /* extern */
s32 func_001F5508(s32 *, s32);                      /* extern */
s32 func_001F5A18(s32 *, s32);                      /* extern */

s32 func_001F58B8(s32 *arg0, void *arg1) {
    s32 temp_18;
    s32 temp_19;
    s32 temp_21;
    s32 temp_2;
    s32 var_20;
    s32 var_2;
    s32 var_2_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *var_16;

    var_20 = 0;
    temp_3 = M2C_FIELD(arg1, void **, 0x10);
    temp_3_2 = M2C_FIELD(arg1, void **, 0x10);
    temp_21 = M2C_FIELD(temp_3, s32 (**)(void *), 0x14)(arg1 + M2C_FIELD(temp_3, s16 *, 0x10));
    temp_3_3 = M2C_FIELD(arg1, void **, 0x10);
    temp_19 = M2C_FIELD(temp_3_2, s32 (**)(void *), 0x1C)(arg1 + M2C_FIELD(temp_3_2, s16 *, 0x18));
    temp_3_4 = M2C_FIELD(arg1, void **, 0x10);
    temp_18 = M2C_FIELD(temp_3_3, s32 (**)(void *), 0x24)(arg1 + M2C_FIELD(temp_3_3, s16 *, 0x20));
    temp_2 = M2C_FIELD(temp_3_4, s32 (**)(void *), 0x2C)(arg1 + M2C_FIELD(temp_3_4, s16 *, 0x28));
    if (temp_21 != 0) {
        var_2_2 = func_001F50C0(arg0, temp_21);
        goto block_8;
    }
    if (temp_19 != 0) {
        var_2_2 = func_001F5480(arg0, temp_19);
        goto block_8;
    }
    if (temp_18 != 0) {
        var_2_2 = func_001F5508(arg0, temp_18);
        goto block_8;
    }
    if (temp_2 != 0) {
        var_2_2 = func_001F5A18(arg0, temp_2);
block_8:
        var_20 = var_2_2;
    }
    var_2 = 0;
    if (var_20 != 0) {
        if (func_001D64D0(*arg0, M2C_FIELD(arg1, s32 *, 0x14)) != 0) {
            var_16 = M2C_FIELD(arg1, void **, 0);
            var_2 = 1;
            if (var_16 != NULL) {
loop_16:
                var_2 = 0;
                if (func_001F58B8(arg0, var_16) != 0) {
                    var_16 = M2C_FIELD(var_16, void **, 4);
                    if (var_16 == NULL) {
                        var_2 = 1;
                    } else {
                        goto loop_16;
                    }
                }
            }
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return var_2;
        }
        return 0;
    }
    return var_2;
}
