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

void **func_0015E848();                             /* extern */

void func_002A1320(void) {
    M2C_UNK (*temp_5)(void *, M2C_UNK);
    void **temp_2;
    void *temp_3;

    temp_2 = func_0015E848();
    temp_3 = *temp_2;
    temp_5 = M2C_FIELD(temp_3, M2C_UNK (**)(void *, M2C_UNK), 0x54);
    temp_5(temp_2 + M2C_FIELD(temp_3, s16 *, 0x50), temp_5);
}
