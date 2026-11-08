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

M2C_UNK func_00374288(s32, s32);                    /* extern */
s32 *func_0039C298(s32);                            /* extern */
s32 *func_0039C2D0(s32);                            /* extern */
M2C_UNK func_0039C330(s32, s32);                    /* extern */

void func_0039C390(s32 arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;

    sp0 = arg1;
loop_1:
    if (sp0 != 0) {
        func_00374288(arg0, *func_0039C298(sp0));
        sp4 = *func_0039C2D0(sp0);
        func_0039C330(arg0, sp0);
        sp0 = sp4;
        goto loop_1;
    }
}
