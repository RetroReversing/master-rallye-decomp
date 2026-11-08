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

M2C_UNK func_00119E08(s32);                         /* extern */
s32 func_00194738(s32);                             /* extern */
s32 func_00194B18(s32);                             /* extern */
s32 func_00194C40();                                /* extern */
M2C_UNK func_00194CD0(s32, s32, s32);               /* extern */
s32 func_00194D58(s32, s32);                        /* extern */
s32 func_00194E30(s32, s32, s32, M2C_UNK);          /* extern */
s32 func_00196028();                                /* extern */
s32 func_001965A8(s32);                             /* extern */
s32 func_00196C10(s32, M2C_UNK);                    /* extern */
s32 func_00196E10();                                /* extern */

s32 func_00119CB0(s32 arg0) {
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_18;
    s32 temp_19;
    s32 temp_2;
    s32 var_16;
    s32 var_17;
    s32 var_2;

    var_16 = 0;
    var_17 = func_00196C10(func_00196E10(), 0);
    if (func_00194738(func_00194C40()) != 0) {
        var_16 = func_00196C10(func_00196E10(), 1);
    }
    if (var_16 > 0) {
        var_17 = (var_16 < var_17) ? var_16 : var_17;
    }
    var_2 = var_17 ^ 1;
    if ((u32) (var_17 - 1) < 3U) {
        temp_19 = func_001965A8(func_00196E10());
        temp_18 = func_00194B18(func_00194C40());
        temp_16 = func_00196028();
        temp_2 = func_00194D58(temp_16, func_00194E30(func_00196028(), temp_19, temp_18, -1));
        if ((var_17 < temp_2) || (temp_2 == 0)) {
            temp_16_2 = func_00196028();
            func_00194CD0(temp_16_2, func_00194E30(func_00196028(), temp_19, temp_18, -1), var_17);
        }
        var_2 = var_17 ^ 1;
        if (var_17 == 1) {
            func_00119E08(arg0);
            var_2 = var_17 ^ 1;
        }
    }
    return var_2 == 0;
}
