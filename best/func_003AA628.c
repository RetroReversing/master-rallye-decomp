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

s32 func_003A3B80(s32);                             /* extern */
s32 func_003AA5F0(s32);                             /* extern */
M2C_UNK func_003B0810(s32, s32, s32);               /* extern */

void func_003AA628(s32 arg0) {
    s32 temp_17;

    temp_17 = func_003AA5F0(arg0);
    func_003B0810(arg0, temp_17, func_003A3B80(arg0));
}
