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

M2C_UNK func_003D7D68(void *);                      /* extern */
s32 func_003D9FC8(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_004035A0(s32, s32, s32, s32);              /* extern */

void *func_003DA998(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_2;
    s32 var_16;
    s32 var_18;
    s32 var_2_2;
    s32 var_4;
    s32 var_5;
    void *var_2;

    if (M2C_FIELD(arg0, s32 *, 0x38) < 0) {
        var_16 = (arg2 & 8) ? (arg2 | 2) : arg2;
        if ((var_16 & 3) == 3) {
            var_4 = 2;
            var_18 = 0;
        } else {
            var_4 = 1;
            if (var_16 & 2) {
                var_18 = 4;
            } else {
                var_4 = 0;
                if (var_16 & 1) {
                    var_18 = 8;
                } else {
                    var_18 = 0xC;
                }
            }
        }
        if (var_16 & 0x80) {
            var_16 &= ~0x80;
        }
        if ((var_16 & 0x10) || (var_2_2 = var_16 & 8, (var_16 == 2))) {
            var_4 |= 0x400;
            var_2_2 = var_16 & 8;
        }
        if (var_2_2 != 0) {
            var_4 |= 8;
            var_18 |= 0x1000;
        }
        var_5 = var_4 | 0x800;
        if (!(var_16 & 0x20)) {
            var_4 = ((var_16 ^ 1) != 0) ? (var_4 | 0x200) : var_4;
            var_5 = var_4 | 0x800;
        }
        temp_2 = func_004035A0(arg1, !(var_16 & 0x40) ? var_4 : var_5, arg3, arg1);
        var_2 = NULL;
        if (temp_2 >= 0) {
            M2C_FIELD(arg0, s32 *, 0x38) = temp_2;
            M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~0x100C) | (var_18 & 0x100C));
            if ((var_16 & 0xC) && (func_003D9FC8(arg0, 0, 2, 3) == -1)) {
                goto block_20;
            }
            func_003D7D68(arg0);
            var_2 = arg0;
            /* Duplicate return node #22. Try simplifying control flow for better match */
            return var_2;
        }
        return var_2;
    }
block_20:
    return NULL;
}
