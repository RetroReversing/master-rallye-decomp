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

void func_001D6188(void *arg0, s32 arg2, s32 arg3) {
    void *temp_3;
    void *temp_3_2;

    temp_3 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_3, M2C_UNK (**)(void *), 0x64)(arg0 + M2C_FIELD(temp_3, s16 *, 0x60));
    temp_3_2 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_3_2, M2C_UNK (**)(void *, s32, s32), 0x54)(arg0 + M2C_FIELD(temp_3_2, s16 *, 0x50), arg2, arg3);
}
