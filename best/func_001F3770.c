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
M2C_UNK func_001D2CD8(void *, M2C_UNK *, void *, s32); /* extern */
M2C_UNK func_001DF2B0(s32, void *, M2C_UNK);        /* extern */
void *func_001F25D0(s32);                           /* extern */
M2C_UNK func_001F35B0(void *, s32, void *);         /* extern */
M2C_UNK func_0020F310(void *, void *, s32, void *, void *); /* extern */
extern M2C_UNK D_004777A8;

void func_001F3770(void *arg0, s32 arg1, void *arg2) {
    s32 temp_19;
    s32 temp_2_2;
    s32 temp_7;
    s32 var_17;
    void *temp_2;
    void *temp_3;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_6_2;
    void *temp_7_2;
    void *temp_8;
    void *var_16;
    void *var_16_2;
    void *var_6;

    if (M2C_FIELD(arg0, void **, 8) == NULL) {
        temp_2 = func_001F25D0(D_002AD408(0x24));
        M2C_FIELD(arg0, void **, 8) = temp_2;
        temp_6 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x34);
        temp_7 = M2C_FIELD(temp_6, s32 *, 0);
        M2C_FIELD(temp_2, s32 *, 0x1C) = (s32) ((s32) ((M2C_FIELD(temp_6, s32 *, 4) - temp_7) * 0xC4EC4EC5) >> 2);
        M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x20) = 0;
        func_001D2CD8(M2C_FIELD(arg0, void **, 8) + 0x14, &D_004777A8, temp_6, temp_7);
        func_001DF2B0(arg1, M2C_FIELD(arg0, void **, 8), 0);
    }
    temp_2_2 = *M2C_FIELD(arg0, s32 **, 0x14) + (M2C_FIELD(arg2, s32 *, 0x1C) * 0x34);
    temp_19 = temp_2_2 + (M2C_FIELD(arg2, s32 *, 0x20) * 0x34);
    var_17 = temp_2_2;
    var_16 = var_17 + 0x28;
    if (var_17 != temp_19) {
        do {
            temp_8 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 0x34);
            temp_7_2 = M2C_FIELD(temp_8, void **, 4);
            if (temp_7_2 != M2C_FIELD(temp_8, s32 *, 8)) {
                temp_4 = temp_7_2 + 0x10;
                if (temp_7_2 != NULL) {
                    temp_5 = temp_7_2 + 0x1C;
                    temp_6_2 = temp_7_2 + 0x28;
                    M2C_FIELD(temp_7_2, s32 *, 0) = (s32) M2C_FIELD(var_16, s32 *, -0x28);
                    M2C_FIELD(temp_7_2, s32 *, 4) = (s32) M2C_FIELD(var_16, s32 *, -0x24);
                    M2C_FIELD(temp_7_2, s32 *, 8) = (s32) M2C_FIELD(var_16, s32 *, -0x20);
                    M2C_FIELD(temp_7_2, s32 *, 0xC) = (s32) M2C_FIELD(var_16, s32 *, -0x1C);
                    M2C_FIELD(temp_7_2, s32 *, 0x10) = (s32) M2C_FIELD(var_16, s32 *, -0x18);
                    M2C_FIELD(temp_4, s32 *, 4) = (s32) M2C_FIELD(var_16, s32 *, -0x14);
                    M2C_FIELD(temp_4, s32 *, 8) = (s32) M2C_FIELD(var_16, s32 *, -0x10);
                    M2C_FIELD(temp_7_2, s32 *, 0x1C) = (s32) M2C_FIELD(var_16, s32 *, -0xC);
                    M2C_FIELD(temp_5, s32 *, 4) = (s32) M2C_FIELD(var_16, s32 *, -8);
                    M2C_FIELD(temp_5, s32 *, 8) = (s32) M2C_FIELD(var_16, s32 *, -4);
                    M2C_FIELD(temp_7_2, s32 *, 0x28) = (s32) M2C_FIELD(var_16, s32 *, 0);
                    M2C_FIELD(temp_6_2, s32 *, 4) = (s32) M2C_FIELD(var_16, s32 *, 4);
                    M2C_FIELD(temp_6_2, s32 *, 8) = (s32) M2C_FIELD(var_16, s32 *, 8);
                }
                M2C_FIELD(temp_8, void **, 4) = (void *) (M2C_FIELD(temp_8, void **, 4) + 0x34);
            } else {
                func_0020F310(temp_8, temp_7_2, var_17, temp_7_2, temp_8);
            }
            temp_3 = M2C_FIELD(arg0, void **, 8);
            var_16 += 0x34;
            var_17 += 0x34;
            M2C_FIELD(temp_3, s32 *, 0x20) = (s32) (M2C_FIELD(temp_3, s32 *, 0x20) + 1);
        } while (var_17 != temp_19);
    }
    var_16_2 = M2C_FIELD(arg2, void **, 0);
    if (var_16_2 != NULL) {
        var_6 = var_16_2;
        do {
            func_001F35B0(arg0, arg1, var_6);
            var_16_2 = M2C_FIELD(var_16_2, void **, 4);
            var_6 = var_16_2;
        } while (var_16_2 != NULL);
    }
}
