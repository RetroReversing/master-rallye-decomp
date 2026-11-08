/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

M2C_UNK D_002AD390(s32);                            /* extern */
M2C_UNK func_003A4BF0(s32, M2C_UNK);                /* extern */

void func_0038FA38(s32 arg0, s32 arg1) {
    s32 sp0;

    sp0 = arg1;
    func_003A4BF0(arg0 + 0xC, 2);
    func_003A4BF0(arg0 + 8, 2);
    if (sp0 & 1) {
        D_002AD390(arg0);
    }
}
