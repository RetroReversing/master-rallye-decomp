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

M2C_UNK func_00244788();                            /* extern */
s32 func_00244DE0(s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_00244F00(s32, s32, s32, s32, s32);         /* extern */

s32 func_00244CF8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_2;

    func_00244788();
    var_2 = 1;
    if (func_00244DE0(arg0, arg0 + 0x34, arg0 + 0x48, arg1, arg2, arg3, arg4) == 0) {
        if (func_00244DE0(arg0, arg0 + 0x54, arg0 + 0x68, arg1, arg2, arg3, arg4) != 0) {
            return 1;
        }
        var_2 = func_00244F00(arg0, arg1, arg2, arg3, arg4) != 0;
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_2;
    }
    return var_2;
}
