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

void func_003B7278(s32 arg0, f32 *arg1, s32 arg2) {
    f32 sp0;
    M2C_UNK32 sp4;
    M2C_UNK32 sp8;
    f32 sp10;
    s32 sp14;

    sp0 = 0.0f;
    sp4 = 0;
    sp8 = 0;
    func_003B7398((void *) arg0);
    M2C_FIELD(arg1, f32 *, 0) = sp0;
    M2C_FIELD(arg1, M2C_UNK32 *, 4) = sp4;
    M2C_FIELD(arg1, M2C_UNK32 *, 8) = sp8;
    func_003B7410(arg0, &sp10, arg2);
    M2C_FIELD(arg1, f32 *, 0xC) = sp10;
    func_003B7438(arg0, &sp14, arg2);
    M2C_FIELD(arg1, s32 *, 0x10) = sp14;
}
