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

s32 func_002B8800(void *);                          /* extern */
M2C_UNK func_003F931C(s32, s32, s32, s32);          /* extern */
extern M2C_UNK D_00428868;

s32 func_002B8938(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_7;
    s32 var_18;
    s32 var_19;
    s32 var_2;
    void *temp_3;
    void *temp_9;

    var_19 = arg1;
    var_18 = arg2;
    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
loop_3:
        var_2 = var_18 == 0;
        if (var_18 > 0) {
            temp_7 = M2C_FIELD(arg0, s32 *, 0x30);
            temp_16 = M2C_FIELD(arg0, s32 *, 0x34) - temp_7;
            temp_16_2 = (var_18 < temp_16) ? var_18 : temp_16;
            if (temp_16_2 != 0) {
                func_003F931C(var_19, M2C_FIELD(arg0, s32 *, 0x24) + temp_7, temp_16_2, temp_7);
            }
            var_18 -= temp_16_2;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + temp_16_2);
            if (var_18 > 0) {
                var_19 += temp_16_2;
                if (func_002B8800(arg0) == 0) {
                    return var_18 == 0;
                }
                goto loop_3;
            }
            var_19 += temp_16_2;
            goto loop_3;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return var_2;
    }
    temp_9 = M2C_FIELD(arg0, void **, 0xC);
    temp_3 = M2C_FIELD(temp_9, void **, 8);
    var_2 = M2C_FIELD(temp_3, s32 (**)(void *, s32, s32, s32, M2C_UNK *, void *), 0x3C)(temp_9 + M2C_FIELD(temp_3, s16 *, 0x38), M2C_FIELD(arg0, s32 *, 0x14), arg1, var_18, &D_00428868, temp_9);
    return var_2;
}
