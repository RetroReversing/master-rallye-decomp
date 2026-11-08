/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

M2C_UNK func_003AA2E8(s32, s32);                    /* extern */

s32 func_0039FCD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    s32 var_19;
    s32 var_20;

    var_19 = arg1;
    var_20 = arg2;
    sp0 = (s32) ((var_19 - arg0) * 0xAAAAAAAB) >> 2;
loop_1:
    if (sp0 > 0) {
        var_20 -= 0xC;
        var_19 -= 0xC;
        func_003AA2E8(var_20, var_19);
        sp0 -= 1;
        goto loop_1;
    }
    return var_20;
}
