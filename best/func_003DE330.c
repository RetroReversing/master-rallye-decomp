/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

M2C_UNK func_003D7D08(void *);                      /* extern */
M2C_UNK func_003D82C8(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_003D8CE0(void *);                      /* extern */
s32 func_003DE6B8(void *, s32, s32);                /* extern */

s32 func_003DE330(void *arg0) {
    s32 temp_16;
    s32 temp_17;
    s32 temp_5;

    if (M2C_FIELD(arg0, s32 *, 0x38) >= 0) {
        temp_5 = M2C_FIELD(arg0, s32 *, 0x10);
        temp_17 = func_003DE6B8(arg0, temp_5, M2C_FIELD(arg0, s32 *, 0x14) - temp_5);
        func_003D8CE0(arg0);
        temp_16 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), s32 (**)(void *), 0x84)(arg0);
        func_003D82C8(arg0, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 0;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        func_003D7D08(arg0);
        M2C_FIELD(arg0, s64 *, 0x40) = -1;
        M2C_FIELD(arg0, s32 *, 0) = 0xFBAD240C;
        M2C_FIELD(arg0, s32 *, 0x38) = -1;
        return (temp_16 != 0) ? temp_16 : temp_17;
    }
    return -1;
}
