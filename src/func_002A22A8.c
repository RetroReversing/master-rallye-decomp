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

M2C_UNK func_001D58B0(s32);                         /* extern */
s32 func_001D5900();                                /* extern */
M2C_UNK func_001D5DF0(s32);                         /* extern */
s32 func_001D5F70();                                /* extern */
M2C_UNK func_001FC288(s32);                         /* extern */
s32 func_001FC310();                                /* extern */
M2C_UNK func_00201280(s32);                         /* extern */
s32 func_00201350();                                /* extern */

void func_002A22A8(void) {
    func_001D58B0(func_001D5900());
    func_001FC288(func_001FC310());
    func_00201280(func_00201350());
    func_001D5DF0(func_001D5F70());
}
