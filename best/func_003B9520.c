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

void func_003B9520(void *arg0) {
    s32 temp_2;
    void *temp_2_2;

    temp_2 = M2C_FIELD(arg0, s32 *, 0x14) - 1;
    M2C_FIELD(arg0, s32 *, 0x14) = temp_2;
    if ((temp_2 == 0) && (arg0 != NULL)) {
        temp_2_2 = M2C_FIELD(arg0, void **, 0x10);
        M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(arg0 + M2C_FIELD(temp_2_2, s16 *, 8), 3, arg0);
    }
}
