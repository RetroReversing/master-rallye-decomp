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

s32 func_002C0558(s32);                             /* extern */
extern s32 D_00428DDC;

s32 func_002C06E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, s32 arg_sp8) {
    s32 var_4;

    D_00428DDC = 1;
    if (arg0 != 0) {
        var_4 = 0;
        if (((arg1 == -1) || (arg1 == 2)) && ((arg2 == -1) || (arg2 == 4)) && ((arg3 == -1) || (arg3 == 4)) && ((arg4 == -1) || (arg4 == 4)) && ((arg5 == -1) || (arg5 == 4)) && ((arg6 == -1) || (arg6 == 4)) && ((arg7 == -1) || (arg7 == 4)) && ((arg_sp0 == -1) || (arg_sp0 == 4)) && ((arg_sp8 == -1) || (arg_sp8 == 4))) {
            var_4 = 1;
        }
        if (var_4 != 0) {
            return func_002C0558(var_4);
        }
        /* Duplicate return node #23. Try simplifying control flow for better match */
        return -1;
    }
    return -1;
}
