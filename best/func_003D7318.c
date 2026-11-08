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

s32 func_003D7318(void *arg0) {
    s32 temp_2;
    s32 temp_3;
    s32 var_2;
    s32 var_5;

    temp_3 = M2C_FIELD(arg0, s32 *, 0);
    temp_2 = temp_3 & 0x100;
    if (temp_2 == 0) {
        var_5 = M2C_FIELD(arg0, s32 *, 0xC);
    } else {
        var_5 = M2C_FIELD(arg0, s32 *, 0x24);
    }
    if (temp_2 == 0) {
        var_2 = M2C_FIELD(arg0, s32 *, 8);
    } else {
        var_2 = M2C_FIELD(arg0, s32 *, 0x2C);
    }
    if (var_5 != var_2) {
        if (temp_3 & 0x100) {
            return M2C_FIELD(arg0, s32 *, 0x24);
        }
        return M2C_FIELD(arg0, s32 *, 4);
    }
    return M2C_FIELD(arg0, s32 *, 0x14);
}
