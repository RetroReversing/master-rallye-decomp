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

s32 func_003CC9E8();
s32 func_003CCFD8();
s32 func_003F9698();
extern char D_0047E170[];
extern char D_0047E198[];
extern char D_0047E1A8[];

s32 func_002B2770(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    s32 sp8;

    sp0 = arg1;
    sp4 = arg2;
    sp8 = 0;
    func_003F9698(&D_0047E170, arg1, arg2);
    func_003CCFD8(sp0, sp4);
    func_003CC9E8(0, 0, &sp8);
    if (sp8 == 0) {
        func_003F9698(&D_0047E198);
        return 0;
    }
    func_003F9698(&D_0047E1A8);
    return sp8;
}
