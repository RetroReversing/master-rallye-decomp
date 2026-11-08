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

M2C_UNK func_003F94D0(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK D_004815E8;

void *func_002C2740(void *arg0) {
    void *temp_2;

    temp_2 = arg0 + 0x1C;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_004815E8;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_2, s32 *, 4) = 0;
    M2C_FIELD(temp_2, s32 *, 0x28) = 0;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    M2C_FIELD(temp_2, s32 *, 0x10) = 0;
    M2C_FIELD(temp_2, s32 *, 0x14) = 0;
    M2C_FIELD(temp_2, s32 *, 0xC) = 0;
    M2C_FIELD(temp_2, s32 *, 0x18) = 0;
    M2C_FIELD(temp_2, s32 *, 0x20) = 0;
    M2C_FIELD(temp_2, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_2, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    func_003F94D0(arg0 + 0x78, 0, 0x48);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    return arg0;
}
