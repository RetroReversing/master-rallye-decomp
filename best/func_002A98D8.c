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

void func_002A98D8(void *arg0, f32 fparg0, f32 fparg1) {
    f32 sp0;
    f32 sp4;
    M2C_UNK32 sp8;
    void *temp_4;

    M2C_FIELD(arg0, f32 *, 0xC) = fparg0;
    sp8 = 0;
    temp_4 = arg0 + 0xC;
    sp0 = fparg0;
    sp4 = fparg1;
    M2C_FIELD(temp_4, f32 *, 4) = fparg1;
    M2C_FIELD(temp_4, M2C_UNK32 *, 8) = sp8;
}
