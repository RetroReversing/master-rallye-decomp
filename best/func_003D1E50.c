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

void *func_003CD828(M2C_UNK *);                     /* extern */
extern M2C_UNK D_00436208;
extern M2C_UNK D_00488D80;

void *func_003D1E50(void *arg0) {
    void *var_3;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00488D80;
    if (M2C_FIELD(&D_00436208, s32 *, 0xC) != 0) {
        var_3 = func_003CD828(&D_00436208);
    } else {
        var_3 = &D_00436208 + 0x10;
        M2C_FIELD(&D_00436208, s32 *, 8) = (s32) (M2C_FIELD(&D_00436208, s32 *, 8) + 1);
    }
    M2C_FIELD(arg0, void **, 4) = var_3;
    return arg0;
}
