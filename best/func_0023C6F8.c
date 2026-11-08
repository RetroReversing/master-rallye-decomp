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

M2C_UNK func_00201620(void *, void *);              /* extern */
M2C_UNK func_002027E8(void *);                      /* extern */

void *func_0023C6F8(void *arg0) {
    void *temp_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_5;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_002027E8(arg0 + 0xC);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    temp_2 = arg0 + 0x18;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    temp_3 = arg0 + 0x24;
    M2C_FIELD(temp_2, s32 *, 4) = 0;
    temp_5 = arg0 + 0x30;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(temp_3, s32 *, 8) = 0;
    M2C_FIELD(temp_3, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(temp_5, s32 *, 8) = 0;
    M2C_FIELD(temp_5, s32 *, 4) = 0;
    func_00201620(arg0 + 0x3C, temp_5);
    temp_3_2 = arg0 + 0xB0;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(temp_3_2, s32 *, 8) = 0;
    M2C_FIELD(temp_3_2, s32 *, 4) = 0;
    return arg0;
}
