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

void func_001F8E70(void *arg0, void *arg1) {
    s32 temp_10_3;
    s32 temp_23;
    s32 temp_7_3;
    s32 temp_8_3;
    s32 temp_9_3;
    s32 var_17;
    void *temp_10;
    void *temp_10_2;
    void *temp_11;
    void *temp_11_2;
    void *temp_16;
    void *temp_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_4;
    void *temp_4_2;
    void *temp_5;
    void *temp_5_2;
    void *temp_6;
    void *temp_6_2;
    void *temp_7;
    void *temp_7_2;
    void *temp_8;
    void *temp_8_2;
    void *temp_9;
    void *temp_9_2;
    void *var_16;
    void *var_4;

    temp_3 = M2C_FIELD(arg0, void **, 0x10);
    temp_2 = M2C_FIELD(temp_3, void *(**)(void *), 0x1C)(arg0 + M2C_FIELD(temp_3, s16 *, 0x18));
    if (temp_2 != NULL) {
        temp_16 = M2C_FIELD(arg1, void **, 0x34);
        var_17 = 0;
        temp_23 = (s32) ((M2C_FIELD(temp_16, s32 *, 4) - M2C_FIELD(temp_16, s32 *, 0)) * 0xC4EC4EC5) >> 2;
        if (M2C_FIELD(temp_2, s32 *, 0x20) > 0) {
            do {
                temp_10 = M2C_FIELD(temp_16, void **, 4);
                temp_11 = M2C_FIELD(temp_16, s32 *, 0) + ((M2C_FIELD(temp_2, s32 *, 0x1C) + var_17) * 0x34);
                if (temp_10 != M2C_FIELD(temp_16, s32 *, 8)) {
                    temp_4 = temp_11 + 0x10;
                    if (temp_10 != NULL) {
                        temp_5 = temp_10 + 0x10;
                        temp_7 = temp_11 + 0x1C;
                        M2C_FIELD(temp_10, s32 *, 0) = (s32) M2C_FIELD(temp_11, s32 *, 0);
                        temp_6 = temp_10 + 0x1C;
                        temp_8 = temp_11 + 0x28;
                        temp_9 = temp_10 + 0x28;
                        M2C_FIELD(temp_10, s32 *, 4) = (s32) M2C_FIELD(temp_11, s32 *, 4);
                        M2C_FIELD(temp_10, s32 *, 8) = (s32) M2C_FIELD(temp_11, s32 *, 8);
                        M2C_FIELD(temp_10, s32 *, 0xC) = (s32) M2C_FIELD(temp_11, s32 *, 0xC);
                        M2C_FIELD(temp_10, s32 *, 0x10) = (s32) M2C_FIELD(temp_11, s32 *, 0x10);
                        M2C_FIELD(temp_5, s32 *, 4) = (s32) M2C_FIELD(temp_4, s32 *, 4);
                        M2C_FIELD(temp_5, s32 *, 8) = (s32) M2C_FIELD(temp_4, s32 *, 8);
                        M2C_FIELD(temp_10, s32 *, 0x1C) = (s32) M2C_FIELD(temp_11, s32 *, 0x1C);
                        M2C_FIELD(temp_6, s32 *, 4) = (s32) M2C_FIELD(temp_7, s32 *, 4);
                        M2C_FIELD(temp_6, s32 *, 8) = (s32) M2C_FIELD(temp_7, s32 *, 8);
                        M2C_FIELD(temp_10, s32 *, 0x28) = (s32) M2C_FIELD(temp_11, s32 *, 0x28);
                        M2C_FIELD(temp_9, s32 *, 4) = (s32) M2C_FIELD(temp_8, s32 *, 4);
                        M2C_FIELD(temp_9, s32 *, 8) = (s32) M2C_FIELD(temp_8, s32 *, 8);
                    }
                    M2C_FIELD(temp_16, void **, 4) = (void *) (M2C_FIELD(temp_16, void **, 4) + 0x34);
                } else {
                    func_0020F310(temp_16, temp_10, temp_11);
                }
                temp_10_2 = M2C_FIELD(temp_16, void **, 4);
                temp_11_2 = M2C_FIELD(temp_16, s32 *, 0) + ((M2C_FIELD(temp_2, s32 *, 0x1C) + var_17) * 0x34);
                if (temp_10_2 != M2C_FIELD(temp_16, s32 *, 8)) {
                    temp_4_2 = temp_11_2 + 0x10;
                    if (temp_10_2 != NULL) {
                        temp_5_2 = temp_10_2 + 0x10;
                        temp_7_2 = temp_11_2 + 0x1C;
                        M2C_FIELD(temp_10_2, s32 *, 0) = (s32) M2C_FIELD(temp_11_2, s32 *, 0);
                        temp_6_2 = temp_10_2 + 0x1C;
                        temp_8_2 = temp_11_2 + 0x28;
                        temp_9_2 = temp_10_2 + 0x28;
                        M2C_FIELD(temp_10_2, s32 *, 4) = (s32) M2C_FIELD(temp_11_2, s32 *, 4);
                        M2C_FIELD(temp_10_2, s32 *, 8) = (s32) M2C_FIELD(temp_11_2, s32 *, 8);
                        M2C_FIELD(temp_10_2, s32 *, 0xC) = (s32) M2C_FIELD(temp_11_2, s32 *, 0xC);
                        M2C_FIELD(temp_10_2, s32 *, 0x10) = (s32) M2C_FIELD(temp_11_2, s32 *, 0x10);
                        M2C_FIELD(temp_5_2, s32 *, 4) = (s32) M2C_FIELD(temp_4_2, s32 *, 4);
                        M2C_FIELD(temp_5_2, s32 *, 8) = (s32) M2C_FIELD(temp_4_2, s32 *, 8);
                        M2C_FIELD(temp_10_2, s32 *, 0x1C) = (s32) M2C_FIELD(temp_11_2, s32 *, 0x1C);
                        M2C_FIELD(temp_6_2, s32 *, 4) = (s32) M2C_FIELD(temp_7_2, s32 *, 4);
                        M2C_FIELD(temp_6_2, s32 *, 8) = (s32) M2C_FIELD(temp_7_2, s32 *, 8);
                        M2C_FIELD(temp_10_2, s32 *, 0x28) = (s32) M2C_FIELD(temp_11_2, s32 *, 0x28);
                        M2C_FIELD(temp_9_2, s32 *, 4) = (s32) M2C_FIELD(temp_8_2, s32 *, 4);
                        M2C_FIELD(temp_9_2, s32 *, 8) = (s32) M2C_FIELD(temp_8_2, s32 *, 8);
                    }
                    M2C_FIELD(temp_16, void **, 4) = (void *) (M2C_FIELD(temp_16, void **, 4) + 0x34);
                } else {
                    func_0020F310(temp_16, temp_10_2, temp_11_2);
                }
                temp_3_2 = M2C_FIELD(temp_16, void **, 4);
                var_17 += 1;
                temp_8_3 = M2C_FIELD(temp_3_2, s32 *, -0x34);
                temp_9_3 = M2C_FIELD(temp_3_2, s32 *, -0xC);
                temp_10_3 = M2C_FIELD(temp_3_2, s32 *, -0x24);
                temp_7_3 = M2C_FIELD(temp_3_2, s32 *, -0x14);
                M2C_FIELD(temp_3_2, s32 *, -0x14) = (s32) M2C_FIELD(temp_3_2, s32 *, -0x18);
                M2C_FIELD(temp_3_2, s32 *, -0x34) = (s32) M2C_FIELD(temp_3_2, s32 *, -0x30);
                M2C_FIELD(temp_3_2, s32 *, -0x30) = temp_8_3;
                M2C_FIELD(temp_3_2, s32 *, -0xC) = (s32) M2C_FIELD(temp_3_2, s32 *, -8);
                M2C_FIELD(temp_3_2, s32 *, -8) = temp_9_3;
                M2C_FIELD(temp_3_2, s32 *, -0x24) = (s32) M2C_FIELD(temp_3_2, s32 *, -0x20);
                M2C_FIELD(temp_3_2, s32 *, -0x20) = temp_10_3;
                M2C_FIELD(temp_3_2, s32 *, -0x18) = temp_7_3;
            } while (var_17 < M2C_FIELD(temp_2, s32 *, 0x20));
        }
        M2C_FIELD(temp_2, s32 *, 0x1C) = temp_23;
        M2C_FIELD(temp_2, s32 *, 0x20) = (s32) (M2C_FIELD(temp_2, s32 *, 0x20) * 2);
    }
    var_16 = M2C_FIELD(arg0, void **, 0);
    if (var_16 != NULL) {
        var_4 = var_16;
        do {
            func_001F8E70(var_4, arg1);
            var_16 = M2C_FIELD(var_16, void **, 4);
            var_4 = var_16;
        } while (var_16 != NULL);
    }
}
