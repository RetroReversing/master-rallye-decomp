/* machine draft (m2c), tried by autopilot */
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

s32 func_002C2CF0(void *arg0) {
    s32 var_3;

    var_3 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0x68) != 0) && (M2C_FIELD(arg0, s32 *, 0x70) != 0) && (M2C_FIELD(arg0, s32 *, 0x18) != 0) && (M2C_FIELD(arg0, s32 *, 0x6C) == 0)) {
        var_3 = M2C_FIELD(arg0, s32 *, 0x24);
    }
    return var_3;
}
