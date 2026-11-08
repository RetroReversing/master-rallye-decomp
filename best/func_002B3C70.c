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

M2C_UNK func_003CC9E8(M2C_UNK, M2C_UNK, s32 *);     /* extern */
M2C_UNK func_003CCB20(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_003CCCA8(s32, s32, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_003CCE88(s32, s32, M2C_UNK *, M2C_UNK); /* extern */
s32 func_003FA760(s32, s32);                        /* extern */
extern M2C_UNK D_0047E250;
extern M2C_UNK D_0047E278;

s32 func_002B3C70(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 sp14;

    sp0 = arg1;
    sp4 = arg2;
    sp8 = arg3;
    sp14 = 0;
    func_003CCE88(sp0, sp4, &D_0047E250, 0);
    func_003CC9E8(0, 0, &sp14);
    func_003CCB20(sp0, sp4, 0, 0, 0);
    func_003CC9E8(0, 0, &sp14);
    sp14 = func_003CCCA8(sp0, sp4, &D_0047E278, 0, 1, M2C_FIELD(arg0, s32 *, 0x18));
    func_003CC9E8(0, 0, &sp14);
    if (sp14 < 0) {
        return 0;
    }
loop_3:
    if (func_003FA760(M2C_FIELD(arg0, s32 *, 0x18) + 0x20, sp8) == 0) {
        return 1;
    }
    sp14 = func_003CCCA8(sp0, sp4, &D_0047E278, 1, 1, M2C_FIELD(arg0, s32 *, 0x18));
    func_003CC9E8(0, 0, &sp14);
    if (sp14 <= 0) {
        return 0;
    }
    goto loop_3;
}
