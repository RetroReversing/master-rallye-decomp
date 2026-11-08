/* machine draft (m2c), tried by autopilot */
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

u32 func_003952D8(s32);                             /* extern */
s32 func_00395328(u32, u32);                        /* extern */
void *func_003A3268(s32);                           /* extern */

s32 func_00395380(s32 arg0, s32 arg1) {
    s32 var_19;
    u32 temp_17;

    temp_17 = arg1 + 1;
    M2C_FIELD(func_003A3268(arg0), s32 *, 0xC) = 0;
    var_19 = 0;
    if (((u32) M2C_FIELD(func_003A3268(arg0), u32 *, 8) < 2U) && (func_003952D8(arg0) >= temp_17) && (func_00395328(temp_17, func_003952D8(arg0)) == 0)) {

    } else {
        var_19 = 1;
    }
    return var_19;
}
