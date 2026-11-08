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

s32 func_00194E30(s32 arg1, u32 arg2, s32 arg3) {
    s32 var_8;

    var_8 = -1;
    switch (arg2) {
    case 0:
        if (arg1 != 1) {
            if (arg1 < 2) {
                if (arg1 != 0) {
                    return -1;
                }
                var_8 = arg3 + 1;
                goto block_48;
            }
            if (arg1 != 2) {
                return -1;
            }
            var_8 = arg3 + 0x29;
            goto block_48;
        }
        var_8 = arg3 + 0x15;
    default:
block_48:
        return var_8;
    case 1:
        if (arg1 != 1) {
            if (arg1 < 2) {
                if (arg1 != 0) {
                    return -1;
                }
                var_8 = arg3 + 5;
                goto block_48;
            }
            if (arg1 != 2) {
                return -1;
            }
            var_8 = arg3 + 0x2D;
            goto block_48;
        }
        var_8 = arg3 + 0x19;
        goto block_48;
    case 2:
        if (arg1 != 1) {
            if (arg1 < 2) {
                if (arg1 != 0) {
                    return -1;
                }
                var_8 = arg3 + 9;
                goto block_48;
            }
            if (arg1 != 2) {
                return -1;
            }
            var_8 = arg3 + 0x31;
            goto block_48;
        }
        var_8 = arg3 + 0x1D;
        goto block_48;
    case 3:
        if (arg1 != 1) {
            if (arg1 < 2) {
                if (arg1 != 0) {
                    return -1;
                }
                var_8 = arg3 + 0xD;
                goto block_48;
            }
            if (arg1 != 2) {
                return -1;
            }
            var_8 = arg3 + 0x35;
            goto block_48;
        }
        var_8 = arg3 + 0x21;
        goto block_48;
    case 4:
        if (arg1 != 1) {
            if (arg1 < 2) {
                if (arg1 != 0) {
                    return -1;
                }
                var_8 = arg3 + 0x11;
                goto block_48;
            }
            if (arg1 != 2) {
                return -1;
            }
            var_8 = arg3 + 0x39;
            goto block_48;
        }
        var_8 = arg3 + 0x25;
        goto block_48;
    case 5:
        var_8 = arg3 + 0x6A;
        goto block_48;
    }
}
