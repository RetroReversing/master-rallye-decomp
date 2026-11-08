/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

M2C_UNK func_002AFFE8(s32 *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_003D2788();                            /* extern */
extern M2C_UNK D_00488E70;
extern M2C_UNK D_004A9860;
extern s32 D_004A9870;

s32 *func_003D22B8(void) {
    if (D_004A9870 == 0) {
        func_003D2788();
        func_002AFFE8(&D_004A9870, &D_00488E70, &D_004A9860);
    }
    return &D_004A9870;
}
