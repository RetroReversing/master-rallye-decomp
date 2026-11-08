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

M2C_UNK func_003A5BC8(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void *func_003AD088(void *arg0) {
    func_003A5BC8(arg0, 0, 0, 0);
    func_003A5BC8(arg0 + 0xC, 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x18) = -1;
    return arg0;
}
