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

s32 func_003D3460(void **arg0) {
    void *temp_3;
    void *temp_4;
    void *temp_5;

    temp_5 = M2C_FIELD(*arg0, void **, 0);
    if (temp_5 != NULL) {
        temp_3 = M2C_FIELD(temp_5, void **, 0x50);
        if (M2C_FIELD(temp_3, s32 (**)(void *, void *), 0x5C)(temp_5 + M2C_FIELD(temp_3, s16 *, 0x58), temp_5) != 0) {
            temp_4 = *arg0;
            M2C_FIELD(temp_4, u8 *, 0x1A) = (u8) (M2C_FIELD(temp_4, u8 *, 0x1A) | 4);
            return -1;
        }
        return 0;
    }
    return -1;
}
