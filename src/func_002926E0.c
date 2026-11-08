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

M2C_UNK func_002924A0();                            /* extern */
M2C_UNK func_00292970(void *, void *);              /* extern */

void *func_002926E0(void *arg0, void *arg1) {
    void *s3;
    void *s4;
    void *s1;
    void *s0;
    s32 s2;
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_14;
    void *temp_15;
    void *temp_16;
    void *temp_17;
    void *temp_18;
    void *temp_3;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;
    s32 tmp28;
    s8 b0, b1;

    s3 = arg0;
    s4 = arg1;
    s1 = s4;
    s0 = s3;
    func_002924A0(s3);
    s2 = 3;
    do {
        func_00292970(s0, s1);
        s1 += 8;
        s2 -= 1;
        s0 += 8;
    } while (s2 >= 0);
    temp_3 = s4 + 0x50;
    temp_4 = s3 + 0x50;
    temp_6 = s4 + 0x60;
    M2C_FIELD(s3, s32 *, 0x2C) = (s32) M2C_FIELD(s4, s32 *, 0x2C);
    temp_5 = s3 + 0x60;
    temp_7 = s4 + 0x70;
    temp_8 = s3 + 0x70;
    temp_9 = s4 + 0x80;
    temp_10 = s3 + 0x80;
    temp_12 = s4 + 0x90;
    M2C_FIELD(s3, s32 *, 0x30) = (s32) M2C_FIELD(s4, s32 *, 0x30);
    temp_11 = s3 + 0x90;
    temp_13 = s4 + 0xA0;
    temp_14 = s3 + 0xA0;
    temp_15 = s4 + 0xB0;
    temp_16 = s3 + 0xB0;
    temp_18 = s4 + 0xC0;
    M2C_FIELD(s3, f32 *, 0x50) = (f32) M2C_FIELD(s4, f32 *, 0x50);
    temp_17 = s3 + 0xC0;
    M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(temp_3, f32 *, 4);
    M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(temp_3, f32 *, 8);
    M2C_FIELD(temp_4, f32 *, 0xC) = (f32) M2C_FIELD(temp_3, f32 *, 0xC);
    M2C_FIELD(s3, f32 *, 0x60) = (f32) M2C_FIELD(s4, f32 *, 0x60);
    M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
    M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
    M2C_FIELD(temp_5, f32 *, 0xC) = (f32) M2C_FIELD(temp_6, f32 *, 0xC);
    M2C_FIELD(s3, f32 *, 0x70) = (f32) M2C_FIELD(s4, f32 *, 0x70);
    M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
    M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
    M2C_FIELD(temp_8, f32 *, 0xC) = (f32) M2C_FIELD(temp_7, f32 *, 0xC);
    M2C_FIELD(s3, f32 *, 0x80) = (f32) M2C_FIELD(s4, f32 *, 0x80);
    M2C_FIELD(temp_10, f32 *, 4) = (f32) M2C_FIELD(temp_9, f32 *, 4);
    M2C_FIELD(temp_10, f32 *, 8) = (f32) M2C_FIELD(temp_9, f32 *, 8);
    M2C_FIELD(temp_10, f32 *, 0xC) = (f32) M2C_FIELD(temp_9, f32 *, 0xC);
    M2C_FIELD(s3, f32 *, 0x90) = (f32) M2C_FIELD(s4, f32 *, 0x90);
    M2C_FIELD(temp_11, f32 *, 4) = (f32) M2C_FIELD(temp_12, f32 *, 4);
    M2C_FIELD(temp_11, f32 *, 8) = (f32) M2C_FIELD(temp_12, f32 *, 8);
    M2C_FIELD(temp_11, f32 *, 0xC) = (f32) M2C_FIELD(temp_12, f32 *, 0xC);
    M2C_FIELD(s3, f32 *, 0xA0) = (f32) M2C_FIELD(s4, f32 *, 0xA0);
    M2C_FIELD(temp_14, f32 *, 4) = (f32) M2C_FIELD(temp_13, f32 *, 4);
    M2C_FIELD(temp_14, f32 *, 8) = (f32) M2C_FIELD(temp_13, f32 *, 8);
    M2C_FIELD(temp_14, f32 *, 0xC) = (f32) M2C_FIELD(temp_13, f32 *, 0xC);
    M2C_FIELD(s3, f32 *, 0xB0) = (f32) M2C_FIELD(s4, f32 *, 0xB0);
    M2C_FIELD(temp_16, f32 *, 4) = (f32) M2C_FIELD(temp_15, f32 *, 4);
    M2C_FIELD(temp_16, f32 *, 8) = (f32) M2C_FIELD(temp_15, f32 *, 8);
    M2C_FIELD(temp_16, f32 *, 0xC) = (f32) M2C_FIELD(temp_15, f32 *, 0xC);
    M2C_FIELD(s3, f32 *, 0xC0) = (f32) M2C_FIELD(s4, f32 *, 0xC0);
    M2C_FIELD(temp_17, f32 *, 4) = (f32) M2C_FIELD(temp_18, f32 *, 4);
    M2C_FIELD(temp_17, f32 *, 8) = (f32) M2C_FIELD(temp_18, f32 *, 8);
    M2C_FIELD(temp_17, f32 *, 0xC) = (f32) M2C_FIELD(temp_18, f32 *, 0xC);
    M2C_FIELD(s3, s32 *, 0x3C) = (s32) M2C_FIELD(s4, s32 *, 0x3C);
    M2C_FIELD(s3, s32 *, 0x44) = (s32) M2C_FIELD(s4, s32 *, 0x44);
    M2C_FIELD(s3, s32 *, 0x40) = (s32) M2C_FIELD(s4, s32 *, 0x40);
    b0 = M2C_FIELD(s4, s8 *, 0xD0);
    M2C_FIELD(s3, s8 *, 0xD0) = b0;
    b1 = M2C_FIELD(s4, s8 *, 0xD1);
    M2C_FIELD(s3, s8 *, 0xD1) = b1;
    M2C_FIELD(s3, s32 *, 0xD4) = (s32) M2C_FIELD(s4, s32 *, 0xD4);
    M2C_FIELD(s3, s32 *, 0x34) = (s32) M2C_FIELD(s4, s32 *, 0x34);
    M2C_FIELD(s3, s32 *, 0x38) = (s32) M2C_FIELD(s4, s32 *, 0x38);
    tmp28 = M2C_FIELD(s4, s32 *, 0x28);
    M2C_FIELD(s3, s32 *, 0x24) = 0;
    M2C_FIELD(s3, s32 *, 0x28) = tmp28;
    return s3;
}
