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

M2C_UNK func_001FD0D8(void *);                      /* extern */
void *func_001FDBA8(s32, s32);                      /* extern */
s32 func_001FDE60();                                /* extern */

void func_001FCA38(void *arg0) {
    f32 temp_f1;
    s32 temp_2_2;
    s32 temp_2_4;
    s32 temp_3;
    s32 temp_6;
    s32 temp_7;
    s32 var_6;
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_2;
    void *temp_2_3;
    void *temp_4;
    void *temp_5;
    void *temp_6_2;
    void *temp_7_2;
    void *temp_8;
    void *temp_9;
    void *var_4;
    void *var_5;

    temp_2 = func_001FDBA8(func_001FDE60(), arg0 + 8);
    if (temp_2 != NULL) {
        temp_7 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_7 >= 0) {
            temp_2_2 = M2C_FIELD(temp_2, s32 *, 4);
            temp_6 = M2C_FIELD(temp_2, s32 *, 0);
            if ((u32) temp_7 < (u32) ((s32) ((temp_2_2 - temp_6) * 0xCCCCCCCD) >> 4)) {
                temp_12 = M2C_FIELD(arg0, void **, 0);
                if (temp_12 != NULL) {
                    temp_5 = temp_12 + 0x10;
                    temp_7_2 = temp_12 + 0x20;
                    temp_9 = temp_12 + 0x30;
                    temp_11 = temp_12 + 0x40;
                    temp_2_3 = (temp_7 * 0x50) + temp_6;
                    M2C_FIELD(temp_2_3, s32 *, 0) = (s32) M2C_FIELD(temp_12, s32 *, 0);
                    temp_4 = temp_2_3 + 0x10;
                    temp_6_2 = temp_2_3 + 0x20;
                    temp_8 = temp_2_3 + 0x30;
                    temp_10 = temp_2_3 + 0x40;
                    M2C_FIELD(temp_2_3, s32 *, 4) = (s32) M2C_FIELD(temp_12, s32 *, 4);
                    M2C_FIELD(temp_2_3, f32 *, 0x10) = (f32) M2C_FIELD(temp_12, f32 *, 0x10);
                    M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(temp_5, f32 *, 4);
                    M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(temp_5, f32 *, 8);
                    M2C_FIELD(temp_4, f32 *, 0xC) = (f32) M2C_FIELD(temp_5, f32 *, 0xC);
                    M2C_FIELD(temp_2_3, f32 *, 0x20) = (f32) M2C_FIELD(temp_12, f32 *, 0x20);
                    M2C_FIELD(temp_6_2, f32 *, 4) = (f32) M2C_FIELD(temp_7_2, f32 *, 4);
                    M2C_FIELD(temp_6_2, f32 *, 8) = (f32) M2C_FIELD(temp_7_2, f32 *, 8);
                    M2C_FIELD(temp_6_2, f32 *, 0xC) = (f32) M2C_FIELD(temp_7_2, f32 *, 0xC);
                    M2C_FIELD(temp_2_3, f32 *, 0x30) = (f32) M2C_FIELD(temp_12, f32 *, 0x30);
                    M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_9, f32 *, 4);
                    M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_9, f32 *, 8);
                    M2C_FIELD(temp_8, f32 *, 0xC) = (f32) M2C_FIELD(temp_9, f32 *, 0xC);
                    M2C_FIELD(temp_2_3, f32 *, 0x40) = (f32) M2C_FIELD(temp_12, f32 *, 0x40);
                    M2C_FIELD(temp_10, f32 *, 4) = (f32) M2C_FIELD(temp_11, f32 *, 4);
                    M2C_FIELD(temp_10, f32 *, 8) = (f32) M2C_FIELD(temp_11, f32 *, 8);
                    M2C_FIELD(temp_10, f32 *, 0xC) = (f32) M2C_FIELD(temp_11, f32 *, 0xC);
                } else {
                    temp_3 = (temp_7 * 0x50) + temp_6;
                    temp_2_4 = temp_3 + 0x50;
                    if (temp_2_4 != temp_2_2) {
                        var_6 = (s32) ((temp_2_2 - temp_2_4) * 0xCCCCCCCD) >> 4;
                        var_5 = temp_3 + 0x90;
                        if (var_6 > 0) {
                            var_4 = temp_3 + 0x40;
                            do {
                                var_6 -= 1;
                                M2C_FIELD(var_4, s32 *, -0x40) = (s32) M2C_FIELD(var_5, s32 *, -0x40);
                                M2C_FIELD(var_4, s32 *, -0x3C) = (s32) M2C_FIELD(var_5, s32 *, -0x3C);
                                M2C_FIELD(var_4, f32 *, -0x30) = (f32) M2C_FIELD(var_5, f32 *, -0x30);
                                M2C_FIELD(var_4, f32 *, -0x2C) = (f32) M2C_FIELD(var_5, f32 *, -0x2C);
                                M2C_FIELD(var_4, f32 *, -0x28) = (f32) M2C_FIELD(var_5, f32 *, -0x28);
                                M2C_FIELD(var_4, f32 *, -0x24) = (f32) M2C_FIELD(var_5, f32 *, -0x24);
                                M2C_FIELD(var_4, f32 *, -0x20) = (f32) M2C_FIELD(var_5, f32 *, -0x20);
                                M2C_FIELD(var_4, f32 *, -0x1C) = (f32) M2C_FIELD(var_5, f32 *, -0x1C);
                                M2C_FIELD(var_4, f32 *, -0x18) = (f32) M2C_FIELD(var_5, f32 *, -0x18);
                                M2C_FIELD(var_4, f32 *, -0x14) = (f32) M2C_FIELD(var_5, f32 *, -0x14);
                                M2C_FIELD(var_4, f32 *, -0x10) = (f32) M2C_FIELD(var_5, f32 *, -0x10);
                                M2C_FIELD(var_4, f32 *, -0xC) = (f32) M2C_FIELD(var_5, f32 *, -0xC);
                                M2C_FIELD(var_4, f32 *, -8) = (f32) M2C_FIELD(var_5, f32 *, -8);
                                M2C_FIELD(var_4, f32 *, -4) = (f32) M2C_FIELD(var_5, f32 *, -4);
                                M2C_FIELD(var_4, f32 *, 0) = (f32) M2C_FIELD(var_5, f32 *, 0);
                                M2C_FIELD(var_4, f32 *, 4) = (f32) M2C_FIELD(var_5, f32 *, 4);
                                M2C_FIELD((unsigned short)var_4, f32 *, 8) = (f32) M2C_FIELD(var_5, f32 *, 8);
                                temp_f1 = M2C_FIELD(var_5, f32 *, 0xC);
                                var_5 += 0x50;
                                M2C_FIELD(var_4, f32 *, 0xC) = temp_f1;
                                var_4 += 0x50;
                            } while (var_6 > 0);
                        }
                    }
                    M2C_FIELD(temp_2, s32 *, 4) = (s32) (M2C_FIELD(temp_2, s32 *, 4) - 0x50);
                }
            }
        }
    }
    func_001FD0D8(arg0);
}
