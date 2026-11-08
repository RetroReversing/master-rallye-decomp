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

M2C_UNK func_001E2460(M2C_UNK *, s32);              /* extern */
M2C_UNK func_001E2470(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_001E25B0(M2C_UNK *, M2C_UNK *, s32 *); /* extern */
M2C_UNK func_001E28F8(M2C_UNK *, M2C_UNK *, s32, s32, s32); /* extern */
M2C_UNK func_0029ACF8(void *, s32);                 /* extern */
extern M2C_UNK D_0047BDF0;
extern M2C_UNK D_0047BDF8;
extern M2C_UNK D_0047BE10;
extern M2C_UNK D_0047BE28;
extern M2C_UNK D_0047BE38;

void func_0029AB98(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK sp20;
    s32 sp24;
    s32 sp28;

    func_001E2460(&sp20, arg2);
    func_001E28F8(&sp20, &D_0047BDF0, arg0 + 0x10, 0, 0);
    func_001E2470(&sp20, &D_0047BDF8, arg0 + 0x14);
    func_001E25B0(&sp20, &D_0047BE10, arg0 + 0x18);
    func_001E25B0(&sp20, &D_0047BE28, &sp24);
    M2C_FIELD(arg0, s32 *, 0x1C) = sp24;
    func_001E25B0(&sp20, &D_0047BE38, &sp28);
    M2C_FIELD(arg0, s32 *, 0x20) = sp28;
    func_0029ACF8(arg0, arg1);
}
