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

M2C_UNK func_0039B160(s32 *, s32 *, s32 *);         /* extern */
s32 func_0039B240(void *);                          /* extern */
s32 *func_0039B320(void *, s32);                    /* extern */
s32 *func_0039B620(s32 *, s32 *, s32 *);            /* extern */
M2C_UNK func_0039B738(s32, s32);                    /* extern */
M2C_UNK func_0039B7F8(void *, s32 *, s32);          /* extern */
s32 func_003A8040(void *);                          /* extern */
s32 func_003A8088(void *);                          /* extern */
M2C_UNK func_003A89E0(s32 *, s32 *);                /* extern */

void func_0039B858(void *arg0, s32 *arg1, s32 *arg2) {
    s32 *sp0;
    s32 *sp4;
    s32 sp8;
    s32 spC;
    s32 *sp10;
    s32 *sp14;
    s32 *temp_2;
    s32 *temp_2_2;
    s32 *temp_2_3;
    s32 temp_19;
    s32 temp_3;
    s32 var_18;

    sp0 = arg1;
    sp4 = arg2;
    if (M2C_FIELD(arg0, s32 **, 4) != M2C_FIELD(arg0, s32 **, 8)) {
        func_003A89E0(M2C_FIELD(arg0, s32 **, 4), M2C_FIELD(arg0, s32 **, 4) + 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 **, 4) = (s32 *) (M2C_FIELD(arg0, s32 **, 4) + 4);
        temp_3 = *sp4;
        sp8 = temp_3;
        func_0039B160(sp0, M2C_FIELD(arg0, s32 **, 4) + 0xFFFFFFF8, M2C_FIELD(arg0, s32 **, 4) + 0xFFFFFFFC);
        *sp0 = temp_3;
        return;
    }
    sp8 = func_0039B240(arg0);
    if (sp8 != 0) {
        var_18 = sp8 * 2;
    } else {
        var_18 = 1;
    }
    spC = var_18;
    temp_2 = func_0039B320(arg0, spC);
    sp10 = temp_2;
    sp14 = temp_2;
    temp_2_2 = func_0039B620(M2C_FIELD(arg0, s32 **, 0), sp0, sp10);
    sp14 = temp_2_2;
    func_003A89E0(sp14, sp4);
    sp14 = temp_2_2 + 4;
    temp_2_3 = func_0039B620(sp0, M2C_FIELD(arg0, s32 **, 4), sp14);
    sp14 = temp_2_3;
    temp_19 = func_003A8040(arg0);
    func_0039B738(temp_19, func_003A8088(arg0));
    func_0039B7F8(arg0, M2C_FIELD(arg0, s32 **, 0), (s32) (M2C_FIELD(arg0, s32 **, 8) - M2C_FIELD(arg0, s32 **, 0)) >> 2);
    M2C_FIELD(arg0, s32 **, 0) = temp_2;
    M2C_FIELD(arg0, s32 **, 4) = temp_2_3;
    M2C_FIELD(arg0, s32 **, 8) = &sp10[spC];
}
