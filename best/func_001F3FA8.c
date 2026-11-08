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

M2C_UNK func_0020F310(void *, void *, void *);      /* extern */
M2C_UNK func_00212D50(void **, void *, void **, s32); /* extern */

void func_001F3FA8(void *arg0, void *arg1, void *arg3) {
    void *sp10;
    void *sp20;
    s32 temp_7;
    s32 var_17;
    void *temp_10;
    void *temp_11;
    void *temp_16;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_7_2;
    void *temp_8;
    void *temp_9;

    var_17 = 0;
    sp20 = arg3;
    if (M2C_FIELD(arg1, s32 *, 0x20) > 0) {
loop_2:
        temp_7 = (M2C_FIELD(arg1, s32 *, 0x1C) + var_17) * 0x34;
        temp_16 = *M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 **, 0x34) + temp_7;
        func_00212D50(&sp10, arg0 + 0x24, &sp20, temp_7);
        temp_11 = M2C_FIELD(sp10, void **, 0x14);
        temp_10 = M2C_FIELD(temp_11, void **, 4);
        if (temp_10 != M2C_FIELD(temp_11, s32 *, 8)) {
            temp_4 = temp_16 + 0x10;
            if (temp_10 != NULL) {
                temp_5 = temp_10 + 0x10;
                temp_7_2 = temp_16 + 0x1C;
                M2C_FIELD(temp_10, s32 *, 0) = (s32) M2C_FIELD(temp_16, s32 *, 0);
                temp_6 = temp_10 + 0x1C;
                temp_8 = temp_16 + 0x28;
                temp_9 = temp_10 + 0x28;
                M2C_FIELD(temp_10, s32 *, 4) = (s32) M2C_FIELD(temp_16, s32 *, 4);
                M2C_FIELD(temp_10, s32 *, 8) = (s32) M2C_FIELD(temp_16, s32 *, 8);
                M2C_FIELD(temp_10, s32 *, 0xC) = (s32) M2C_FIELD(temp_16, s32 *, 0xC);
                M2C_FIELD(temp_10, s32 *, 0x10) = (s32) M2C_FIELD(temp_16, s32 *, 0x10);
                M2C_FIELD(temp_5, s32 *, 4) = (s32) M2C_FIELD(temp_4, s32 *, 4);
                M2C_FIELD(temp_5, s32 *, 8) = (s32) M2C_FIELD(temp_4, s32 *, 8);
                M2C_FIELD(temp_10, s32 *, 0x1C) = (s32) M2C_FIELD(temp_16, s32 *, 0x1C);
                M2C_FIELD(temp_6, s32 *, 4) = (s32) M2C_FIELD(temp_7_2, s32 *, 4);
                M2C_FIELD(temp_6, s32 *, 8) = (s32) M2C_FIELD(temp_7_2, s32 *, 8);
                M2C_FIELD(temp_10, s32 *, 0x28) = (s32) M2C_FIELD(temp_16, s32 *, 0x28);
                M2C_FIELD(temp_9, s32 *, 4) = (s32) M2C_FIELD(temp_8, s32 *, 4);
                M2C_FIELD(temp_9, s32 *, 8) = (s32) M2C_FIELD(temp_8, s32 *, 8);
            }
            M2C_FIELD(temp_11, void **, 4) = (void *) (M2C_FIELD(temp_11, void **, 4) + 0x34);
        } else {
            func_0020F310(temp_11, temp_10, temp_16);
        }
        var_17 += 1;
        M2C_FIELD(sp20, s32 *, 0x20) = (s32) (M2C_FIELD(sp20, s32 *, 0x20) + 1);
        if (var_17 < M2C_FIELD(arg1, s32 *, 0x20)) {
            goto loop_2;
        }
    }
}
