/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

M2C_UNK func_001B15E8(void *);                      /* extern */
f32 func_001D5E70(s32, M2C_UNK, f32);               /* extern */
s32 func_001D5F70();                                /* extern */

void func_001B1128(void *arg0, void *arg1) {
    f32 sp18;
    f32 sp1C;
    f32 temp_f5;
    s32 temp_8;
    void *temp_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_7;

    M2C_FIELD(arg0, f32 *, 0x54) = func_001D5E70(func_001D5F70(), 0x3D4CCCCD, M2C_FIELD(arg0, f32 *, 0x58));
    func_001B15E8(arg0);
    temp_5 = M2C_FIELD(arg1, void **, 0x50);
    temp_8 = (0xBFFFFFFF * 0x10) | 0xF;
    temp_4 = arg0 + 0x30;
    temp_6 = arg0 + 0x3C;
    temp_7 = arg0 + 0x20;
    M2C_FIELD(temp_5, s64 *, 0x70) = (s64) (M2C_FIELD(temp_5, s64 *, 0x70) & temp_8);
    temp_3 = M2C_FIELD(arg1, void **, 0x50);
    temp_2 = temp_3 + 0x50;
    M2C_FIELD(temp_3, f32 *, 0x50) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(temp_2, f32 *, 4) = (f32) M2C_FIELD(temp_4, f32 *, 4);
    M2C_FIELD(temp_2, f32 *, 0xC) = 1.0f;
    M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(temp_4, f32 *, 8);
    temp_3_2 = M2C_FIELD(arg1, void **, 0x50);
    M2C_FIELD(temp_3_2, s64 *, 0x70) = (s64) ((M2C_FIELD(temp_3_2, s64 *, 0x70) & temp_8) | (0x8000 << 0x13));
    temp_f5 = M2C_FIELD(arg0, f32 *, 0x3C);
    M2C_FIELD(arg0, f32 *, 0x20) = temp_f5;
    sp18 = M2C_FIELD(temp_6, f32 *, 8);
    sp1C = -((temp_f5 * M2C_FIELD(arg0, f32 *, 0x30)) + (M2C_FIELD(temp_6, f32 *, 4) * M2C_FIELD(temp_4, f32 *, 4)) + (M2C_FIELD(temp_6, f32 *, 8) * M2C_FIELD(temp_4, f32 *, 8)));
    M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
    M2C_FIELD(temp_7, f32 *, 8) = sp18;
    M2C_FIELD(temp_7, f32 *, 0xC) = sp1C;
}
