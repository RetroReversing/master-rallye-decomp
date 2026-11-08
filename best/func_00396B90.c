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

s32 *func_00395138(s32);                            /* extern */
M2C_UNK func_003951C0(s32 *, M2C_UNK, s32, s32);    /* extern */
s32 func_00395380(s32, s32);                        /* extern */
M2C_UNK func_00395460(s32, s32 *);                  /* extern */
s32 func_003A3CC8(s32);                             /* extern */
s32 func_003A4508(s32);                             /* extern */

void func_00396B90(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    s32 *sp8;
    s32 temp_17;

    sp0 = arg1;
    sp4 = arg2;
    if (func_00395380(arg0, arg1) == 0) {
        return;
    }
    sp8 = func_00395138(sp0);
    if (sp4 != 0) {
        temp_17 = func_003A4508(arg0);
        func_003951C0(sp8, 0, temp_17, func_003A3CC8(arg0));
        *sp8 = func_003A3CC8(arg0);
    } else {
        *sp8 = 0;
    }
    func_00395460(arg0, sp8);
}
