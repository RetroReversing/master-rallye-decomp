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

M2C_UNK func_001E3D10(s32, void *, s32);            /* extern */
void *func_0021E9C0(s32, s32);                      /* extern */
s32 func_0021F4B0();                                /* extern */

void func_00114160(void *arg0, s32 arg1) {
    s32 temp_6;
    void *temp_2;
    void *temp_3;
    void *temp_4;

    temp_2 = func_0021E9C0(func_0021F4B0(), arg0 + 0x60);
    if (temp_2 != NULL) {
        temp_6 = arg1 & 1;
        temp_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), void **, 0x4C);
        M2C_FIELD(temp_3, s64 *, 0x78) = (s64) ((M2C_FIELD(temp_3, s64 *, 0x78) & ~1) | temp_6);
        temp_4 = M2C_FIELD(temp_2, void **, 0x4C);
        M2C_FIELD(temp_4, s64 *, 0x78) = (s64) ((M2C_FIELD(temp_4, s64 *, 0x78) & ~1) | temp_6);
        func_001E3D10(func_001E4280(), arg0 + 0x5C, arg1);
        M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    }
}
