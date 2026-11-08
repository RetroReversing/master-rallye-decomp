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

void *func_001E36D8(s32, s32);                      /* extern */
M2C_UNK func_001E3EC0(s32, s32, s32);               /* extern */

void func_00265D18(s32 arg0, void *arg1) {
    s32 temp_18;
    s32 temp_2_2;
    void *temp_10;
    void *temp_2;
    void *temp_3;
    void *temp_4;
    void *temp_4_2;
    void *temp_5;
    void *temp_5_2;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_18 = arg0 + 0x10;
    temp_2 = func_001E36D8(func_001E4280(), arg0 + 0xC);
    temp_3 = M2C_FIELD(arg1, void **, 0x50);
    temp_6 = temp_2 + 0x10;
    temp_7 = temp_2 + 0x20;
    temp_4 = temp_3 + 0x20;
    temp_5 = temp_3 + 0x30;
    M2C_FIELD(temp_3, f32 *, 0x20) = (f32) M2C_FIELD(temp_2, f32 *, 0);
    temp_8 = temp_3 + 0x40;
    temp_10 = temp_2 + 0x30;
    temp_9 = temp_3 + 0x50;
    M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(temp_2, f32 *, 4);
    M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(temp_2, f32 *, 8);
    M2C_FIELD(temp_4, f32 *, 0xC) = (f32) M2C_FIELD(temp_2, f32 *, 0xC);
    M2C_FIELD(temp_3, f32 *, 0x30) = (f32) M2C_FIELD(temp_2, f32 *, 0x10);
    M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
    M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
    M2C_FIELD(temp_5, f32 *, 0xC) = (f32) M2C_FIELD(temp_6, f32 *, 0xC);
    M2C_FIELD(temp_3, f32 *, 0x40) = (f32) M2C_FIELD(temp_2, f32 *, 0x20);
    M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
    M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
    M2C_FIELD(temp_8, f32 *, 0xC) = (f32) M2C_FIELD(temp_7, f32 *, 0xC);
    M2C_FIELD(temp_3, f32 *, 0x50) = (f32) M2C_FIELD(temp_2, f32 *, 0x30);
    M2C_FIELD(temp_9, f32 *, 4) = (f32) M2C_FIELD(temp_10, f32 *, 4);
    M2C_FIELD(temp_9, f32 *, 8) = (f32) M2C_FIELD(temp_10, f32 *, 8);
    M2C_FIELD(temp_9, f32 *, 0xC) = (f32) M2C_FIELD(temp_10, f32 *, 0xC);
    temp_2_2 = func_001E3650(func_001E4280(), temp_18);
    if (temp_2_2 == 0) {
        temp_5_2 = M2C_FIELD(arg1, void **, 0x50);
        M2C_FIELD(temp_5_2, s64 *, 0x70) = (s64) ((M2C_FIELD(temp_5_2, s64 *, 0x70) & ((0xBFFFFFFF * 0x10) | 0xF)) | (0x8000 << 0x13));
        return;
    }
    func_001E3EC0(func_001E4280(), temp_18, temp_2_2 - 1);
    temp_4_2 = M2C_FIELD(arg1, void **, 0x50);
    M2C_FIELD(temp_4_2, s64 *, 0x70) = (s64) (M2C_FIELD(temp_4_2, s64 *, 0x70) & ((0xBFFFFFFF * 0x10) | 0xF));
}
