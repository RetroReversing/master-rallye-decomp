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

extern M2C_UNK D_00426030;

void func_00330668(void *arg0, void *arg1) {
    void **temp_8;
    void *temp_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8_2;
    void *temp_9;

    temp_3 = M2C_FIELD(arg0, void **, 0x50);
    temp_8 = M2C_FIELD(temp_3, void ***, 4);
    if ((((u64) M2C_FIELD(temp_3, u64 *, 0x70) >> 0x22) & 1) && (temp_8 != NULL)) {
        temp_3_2 = *temp_8;
        M2C_FIELD(temp_3_2, M2C_UNK (**)(void *, void *, M2C_UNK *, void *, void **, void *, M2C_UNK), 0x14)(temp_8 + M2C_FIELD(temp_3_2, s16 *, 0x10), arg0, &D_00426030, arg1, temp_8, arg1, 0x3F800000);
        return;
    }
    temp_5 = arg1 + 0x10;
    temp_7 = arg1 + 0x20;
    temp_9 = arg1 + 0x30;
    temp_2 = temp_3 + 0x20;
    temp_4 = temp_3 + 0x30;
    temp_6 = temp_3 + 0x40;
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(temp_3, f32 *, 0x20);
    temp_8_2 = temp_3 + 0x50;
    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(temp_2, f32 *, 4);
    M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(temp_2, f32 *, 8);
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) M2C_FIELD(temp_2, f32 *, 0xC);
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) M2C_FIELD(temp_3, f32 *, 0x30);
    M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(temp_4, f32 *, 4);
    M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(temp_4, f32 *, 8);
    M2C_FIELD(temp_5, f32 *, 0xC) = (f32) M2C_FIELD(temp_4, f32 *, 0xC);
    M2C_FIELD(arg1, f32 *, 0x20) = (f32) M2C_FIELD(temp_3, f32 *, 0x40);
    M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
    M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
    M2C_FIELD(temp_7, f32 *, 0xC) = (f32) M2C_FIELD(temp_6, f32 *, 0xC);
    M2C_FIELD(arg1, f32 *, 0x30) = (f32) M2C_FIELD(temp_3, f32 *, 0x50);
    M2C_FIELD(temp_9, f32 *, 4) = (f32) M2C_FIELD(temp_8_2, f32 *, 4);
    M2C_FIELD(temp_9, f32 *, 8) = (f32) M2C_FIELD(temp_8_2, f32 *, 8);
    M2C_FIELD(temp_9, f32 *, 0xC) = (f32) M2C_FIELD(temp_8_2, f32 *, 0xC);
}
