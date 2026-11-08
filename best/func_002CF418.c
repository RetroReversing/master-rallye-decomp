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

s32 func_002BE550();                                /* extern */
s32 func_002BE6F8(s32, s32);                        /* extern */
M2C_UNK func_003ECE50(M2C_UNK *, s32, s32);         /* extern */
extern s32 D_00429B68;
extern s32 D_00429B6C;
extern M2C_UNK D_00483680;
extern M2C_UNK D_00483690;
extern M2C_UNK D_0049AF38;

void func_002CF418(s32 arg0) {
    s32 sp7C;
    s32 *var_17;
    s32 *var_18;
    s32 temp_2;
    s32 var_16;
    s32 var_19;

    var_19 = 0;
    var_18 = &D_0049AF38 + 0x7C;
    var_16 = 0x1F;
    D_00429B6C = 0;
    D_00429B68 += 1;
    var_17 = &sp7C;
    do {
        temp_2 = func_002BE6F8(func_002BE550(), var_16);
        *var_17 = temp_2;
        if ((temp_2 != *var_18) || (((D_00429B68 & 0x7F) == 0x7F) && (temp_2 != 0))) {
            *var_18 = temp_2;
            func_003ECE50(&D_00483680, var_16, temp_2);
            var_19 = 1;
        }
        var_16 -= 1;
        var_18 -= 4;
        var_17 -= 4;
    } while (var_16 >= 6);
    if (var_19 != 0) {
        func_003ECE50(&D_00483690, arg0, D_00429B68);
    }
}
