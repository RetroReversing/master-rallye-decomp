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

s32 D_002AD408(M2C_UNK);                            /* extern */
s32 *func_001D5550(s32, void *);                    /* extern */

void *func_001D57C8(void *arg0) {
    void *temp_17;

    temp_17 = arg0 + 8;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(temp_17, void **, 8) = temp_17;
    M2C_FIELD(temp_17, void **, 4) = temp_17;
    M2C_FIELD(arg0, s32 **, 0) = func_001D5550(D_002AD408(0x14), temp_17);
    M2C_FIELD(arg0, s32 **, 4) = func_001D5550(D_002AD408(0x14), temp_17);
    *M2C_FIELD(arg0, s32 **, 0) = 1;
    *M2C_FIELD(arg0, s32 **, 4) = 1;
    return arg0;
}
