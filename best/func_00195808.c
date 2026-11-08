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

s32 func_00195700();

void func_00195808(s32 arg0) {
    func_00195700(0, 0);
    func_00195700(arg0, 1, 0);
    func_00195700(arg0, 2, 0);
    func_00195700(arg0, 3, 0);
    func_00195700(arg0, 4, 0);
    func_00195700(arg0, 5, 0);
    func_00195700(arg0, 6, 0);
    func_00195700(arg0, 7, 0);
    func_00195700(arg0, 8, 0);
    func_00195700(arg0, 9, 0);
    func_00195700(arg0, 0xA, 0);
    func_00195700(arg0, 0xB, 0);
    func_00195700(arg0, 0xC, 0);
    func_00195700(arg0, 0xD, 0);
    func_00195700(arg0, 0xE, 0);
    func_00195700(arg0, 0xF, 0);
    func_00195700(arg0, 0x10, 0);
    func_00195700(arg0, 0x11, 0);
}
