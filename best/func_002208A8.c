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

M2C_UNK func_001D4040(M2C_UNK *);                   /* extern */
extern M2C_UNK D_00478FF8;

void *func_002208A8(void *arg0) {
    M2C_UNK32 sp0;
    M2C_UNK32 sp4;
    M2C_UNK32 sp8;
    void *temp_3;
    void *temp_4;
    void *temp_5;
    void *temp_6;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x128) = 0;
    M2C_FIELD(arg0, s32 *, 0x12C) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    func_001D4040(&D_00478FF8);
    sp0 = 0;
    temp_3 = arg0 + 0x20;
    temp_4 = arg0 + 0x98;
    temp_5 = arg0 + 0x114;
    temp_6 = arg0 + 0x134;
    sp8 = 0;
    M2C_FIELD(arg0, f32 *, 0x18) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x1C) = 0.01f;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    sp4 = 0x3A83126F;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x20) = sp0;
    M2C_FIELD(temp_3, f32 *, 4) = 0.001f;
    M2C_FIELD(temp_3, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(arg0, f32 *, 0x3C) = 1.0f;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x40) = sp0;
    M2C_FIELD(arg0, f32 *, 0x44) = 0.1f;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x48) = sp0;
    M2C_FIELD(arg0, f32 *, 0x4C) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x50) = 1.0f;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x54) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x58) = sp0;
    M2C_FIELD(arg0, f32 *, 0x5C) = 0.01f;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x68) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x6C) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x70) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x74) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x78) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x7C) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x80) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x84) = sp0;
    M2C_FIELD(arg0, f32 *, 0xBC) = 1.0f;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0xC0) = sp0;
    sp8 = sp0;
    M2C_FIELD(arg0, f32 *, 0xC4) = 0.1f;
    M2C_FIELD(arg0, f32 *, 0xC8) = 0.1f;
    M2C_FIELD(arg0, f32 *, 0xCC) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0xD0) = 1.0f;
    M2C_FIELD(arg0, M2C_UNK32 *, 0xD4) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0xD8) = sp0;
    M2C_FIELD(arg0, f32 *, 0xDC) = 0.01f;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x88) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x8C) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x90) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x94) = sp0;
    sp4 = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x98) = sp0;
    M2C_FIELD(temp_4, M2C_UNK32 *, 4) = sp0;
    M2C_FIELD(temp_4, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(arg0, f32 *, 0xA8) = 0.5f;
    M2C_FIELD(arg0, f32 *, 0xAC) = 0.1f;
    M2C_FIELD(arg0, f32 *, 0xB0) = 0.3f;
    M2C_FIELD(arg0, f32 *, 0xA4) = 0.1f;
    M2C_FIELD(arg0, f32 *, 0xB4) = 0.01f;
    M2C_FIELD(arg0, f32 *, 0xB8) = 0.01f;
    M2C_FIELD(arg0, f32 *, 0xE4) = 0.01f;
    M2C_FIELD(arg0, f32 *, 0xE8) = 0.01f;
    M2C_FIELD(arg0, f32 *, 0xEC) = 0.01f;
    M2C_FIELD(arg0, f32 *, 0xF0) = 0.01f;
    M2C_FIELD(arg0, M2C_UNK32 *, 0xF4) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0xF8) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0xFC) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x100) = sp0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x104) = 0;
    sp8 = sp0;
    sp4 = 0x3F800000;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x108) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x110) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x10C) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x114) = sp0;
    M2C_FIELD(temp_5, f32 *, 4) = 1.0f;
    M2C_FIELD(temp_5, M2C_UNK32 *, 8) = sp8;
    sp8 = sp0;
    M2C_FIELD(arg0, s32 *, 0x144) = 0;
    sp4 = 0x3F800000;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x134) = sp0;
    M2C_FIELD(temp_6, f32 *, 4) = 1.0f;
    M2C_FIELD(temp_6, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(arg0, f32 *, 0x2C) = 0.01f;
    M2C_FIELD(arg0, f32 *, 0x60) = 1.0f;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x130) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x140) = sp0;
    M2C_FIELD(arg0, f32 *, 0xE0) = 1.0f;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x30) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x34) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x120) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x124) = sp0;
    return arg0;
}
