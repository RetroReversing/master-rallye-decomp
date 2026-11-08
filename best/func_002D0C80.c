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

M2C_UNK func_002D13F0(s32, M2C_UNK);                /* extern */
M2C_UNK func_003F94D0(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_002D0C80(void *arg0) {
    s32 *var_16;
    s32 temp_4;
    s32 var_17;

    var_17 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x230) > 0) {
        var_16 = arg0 + 0x220;
        do {
            temp_4 = *var_16;
            if (temp_4 != 0) {
                func_002D13F0(temp_4, 3);
                *var_16 = 0;
            }
            var_17 += 1;
            var_16 += 4;
        } while (var_17 < M2C_FIELD(arg0, s32 *, 0x230));
    }
    func_003F94D0(arg0 + 0x190, 0, 0x90);
    M2C_FIELD(arg0, s32 *, 0x230) = 0;
}
