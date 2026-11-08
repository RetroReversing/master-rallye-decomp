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

M2C_UNK func_003C8710(s32, M2C_UNK, M2C_UNK, s16);  /* extern */
M2C_UNK func_003C8798(s32, M2C_UNK, M2C_UNK, s16);  /* extern */
M2C_UNK func_003C8B08(s32, s32);                    /* extern */

void func_002F2708(s32 arg0, s32 arg1) {
    s16 temp_16;
    s32 temp_18;

    temp_18 = arg1 & 1;
    func_003C8B08(arg0 + 0x2600, temp_18);
    temp_16 = 1 - temp_18;
    func_003C8710((temp_18 != 0) ? (arg0 + 0x27D0) : (arg0 + 0x2660), 0x800, 0x800, temp_16);
    func_003C8798((temp_18 != 0) ? (arg0 + 0x2850) : (arg0 + 0x26E0), 0x800, 0x800, temp_16);
}
