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

s32 D_002AD408(M2C_UNK);                            /* extern */
s32 func_002D1E68(s32);                             /* extern */
M2C_UNK func_002D5100(s32, void *, void *);         /* extern */
M2C_UNK func_003A3C30(s32, M2C_UNK *);              /* extern */
M2C_UNK func_003A4238(s32, s32);                    /* extern */
M2C_UNK func_003AA628(s32);                         /* extern */
M2C_UNK func_003F9698(M2C_UNK *, s32);              /* extern */
extern M2C_UNK D_00487A68;
extern M2C_UNK D_00487A80;

void func_00394900(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    M2C_UNK sp10;
    M2C_UNK sp14;
    M2C_UNK sp18;
    M2C_UNK (*temp_6)(void *, s32 *, M2C_UNK);
    M2C_UNK (*temp_6_2)(void *, M2C_UNK *, M2C_UNK);
    M2C_UNK (*temp_6_3)(void *, M2C_UNK *, M2C_UNK);
    M2C_UNK (*temp_6_4)(void *, M2C_UNK *, M2C_UNK);
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;

    sp0 = func_002D1E68(D_002AD408(0xA4));
    func_002D5100(sp0, M2C_FIELD(arg0, void **, 0), M2C_FIELD(arg0, void **, 4));
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x2C) = sp0;
    temp_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
    temp_6 = M2C_FIELD((temp_3 + 0x90), M2C_UNK (**)(void *, s32 *, M2C_UNK), 4);
    temp_6(M2C_FIELD(temp_3, s16 *, 0x90) + M2C_FIELD(arg0, void **, 0), &sp4, temp_6);
    func_003F9698(&D_00487A68, sp4);
    if (sp4 > 0) {
        func_003AA628(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x1C));
        func_003A4238(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x1C), sp4 * 3);
        sp8 = 0;
        spC = 0;
loop_2:
        if (spC < sp4) {
            temp_3_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
            temp_6_2 = M2C_FIELD((temp_3_2 + 0x90), M2C_UNK (**)(void *, M2C_UNK *, M2C_UNK), 4);
            temp_6_2(M2C_FIELD(temp_3_2, s16 *, 0x90) + M2C_FIELD(arg0, void **, 0), &sp10, temp_6_2);
            temp_3_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
            temp_6_3 = M2C_FIELD((temp_3_3 + 0x90), M2C_UNK (**)(void *, M2C_UNK *, M2C_UNK), 4);
            temp_6_3(M2C_FIELD(temp_3_3, s16 *, 0x90) + M2C_FIELD(arg0, void **, 0), &sp14, temp_6_3);
            temp_3_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
            temp_6_4 = M2C_FIELD((temp_3_4 + 0x90), M2C_UNK (**)(void *, M2C_UNK *, M2C_UNK), 4);
            temp_6_4(M2C_FIELD(temp_3_4, s16 *, 0x90) + M2C_FIELD(arg0, void **, 0), &sp18, temp_6_4);
            func_003A3C30(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x1C), &sp10);
            func_003A3C30(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x1C), &sp14);
            func_003A3C30(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x1C), &sp18);
            sp8 += 1;
            spC += 1;
            goto loop_2;
        }
        func_003F9698(&D_00487A80, sp8);
    }
}
