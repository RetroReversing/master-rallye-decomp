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

void *D_002AD408(M2C_UNK);                          /* extern */
M2C_UNK func_001E5C58(void *, M2C_UNK);             /* extern */

void func_001E51B8(void *arg0, void *arg1) {
    s32 var_2;
    s32 var_3;
    s32 var_6;
    s32 var_6_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_3_5;
    void *temp_4;
    void *temp_4_2;
    void *temp_4_3;
    void *temp_4_4;
    void *temp_4_5;
    void *temp_5;
    void *temp_5_2;
    void *temp_5_3;
    void *temp_6;
    void *temp_6_2;
    void *temp_7;
    void *temp_7_2;
    void *temp_8;
    void *temp_8_2;

    if (M2C_FIELD(arg0, s32 *, 8) != 3) {
        func_001E5C58(arg0, 3);
        temp_2 = D_002AD408(0x40);
        temp_4 = arg1 + 0x10;
        temp_3 = temp_2 + 0x10;
        temp_6 = arg1 + 0x20;
        temp_5 = temp_2 + 0x20;
        temp_7 = arg1 + 0x30;
        M2C_FIELD(temp_2, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
        temp_8 = temp_2 + 0x30;
        M2C_FIELD(temp_2, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
        M2C_FIELD(temp_2, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
        M2C_FIELD(temp_2, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
        M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(temp_4, f32 *, 4);
        M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(temp_4, f32 *, 8);
        M2C_FIELD(temp_3, f32 *, 0xC) = (f32) M2C_FIELD(temp_4, f32 *, 0xC);
        M2C_FIELD(temp_2, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
        M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
        M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
        M2C_FIELD(temp_5, f32 *, 0xC) = (f32) M2C_FIELD(temp_6, f32 *, 0xC);
        M2C_FIELD(temp_2, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
        M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
        M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
        M2C_FIELD(arg0, void **, 4) = temp_2;
        M2C_FIELD(temp_8, f32 *, 0xC) = (f32) M2C_FIELD(temp_7, f32 *, 0xC);
        return;
    }
    temp_5_2 = M2C_FIELD(arg0, void **, 4);
    var_2 = 0;
    var_3 = 0;
    if ((M2C_FIELD(temp_5_2, f32 *, 0) == M2C_FIELD(arg1, f32 *, 0)) && (M2C_FIELD(temp_5_2, f32 *, 4) == M2C_FIELD(arg1, f32 *, 4)) && (M2C_FIELD(temp_5_2, f32 *, 8) == M2C_FIELD(arg1, f32 *, 8)) && (M2C_FIELD(temp_5_2, f32 *, 0xC) == M2C_FIELD(arg1, f32 *, 0xC))) {
        var_3 = 1;
    }
    temp_4_2 = temp_5_2 + 0x10;
    if (var_3 != 0) {
        temp_3_2 = arg1 + 0x10;
        var_6 = 0;
        if ((M2C_FIELD(temp_5_2, f32 *, 0x10) == M2C_FIELD(arg1, f32 *, 0x10)) && (M2C_FIELD(temp_4_2, f32 *, 4) == M2C_FIELD(temp_3_2, f32 *, 4)) && (M2C_FIELD(temp_4_2, f32 *, 8) == M2C_FIELD(temp_3_2, f32 *, 8)) && (M2C_FIELD(temp_4_2, f32 *, 0xC) == M2C_FIELD(temp_3_2, f32 *, 0xC))) {
            var_6 = 1;
        }
        temp_4_3 = temp_5_2 + 0x20;
        if (var_6 != 0) {
            temp_3_3 = arg1 + 0x20;
            var_6_2 = 0;
            if ((M2C_FIELD(temp_5_2, f32 *, 0x20) == M2C_FIELD(arg1, f32 *, 0x20)) && (M2C_FIELD(temp_4_3, f32 *, 4) == M2C_FIELD(temp_3_3, f32 *, 4)) && (M2C_FIELD(temp_4_3, f32 *, 8) == M2C_FIELD(temp_3_3, f32 *, 8)) && (M2C_FIELD(temp_4_3, f32 *, 0xC) == M2C_FIELD(temp_3_3, f32 *, 0xC))) {
                var_6_2 = 1;
            }
            temp_4_4 = temp_5_2 + 0x30;
            if (var_6_2 != 0) {
                temp_3_4 = arg1 + 0x30;
                var_2 = 0;
                if ((M2C_FIELD(temp_5_2, f32 *, 0x30) == M2C_FIELD(arg1, f32 *, 0x30)) && (M2C_FIELD(temp_4_4, f32 *, 4) == M2C_FIELD(temp_3_4, f32 *, 4)) && (M2C_FIELD(temp_4_4, f32 *, 8) == M2C_FIELD(temp_3_4, f32 *, 8)) && (M2C_FIELD(temp_4_4, f32 *, 0xC) == M2C_FIELD(temp_3_4, f32 *, 0xC))) {
                    var_2 = 1;
                }
            }
        }
    }
    temp_5_3 = arg1 + 0x10;
    if ((var_2 ^ 1) != 0) {
        temp_3_5 = M2C_FIELD(arg0, void **, 4);
        temp_6_2 = arg1 + 0x20;
        temp_8_2 = arg1 + 0x30;
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + 1);
        temp_4_5 = temp_3_5 + 0x10;
        temp_2_2 = temp_3_5 + 0x20;
        temp_7_2 = temp_3_5 + 0x30;
        M2C_FIELD(temp_3_5, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(temp_3_5, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(temp_3_5, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
        M2C_FIELD(temp_3_5, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
        M2C_FIELD(temp_3_5, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
        M2C_FIELD(temp_4_5, f32 *, 4) = (f32) M2C_FIELD(temp_5_3, f32 *, 4);
        M2C_FIELD(temp_4_5, f32 *, 8) = (f32) M2C_FIELD(temp_5_3, f32 *, 8);
        M2C_FIELD(temp_4_5, f32 *, 0xC) = (f32) M2C_FIELD(temp_5_3, f32 *, 0xC);
        M2C_FIELD(temp_3_5, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
        M2C_FIELD(temp_2_2, f32 *, 4) = (f32) M2C_FIELD(temp_6_2, f32 *, 4);
        M2C_FIELD(temp_2_2, f32 *, 8) = (f32) M2C_FIELD(temp_6_2, f32 *, 8);
        M2C_FIELD(temp_2_2, f32 *, 0xC) = (f32) M2C_FIELD(temp_6_2, f32 *, 0xC);
        M2C_FIELD(temp_3_5, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
        M2C_FIELD(temp_7_2, f32 *, 4) = (f32) M2C_FIELD(temp_8_2, f32 *, 4);
        M2C_FIELD(temp_7_2, f32 *, 8) = (f32) M2C_FIELD(temp_8_2, f32 *, 8);
        M2C_FIELD(temp_7_2, f32 *, 0xC) = (f32) M2C_FIELD(temp_8_2, f32 *, 0xC);
    }
}
