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

u32 func_003A3CC8(s32);                             /* extern */
s32 func_003A4508(s32);                             /* extern */
s32 func_003D1310(s32, s32, u32);                   /* extern */

s32 func_00395788(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    s32 sp0;
    s32 sp4;
    u32 sp8;
    u32 spC;
    s32 sp10;
    s32 temp_17_2;
    s32 temp_2_2;
    u32 temp_17;
    u32 temp_2;

    sp0 = arg1;
    sp4 = arg2;
    sp8 = arg3;
    temp_2 = func_003A3CC8(arg0) - sp4;
    spC = temp_2;
    if (sp8 < temp_2) {
        spC = sp8;
    }
    if (func_003A3CC8(sp0) < spC) {
        spC = func_003A3CC8(sp0);
    }
    temp_17_2 = func_003A4508(arg0) + sp4;
    temp_2_2 = func_003D1310(temp_17_2, func_003A4508(sp0), spC);
    sp10 = temp_2_2;
    if (temp_2_2 != 0) {
        return sp10;
    }
    if (spC == sp8) {
        return 0;
    }
    temp_17 = func_003A3CC8(arg0);
    return (temp_17 - sp4) - func_003A3CC8(sp0);
}
