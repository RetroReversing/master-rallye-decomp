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

s32 func_003A3CC8(s32);                             /* extern */
M2C_UNK *func_003A4508(s32);                        /* extern */
M2C_UNK func_003AC518(s32);                         /* extern */
extern M2C_UNK D_004873F8;

M2C_UNK *func_003A4568(s32 arg0) {
    if (func_003A3CC8(arg0) == 0) {
        return &D_004873F8;
    }
    func_003AC518(arg0);
    return func_003A4508(arg0);
}
