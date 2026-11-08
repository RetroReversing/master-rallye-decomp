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
M2C_UNK func_00262F88(void *, void *, void *, void *, void *, void *, void *, void *); /* extern */

void func_00291F60(void *arg0, void *arg1) {
    void *temp_10;
    void *temp_11;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_3;
    void *temp_3_2;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_2 = func_0021E9C0(func_0021F4B0(), arg0 + 0xC);
    if (temp_2 != NULL) {
        temp_2_2 = M2C_FIELD(temp_2, void **, 0x50);
        temp_3 = M2C_FIELD(arg1, void **, 0x50);
        temp_4 = temp_2_2 + 0x20;
        temp_5 = temp_3 + 0x20;
        temp_7 = temp_2_2 + 0x30;
        M2C_FIELD(temp_3, f32 *, 0x20) = (f32) M2C_FIELD(temp_2_2, f32 *, 0x20);
        temp_6 = temp_3 + 0x30;
        temp_8 = temp_2_2 + 0x40;
        temp_9 = temp_3 + 0x40;
        temp_10 = temp_2_2 + 0x50;
        temp_11 = temp_3 + 0x50;
        M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(temp_4, f32 *, 4);
        M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(temp_4, f32 *, 8);
        M2C_FIELD(temp_5, f32 *, 0xC) = (f32) M2C_FIELD(temp_4, f32 *, 0xC);
        M2C_FIELD(temp_3, f32 *, 0x30) = (f32) M2C_FIELD(temp_2_2, f32 *, 0x30);
        M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
        M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
        M2C_FIELD(temp_6, f32 *, 0xC) = (f32) M2C_FIELD(temp_7, f32 *, 0xC);
        M2C_FIELD(temp_3, f32 *, 0x40) = (f32) M2C_FIELD(temp_2_2, f32 *, 0x40);
        M2C_FIELD(temp_9, f32 *, 4) = (f32) M2C_FIELD(temp_8, f32 *, 4);
        M2C_FIELD(temp_9, f32 *, 8) = (f32) M2C_FIELD(temp_8, f32 *, 8);
        M2C_FIELD(temp_9, f32 *, 0xC) = (f32) M2C_FIELD(temp_8, f32 *, 0xC);
        M2C_FIELD(temp_3, f32 *, 0x50) = (f32) M2C_FIELD(temp_2_2, f32 *, 0x50);
        M2C_FIELD(temp_11, f32 *, 4) = (f32) M2C_FIELD(temp_10, f32 *, 4);
        M2C_FIELD(temp_11, f32 *, 8) = (f32) M2C_FIELD(temp_10, f32 *, 8);
        M2C_FIELD(temp_11, f32 *, 0xC) = (f32) M2C_FIELD(temp_10, f32 *, 0xC);
        if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
            func_00262F88(M2C_FIELD(arg1, void **, 0x50), M2C_FIELD(temp_2, void **, 0x50) + 0xC, temp_6, temp_7, temp_8, temp_9, temp_10, temp_11);
            temp_2_3 = M2C_FIELD(arg1, void **, 0x50);
            temp_3_2 = temp_2_3 + 0x30;
            M2C_FIELD(temp_2_3, f32 *, 0x30) = (f32) -M2C_FIELD(temp_2_3, f32 *, 0x30);
            M2C_FIELD(temp_3_2, f32 *, 4) = (f32) -M2C_FIELD(temp_3_2, f32 *, 4);
            M2C_FIELD(temp_3_2, f32 *, 8) = (f32) -M2C_FIELD(temp_3_2, f32 *, 8);
        }
    }
}
