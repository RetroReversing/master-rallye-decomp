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

s32 func_001E3598(s32, void *);                     /* extern */
M2C_UNK func_001E3D10(s32, void *, M2C_UNK);        /* extern */

void func_0029C110(void *arg0) {
    unsigned long temp_3;

    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + 1);
    temp_3 = func_001E3598(func_001E4280(), arg0 + 0x20);
    if ((M2C_FIELD(arg0, s32 *, 0x28) >= 0xF) || (temp_3 != 0)) {
        M2C_FIELD(arg0, s32 *, 0x10) = func_001E3650(func_001E4280(), (s32) (arg0 + 0x14));
        func_001E3D10(func_001E4280(), arg0 + 0x18, 1);
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
}
