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

f32 func_0015AD18();                                /* extern */
M2C_UNK func_001D4040(void *, M2C_UNK *);           /* extern */
extern M2C_UNK D_0044E948;
extern M2C_UNK D_0044EE08;
extern M2C_UNK D_0044F5A8;
extern M2C_UNK D_0044F6C0;
extern M2C_UNK D_0044F6D8;
extern M2C_UNK D_0044F6F0;
extern M2C_UNK D_0044F708;
extern M2C_UNK D_0044F720;
extern M2C_UNK D_0044F738;

void *func_00166E48(void *arg0) {
    f32 temp_f0;
    void *temp_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_4;
    void *temp_5;
    void *temp_6;

    temp_2 = arg0 + 0xC;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_3 = arg0 + 0x18;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    M2C_FIELD(temp_2, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(temp_3, s32 *, 8) = 0;
    M2C_FIELD(temp_3, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    func_001D4040(arg0 + 0x44, &D_0044F6C0);
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    func_001D4040(arg0 + 0x50, &D_0044F6D8);
    func_001D4040(arg0 + 0x54, &D_0044F6F0);
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = -1;
    M2C_FIELD(arg0, s32 *, 0x64) = 3;
    M2C_FIELD(arg0, f32 *, 0x58) = 1.5f;
    func_001D4040(arg0 + 0x70, &D_0044E948);
    func_001D4040(arg0 + 0x74, &D_0044F708);
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    func_001D4040(arg0 + 0x7C, &D_0044F720);
    func_001D4040(arg0 + 0x80, &D_0044F738);
    func_001D4040(arg0 + 0x84, &D_0044EE08);
    func_001D4040(arg0 + 0x88, &D_0044F5A8);
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, f32 *, 0x98) = 2.0f;
    M2C_FIELD(arg0, f32 *, 0x9C) = 50.0f;
    M2C_FIELD(arg0, f32 *, 0x90) = 2.0f;
    M2C_FIELD(arg0, f32 *, 0x94) = 3.0f;
    temp_f0 = func_0015AD18();
    temp_3_2 = arg0 + 0xA4;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    temp_4 = arg0 + 0xB4;
    temp_5 = arg0 + 0xC0;
    temp_6 = arg0 + 0xD0;
    M2C_FIELD(arg0, f32 *, 0xA0) = (f32) (temp_f0 * 25.0f);
    M2C_FIELD(temp_3_2, s32 *, 8) = 0;
    M2C_FIELD(temp_3_2, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(temp_4, s32 *, 8) = 0;
    M2C_FIELD(temp_4, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(temp_5, s32 *, 8) = 0;
    M2C_FIELD(temp_5, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(temp_6, s32 *, 8) = 0;
    M2C_FIELD(temp_6, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    return arg0;
}
