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

s32 func_003E1708();
s32 func_003E4238();

s32 func_003E5F10(s32 *arg0) {
    s32 temp_2;
    void *var_17;

    if ((M2C_FIELD(arg0, s32 *, 0x174) == 3) && (M2C_FIELD(arg0, s32 *, 0x120) != 0)) {
        func_003E1708("odd number of field pictures");
        M2C_FIELD(arg0, s32 *, 0x120) = 0;
    }
    switch (M2C_FIELD(arg0, s32 *, 0x174)) {        /* irregular */
    case 3:
        var_17 = M2C_FIELD(arg0, void **, 0x1C0);
        break;
    case 1:
        var_17 = M2C_FIELD(arg0, void **, 0x1D0);
        break;
    case 2:
        var_17 = M2C_FIELD(arg0, void **, 0x1E0);
        break;
    default:
        var_17 = M2C_FIELD(arg0, void **, 0x1C0);
        func_003E1708(arg0, "unknown picture sutructure");
        break;
    }
    temp_2 = func_003E4238(arg0);
    if (temp_2 != 0) {
        M2C_FIELD(var_17, s32 *, 0x28) = 1;
    }
    return temp_2;
}
