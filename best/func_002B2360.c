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

s32 func_002B2440(s32, s32, s32);                   /* extern */
M2C_UNK func_003F9698(M2C_UNK *, s32);              /* extern */
extern M2C_UNK D_0047E098;

s32 func_002B2360(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_2;

    sp0 = arg1;
    sp4 = arg2;
    sp8 = 0;
loop_1:
    if (sp8 >= 3) {
        return spC;
    }
    func_003F9698(&D_0047E098, sp8);
    temp_2 = func_002B2440(arg0, sp0, sp4);
    spC = temp_2;
    if ((temp_2 != 0) && (spC != 3)) {
        sp8 += 1;
        goto loop_1;
    }
    return spC;
}
