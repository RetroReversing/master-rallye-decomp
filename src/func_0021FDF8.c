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

s32 D_002AD408(M2C_UNK);                            /* extern */
s32 func_0021FD90(s32, void *);                     /* extern */

void *func_0021FDF8(void *arg0) {
    s32 var_3;
    void *var_2;

    var_3 = 3;
    var_2 = arg0;
    do {
        M2C_FIELD(var_2, s32 *, 0) = 0;
        var_3 -= 1;
        M2C_FIELD(var_2, void **, 8) = var_2;
        M2C_FIELD(var_2, void **, 4) = var_2;
        var_2 += 0xC;
    } while (var_3 != -1);
    M2C_FIELD(arg0, s32 *, 0x30) = func_0021FD90(D_002AD408(8), arg0);
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    return arg0;
}
