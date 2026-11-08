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

s32 func_003A0EA8(s32, s32, s32);                   /* extern */
M2C_UNK func_003A1020(s32, s32, s32);               /* extern */
s32 func_003A10A0(void *, u32, s32, s32);           /* extern */
M2C_UNK func_003A36D0(void *, s32, s32);            /* extern */
M2C_UNK func_003A37C0(s32, s32);                    /* extern */
s32 func_003A3A98(void *);                          /* extern */
s32 func_003A3AD0(void *);                          /* extern */
u32 func_003A3B08(void *);                          /* extern */
u32 func_003A4070(void *);                          /* extern */
s32 func_003AA5F0(void *);                          /* extern */

void *func_003A1130(void *arg0, void *arg1) {
    void *sp0;
    u32 sp4;
    s32 sp8;
    s32 temp_18;
    s32 temp_18_2;
    s32 temp_18_3;
    s32 temp_18_4;
    s32 temp_18_5;
    s32 temp_19;
    s32 temp_19_2;
    s32 temp_2;

    sp0 = arg1;
    if (sp0 != arg0) {
        sp4 = func_003A3B08(sp0);
        if (func_003A4070(arg0) < sp4) {
            temp_18 = func_003A3A98(sp0);
            temp_2 = func_003A10A0(arg0, sp4, temp_18, func_003A3AD0(sp0));
            sp8 = temp_2;
            func_003A37C0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
            func_003A36D0(arg0, M2C_FIELD(arg0, s32 *, 0), (s32) (M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 0)) >> 2);
            M2C_FIELD(arg0, s32 *, 0) = temp_2;
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 0) + (sp4 * 4));
        } else if (func_003A3B08(arg0) >= sp4) {
            temp_18_2 = func_003A3A98(sp0);
            temp_19 = func_003A3AD0(sp0);
            sp8 = func_003A0EA8(temp_18_2, temp_19, func_003AA5F0(arg0));
            func_003A37C0(sp8, M2C_FIELD(arg0, s32 *, 4));
        } else {
            temp_18_3 = func_003A3A98(sp0);
            temp_19_2 = func_003A3A98(sp0);
            func_003A0EA8(temp_18_3, temp_19_2 + (func_003A3B08(arg0) * 4), M2C_FIELD(arg0, s32 *, 0));
            temp_18_4 = func_003A3A98(sp0);
            temp_18_5 = temp_18_4 + (func_003A3B08(arg0) * 4);
            func_003A1020(temp_18_5, func_003A3AD0(sp0), M2C_FIELD(arg0, s32 *, 4));
        }
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 0) + (sp4 * 4));
    }
    return arg0;
}
