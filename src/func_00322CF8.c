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

M2C_UNK func_0030E9F0();                            /* extern */
M2C_UNK func_0030EA38();                            /* extern */
M2C_UNK func_00322988(M2C_UNK);                     /* extern */
M2C_UNK func_00322A18();                            /* extern */

void func_00322CF8(void) {
    func_00322988(0xA);
    func_0030EA38();
    func_00322988(0xA);
    func_00322A18();
    func_00322988(0xA);
    func_0030E9F0();
    func_00322988(0xA);
}
