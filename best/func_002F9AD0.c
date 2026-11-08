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

M2C_UNK func_002F99E8(s32, s32, void *);            /* extern */

s32 func_002F9AD0(void *arg0) {
    s32 temp_16;
    s32 temp_6;
    void *temp_5;
    void *temp_5_2;

    temp_5 = M2C_FIELD(arg0, void **, 0x60);
    temp_5_2 = temp_5 + (M2C_FIELD(temp_5, s32 *, 0x18) * 0x10);
    temp_6 = M2C_FIELD(arg0, s32 *, 0x78) - M2C_FIELD(temp_5_2, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x78) = temp_6;
    temp_16 = M2C_FIELD(temp_5_2, s32 *, 0xC);
    func_002F99E8(temp_16, temp_6, arg0);
    return temp_16;
}
