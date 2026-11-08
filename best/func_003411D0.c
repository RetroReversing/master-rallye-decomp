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

M2C_UNK func_00341198(s64, s64, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_0042DEC0;

void func_003411D0(void) {
    s64 temp_5;
    s64 temp_6;
    void *temp_3;

    temp_6 = 0xC039 << 0x2E;
    M2C_FIELD(&D_0042DEC0, s64 *, 0) = temp_6;
    temp_5 = 0xC439 << 0x2E;
    temp_3 = &D_0042DEC0 + 0xB0;
    M2C_FIELD(&D_0042DEC0, s64 *, 0xB0) = temp_5;
    M2C_FIELD(temp_3, s64 *, 8) = 0x412;
    M2C_FIELD(&D_0042DEC0, s64 *, 0x38) = 8;
    M2C_FIELD(&D_0042DEC0, s64 *, 0x48) = 0x42;
    M2C_FIELD(&D_0042DEC0, s64 *, 0x58) = 0x4A;
    M2C_FIELD(&D_0042DEC0, s64 *, 0x68) = 6;
    M2C_FIELD(&D_0042DEC0, s64 *, 0x78) = 0x14;
    M2C_FIELD(&D_0042DEC0, s64 *, 0x88) = 0x34;
    M2C_FIELD(&D_0042DEC0, s64 *, 0x98) = 0x36;
    M2C_FIELD(&D_0042DEC0, s64 *, 0x28) = 0x47;
    M2C_FIELD(&D_0042DEC0, s64 *, 0xA8) = 0x4E;
    M2C_FIELD(temp_3, s64 *, 0xA8) = 0x4F;
    M2C_FIELD(temp_3, s64 *, 0x28) = 0x48;
    M2C_FIELD(temp_3, s64 *, 0x38) = 9;
    M2C_FIELD(temp_3, s64 *, 0x48) = 0x43;
    M2C_FIELD(temp_3, s64 *, 0x58) = 0x4B;
    M2C_FIELD(temp_3, s64 *, 0x68) = 7;
    M2C_FIELD(temp_3, s64 *, 0x78) = 0x15;
    M2C_FIELD(temp_3, s64 *, 0x88) = 0x35;
    M2C_FIELD(temp_3, s64 *, 0x98) = 0x37;
    M2C_FIELD(&D_0042DEC0, s64 *, 8) = 0x412;
    func_00341198(temp_5, temp_6, &D_0042DEC0, 0x48, 9, 0x43, 0x4B);
}
