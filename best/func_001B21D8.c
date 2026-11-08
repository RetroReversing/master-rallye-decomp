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

M2C_UNK func_001B1D10(void *);                      /* extern */
M2C_UNK func_001D5DE0(void *);                      /* extern */
extern M2C_UNK D_004731D8;

void *func_001B21D8(void *arg0) {
    void *temp_17;
    void *temp_3;
    register void *temp_2;
    void *temp_3_2;
    void *temp_4;

    M2C_FIELD(arg0, f32 *, 0x38) = 100.0f;
    temp_3 = arg0 + 0x38;
    M2C_FIELD(arg0, M2C_UNK **, 0xDC) = &D_004731D8;
    temp_17 = arg0 + 0xA4;
    temp_2 = arg0 + 0x54;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(temp_3, f32 *, 8) = 100.0f;
    M2C_FIELD(temp_3, f32 *, 4) = 100.0f;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    M2C_FIELD(temp_2, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    M2C_FIELD(arg0, f32 *, 0x98) = 100.0f;
    M2C_FIELD(arg0, f32 *, 0x64) = 100.0f;
    M2C_FIELD(arg0, f32 *, 0x60) = 100.0f;
    M2C_FIELD(arg0, f32 *, 0x8C) = 100.0f;
    M2C_FIELD(arg0, f32 *, 0x7C) = 100.0f;
    func_001B1D10(temp_17);
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 1;
    M2C_FIELD(arg0, s32 *, 0xCC) = 1;
    func_001D5DE0(arg0 + 0xD8);
    temp_4 = arg0 + 0xB0;
    temp_3_2 = arg0 + 0x10;
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0xA4);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 0xB0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(temp_17, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(temp_17, f32 *, 8);
    M2C_FIELD(temp_3_2, f32 *, 4) = (f32) M2C_FIELD(temp_4, f32 *, 4);
    M2C_FIELD(temp_3_2, f32 *, 8) = (f32) M2C_FIELD(temp_4, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(temp_17, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(temp_17, f32 *, 0x1C);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(temp_17, f32 *, 0x20);
    return arg0;
}
