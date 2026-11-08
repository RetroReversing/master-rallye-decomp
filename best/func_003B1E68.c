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

M2C_UNK func_003B3560(u32);                         /* extern */

void func_003B1E68(u32 arg0, u32 arg1, s32 arg2) {
    u32 var_18;

    var_18 = arg0;
loop_1:
    if (var_18 < arg1) {
        func_003B3560(var_18);
        var_18 += 8;
        goto loop_1;
    }
}
