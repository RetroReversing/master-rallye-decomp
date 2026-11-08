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

void *func_003F8A30(s32);                           /* extern */
M2C_UNK func_003F94D0(void *, M2C_UNK, u32);        /* extern */

void *func_004029F8(s32 arg1, s32 arg2) {
    u32 temp_6;
    void *temp_2;
    void *var_4;

    temp_2 = func_003F8A30(arg1 * arg2);
    if (temp_2 != NULL) {
        temp_6 = (M2C_FIELD(temp_2, s32 *, -4) & 0xFFFFFFFC) - 4;
        if (temp_6 < 0x25U) {
            var_4 = temp_2;
            if (temp_6 >= 0x14U) {
                M2C_FIELD(temp_2, s32 *, 0) = 0;
                var_4 = temp_2 + 8;
                M2C_FIELD(temp_2, s32 *, 4) = 0;
                if (temp_6 >= 0x1CU) {
                    M2C_FIELD(temp_2, s32 *, 8) = 0;
                    M2C_FIELD(temp_2, s32 *, 0xC) = 0;
                    var_4 = temp_2 + 0x10;
                    if (temp_6 >= 0x24U) {
                        M2C_FIELD(temp_2, s32 *, 0x10) = 0;
                        var_4 = temp_2 + 0x18;
                        M2C_FIELD(temp_2, s32 *, 0x14) = 0;
                    }
                }
            }
            M2C_FIELD(var_4, s32 *, 0) = 0;
            M2C_FIELD((var_4 + 4), s32 *, 4) = 0;
            M2C_FIELD(var_4, s32 *, 4) = 0;
        } else {
            func_003F94D0(temp_2, 0, temp_6);
        }
        return temp_2;
    }
    return NULL;
}
