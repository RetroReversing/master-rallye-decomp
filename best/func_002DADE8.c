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

M2C_UNK func_002DAB78(s32);                         /* extern */
M2C_UNK func_002DAD38(s32, s32, M2C_UNK);           /* extern */

void func_002DADE8(s32 arg0, s32 arg1) {
    s32 temp_16;

    if (((s32) (arg1 - arg0) >> 5) >= 0x11) {
        temp_16 = arg0 + 0x200;
        func_002DAB78(temp_16);
        func_002DAD38(temp_16, arg1, 0);
        return;
    }
    func_002DAB78(arg1);
}
