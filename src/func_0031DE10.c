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

extern s32 D_0042DB64;

void func_0031DE10(void *arg0) {
    void *temp_3;

    if (D_0042DB64 != -1) {
        temp_3 = *M2C_FIELD(arg0, s32 **, 0x10) + (D_0042DB64 << 6);
        M2C_FIELD(temp_3, s32 *, 0xC) = (s32) (M2C_FIELD(temp_3, s32 *, 0xC) | 0x8000);
    }
}
