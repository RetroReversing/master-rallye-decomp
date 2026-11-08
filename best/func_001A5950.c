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

s32 func_001A5DB0();                                /* extern */
s32 func_001A5E00(void *, s32);                     /* extern */
void *func_001E3820(s32, s32, void *);              /* extern */

s32 func_001A5950(void *arg0, s32 arg1) {
    s32 *temp_4;
    s32 temp_5;
    s32 var_18;
    s32 var_19;
    void *temp_2;
    void *temp_2_2;

    var_19 = 0;
    var_18 = 0;
    if (func_001A5DB0() != 0) {
        var_18 = 1;
        var_19 = 2;
    }
    temp_5 = arg1 * 4;
    temp_2 = func_001E3820(func_001E4280(), M2C_FIELD(arg0, s32 *, 0x20) + temp_5, arg0 + 0x70);
    if ((temp_2 != NULL) && (M2C_FIELD(M2C_FIELD(temp_2, void **, 8), s32 *, 0x48) != 0)) {
        var_18 = 1;
        var_19 = 0x69;
    }
    temp_2_2 = func_001E3820(func_001E4280(), M2C_FIELD(arg0, s32 *, 0x1C) + temp_5, arg0 + 0x6C);
    if ((temp_2_2 != NULL) && (M2C_FIELD(M2C_FIELD(temp_2_2, void **, 8), s32 *, 0x100) != 0)) {
        var_18 = 1;
        var_19 = 2;
    }
    if (func_001A5E00(arg0, arg1) != 0) {
        var_18 = 1;
        var_19 = 0x3C;
    }
    if (var_18 != 0) {
        temp_4 = temp_5 + M2C_FIELD(arg0, s32 *, 0x60);
        if (*temp_4 == 0) {
            *temp_4 = var_19;
        }
    }
    return var_18;
}
