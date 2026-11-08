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

s32 func_002AFF80();                                /* extern */

s32 func_002B0058(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 var_2;
    void *temp_10;
    void *temp_3;

    var_2 = arg3;
    if (func_002AFF80() == 0) {
        temp_10 = M2C_FIELD(arg0, void **, 8);
        temp_3 = M2C_FIELD(temp_10, void **, 4);
        var_2 = M2C_FIELD(temp_3, s32 (**)(void *, s32, s32, s32, s32, s32, void *), 0x14)(temp_10 + M2C_FIELD(temp_3, s16 *, 0x10), arg1, arg2, arg3, arg4, arg5, temp_10);
    }
    return var_2;
}
