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

M2C_UNK func_003E0EF0(void *);                      /* extern */
s32 func_003E5F10(void *);                          /* extern */
M2C_UNK func_003E5FE0(void *, s32, s32);            /* extern */
s32 func_003E6070(void *, M2C_UNK);                 /* extern */

s32 func_003E11E8(void *arg0, s32 arg1, s32 arg2) {
    s32 var_18;
    s32 var_19;
    s32 var_3;
    void *temp_16;

    var_19 = 0;
    temp_16 = M2C_FIELD(arg0, void **, 0x40);
    if ((arg2 == -1) || (arg1 < arg2)) {
        if (M2C_FIELD(temp_16, s32 *, 8) == 0) {
            M2C_FIELD(arg0, s32 *, 8) = 0;
            M2C_FIELD(temp_16, s32 *, 8) = 1;
        }
        var_3 = 0;
        if (func_003E6070(temp_16, 0) != 0) {
            var_3 = func_003E5F10(temp_16) != 0;
        }
        var_18 = var_3;
    } else {
        var_19 = 1;
        var_18 = func_003E6070(temp_16, 0);
        func_003E0EF0(arg0);
    }
    func_003E5FE0(temp_16, M2C_FIELD(temp_16, s32 *, 0x118), M2C_FIELD(temp_16, s32 *, 4));
    if ((M2C_FIELD(temp_16, s32 *, 0x174) != 3) && (var_19 == 0)) {
        M2C_FIELD(temp_16, s32 *, 0x120) = (s32) (M2C_FIELD(temp_16, s32 *, 0x120) == 0);
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(temp_16, s32 *, 0x118) - M2C_FIELD(temp_16, s32 *, 0xAC));
    if (M2C_FIELD(temp_16, s32 *, 0x120) == 0) {
        M2C_FIELD(temp_16, s32 *, 0x118) = (s32) (M2C_FIELD(temp_16, s32 *, 0x118) + 1);
        M2C_FIELD(temp_16, s32 *, 4) = (s32) (M2C_FIELD(temp_16, s32 *, 4) + 1);
    }
    return var_18;
}
