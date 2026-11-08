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

void func_002BC1E8(void *arg0, s32 arg1) {
    void *temp_3;
    void *temp_9;

    temp_9 = M2C_FIELD(arg0, void **, 8);
    temp_3 = M2C_FIELD(temp_9, void **, 8);
    M2C_FIELD(temp_3, M2C_UNK (**)(void *, s32, void *, M2C_UNK, s32, void *), 0x3C)(temp_9 + M2C_FIELD(temp_3, s16 *, 0x38), M2C_FIELD(arg0, s32 *, 0x20), arg0 + 0x24, 8, arg1, temp_9);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + 8);
}
