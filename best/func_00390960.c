/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

M2C_UNK func_003903D0(s32, s32, M2C_UNK *, s32 *);  /* extern */
M2C_UNK func_003906F0(s32, s32, M2C_UNK *, M2C_UNK32 *); /* extern */
f32 func_003A3120(M2C_UNK32);                       /* extern */
M2C_UNK func_003A4A40(s32, M2C_UNK *, f32);         /* extern */
M2C_UNK func_003A5BC8(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_003A87E8(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_003A8828(M2C_UNK *, f32 *);            /* extern */

s32 func_00390960(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    M2C_UNK sp10;
    s32 sp20;
    M2C_UNK sp30;
    f32 sp40;
    M2C_UNK32 sp44;
    f32 sp48;

    sp0 = arg1;
    sp4 = arg2;
    func_003A87E8(&sp10, 0);
    sp20 = 0;
    func_003903D0(sp0, sp4, &sp10, &sp20);
    if (sp20 == 0) {
        func_003A5BC8(&sp30, 0, 0, 0);
        func_003A4A40(arg0, &sp30, 0.0f);
    } else {
        sp40 = (f32) sp20;
        func_003A8828(&sp10, &sp40);
        sp44 = 0;
        func_003906F0(sp0, sp4, &sp10, &sp44);
        sp48 = func_003A3120(sp44);
        func_003A4A40(arg0, &sp10, sp48);
    }
    return arg0;
}
