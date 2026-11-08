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

s32 func_001CE2F8(s32);                             /* extern */
s32 func_001D24B8(s32, M2C_UNK, s32, M2C_UNK *);    /* extern */
extern M2C_UNK D_00479B98;

M2C_UNK *func_002602B0(s32 arg0, M2C_UNK *arg1) {
    M2C_UNK *var_17;
    M2C_UNK *var_2;
    s32 temp_17;

    temp_17 = arg1 + 0x14;
    var_2 = arg1;
    if ((func_001D24B8(temp_17, 0, func_001CE2F8(temp_17), &D_00479B98) == -1) && (var_17 = *arg1, var_2 = NULL, (var_17 != NULL))) {
loop_3:
        var_2 = func_002602B0(arg0, var_17);
        if (var_2 == NULL) {
            var_17 = M2C_FIELD(var_17, M2C_UNK **, 4);
            if (var_17 == NULL) {
                var_2 = NULL;
            } else {
                goto loop_3;
            }
        }
    }
    return var_2;
}
