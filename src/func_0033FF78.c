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

void *func_0033FF78(void *arg0, void *arg1) {
    void *sp0;
    void *sp4;
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_14;
    void *temp_15;
    void *temp_16;
    void *temp_17;
    void *temp_18;
    void *temp_19;
    void *temp_20;
    void *temp_21;
    void *temp_22;
    void *temp_23;
    void *temp_24;
    void *temp_25;
    void *temp_30;
    void *temp_3;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    temp_3 = arg1 + 0x10;
    temp_6 = arg0 + 0x10;
    temp_8 = arg1 + 0x20;
    temp_7 = arg0 + 0x20;
    temp_9 = arg1 + 0x30;
    temp_10 = arg0 + 0x30;
    temp_11 = arg1 + 0x40;
    temp_12 = arg0 + 0x40;
    temp_14 = arg1 + 0x50;
    temp_13 = arg0 + 0x50;
    temp_15 = arg1 + 0x60;
    temp_16 = arg0 + 0x60;
    temp_17 = arg1 + 0x70;
    temp_18 = arg0 + 0x70;
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    temp_20 = arg1 + 0x80;
    temp_19 = arg0 + 0x80;
    temp_21 = arg1 + 0x90;
    temp_22 = arg0 + 0x90;
    temp_23 = arg1 + 0xA0;
    temp_24 = arg0 + 0xA0;
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    temp_30 = arg1 + 0xB0;
    temp_25 = arg0 + 0xB0;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    sp4 = arg1 + 0xC0;
    sp0 = arg0 + 0xC0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(temp_3, f32 *, 4);
    M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(temp_3, f32 *, 8);
    M2C_FIELD(temp_6, f32 *, 0xC) = (f32) M2C_FIELD(temp_3, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
    M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(temp_8, f32 *, 4);
    M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(temp_8, f32 *, 8);
    M2C_FIELD(temp_7, f32 *, 0xC) = (f32) M2C_FIELD(temp_8, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
    M2C_FIELD(temp_10, f32 *, 4) = (f32) M2C_FIELD(temp_9, f32 *, 4);
    M2C_FIELD(temp_10, f32 *, 8) = (f32) M2C_FIELD(temp_9, f32 *, 8);
    M2C_FIELD(temp_10, f32 *, 0xC) = (f32) M2C_FIELD(temp_9, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg1, f32 *, 0x40);
    M2C_FIELD(temp_12, f32 *, 4) = (f32) M2C_FIELD(temp_11, f32 *, 4);
    M2C_FIELD(temp_12, f32 *, 8) = (f32) M2C_FIELD(temp_11, f32 *, 8);
    M2C_FIELD(temp_12, f32 *, 0xC) = (f32) M2C_FIELD(temp_11, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(arg1, f32 *, 0x50);
    M2C_FIELD(temp_13, f32 *, 4) = (f32) M2C_FIELD(temp_14, f32 *, 4);
    M2C_FIELD(temp_13, f32 *, 8) = (f32) M2C_FIELD(temp_14, f32 *, 8);
    M2C_FIELD(temp_13, f32 *, 0xC) = (f32) M2C_FIELD(temp_14, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) M2C_FIELD(arg1, f32 *, 0x60);
    M2C_FIELD(temp_16, f32 *, 4) = (f32) M2C_FIELD(temp_15, f32 *, 4);
    M2C_FIELD(temp_16, f32 *, 8) = (f32) M2C_FIELD(temp_15, f32 *, 8);
    M2C_FIELD(temp_16, f32 *, 0xC) = (f32) M2C_FIELD(temp_15, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(arg1, f32 *, 0x70);
    M2C_FIELD(temp_18, f32 *, 4) = (f32) M2C_FIELD(temp_17, f32 *, 4);
    M2C_FIELD(temp_18, f32 *, 8) = (f32) M2C_FIELD(temp_17, f32 *, 8);
    M2C_FIELD(temp_18, f32 *, 0xC) = (f32) M2C_FIELD(temp_17, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) M2C_FIELD(arg1, f32 *, 0x80);
    M2C_FIELD(temp_19, f32 *, 4) = (f32) M2C_FIELD(temp_20, f32 *, 4);
    M2C_FIELD(temp_19, f32 *, 8) = (f32) M2C_FIELD(temp_20, f32 *, 8);
    M2C_FIELD(temp_19, f32 *, 0xC) = (f32) M2C_FIELD(temp_20, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) M2C_FIELD(arg1, f32 *, 0x90);
    M2C_FIELD(temp_22, f32 *, 4) = (f32) M2C_FIELD(temp_21, f32 *, 4);
    M2C_FIELD(temp_22, f32 *, 8) = (f32) M2C_FIELD(temp_21, f32 *, 8);
    M2C_FIELD(temp_22, f32 *, 0xC) = (f32) M2C_FIELD(temp_21, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0xA0) = (f32) M2C_FIELD(arg1, f32 *, 0xA0);
    M2C_FIELD(temp_24, f32 *, 4) = (f32) M2C_FIELD(temp_23, f32 *, 4);
    M2C_FIELD(temp_24, f32 *, 8) = (f32) M2C_FIELD(temp_23, f32 *, 8);
    M2C_FIELD(temp_24, f32 *, 0xC) = (f32) M2C_FIELD(temp_23, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) M2C_FIELD(arg1, f32 *, 0xB0);
    M2C_FIELD(temp_25, f32 *, 4) = (f32) M2C_FIELD(temp_30, f32 *, 4);
    M2C_FIELD(temp_25, f32 *, 8) = (f32) M2C_FIELD(temp_30, f32 *, 8);
    M2C_FIELD(temp_25, f32 *, 0xC) = (f32) M2C_FIELD(temp_30, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) M2C_FIELD(arg1, f32 *, 0xC0);
    M2C_FIELD(sp0, f32 *, 4) = (f32) M2C_FIELD(sp4, f32 *, 4);
    M2C_FIELD(sp0, f32 *, 8) = (f32) M2C_FIELD(sp4, f32 *, 8);
    M2C_FIELD(sp0, f32 *, 0xC) = (f32) M2C_FIELD(sp4, f32 *, 0xC);
    return arg0;
}
