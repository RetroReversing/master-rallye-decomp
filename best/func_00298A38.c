/* machine draft (m2c), tried by autopilot */
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
extern M2C_UNK D_0047CBB8;
extern s32 D_00494B88;

void *func_00298A38(void *arg0) {
    M2C_UNK32 sp0;
    M2C_UNK32 sp4;
    M2C_UNK32 sp8;
    void *temp_5;
    void *temp_6;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0044DCD8;
    sp0 = 0;
    M2C_FIELD(arg0, s32 *, 4) = (s32) D_00494B88;
    temp_6 = arg0 + 0x10;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0047CBB8;
    temp_5 = arg0 + 0x2C;
    sp8 = 0;
    sp4 = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x10) = sp0;
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(temp_6, M2C_UNK32 *, 4) = sp0;
    M2C_FIELD(temp_6, M2C_UNK32 *, 8) = sp8;
    sp8 = sp0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    sp4 = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0x2C) = sp0;
    M2C_FIELD(temp_5, M2C_UNK32 *, 4) = sp0;
    M2C_FIELD(temp_5, M2C_UNK32 *, 8) = sp8;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    return arg0;
}
