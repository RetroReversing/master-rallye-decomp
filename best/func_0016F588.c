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

s32 func_00170390(s32);                             /* extern */
s32 func_00171308(s32);                             /* extern */
M2C_UNK func_00265FF8();                            /* extern */
s32 func_002AD408(M2C_UNK);                         /* extern */
extern M2C_UNK D_00426508;
extern M2C_UNK D_004735C8;

void *func_0016F588(void *arg0) {
    s32 temp_2;
    void *temp_17;

    func_00265FF8(arg0);
    temp_17 = arg0 + 0xE8;
    M2C_FIELD(arg0, M2C_UNK32 *, 0xE8) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_004735C8;
    M2C_FIELD(temp_17, M2C_UNK32 *, 4) = 0;
    M2C_FIELD(temp_17, M2C_UNK32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    temp_2 = func_00170390(func_002AD408(0x30));
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = temp_2;
    M2C_FIELD(arg0, s32 *, 0x70) = func_00171308(func_002AD408(8));
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 1;
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    M2C_FIELD(arg0, s32 *, 0xE0) = 0;
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    M2C_FIELD(arg0, M2C_UNK32 *, 0xE8) = (M2C_UNK32) M2C_FIELD(&D_00426508, M2C_UNK32 *, 0);
    M2C_FIELD(temp_17, M2C_UNK32 *, 4) = (M2C_UNK32) M2C_FIELD(&D_00426508, M2C_UNK32 *, 4);
    M2C_FIELD(temp_17, M2C_UNK32 *, 8) = (M2C_UNK32) M2C_FIELD(&D_00426508, M2C_UNK32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xFC) = 2;
    M2C_FIELD(arg0, s32 *, 0x108) = 1;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    M2C_FIELD(arg0, s32 *, 0x104) = 0;
    M2C_FIELD(arg0, s32 *, 0x10C) = 0;
    return arg0;
}
