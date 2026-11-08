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

s32 D_002AD408(M2C_UNK);                            /* extern */
void *func_00205BF8(s32);                           /* extern */
s32 *func_0021E290(s32);                            /* extern */
M2C_UNK func_0021E540(s32 *, void *, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0021E740(s32 *, M2C_UNK);              /* extern */

s32 *func_0014ED90(void) {
    s32 *temp_16;
    s32 temp_6;
    void *temp_2;

    temp_16 = func_0021E290(D_002AD408(0x7C));
    temp_2 = func_00205BF8(D_002AD408(0x90));
    temp_6 = M2C_FIELD(temp_2, s32 *, 0x88) + 1;
    M2C_FIELD(temp_2, s64 *, 0x78) = (s64) ((M2C_FIELD(temp_2, s64 *, 0x78) & ~2 & ~1) | 1);
    M2C_FIELD(temp_2, s32 *, 0x64) = 2;
    M2C_FIELD(temp_2, s32 *, 0x88) = temp_6;
    func_0021E540(temp_16, temp_2, temp_6, 1, 2);
    func_0021E740(temp_16, 2);
    *temp_16 &= ~1;
    return temp_16;
}
