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

void *func_0021E9C0(s32, s32);                      /* extern */
s32 func_0021F4B0();                                /* extern */

void func_0027E020(void *arg0, void *arg1) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_2_6;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_3_5;
    void *temp_3_6;
    void *temp_3_7;
    void *temp_4;
    void *temp_4_2;
    void *temp_5;
    void *temp_5_2;
    void *temp_6;
    void *temp_6_2;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        temp_2 = func_0021E9C0(func_0021F4B0(), arg0 + 0x18);
        temp_3 = M2C_FIELD(temp_2, void **, 0x50);
        temp_4 = M2C_FIELD(arg1, void **, 0x50);
        temp_5 = temp_3 + 0x20;
        temp_6 = temp_4 + 0x20;
        temp_7 = temp_3 + 0x30;
        M2C_FIELD(temp_4, f32 *, 0x20) = (f32) M2C_FIELD(temp_3, f32 *, 0x20);
        temp_8 = temp_4 + 0x30;
        temp_10 = temp_3 + 0x40;
        temp_9 = temp_4 + 0x40;
        temp_11 = temp_3 + 0x50;
        temp_12 = temp_4 + 0x50;
        M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(temp_5, f32 *, 4);
        M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(temp_5, f32 *, 8);
        M2C_FIELD(temp_6, f32 *, 0xC) = (f32) M2C_FIELD(temp_5, f32 *, 0xC);
        M2C_FIELD(temp_4, f32 *, 0x30) = (f32) M2C_FIELD(temp_3, f32 *, 0x30);
        M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
        M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
        M2C_FIELD(temp_8, f32 *, 0xC) = (f32) M2C_FIELD(temp_7, f32 *, 0xC);
        M2C_FIELD(temp_4, f32 *, 0x40) = (f32) M2C_FIELD(temp_3, f32 *, 0x40);
        M2C_FIELD(temp_9, f32 *, 4) = (f32) M2C_FIELD(temp_10, f32 *, 4);
        M2C_FIELD(temp_9, f32 *, 8) = (f32) M2C_FIELD(temp_10, f32 *, 8);
        M2C_FIELD(temp_9, f32 *, 0xC) = (f32) M2C_FIELD(temp_10, f32 *, 0xC);
        M2C_FIELD(temp_4, f32 *, 0x50) = (f32) M2C_FIELD(temp_3, f32 *, 0x50);
        M2C_FIELD(temp_12, f32 *, 4) = (f32) M2C_FIELD(temp_11, f32 *, 4);
        M2C_FIELD(temp_12, f32 *, 8) = (f32) M2C_FIELD(temp_11, f32 *, 8);
        M2C_FIELD(temp_12, f32 *, 0xC) = (f32) M2C_FIELD(temp_11, f32 *, 0xC);
        temp_3_2 = M2C_FIELD(temp_2, void **, 0x50);
        temp_f5 = M2C_FIELD(arg0, f32 *, 0xC);
        temp_f2 = M2C_FIELD(temp_3_2, f32 *, 0x20);
        temp_2_2 = temp_3_2 + 0x20;
        temp_4_2 = temp_3_2 + 0x30;
        temp_5_2 = temp_3_2 + 0x40;
        sp10 = temp_f2;
        temp_6_2 = temp_3_2 + 0x50;
        sp14 = M2C_FIELD(temp_2_2, f32 *, 4);
        sp18 = M2C_FIELD(temp_2_2, f32 *, 8);
        sp1C = M2C_FIELD(temp_2_2, f32 *, 0xC);
        sp20 = M2C_FIELD(temp_3_2, f32 *, 0x30);
        sp24 = M2C_FIELD(temp_4_2, f32 *, 4);
        sp28 = M2C_FIELD(temp_4_2, f32 *, 8);
        sp2C = M2C_FIELD(temp_4_2, f32 *, 0xC);
        sp30 = M2C_FIELD(temp_3_2, f32 *, 0x40);
        sp34 = M2C_FIELD(temp_5_2, f32 *, 4);
        sp38 = M2C_FIELD(temp_5_2, f32 *, 8);
        sp3C = M2C_FIELD(temp_5_2, f32 *, 0xC);
        sp40 = M2C_FIELD(temp_3_2, f32 *, 0x50);
        sp44 = M2C_FIELD(temp_6_2, f32 *, 4);
        sp48 = M2C_FIELD(temp_6_2, f32 *, 8);
        sp4C = M2C_FIELD(temp_6_2, f32 *, 0xC);
        sp10 = temp_f2 * temp_f5;
        temp_f3 = M2C_FIELD(arg0, f32 *, 0x10);
        temp_f4 = M2C_FIELD(arg0, f32 *, 0x14);
        temp_3_3 = M2C_FIELD(arg1, void **, 0x50);
        M2C_FIELD(&sp10, f32 *, 4) = (f32) (M2C_FIELD(&sp10, f32 *, 4) * temp_f5);
        M2C_FIELD(&sp10, f32 *, 8) = (f32) (M2C_FIELD(&sp10, f32 *, 8) * temp_f5);
        sp20 *= temp_f3;
        M2C_FIELD(&sp20, f32 *, 4) = (f32) (M2C_FIELD(&sp20, f32 *, 4) * temp_f3);
        M2C_FIELD(&sp20, f32 *, 8) = (f32) (M2C_FIELD(&sp20, f32 *, 8) * temp_f3);
        sp30 *= temp_f4;
        M2C_FIELD(&sp30, f32 *, 4) = (f32) (M2C_FIELD(&sp30, f32 *, 4) * temp_f4);
        M2C_FIELD(&sp30, f32 *, 8) = (f32) (M2C_FIELD(&sp30, f32 *, 8) * temp_f4);
        M2C_FIELD(temp_3_3, f32 *, 0x50) = (f32) (M2C_FIELD(temp_3_3, f32 *, 0x50) + sp10);
        temp_2_3 = M2C_FIELD(arg1, void **, 0x50);
        M2C_FIELD(temp_2_3, f32 *, 0x50) = (f32) (M2C_FIELD(temp_2_3, f32 *, 0x50) + sp20);
        temp_3_4 = M2C_FIELD(arg1, void **, 0x50);
        M2C_FIELD(temp_3_4, f32 *, 0x50) = (f32) (M2C_FIELD(temp_3_4, f32 *, 0x50) + sp30);
        temp_2_4 = M2C_FIELD(arg1, void **, 0x50) + 0x50;
        M2C_FIELD(temp_2_4, f32 *, 4) = (f32) (M2C_FIELD(temp_2_4, f32 *, 4) + M2C_FIELD(&sp10, f32 *, 4));
        temp_3_5 = M2C_FIELD(arg1, void **, 0x50) + 0x50;
        M2C_FIELD(temp_3_5, f32 *, 4) = (f32) (M2C_FIELD(temp_3_5, f32 *, 4) + M2C_FIELD(&sp20, f32 *, 4));
        temp_2_5 = M2C_FIELD(arg1, void **, 0x50) + 0x50;
        M2C_FIELD(temp_2_5, f32 *, 4) = (f32) (M2C_FIELD(temp_2_5, f32 *, 4) + M2C_FIELD(&sp30, f32 *, 4));
        temp_3_6 = M2C_FIELD(arg1, void **, 0x50) + 0x50;
        M2C_FIELD(temp_3_6, f32 *, 8) = (f32) (M2C_FIELD(temp_3_6, f32 *, 8) + M2C_FIELD(&sp10, f32 *, 8));
        temp_2_6 = M2C_FIELD(arg1, void **, 0x50) + 0x50;
        M2C_FIELD(temp_2_6, f32 *, 8) = (f32) (M2C_FIELD(temp_2_6, f32 *, 8) + M2C_FIELD(&sp20, f32 *, 8));
        temp_3_7 = M2C_FIELD(arg1, void **, 0x50) + 0x50;
        M2C_FIELD(temp_3_7, f32 *, 8) = (f32) (M2C_FIELD(temp_3_7, f32 *, 8) + M2C_FIELD(&sp30, f32 *, 8));
    }
}
