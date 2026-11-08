/* machine draft (m2c), tried by autopilot */
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

M2C_UNK func_003CC9E8(M2C_UNK, M2C_UNK, s32 *);     /* extern */
M2C_UNK func_003CCB20(s32, s32, s32 *, s32 *, s32 *); /* extern */
s32 func_003F73B8(M2C_UNK *);                       /* extern */
extern M2C_UNK D_0047E0C8;

s32 func_002B2440(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;

    sp0 = arg1;
    sp4 = arg2;
    sp8 = 0;
    func_003CCB20(sp0, sp4, &spC, &sp10, &sp14);
    func_003CC9E8(0, 0, &sp8);
    switch (spC) {                                  /* irregular */
    case 2:
        if (sp8 == 0) {
            if (sp14 != 0) {
                if (func_003F73B8(&D_0047E0C8) < sp10) {
                    return 0;
                }
                return 1;
            }
            return 2;
        }
        return 3;
    case 1:
        return -1;
    case 3:
        return -1;
    case 0:
        return -1;
    default:
        return -0xA;
    }
}
