/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

M2C_UNK func_002C1528(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0030F310();                            /* extern */
s32 func_003C7B00(M2C_UNK);                         /* extern */
extern s32 D_0042DA18;
extern u16 D_0042DA1C;
extern s32 D_0042DADC;

void func_0030F290(void) {
    if (D_0042DA1C == 0) {
        func_003C7B00(0);
        D_0042DA18 = (func_003C7B00(0) + 1) & 1;
        D_0042DA1C = 1;
        func_002C1528(D_0042DADC, 0, 1, 1);
        func_0030F310();
    }
}
