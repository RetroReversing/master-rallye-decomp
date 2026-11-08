/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

M2C_UNK func_00177DB0(s32, void *, void *, void *, void *, void *, void *, void *); /* extern */

void func_00179A70(void *arg0) {
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_2;
    void *temp_3;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_6 = arg0 + 0x40;
    temp_8 = arg0 + 0x50;
    temp_10 = arg0 + 0x60;
    temp_12 = arg0 + 0x70;
    temp_2 = M2C_FIELD(arg0, void **, 0x98);
    temp_3 = temp_2 + 0x50;
    temp_7 = temp_2 + 0x60;
    temp_9 = temp_2 + 0x70;
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(temp_2, f32 *, 0x50);
    temp_11 = temp_2 + 0x80;
    M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(temp_3, f32 *, 4);
    M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(temp_3, f32 *, 8);
    M2C_FIELD(temp_6, f32 *, 0xC) = (f32) M2C_FIELD(temp_3, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(temp_2, f32 *, 0x60);
    M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
    M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
    M2C_FIELD(temp_8, f32 *, 0xC) = (f32) M2C_FIELD(temp_7, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) M2C_FIELD(temp_2, f32 *, 0x70);
    M2C_FIELD(temp_10, f32 *, 4) = (f32) M2C_FIELD(temp_9, f32 *, 4);
    M2C_FIELD(temp_10, f32 *, 8) = (f32) M2C_FIELD(temp_9, f32 *, 8);
    M2C_FIELD(temp_10, f32 *, 0xC) = (f32) M2C_FIELD(temp_9, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(temp_2, f32 *, 0x80);
    M2C_FIELD(temp_12, f32 *, 4) = (f32) M2C_FIELD(temp_11, f32 *, 4);
    M2C_FIELD(temp_12, f32 *, 8) = (f32) M2C_FIELD(temp_11, f32 *, 8);
    M2C_FIELD(temp_12, f32 *, 0xC) = (f32) M2C_FIELD(temp_11, f32 *, 0xC);
    func_00177DB0(M2C_FIELD(arg0, s32 *, 0x90), temp_6, temp_6, temp_7, temp_8, temp_9, temp_10, temp_11);
}
