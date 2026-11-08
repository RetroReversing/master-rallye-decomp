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

s32 func_002B17D8(u32, u32);                        /* extern */
s32 func_003EF2A8(u32, u32);                        /* extern */
extern u32 D_0043BFF8;
extern u32 D_0043BFFC;

s32 func_002B2078(u32 arg0, u32 arg1) {
    s32 var_4;

    var_4 = 0;
    if (arg0 != 0) {
        if (arg0 >= (u32) D_0043BFF8) {
            if (arg0 >= (u32) D_0043BFFC) {

            } else {
                goto block_5;
            }
        }
    } else if (arg1 > 0x7FFFU) {
block_5:
        var_4 = func_003EF2A8(arg0, arg1);
    }
    if (var_4 == 0) {
        var_4 = func_002B17D8(arg0, arg1);
    }
    return var_4;
}
