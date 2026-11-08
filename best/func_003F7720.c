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

void *func_003F76B0(void *, M2C_UNK);               /* extern */
M2C_UNK func_003F7820();                            /* extern */

void *func_003F7720(void *arg0) {
    s32 var_3;
    void *temp_2;
    void *temp_2_2;
    void *var_16;
    void *var_3_2;
    void *var_4;

    var_16 = arg0 + 0x1D8;
    if (M2C_FIELD(arg0, s32 *, 0x38) == 0) {
        func_003F7820();
    }
loop_4:
    var_3 = M2C_FIELD(var_16, s32 *, 4) - 1;
    var_4 = M2C_FIELD(var_16, void **, 8);
    if (var_3 >= 0) {
loop_5:
        var_3 -= 1;
        if (M2C_FIELD(var_4, s16 *, 0xC) != 0) {
            var_4 += 0x58;
            if (var_3 < 0) {
                goto block_7;
            }
            goto loop_5;
        }
        M2C_FIELD(var_4, s16 *, 0xC) = 1;
        M2C_FIELD(var_4, s16 *, 0xE) = -1;
        M2C_FIELD(var_4, void **, 0x54) = arg0;
        M2C_FIELD(var_4, s32 *, 0) = 0;
        M2C_FIELD(var_4, s32 *, 8) = 0;
        M2C_FIELD(var_4, s32 *, 4) = 0;
        M2C_FIELD(var_4, s32 *, 0x10) = 0;
        M2C_FIELD(var_4, s32 *, 0x14) = 0;
        M2C_FIELD(var_4, s32 *, 0x18) = 0;
        M2C_FIELD(var_4, s32 *, 0x30) = 0;
        M2C_FIELD(var_4, s32 *, 0x34) = 0;
        M2C_FIELD(var_4, s32 *, 0x44) = 0;
        M2C_FIELD(var_4, s32 *, 0x48) = 0;
        return var_4;
    }
block_7:
    temp_2 = M2C_FIELD(var_16, void **, 0);
    var_3_2 = temp_2;
    if (temp_2 == NULL) {
        temp_2_2 = func_003F76B0(arg0, 4);
        M2C_FIELD(var_16, void **, 0) = temp_2_2;
        if (temp_2_2 == NULL) {
            M2C_FIELD(arg0, s32 *, 0) = 0xC;
            return NULL;
        }
        var_3_2 = temp_2_2;
        goto block_3;
    }
block_3:
    var_16 = var_3_2;
    goto loop_4;
}
