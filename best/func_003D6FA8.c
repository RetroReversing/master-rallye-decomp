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

s32 func_003D89B0(s32, s32, s32);                   /* extern */

s32 func_003D6FA8(void *arg0) {
    s32 temp_5;
    u16 temp_2;

    temp_2 = M2C_FIELD(arg0, u16 *, 0x48);
    if (temp_2 == 0) {
        return -1;
    }
    temp_5 = M2C_FIELD(arg0, s32 *, 0x10);
    return func_003D89B0(temp_2 - 1, temp_5, M2C_FIELD(arg0, s32 *, 0x14) - temp_5);
}
