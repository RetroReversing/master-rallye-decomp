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

M2C_UNK func_003D13B0(M2C_UNK *);                   /* extern */
s32 func_003F9288(void *, s32, u32);                /* extern */
extern M2C_UNK D_00488D20;

s32 func_003CEA50(void **arg0, s32 arg1, u32 arg2, u32 arg3) {
    s32 var_2;
    u32 temp_6;

    if ((u32) M2C_FIELD(*arg0, u32 *, -0x10) < arg2) {
        func_003D13B0(&D_00488D20);
    }
    temp_6 = M2C_FIELD(*arg0, s32 *, -0x10) - arg2;
    var_2 = func_003F9288(*arg0 + arg2, arg1, (arg3 < temp_6) ? arg3 : temp_6);
    if (var_2 == 0) {
        var_2 = (M2C_FIELD(*arg0, u32 *, -0x10) - arg2) - arg3;
    }
    return var_2;
}
