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

s32 func_001CE2F8(M2C_UNK *);                       /* extern */
M2C_UNK func_001D2488(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_001D24B8(M2C_UNK *, s32, s32, M2C_UNK *);  /* extern */
M2C_UNK func_003A4BF0(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_003A4C98(M2C_UNK *, s32);                  /* extern */
M2C_UNK func_003A4DE8(M2C_UNK *, s32);              /* extern */
M2C_UNK func_003A4E40(M2C_UNK *, s32);              /* extern */
M2C_UNK func_003A4EA0(M2C_UNK *);                   /* extern */
extern M2C_UNK D_00487910;
extern M2C_UNK D_00487918;

M2C_UNK *func_00390D98(M2C_UNK *arg0, M2C_UNK *arg1, s32 arg2) {
    M2C_UNK *sp0;
    s32 sp4;
    M2C_UNK sp10;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 temp_2;

    sp0 = arg1;
    sp4 = arg2;
    func_001D2488(&sp10, arg1);
    temp_2 = func_003A4C98(&sp10, sp4);
    sp20 = temp_2;
    if ((temp_2 != -1) && (sp24 = func_001CE2F8(&sp10), sp28 = func_001D24B8(&sp10, sp20, sp24, &D_00487910), (sp28 != -1)) && (sp2C = func_001D24B8(&sp10, sp28, sp24, &D_00487918), (sp2C != -1))) {
        func_003A4E40(&sp10, sp2C);
        func_003A4DE8(&sp10, sp28 + 1);
        func_001D2488(arg0, &sp10);
        func_003A4BF0(&sp10, 2);
    } else {
        func_003A4EA0(&sp10);
        func_001D2488(arg0, &sp10);
        func_003A4BF0(&sp10, 2);
    }
    return arg0;
}
