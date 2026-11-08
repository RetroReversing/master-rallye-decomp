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

s32 func_003CD828(void *, s32);                     /* extern */
extern M2C_UNK D_00488D80;

void *func_003D1F08(void *arg0, s32 *arg1) {
    s32 var_5;
    void *temp_4;

    var_5 = *arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00488D80;
    temp_4 = var_5 - 0x10;
    if (M2C_FIELD(temp_4, s32 *, 0xC) != 0) {
        var_5 = func_003CD828(temp_4, var_5);
    } else {
        M2C_FIELD(temp_4, s32 *, 8) = (s32) (M2C_FIELD(temp_4, s32 *, 8) + 1);
    }
    M2C_FIELD(arg0, s32 *, 4) = var_5;
    return arg0;
}
