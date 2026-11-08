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
M2C_UNK func_001D6090();                            /* extern */
extern M2C_UNK D_0047FA08;

void *func_002B8438(void *arg0) {
    void *temp_3;

    func_001D6090();
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0047FA08;
    M2C_FIELD(arg0, s32 *, 0x14) = 0xFFFFFFFF;
    temp_3 = D_002AD408(0x2C);
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    M2C_FIELD(arg0, void **, 0x10) = temp_3;
    M2C_FIELD(temp_3, s32 *, 0) = 0;
    M2C_FIELD(temp_3, s32 *, 4) = 0;
    M2C_FIELD(temp_3, s32 *, 8) = 0;
    M2C_FIELD(temp_3, s8 *, 0x10) = 0;
    M2C_FIELD(temp_3, s32 *, 0x14) = 0;
    M2C_FIELD(temp_3, s32 *, 0x18) = 0;
    M2C_FIELD(temp_3, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_3, s32 *, 0x20) = 0;
    M2C_FIELD(temp_3, s32 *, 0x24) = 0;
    M2C_FIELD(temp_3, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    return arg0;
}
