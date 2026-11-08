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

s8 func_003D30B0(s32);                              /* extern */
M2C_UNK func_003D6F68(s32, s8);                     /* extern */

s32 func_003D4EA0(void **arg0) {
    s8 temp_2;
    void *temp_4;

    temp_2 = func_003D30B0(M2C_FIELD(*arg0, s32 *, 0));
    if (temp_2 != -1) {
        func_003D6F68(M2C_FIELD(*arg0, s32 *, 0), temp_2);
        return 1;
    }
    temp_4 = *arg0;
    M2C_FIELD(temp_4, u8 *, 0x1A) = (u8) (M2C_FIELD(temp_4, u8 *, 0x1A) | 3);
    return 0;
}
