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

s32 func_003F94D0();

void *func_002D0B28(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x118) = 1;
    M2C_FIELD(arg0, s32 *, 0x170) = 0x380;
    M2C_FIELD(arg0, s32 *, 0x174) = 0x19;
    M2C_FIELD(arg0, s32 *, 0x178) = 0x10;
    M2C_FIELD(arg0, s32 *, 0x17C) = 0x7D;
    M2C_FIELD(arg0, s32 *, 0x180) = 0x12C;
    M2C_FIELD(arg0, s32 *, 0x184) = 0x1800;
    M2C_FIELD(arg0, s32 *, 0x14C) = 0x200;
    M2C_FIELD(arg0, s32 *, 0x154) = 0x8000;
    M2C_FIELD(arg0, s32 *, 0x11C) = 0;
    M2C_FIELD(arg0, s32 *, 0x18C) = 0;
    M2C_FIELD(arg0, s32 *, 0x188) = 0;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
    M2C_FIELD(arg0, s32 *, 0x124) = 0;
    M2C_FIELD(arg0, s32 *, 0x13C) = 0;
    M2C_FIELD(arg0, s32 *, 0x144) = 0;
    M2C_FIELD(arg0, s32 *, 0x134) = 0;
    M2C_FIELD(arg0, s32 *, 0x148) = 0;
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
    M2C_FIELD(arg0, s32 *, 0x158) = 0;
    M2C_FIELD(arg0, s32 *, 0x15C) = 0;
    M2C_FIELD(arg0, s32 *, 0x164) = 0;
    M2C_FIELD(arg0, s32 *, 0x160) = 0;
    M2C_FIELD(arg0, s64 *, 0x110) = 0;
    M2C_FIELD(arg0, s64 *, 0x108) = 0;
    M2C_FIELD(arg0, s32 *, 0x230) = 0;
    M2C_FIELD(arg0, s32 *, 0x150) = 0x100;
    M2C_FIELD(arg0, s32 *, 0x140) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x16C) = 0x1000;
    func_003F94D0(arg0 + 0x190, 0, 0x90, 0x200, 0x1800, 0x12C, 0x7D, 0x10);
    func_003F94D0(arg0 + 0x220, 0, 0x10);
    M2C_FIELD(arg0, s32 *, 0x234) = 0;
    M2C_FIELD(arg0, f32 *, 0x244) = 1.0f;
    M2C_FIELD(arg0, s32 *, 0x238) = 0;
    M2C_FIELD(arg0, f32 *, 0x23C) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x240) = 1.0f;
    return arg0;
}
