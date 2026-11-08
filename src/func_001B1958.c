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

M2C_UNK func_001B19C0(s32, s32, s32);               /* extern */
M2C_UNK func_001B1AF8(s32, s32);                    /* extern */
s32 *func_00201350();                               /* extern */

void func_001B1958(s32 arg0, void *arg1) {
    s32 temp_16;

    temp_16 = M2C_FIELD(arg1, s32 *, 0x50) + 0x20;
    func_001B19C0(arg0, temp_16, *func_00201350() + 0x90);
    func_001B1AF8(arg0, M2C_FIELD(arg1, s32 *, 0x50) + 0x20);
}
