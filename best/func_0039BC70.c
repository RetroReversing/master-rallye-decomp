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

M2C_UNK func_0039BC00(s64 *, s64 *, s64 *);         /* extern */
s32 func_003A59D8(void *);                          /* extern */
s32 func_003A5A10(void *);                          /* extern */
M2C_UNK func_003A5A48(s32, s32);                    /* extern */
s32 func_003A8640(void *);                          /* extern */
s64 *func_003A8B10(void *, s32);                    /* extern */
s64 *func_003A8B80(s64 *, s64 *, s64 *);            /* extern */
M2C_UNK func_003A8C10(void *, s64 *, s32);          /* extern */
M2C_UNK func_003A8D70(s64 *, s64 *);                /* extern */

void func_0039BC70(void *arg0, s64 *arg1, s64 *arg2) {
    s64 *sp0;
    s64 *sp4;
    s64 sp8;
    s32 sp10;
    s32 sp14;
    s64 *sp18;
    s64 *sp1C;
    s32 temp_19;
    s32 var_18;
    s64 *temp_2;
    s64 *temp_2_2;
    s64 *temp_2_3;
    s64 temp_3;

    sp0 = arg1;
    sp4 = arg2;
    if (M2C_FIELD(arg0, s64 **, 4) != M2C_FIELD(arg0, s64 **, 8)) {
        func_003A8D70(M2C_FIELD(arg0, s64 **, 4), M2C_FIELD(arg0, s64 **, 4) + 0xFFFFFFF8);
        M2C_FIELD(arg0, s64 **, 4) = (s64 *) (M2C_FIELD(arg0, s64 **, 4) + 8);
        temp_3 = *sp4;
        sp8 = temp_3;
        func_0039BC00(sp0, M2C_FIELD(arg0, s64 **, 4) + 0xFFFFFFF0, M2C_FIELD(arg0, s64 **, 4) + 0xFFFFFFF8);
        *sp0 = temp_3;
        return;
    }
    sp10 = func_003A8640(arg0);
    if (sp10 != 0) {
        var_18 = sp10 * 2;
    } else {
        var_18 = 1;
    }
    sp14 = var_18;
    temp_2 = func_003A8B10(arg0, sp14);
    sp18 = temp_2;
    sp1C = temp_2;
    temp_2_2 = func_003A8B80(M2C_FIELD(arg0, s64 **, 0), sp0, sp18);
    sp1C = temp_2_2;
    func_003A8D70(sp1C, sp4);
    sp1C = temp_2_2 + 8;
    temp_2_3 = func_003A8B80(sp0, M2C_FIELD(arg0, s64 **, 4), sp1C);
    sp1C = temp_2_3;
    temp_19 = func_003A59D8(arg0);
    func_003A5A48(temp_19, func_003A5A10(arg0));
    func_003A8C10(arg0, M2C_FIELD(arg0, s64 **, 0), (s32) (M2C_FIELD(arg0, s64 **, 8) - M2C_FIELD(arg0, s64 **, 0)) >> 3);
    M2C_FIELD(arg0, s64 **, 0) = temp_2;
    M2C_FIELD(arg0, s64 **, 4) = temp_2_3;
    M2C_FIELD(arg0, s64 **, 8) = &sp18[sp14];
}
