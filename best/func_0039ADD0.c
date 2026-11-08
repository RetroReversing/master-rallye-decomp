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

M2C_UNK func_0039AD60(s32, s32, s32);               /* extern */
M2C_UNK func_003A51C8(M2C_UNK *, s32);              /* extern */
M2C_UNK func_003A5228(s32, M2C_UNK *);              /* extern */
s32 func_003A80D0(void *);                          /* extern */
s32 func_003A8118(void *);                          /* extern */
M2C_UNK func_003A8160(s32, s32);                    /* extern */
s32 func_003A8230(void *);                          /* extern */
s32 func_003A82B0(void *, s32);                     /* extern */
s32 func_003A8310(s32, s32, s32);                   /* extern */
M2C_UNK func_003A8390(void *, s32, s32);            /* extern */
M2C_UNK func_003A8528(s32, s32);                    /* extern */

void func_0039ADD0(void *arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    M2C_UNK sp10;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 temp_19;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 var_18;

    sp0 = arg1;
    sp4 = arg2;
    if (M2C_FIELD(arg0, s32 *, 4) != M2C_FIELD(arg0, s32 *, 8)) {
        func_003A8528(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 4) + 0xFFFFFFD0);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 0x30);
        func_003A51C8(&sp10, sp4);
        func_0039AD60(sp0, M2C_FIELD(arg0, s32 *, 4) + 0xFFFFFFA0, M2C_FIELD(arg0, s32 *, 4) + 0xFFFFFFD0);
        func_003A5228(sp0, &sp10);
        return;
    }
    sp40 = func_003A8230(arg0);
    if (sp40 != 0) {
        var_18 = sp40 * 2;
    } else {
        var_18 = 1;
    }
    sp44 = var_18;
    temp_2 = func_003A82B0(arg0, sp44);
    sp48 = temp_2;
    sp4C = temp_2;
    temp_2_2 = func_003A8310(M2C_FIELD(arg0, s32 *, 0), sp0, sp48);
    sp4C = temp_2_2;
    func_003A8528(sp4C, sp4);
    sp4C = temp_2_2 + 0x30;
    temp_2_3 = func_003A8310(sp0, M2C_FIELD(arg0, s32 *, 4), sp4C);
    sp4C = temp_2_3;
    temp_19 = func_003A80D0(arg0);
    func_003A8160(temp_19, func_003A8118(arg0));
    func_003A8390(arg0, M2C_FIELD(arg0, s32 *, 0), (s32) ((M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 0)) * 0xAAAAAAAB) >> 4);
    M2C_FIELD(arg0, s32 *, 0) = temp_2;
    M2C_FIELD(arg0, s32 *, 4) = temp_2_3;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (sp48 + (sp44 * 0x30));
}
