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

s32 func_003CAB70(s16, s16, void *);                /* extern */
M2C_UNK func_003F94D0(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK D_0049AE40;
extern M2C_UNK D_0049AE80;

s32 func_002C77A0(void *arg0) {
    s16 temp_4;
    s16 temp_5;

    func_003F94D0((M2C_FIELD(arg0, s16 *, 0x14) * 6) + ((M2C_FIELD(arg0, s16 *, 0x16) * 6) + &D_0049AE40), 0, 6);
    func_003F94D0((M2C_FIELD(arg0, s16 *, 0x14) * 6) + ((M2C_FIELD(arg0, s16 *, 0x16) * 6) + &D_0049AE80), 0xFF, 6);
    *(((M2C_FIELD(arg0, s16 *, 0x16) + M2C_FIELD(arg0, s16 *, 0x14)) * 6) + &D_0049AE80) = 0;
    M2C_FIELD((((M2C_FIELD(arg0, s16 *, 0x16) + M2C_FIELD(arg0, s16 *, 0x14)) * 6) + &D_0049AE80), s8 *, 1) = 1;
    temp_5 = M2C_FIELD(arg0, s16 *, 0x16);
    temp_4 = M2C_FIELD(arg0, s16 *, 0x14);
    return func_003CAB70(temp_4, temp_5, (temp_4 * 6) + ((temp_5 * 6) + &D_0049AE80)) != 0;
}
