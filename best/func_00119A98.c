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

s32 func_00194738(s32);                             /* extern */
s32 func_00194B18(s32);                             /* extern */
s32 func_00194C40();                                /* extern */
M2C_UNK func_00194CD0(s32, s32, s32);               /* extern */
s32 func_00194D58(s32, s32);                        /* extern */
s32 func_00194E30(s32, s32, s32, s32);              /* extern */
M2C_UNK func_00195C68(s32, s32, f32);               /* extern */
f32 func_00195CF0(s32, s32);                        /* extern */
s32 func_00196028();                                /* extern */
s32 func_001965A8(s32);                             /* extern */
f32 func_001969A0(s32, M2C_UNK);                    /* extern */
s32 func_00196B40(s32, M2C_UNK);                    /* extern */
s32 func_00196E10();                                /* extern */

void func_00119A98(s32 arg1, s32 arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f20_2;
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_16_3;
    s32 temp_18;
    s32 temp_20;
    s32 temp_2;
    s32 var_16;
    s32 var_17;

    var_16 = 0;
    var_17 = func_00196B40(func_00196E10(), 0);
    if (func_00194738(func_00194C40()) != 0) {
        var_16 = func_00196B40(func_00196E10(), 1);
    }
    if (var_16 > 0) {
        var_17 = (var_16 < var_17) ? var_16 : var_17;
    }
    if (((u32) (var_17 - 1) < 3U) && ((temp_20 = func_001965A8(func_00196E10()), temp_18 = func_00194B18(func_00194C40()), temp_16 = func_00196028(), temp_2 = func_00194D58(temp_16, func_00194E30(func_00196028(), temp_20, temp_18, arg1)), ((var_17 < temp_2) != 0)) || (temp_2 == 0))) {
        temp_16_2 = func_00196028();
        func_00194CD0(temp_16_2, func_00194E30(func_00196028(), temp_20, temp_18, arg1), var_17);
    }
    temp_16_3 = arg2 + arg1;
    temp_f20 = func_00195CF0(func_00196028(), temp_16_3);
    temp_f0 = func_001969A0(func_00196E10(), 0);
    if (temp_f0 <= temp_f20) {
        func_00195C68(func_00196028(), temp_16_3, temp_f0);
    }
    if (func_00194738(func_00194C40()) != 0) {
        temp_f20_2 = func_00195CF0(func_00196028(), temp_16_3);
        temp_f0_2 = func_001969A0(func_00196E10(), 1);
        if (temp_f0_2 <= temp_f20_2) {
            func_00195C68(func_00196028(), temp_16_3, temp_f0_2);
        }
    }
}
