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

void func_001AE740(void *arg0, void *arg1) {
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_3 = M2C_FIELD(arg1, void **, 0x50);
    temp_6 = arg0 + 0xB0;
    temp_7 = arg0 + 0xBC;
    temp_2 = temp_3 + 0x50;
    M2C_FIELD(temp_3, f32 *, 0x50) = (f32) M2C_FIELD(arg0, f32 *, 0xB0);
    temp_8 = arg0 + 0xD4;
    temp_9 = arg0 + 0xC8;
    M2C_FIELD(temp_2, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
    M2C_FIELD(temp_2, f32 *, 0xC) = 1.0f;
    M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
    temp_3_2 = M2C_FIELD(arg1, void **, 0x50);
    temp_2_2 = temp_3_2 + 0x40;
    M2C_FIELD(temp_3_2, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0xBC);
    M2C_FIELD(temp_2_2, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
    M2C_FIELD(temp_2_2, s32 *, 0xC) = 0;
    M2C_FIELD(temp_2_2, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
    temp_3_3 = M2C_FIELD(arg1, void **, 0x50);
    temp_2_3 = temp_3_3 + 0x20;
    M2C_FIELD(temp_3_3, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0xD4);
    M2C_FIELD(temp_2_3, f32 *, 4) = (f32) M2C_FIELD(temp_8, f32 *, 4);
    M2C_FIELD(temp_2_3, s32 *, 0xC) = 0;
    M2C_FIELD(temp_2_3, f32 *, 8) = (f32) M2C_FIELD(temp_8, f32 *, 8);
    temp_3_4 = M2C_FIELD(arg1, void **, 0x50);
    temp_2_4 = temp_3_4 + 0x30;
    M2C_FIELD(temp_3_4, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0xC8);
    M2C_FIELD(temp_2_4, f32 *, 4) = (f32) M2C_FIELD(temp_9, f32 *, 4);
    M2C_FIELD(temp_2_4, s32 *, 0xC) = 0;
    M2C_FIELD(temp_2_4, f32 *, 8) = (f32) M2C_FIELD(temp_9, f32 *, 8);
}
