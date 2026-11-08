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

s32 func_003D8118();                                /* extern */

u8 func_003D74A8(void *arg0) {
    u8 var_2;

    if ((u32) M2C_FIELD(arg0, u32 *, 4) >= (u32) M2C_FIELD(arg0, u32 *, 8)) {
        var_2 = -1U;
        if (func_003D8118() != -1) {
            goto block_3;
        }
    } else {
block_3:
        var_2 = *(u8 *) M2C_FIELD(arg0, u32 *, 4);
    }
    return var_2;
}
