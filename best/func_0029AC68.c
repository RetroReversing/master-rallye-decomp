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

M2C_UNK func_001D4040(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0029ACF8(s32, s32);                    /* extern */
extern s32 D_0042684C;
extern M2C_UNK D_0047AD68;
extern M2C_UNK D_00494B40;

void func_0029AC68(s32 arg0, s32 arg1) {
    if (D_0042684C == 0) {
        func_001D4040(&D_00494B40, &D_0047AD68);
        D_0042684C = 1;
    }
    if (func_001E3650(func_001E4280(), (s32) &D_00494B40) <= 0) {
        func_0029ACF8(arg0, arg1);
    }
}
