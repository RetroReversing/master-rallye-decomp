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

s32 func_001CE2F8(M2C_UNK *);                       /* extern */
M2C_UNK func_001D2458(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_001D2488(M2C_UNK *, void *);           /* extern */
M2C_UNK func_001D2D48(M2C_UNK *, M2C_UNK, s32);     /* extern */
M2C_UNK func_00390D98(M2C_UNK *, void *, M2C_UNK *); /* extern */
M2C_UNK func_00390F98();                            /* extern */
M2C_UNK func_003A33E8(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_003A3460(M2C_UNK *, s32);              /* extern */
M2C_UNK func_003A4418(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_003A4488(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_003A45E8(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_003A4718(void *);                          /* extern */
M2C_UNK func_003A4790(void *, M2C_UNK *);           /* extern */
M2C_UNK func_003A4BF0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK *func_003A4C60(M2C_UNK *);                  /* extern */
s32 func_003A4F78(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_003A6C58(M2C_UNK *, void *);           /* extern */
s32 func_003A6F18(M2C_UNK *, M2C_UNK *, M2C_UNK);   /* extern */
extern M2C_UNK D_00487520;
extern M2C_UNK D_00487920;
extern M2C_UNK D_00487928;
extern M2C_UNK D_00487930;
extern M2C_UNK D_00487938;
extern M2C_UNK D_00487940;
extern M2C_UNK D_00487948;
extern M2C_UNK D_00487950;
extern M2C_UNK D_00487958;
extern M2C_UNK D_00487970;

void func_00391690(s32 arg0, void *arg1, void *arg2) {
    void *sp0;
    void *sp4;
    void *sp8;
    void *spC;
    void *sp10;
    M2C_UNK sp20;
    M2C_UNK sp30;
    M2C_UNK sp40;
    M2C_UNK sp50;
    M2C_UNK sp60;
    M2C_UNK sp70;
    M2C_UNK sp80;
    M2C_UNK sp90;
    s32 temp_20;
    s32 temp_20_2;
    s32 var_20;
    s32 var_21;

    sp0 = arg1;
    sp4 = arg2;
    func_00390F98();
    M2C_FIELD(sp4, s32 *, 0x2C) = 0;
    M2C_FIELD(sp4, s32 *, 0x28) = 0;
    M2C_FIELD(sp4, s32 *, 0x3C) = 0;
    M2C_FIELD(sp4, s32 *, 0x40) = 0;
    M2C_FIELD(sp4, f32 *, 0x44) = 0.1f;
    M2C_FIELD(sp4, s32 *, 0x48) = 0;
    func_003A4790(sp4 + 0x34, &D_00487920);
    func_003A4790(sp4 + 0x38, &D_00487920);
    if (sp0 != NULL) {
        sp8 = sp0;
        spC = sp0 + 0x14;
        sp10 = sp0 + 0x28;
        if (M2C_FIELD(sp0, s32 *, 0x3C) != 0) {
            M2C_FIELD(sp4, s32 *, 0x28) = 1;
            func_003A4790(sp4 + 0x34, func_003A4C60(sp8 + 0x10));
            if ((M2C_FIELD(sp8, s32 *, 4) != 0) && (M2C_FIELD(sp8, s32 *, 0) != 0)) {
                M2C_FIELD(sp4, s32 *, 0x28) = 2;
                M2C_FIELD(sp4, s32 *, 0x2C) = 1;
                M2C_FIELD(sp4, s32 *, 0x3C) = 1;
                if (M2C_FIELD(sp0, s32 *, 0x40) != 0) {
                    M2C_FIELD(sp4, s32 *, 0x28) = 5;
                    M2C_FIELD(sp4, s32 *, 0x2C) = 1;
                    func_003A4790(sp4 + 0x38, func_003A4C60(spC + 0x10));
                    M2C_FIELD(sp4, s32 *, 0x40) = 1;
                }
            } else if (M2C_FIELD(sp0, s32 *, 0x40) != 0) {
                M2C_FIELD(sp4, s32 *, 0x28) = 3;
                func_003A4790(sp4 + 0x38, func_003A4C60(spC + 0x10));
            } else if (M2C_FIELD(sp0, s32 *, 0x44) != 0) {
                M2C_FIELD(sp4, s32 *, 0x28) = 4;
                func_003A4790(sp4 + 0x38, &D_00487520);
                M2C_FIELD(sp4, s32 *, 0x40) = 1;
            }
        }
        func_00390D98(&sp20, sp0 + 0x54, &D_00487928);
        if (func_001CE2F8(&sp20) > 0) {
            M2C_FIELD(sp4, s32 *, 0x48) = 0;
            var_20 = 0;
            func_001D2458(&sp30, &D_00487930);
            var_21 = 0;
            if ((func_003A4F78(&sp20, &sp30) == 0) && (func_001D2458(&sp40, &D_00487938), var_21 = 1, (func_003A4F78(&sp20, &sp40) == 0))) {

            } else {
                var_20 = 1;
            }
            if (var_21 != 0) {
                func_003A4BF0(&sp40, 2);
            }
            func_003A4BF0(&sp30, 2);
            if (var_20 != 0) {
                M2C_FIELD(sp4, s32 *, 0x48) = 3;
            } else {
                func_001D2458(&sp50, &D_00487940);
                temp_20 = func_003A4F78(&sp20, &sp50);
                func_003A4BF0(&sp50, 2);
                if (temp_20 != 0) {
                    M2C_FIELD(sp4, s32 *, 0x48) = 1;
                } else {
                    func_001D2458(&sp60, &D_00487948);
                    temp_20_2 = func_003A4F78(&sp20, &sp60);
                    func_003A4BF0(&sp60, 2);
                    if (temp_20_2 != 0) {
                        M2C_FIELD(sp4, s32 *, 0x48) = 2;
                    }
                }
            }
        }
        func_003A4BF0(&sp20, 2);
        func_00390D98(&sp20, sp0 + 0x54, &D_00487950);
        func_001D2488(&sp70, sp0 + 0x54);
        func_001D2D48(&sp70, 0, func_001CE2F8(&sp70));
        if (func_001CE2F8(&sp20) > 0) {
            func_003A45E8(&sp80, func_003A4C60(&sp20));
            func_003A4488(&sp90, &sp80);
            func_003A6C58(&sp90, sp4);
            func_003A4418(&sp80, 2);
        }
        func_003A4BF0(&sp70, 2);
        func_003A4BF0(&sp20, 2);
        func_003A3460(&sp20, func_003A4718(sp4 + 0x34));
        if (func_003A6F18(&sp20, &D_00487958, 0) != 0xFFFFFFFF) {
            M2C_FIELD(sp4, s32 *, 0x28) = 0xE;
            M2C_FIELD(sp4, s32 *, 0x2C) = 1;
            M2C_FIELD(sp4, s32 *, 0x3C) = 0;
            M2C_FIELD(sp4, f32 *, 0x44) = 0.3f;
        } else if (func_003A6F18(&sp20, &D_00487970, 0) != 0xFFFFFFFF) {
            M2C_FIELD(sp4, s32 *, 0x28) = 1;
            M2C_FIELD(sp4, s32 *, 0x2C) = 0;
            M2C_FIELD(sp4, s32 *, 0x3C) = 0;
            M2C_FIELD(sp4, f32 *, 0x44) = 0.3f;
        }
        func_003A33E8(&sp20, 2);
    }
}
