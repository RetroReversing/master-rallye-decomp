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

M2C_UNK *func_002B1FC0(u32, u32, u32, M2C_UNK *, s32); /* extern */
M2C_UNK func_002B2028(void *);                      /* extern */
M2C_UNK *func_003D2910(u32);                        /* extern */
M2C_UNK *func_003D2B48(s32, u32, u32, M2C_UNK *, s32); /* extern */
M2C_UNK func_003F931C(M2C_UNK *, M2C_UNK *, s32, M2C_UNK *); /* extern */
extern M2C_UNK D_00437E18;

void func_003CE0D0(M2C_UNK **arg0, s32 arg1, u32 arg2) {
    M2C_UNK **temp_4_2;
    M2C_UNK *temp_3_2;
    M2C_UNK *temp_7;
    M2C_UNK *var_16_2;
    M2C_UNK *var_17_2;
    M2C_UNK *var_2;
    s32 temp_2;
    s32 temp_3_3;
    s32 temp_6;
    s32 var_8;
    u32 temp_19;
    u32 temp_4;
    u32 temp_5;
    u32 temp_5_2;
    u32 var_16;
    u32 var_17;
    u32 var_6;
    void **temp_2_2;
    void *temp_3;
    void *temp_6_2;

    var_6 = arg2;
    var_8 = 0;
    temp_19 = var_6;
    temp_4 = arg1 + 1;
    temp_7 = *arg0;
    temp_3 = temp_7 - 0x10;
    M2C_FIELD(temp_3, s32 *, 0xC) = 0;
    if (((u32) M2C_FIELD(temp_3, u32 *, 8) >= 2U) || (var_6 = M2C_FIELD(temp_3, u32 *, 4), ((var_6 < temp_4) != 0)) || ((u32) (((temp_4 > 0xFU) ? temp_4 : 0x10U) * 2) < var_6)) {
        var_8 = 1;
    }
    temp_5 = arg1 + 1;
    if (var_8 != 0) {
        var_17 = 0x10;
        var_16 = 0x20;
        if (temp_5 > 0x10U) {
            do {
                var_17 *= 2;
            } while (var_17 < temp_5);
            var_16 = var_17 + 0x10;
        }
        temp_5_2 = var_17 + 0x17;
        if (var_16 >= 0x81U) {
            var_2 = func_002B1FC0(var_16, temp_5_2, var_6, temp_7, var_8);
            if (var_2 == NULL) {
                var_2 = func_003D2910(var_16);
            }
            goto block_16;
        }
        temp_4_2 = (((temp_5_2 >> 3) - 1) * 4) + &D_00437E18;
        temp_3_2 = *temp_4_2;
        if (temp_3_2 != NULL) {
            var_16_2 = temp_3_2;
            *temp_4_2 = *temp_3_2;
        } else {
            var_2 = func_003D2B48(temp_5_2 & 0xFFFFFFF8, temp_5_2, var_6, temp_7, var_8);
block_16:
            var_16_2 = var_2;
        }
        M2C_FIELD(var_16_2, u32 *, 4) = var_17;
        M2C_FIELD(var_16_2, s32 *, 8) = 1;
        M2C_FIELD(var_16_2, s32 *, 0xC) = 0;
        if (temp_19 != 0) {
            temp_6 = M2C_FIELD(*arg0, s32 *, -0x10);
            var_17_2 = var_16_2 + 0x10;
            if (temp_6 != 0) {
                func_003F931C(var_17_2, *arg0, temp_6, *arg0);
            }
            M2C_FIELD(var_16_2, M2C_UNK **, 0) = M2C_FIELD(*arg0, M2C_UNK **, -0x10);
        } else {
            M2C_FIELD(var_16_2, M2C_UNK **, 0) = NULL;
            var_17_2 = var_16_2 + 0x10;
        }
        temp_6_2 = *arg0 - 0x10;
        temp_2 = M2C_FIELD(temp_6_2, s32 *, 8) - 1;
        M2C_FIELD(temp_6_2, s32 *, 8) = temp_2;
        if (temp_2 == 0) {
            temp_3_3 = M2C_FIELD(temp_6_2, s32 *, 4);
            if ((u32) (temp_3_3 + 0x10) >= 0x81U) {
                func_002B2028(temp_6_2);
            } else {
                temp_2_2 = ((((u32) (temp_3_3 + 0x17) >> 3) - 1) * 4) + &D_00437E18;
                M2C_FIELD(*arg0, void **, -0x10) = (void *) *temp_2_2;
                *temp_2_2 = temp_6_2;
            }
        }
        *arg0 = var_17_2;
    }
}
