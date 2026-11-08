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

M2C_UNK func_003E16D0(void *, M2C_UNK *, s32);      /* extern */
M2C_UNK func_003E1708(void *, M2C_UNK *, s32);      /* extern */
s32 func_003E4128(void *);                          /* extern */
s32 func_003E5240(void *, M2C_UNK);                 /* extern */
M2C_UNK func_003E5348(void *, M2C_UNK);             /* extern */
M2C_UNK func_003E5588();                            /* extern */
s32 func_003E5608(void *);                          /* extern */
extern M2C_UNK D_00489CE8;
extern M2C_UNK D_00489D10;

s32 func_003E4340(void *arg0, s32 *arg2, s32 *arg3, void *arg4) {
    register int temp_19;
    register s32 temp_2;
    register int temp_2_2;

    M2C_FIELD(arg0, s32 *, 0x11C) = 0;
    func_003E5588();
    temp_2 = func_003E5240(arg0, 0x20);
    if ((u32) (temp_2 - 0x101) >= 0xAFU) {
        func_003E16D0(arg0, &D_00489CE8, temp_2);
        return 2;
    }
    func_003E5348(arg0, 0x20);
    temp_19 = func_003E5608(arg0);
    temp_2_2 = func_003E4128(arg0);
    *arg3 = temp_2_2;
    if (M2C_FIELD(arg0, s32 *, 0x11C) != 0) {
        func_003E1708(arg0, &D_00489D10, temp_2_2);
        return 1;
    }
    *arg2 = (((((temp_19 << 7) + (temp_2 & 0xFF)) - 1) * M2C_FIELD(arg0, s32 *, 0x12C)) + temp_2_2) - 1;
    *arg3 = 1;
    M2C_FIELD(arg0, s32 *, 0x1B0) = 1;
    M2C_FIELD(arg4, s32 *, 8) = 0;
    M2C_FIELD(arg4, s32 *, 0x10) = 0;
    M2C_FIELD(arg4, s32 *, 0x14) = 0;
    M2C_FIELD(arg4, s32 *, 0) = 0;
    M2C_FIELD(arg4, s32 *, 4) = 0;
    M2C_FIELD(arg4, s32 *, 0x18) = 0;
    M2C_FIELD(arg4, s32 *, 0xC) = 0;
    M2C_FIELD(arg4, s32 *, 0x1C) = 0;
    return 0;
}
