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

s32 func_004042B0(s32, s32);                        /* extern */
s32 func_004044D0(s32);                             /* extern */
extern s32 D_00440960;

s32 func_004034A8(s32 arg0, s32 arg1, s32 arg2) {
    if ((u32) (arg0 - 1) < 2U) {
        if (D_00440960 == 0) {
            if (func_004044D0(arg1) != 0) {
                D_00440960 = 1;
                goto block_4;
            }
            goto block_5;
        }
block_4:
        return func_004042B0(arg1, arg2);
    }
block_5:
    return -1;
}
