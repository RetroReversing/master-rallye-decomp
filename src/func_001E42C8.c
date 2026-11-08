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

s32 func_001E3248(s32);                             /* extern */
M2C_UNK func_001E4338(s32, M2C_UNK);                /* extern */
extern s32 D_0042637C;

void func_001E42C8(void) {
    s32 temp_18;
    s32 temp_2;

    temp_2 = func_001E3248(D_0042637C);
    temp_18 = func_001E3248(temp_2);
    if (D_0042637C != 0) {
        func_001E4338(D_0042637C, 3);
    }
    if (temp_2 != 0) {
        func_001E4338(temp_2, 3);
    }
    D_0042637C = temp_18;
}
