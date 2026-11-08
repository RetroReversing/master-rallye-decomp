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

s32 func_003E5438();
s32 func_003E5848();
s32 func_003E5B60();
s32 func_003E5BA8();

void func_003E5780(void *arg0) {
    s32 temp_17;

    temp_17 = func_003E5438((void *)0xA);
    M2C_FIELD(arg0, s32 *, 0x150) = func_003E5438(arg0, 3);
    func_003E5438(arg0, 0x10);
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x150) - 2) < 2U) {
        M2C_FIELD(arg0, s32 *, 0x154) = func_003E5438(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x158) = func_003E5438(arg0, 3);
    }
    if (M2C_FIELD(arg0, s32 *, 0x150) == 3) {
        M2C_FIELD(arg0, s32 *, 0x15C) = func_003E5438(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x160) = func_003E5438(arg0, 3);
    }
    func_003E5B60(arg0);
    func_003E5848(arg0);
    func_003E5BA8(arg0, temp_17);
}
