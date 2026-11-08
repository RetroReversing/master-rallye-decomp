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

void *func_002CE9C0(M2C_UNK);                       /* extern */
M2C_UNK func_002CEDC8(s32, f32);                    /* extern */
extern f32 D_004297F0;

void func_002CEB78(f32 fparg0) {
    void *temp_2;

    temp_2 = func_002CE9C0(0);
    if (temp_2 != NULL) {
        func_002CEDC8(M2C_FIELD(temp_2, s32 *, 4), fparg0);
        D_004297F0 = fparg0;
    }
}
