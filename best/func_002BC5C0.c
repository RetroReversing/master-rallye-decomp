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

s32 func_002C0CD0(s32, s32, s32, s32, M2C_UNK);     /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern M2C_UNK D_00480448;

s32 func_002BC5C0(s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_16;

    var_16 = 0;
    if (func_002C0CD0(arg1, arg2, arg3, arg4, 0) != 0) {
        func_003F9698(&D_00480448);
    } else {
        var_16 = 1;
    }
    return var_16;
}
