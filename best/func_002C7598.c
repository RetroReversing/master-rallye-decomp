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
extern M2C_UNK D_0049AE40;
extern M2C_UNK D_0049AE80;

void func_002C7598(void *arg0) {
    s32 temp_3;
    s32 var_5;

    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s16 *, 0x18) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x1A) = 0;
    M2C_FIELD(arg0, s64 *, 0x30) = (s64) (M2C_FIELD(arg0, s64 *, 0x30) & ((0xBFFFFFFF * 8) | 7) & ((0xBFFFFFFF * 0x10) | 0xF) & ((0xBFFFFFFF * 4) | 3) & ((0xBFFFFFFF << 5) | 0x1F));
    func_003F94D0(arg0 + 0x10, 0, 4);
    var_5 = 0;
    do {
        *((M2C_FIELD(arg0, s16 *, 0x16) * 6) + var_5 + (M2C_FIELD(arg0, s16 *, 0x14) * 6) + &D_0049AE40) = 0;
        temp_3 = (M2C_FIELD(arg0, s16 *, 0x16) * 6) + var_5 + (M2C_FIELD(arg0, s16 *, 0x14) * 6);
        var_5 += 1;
        *(temp_3 + &D_0049AE80) = 0xFF;
    } while (var_5 < 6);
}
