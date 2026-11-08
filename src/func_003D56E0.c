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

M2C_UNK func_002AFFC0(s32 *, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_003D5E48();                            /* extern */
M2C_UNK func_003D62E8();                            /* extern */
extern M2C_UNK D_00488FB8;
extern M2C_UNK D_00488FC8;
extern s32 D_004A98E0;

s32 *func_003D56E0(void) {
    if (D_004A98E0 == 0) {
        func_003D62E8();
        func_003D5E48();
        func_002AFFC0(&D_004A98E0, &D_00488FB8, &D_00488FC8, 2);
    }
    return &D_004A98E0;
}
