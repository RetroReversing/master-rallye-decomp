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

M2C_UNK func_003CC348(s32, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_003CC4B8(s32);                         /* extern */
M2C_UNK func_003CC7F8(s32, s32, s32);               /* extern */
M2C_UNK func_003CC9E8(M2C_UNK, M2C_UNK, s32 *);     /* extern */
M2C_UNK func_003F9698(M2C_UNK *, s32, s32);         /* extern */
extern M2C_UNK D_0047E300;
extern M2C_UNK D_0047E330;
extern M2C_UNK D_0047E378;
extern M2C_UNK D_0047E3A0;

s32 func_002B3248(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;

    sp0 = arg1;
    sp4 = arg2;
    sp8 = arg3;
    spC = arg4;
    sp10 = arg5;
    sp14 = 0;
    sp18 = 0;
    func_003CC348(sp0, sp4, sp8, 0x202);
    func_003CC9E8(0, 0, &sp18);
    if (sp18 < 0) {
        func_003F9698(&D_0047E300, sp8, sp18);
        return sp18;
    }
    func_003CC7F8(sp18, spC, sp10);
    func_003CC9E8(0, 0, &sp14);
    if (sp14 < 0) {
        func_003F9698(&D_0047E330, sp8, sp14);
        return sp14;
    }
    func_003F9698(&D_0047E378, sp8, sp14);
    func_003CC4B8(sp18);
    func_003CC9E8(0, 0, &sp14);
    if (sp14 < 0) {
        func_003F9698(&D_0047E3A0, sp8, sp14);
        return sp14;
    }
    return 0;
}
