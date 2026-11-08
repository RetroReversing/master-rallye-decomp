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

M2C_UNK func_002B2028(M2C_UNK *, s32);              /* extern */

void func_002B82E8(void *arg0, M2C_UNK *arg1) {
    s32 *var_3;
    s32 var_6;

    var_6 = 0;
    if (arg1 != M2C_FIELD(arg0, s32 *, 4)) {
        var_3 = arg0 + 4;
loop_2:
        var_6 += 1;
        var_3 += 4;
        if (var_6 < 4) {
            if (arg1 == *var_3) {
                goto block_4;
            }
            goto loop_2;
        }
        goto block_7;
    }
block_4:
    if (var_6 < 4) {
        *arg1 = M2C_FIELD(arg0, M2C_UNK **, 0);
        M2C_FIELD(arg0, M2C_UNK **, 0) = arg1;
        return;
    }
block_7:
    func_002B2028(arg1, var_6);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) - 1);
}
