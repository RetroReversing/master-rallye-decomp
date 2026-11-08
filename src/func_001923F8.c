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

M2C_UNK func_00192130(void *, s32);                 /* extern */
M2C_UNK func_001D2488(s32, s32);                    /* extern */
M2C_UNK func_001D2900(s32, s32);                    /* extern */
s32 func_001E3750(s32, s32);                        /* extern */

s32 func_001923F8(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_17;

    temp_17 = arg1 + 0xC;
    func_00192130(arg1, arg2);
    func_001D2900(temp_17, M2C_FIELD(arg1, s32 *, 0x6C));
    func_001D2488(arg0, func_001E3750(func_001E4280(), temp_17));
    return arg0;
}
