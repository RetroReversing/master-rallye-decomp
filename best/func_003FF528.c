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

s32 func_003FA760(s32, M2C_UNK *);                  /* extern */
extern M2C_UNK D_0048C568;
extern M2C_UNK D_0048C578;

M2C_UNK *func_003FF528(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_2;

    if (arg2 != 0) {
        if ((func_003FA760(arg2, &D_0048C578) == 0) || (var_2 = NULL, (func_003FA760(arg2, &D_0048C568) == 0))) {
            M2C_FIELD(arg0, s32 *, 0x34) = arg2;
            M2C_FIELD(arg0, s32 *, 0x30) = arg1;
            goto block_5;
        }
    } else {
block_5:
        var_2 = &D_0048C578;
    }
    return var_2;
}
