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

extern M2C_UNK D_0044DCD8;
extern M2C_UNK D_0047CAB8;
extern s32 D_00494BF0;

void *func_0029EDB0(void *arg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    void *temp_6;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0044DCD8;
    temp_6 = arg0 + 0x40;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0047CAB8;
    M2C_FIELD(arg0, s32 *, 4) = (s32) D_00494BF0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(temp_6, f32 *, 8) = 1.0f;
    M2C_FIELD(temp_6, f32 *, 4) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x40) = 1.0f;
    M2C_FIELD(temp_6, f32 *, 0xC) = 1.0f;
    M2C_FIELD(arg0, s32 *, 0x24) = 1;
    sp8 = 1.0f;
    spC = 1.0f;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    sp0 = 1.0f;
    sp4 = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x40) = 1.0f;
    M2C_FIELD(temp_6, f32 *, 4) = 1.0f;
    M2C_FIELD(temp_6, f32 *, 8) = sp8;
    M2C_FIELD(temp_6, f32 *, 0xC) = 1.0f;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    return arg0;
}
