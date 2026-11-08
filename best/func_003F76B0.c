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
M2C_UNK func_003F94D0(void *, M2C_UNK, s32);        /* extern */

void *func_003F76B0(s32 arg1) {
    s32 temp_18;
    void *temp_2;
    void *temp_2_2;
    void *var_2;

    temp_18 = arg1 * 0x58;
    temp_2 = func_003F8A30(temp_18 + 0xC);
    var_2 = NULL;
    if (temp_2 != NULL) {
        temp_2_2 = temp_2 + 0xC;
        M2C_FIELD(temp_2, s32 *, 4) = arg1;
        M2C_FIELD(temp_2, s32 *, 0) = 0;
        M2C_FIELD(temp_2, void **, 8) = temp_2_2;
        func_003F94D0(temp_2_2, 0, temp_18);
        var_2 = temp_2;
    }
    return var_2;
}
