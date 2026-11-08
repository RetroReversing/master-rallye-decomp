/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

M2C_UNK *func_002B1FC0(u32, s32);                   /* extern */
M2C_UNK func_002B2028(M2C_UNK *);                   /* extern */
M2C_UNK *func_002B2078(u32);                        /* extern */
M2C_UNK *func_003D2910(u32);                        /* extern */
M2C_UNK *func_003D2B48(s32, s32);                   /* extern */
M2C_UNK func_003F931C(M2C_UNK *, M2C_UNK *, u32);   /* extern */
extern M2C_UNK D_00437E18;

M2C_UNK *func_003D2BE8(M2C_UNK *arg0, u32 arg1, u32 arg2) {
    M2C_UNK **temp_2_2;
    M2C_UNK **temp_3_2;
    M2C_UNK *temp_2;
    M2C_UNK *temp_4;
    M2C_UNK *var_17;
    s32 temp_21;
    s32 temp_5;
    u32 temp_20;
    u32 temp_3;

    temp_21 = arg1 < 0x81U;
    if ((temp_21 == 0) && (arg2 >= 0x81U)) {
        return func_002B2078(arg2);
    }
    temp_3 = arg2 + 7;
    temp_20 = arg1 + 7;
    temp_5 = temp_3 & 0xFFFFFFF8;
    if ((temp_20 & 0xFFFFFFF8) == temp_5) {
        return arg0;
    }
    if (arg2 >= 0x81U) {
        temp_2 = func_002B1FC0(arg2, temp_5);
        var_17 = temp_2;
        if (temp_2 == NULL) {
            var_17 = func_003D2910(arg2);
        }
    } else {
        temp_3_2 = (((temp_3 >> 3) - 1) * 4) + &D_00437E18;
        temp_4 = *temp_3_2;
        if (temp_4 != NULL) {
            var_17 = temp_4;
            *temp_3_2 = *temp_4;
        } else {
            var_17 = func_003D2B48(temp_5, temp_5);
        }
    }
    func_003F931C(var_17, arg0, (arg1 >= arg2) ? arg2 : arg1);
    if (temp_21 == 0) {
        func_002B2028(arg0);
    } else {
        temp_2_2 = (((temp_20 >> 3) - 1) * 4) + &D_00437E18;
        *arg0 = *temp_2_2;
        *temp_2_2 = arg0;
    }
    return var_17;
}
