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

M2C_UNK *func_002B1FC0(u32, u32);                   /* extern */
M2C_UNK *func_003D2910(u32);                        /* extern */
M2C_UNK *func_003D2B48(s32, u32);                   /* extern */
M2C_UNK func_003F931C(M2C_UNK *, void *, M2C_UNK *); /* extern */
extern M2C_UNK D_00437E18;

M2C_UNK *func_003CD828(M2C_UNK **arg0) {
    M2C_UNK **temp_4_2;
    M2C_UNK *temp_17;
    M2C_UNK *temp_2;
    M2C_UNK *temp_3;
    M2C_UNK *temp_6;
    M2C_UNK *var_16;
    u32 temp_16;
    u32 temp_4;
    u32 temp_5;
    u32 var_17;

    var_17 = 0x10;
    temp_4 = *arg0 + 1;
    if (temp_4 > 0x10U) {
        do {
            var_17 *= 2;
        } while (var_17 < temp_4);
    }
    temp_16 = var_17 + 0x10;
    temp_5 = var_17 + 0x17;
    if (temp_16 >= 0x81U) {
        temp_2 = func_002B1FC0(temp_16, temp_5);
        if (temp_2 != NULL) {
            var_16 = temp_2;
        } else {
            var_16 = func_003D2910(temp_16);
        }
    } else {
        temp_4_2 = (((temp_5 >> 3) - 1) * 4) + &D_00437E18;
        temp_3 = *temp_4_2;
        if (temp_3 != NULL) {
            var_16 = temp_3;
            *temp_4_2 = *temp_3;
        } else {
            var_16 = func_003D2B48(temp_5 & 0xFFFFFFF8, temp_5);
        }
    }
    M2C_FIELD(var_16, u32 *, 4) = var_17;
    M2C_FIELD(var_16, s32 *, 8) = 1;
    M2C_FIELD(var_16, s32 *, 0xC) = 0;
    temp_6 = *arg0;
    temp_17 = var_16 + 0x10;
    if (temp_6 != NULL) {
        func_003F931C(temp_17, arg0 + 0x10, temp_6);
    }
    M2C_FIELD(var_16, M2C_UNK **, 0) = *arg0;
    return temp_17;
}
