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

M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern s32 D_00428C80;
extern s32 D_00428C84;
extern M2C_UNK D_00480470;

s32 func_002BC618(void) {
    s32 temp_2;
    s32 var_16;

    temp_2 = D_00428C80 - 1;
    var_16 = 0;
    D_00428C80 = temp_2;
    if (temp_2 >= 0) {
        var_16 = D_00428C84;
    } else {
        func_003F9698(&D_00480470);
    }
    return var_16;
}
