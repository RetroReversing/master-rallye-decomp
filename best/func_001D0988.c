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

void ***func_001D6E40();                            /* extern */
s32 func_001E3598(s32, s32);                        /* extern */
M2C_UNK func_001E3D10(s32, s32, s32);               /* extern */
M2C_UNK func_002A1D10(s32, s32);                    /* extern */
s32 func_002A2458();                                /* extern */

void func_001D0988(s32 arg0) {
    s32 temp_16_2;
    s32 temp_16_3;
    s32 temp_17;
    s32 temp_18;
    s32 temp_2;
    void **temp_16;
    void *temp_3;
    void *temp_3_2;

    temp_16 = *func_001D6E40();
    temp_3 = *temp_16;
    if (M2C_FIELD(temp_3, s32 (**)(void *, M2C_UNK), 0x7C)(temp_16 + M2C_FIELD(temp_3, s16 *, 0x78), 0x70) == 0) {
        temp_3_2 = *temp_16;
        if (M2C_FIELD(temp_3_2, s32 (**)(void *, M2C_UNK), 0x7C)(temp_16 + M2C_FIELD(temp_3_2, s16 *, 0x78), 0x74) != 0) {
            temp_16_2 = func_002A2458();
            func_002A1D10(temp_16_2, func_002A2458());
        }
    } else {
        temp_17 = arg0 + 0xC;
        temp_2 = func_001E4280();
        temp_18 = arg0 + 0x10;
        func_001E3D10(temp_2, temp_17, func_001E3598(temp_2, temp_17) ^ 1);
        func_001E3D10(temp_2, temp_18, func_001E3598(temp_2, temp_18) ^ 1);
        temp_16_3 = func_002A2458();
        func_002A1D10(temp_16_3, func_002A2458());
    }
}
