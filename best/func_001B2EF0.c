/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

void func_001B2EF0(void *arg0) {
    void **temp_5;
    void *temp_2;

    M2C_FIELD(arg0, s32 *, 0xCC) = 1;
    temp_5 = M2C_FIELD(arg0, void ***, 0xC8);
    M2C_FIELD(arg0, s32 *, 0xD0) = 1;
    if (temp_5 != NULL) {
        temp_2 = *temp_5;
        M2C_FIELD(temp_2, M2C_UNK (**)(void *, void **), 0x2C)(temp_5 + M2C_FIELD(temp_2, s16 *, 0x28), temp_5);
    }
}
