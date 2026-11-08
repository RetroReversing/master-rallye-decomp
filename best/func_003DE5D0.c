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

s32 *func_003F73E0();                               /* extern */

void *func_003DE5D0(void *arg0, s32 arg1) {
    void *var_2;

    var_2 = NULL;
    if ((M2C_FIELD(arg0, s32 *, 0x38) < 0) && ((M2C_FIELD(arg0, s32 *, 0x38) = arg1, M2C_FIELD(arg0, s64 *, 0x40) = -1, M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~0xC) | 0x40), (M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), s32 (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK), 0x44)(arg0, 0, 1, 3) != -1)) || (var_2 = NULL, (*func_003F73E0() == 0x1D)))) {
        var_2 = arg0;
    }
    return var_2;
}
