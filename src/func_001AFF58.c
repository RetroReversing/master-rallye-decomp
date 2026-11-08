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

M2C_UNK func_001B0060(void *, void *, s32, s32);    /* extern */
M2C_UNK func_0021E620(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0021E7E8(void *);                      /* extern */

void func_001AFF58(void *arg0) {
    s32 temp_6;
    void *temp_16;
    void *temp_3;
    void *temp_4;

    temp_4 = arg0 + 0x5C;
    temp_3 = M2C_FIELD(temp_4, void **, 4);
    if (M2C_FIELD(arg0, s32 *, 0x5C) != temp_3) {
        temp_16 = M2C_FIELD(temp_3, void **, -4);
        M2C_FIELD(temp_4, void **, 4) = (void *) (temp_3 - 4);
        func_0021E7E8(temp_16);
        func_0021E620(temp_16, 0, 0);
        func_0021E620(temp_16, 1, 0);
        temp_6 = M2C_FIELD(temp_16, s32 *, 0x50);
        func_001B0060(arg0, temp_16, temp_6 + 0x50, temp_6 + 0x30);
    }
}
