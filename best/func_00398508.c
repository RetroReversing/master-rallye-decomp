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

s32 func_00397E70(s32, s32, s32);                   /* extern */
M2C_UNK func_00398030(s32, s32, s32);               /* extern */
s32 func_003981A8(void *, s32);                     /* extern */
M2C_UNK func_003A6088(void *, s32, s32);            /* extern */
M2C_UNK func_003A6118(s32, s32);                    /* extern */
s32 func_003A6178(void *);                          /* extern */
s32 func_003A62C8(void *);                          /* extern */
s32 func_003A6300(void *);                          /* extern */
M2C_UNK func_003A6370(s32, M2C_UNK *);              /* extern */
M2C_UNK func_003A6420(M2C_UNK *, s32);              /* extern */
M2C_UNK func_003A6460(s32, s32);                    /* extern */

void func_00398508(void *arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    M2C_UNK sp10;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 temp_19;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 var_18;

    sp0 = arg1;
    sp4 = arg2;
    if (M2C_FIELD(arg0, s32 *, 4) != M2C_FIELD(arg0, s32 *, 8)) {
        func_003A6460(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 4) + 0xFFFFFFF8);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 8);
        func_003A6420(&sp10, sp4);
        func_00398030(sp0, M2C_FIELD(arg0, s32 *, 4) + 0xFFFFFFF0, M2C_FIELD(arg0, s32 *, 4) + 0xFFFFFFF8);
        func_003A6370(sp0, &sp10);
        return;
    }
    sp20 = func_003A6178(arg0);
    if (sp20 != 0) {
        var_18 = sp20 * 2;
    } else {
        var_18 = 1;
    }
    sp24 = var_18;
    temp_2 = func_003981A8(arg0, sp24);
    sp28 = temp_2;
    sp2C = temp_2;
    temp_2_2 = func_00397E70(M2C_FIELD(arg0, s32 *, 0), sp0, sp28);
    sp2C = temp_2_2;
    func_003A6460(sp2C, sp4);
    sp2C = temp_2_2 + 8;
    temp_2_3 = func_00397E70(sp0, M2C_FIELD(arg0, s32 *, 4), sp2C);
    sp2C = temp_2_3;
    temp_19 = func_003A6300(arg0);
    func_003A6118(temp_19, func_003A62C8(arg0));
    func_003A6088(arg0, M2C_FIELD(arg0, s32 *, 0), (s32) (M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 0)) >> 3);
    M2C_FIELD(arg0, s32 *, 0) = temp_2;
    M2C_FIELD(arg0, s32 *, 4) = temp_2_3;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (sp28 + (sp24 * 8));
}
