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
s32 func_003D1310(s32, s32, s32);                   /* extern */
s32 func_003D1388(s32, s32);                        /* extern */

s32 func_0039AA70(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;

    sp0 = arg1;
    sp4 = arg2;
    sp8 = arg3;
    spC = sp4;
loop_1:
    if (func_003A3CC8(arg0) < (u32) (spC + sp8)) {
        return 0xFFFFFFFF;
    }
    if ((func_003D1388(func_003A4508(arg0) + spC, sp0) != 0) && (func_003D1310(func_003A4508(arg0) + spC, sp0, sp8) == 0)) {
        return spC;
    }
    spC += 1;
    goto loop_1;
}
