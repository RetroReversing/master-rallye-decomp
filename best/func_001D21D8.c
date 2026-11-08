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

void *D_002AD408(M2C_UNK);                          /* extern */
extern void *D_00426290;

void *func_001D21D8(void) {
    void *temp_2;
    void *temp_2_2;

    temp_2 = D_00426290;
    if (temp_2 == NULL) {
        temp_2_2 = D_002AD408(0x10);
        D_00426290 = temp_2_2;
        M2C_FIELD(temp_2_2, s32 *, 0) = 0;
        M2C_FIELD(temp_2_2, s32 *, 4) = 0;
        M2C_FIELD(temp_2_2, s32 *, 8) = 0;
        M2C_FIELD(temp_2_2, s32 *, 0xC) = 0;
    }
    return temp_2;
}
