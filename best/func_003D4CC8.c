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

s32 func_003D9FC8(s32, M2C_UNK);                    /* extern */

void **func_003D4CC8(void **arg0) {
    void *temp_3;

    if (func_003D9FC8(M2C_FIELD(*arg0, s32 *, 0), 2) == -1) {
        temp_3 = *arg0;
        M2C_FIELD(temp_3, u8 *, 0x1A) = (u8) (M2C_FIELD(temp_3, u8 *, 0x1A) | 4);
    }
    return arg0;
}
