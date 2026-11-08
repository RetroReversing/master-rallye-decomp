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

void func_0027DB90(void *arg0, void *arg1) {
    void *temp_10;
    void *temp_2;
    void *temp_3;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_2 = arg0 + 0x50;
    temp_3 = arg1 + 0x10;
    temp_6 = arg0 + 0x60;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(arg1, f32 *, 0);
    temp_7 = arg1 + 0x20;
    temp_8 = arg0 + 0x70;
    temp_10 = arg1 + 0x30;
    temp_9 = arg0 + 0x80;
    M2C_FIELD(temp_2, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(temp_2, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(temp_3, f32 *, 4);
    M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(temp_3, f32 *, 8);
    M2C_FIELD(temp_6, f32 *, 0xC) = (f32) M2C_FIELD(temp_3, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
    M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
    M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
    M2C_FIELD(temp_8, f32 *, 0xC) = (f32) M2C_FIELD(temp_7, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
    M2C_FIELD(temp_9, f32 *, 4) = (f32) M2C_FIELD(temp_10, f32 *, 4);
    M2C_FIELD(temp_9, f32 *, 8) = (f32) M2C_FIELD(temp_10, f32 *, 8);
    M2C_FIELD(temp_9, f32 *, 0xC) = (f32) M2C_FIELD(temp_10, f32 *, 0xC);
}
