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

M2C_UNK func_002C14D8(void *, s32);                 /* extern */
M2C_UNK func_003CD808();                            /* extern */
extern M2C_UNK D_00480F30;

void func_002BFA38(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &D_00480F30;
    func_003CD808();
    func_002C14D8(arg0, arg1);
}
