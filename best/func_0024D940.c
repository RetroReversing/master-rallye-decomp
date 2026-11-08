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

M2C_UNK func_00233CA8(s32);                         /* extern */
M2C_UNK func_0023F7D8(s32);                         /* extern */
s32 func_0024DB48(void *, s32, s32, s32, s32, s32); /* extern */
s32 func_0024E2C8(void *, s32, s32, s32, s32, void *, s32); /* extern */
M2C_UNK func_0024EAB8(void *, s32, s32, void *, void *, s32); /* extern */
M2C_UNK func_003F93CC(s32, s32, M2C_UNK);           /* extern */

s32 func_0024D940(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    void *spC;
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_18;
    s32 temp_18_2;
    s32 var_2;
    void *var_17;
    void *var_17_2;

    sp0 = arg1;
    sp4 = arg2;
    sp8 = 0;
    func_00233CA8(arg1);
    func_00233CA8(arg4);
    func_0023F7D8(sp4);
    func_0023F7D8(arg5);
    func_0023F7D8(arg3);
    func_0023F7D8(arg6);
    if (func_0024DB48(arg0, arg3, arg4, arg5, arg6, arg7) != 0) {
        var_2 = 1;
        if (arg7 != 0) {
            sp8 = 1;
            goto block_3;
        }
    } else {
block_3:
        var_17 = arg0 + 0x18;
        if (func_0024DB48(arg0, arg6, sp0, sp4, arg3, arg7) != 0) {
            var_2 = 1;
            if (arg7 != 0) {
                sp8 = 1;
                var_17 = arg0 + 0x18;
                goto block_6;
            }
        } else {
block_6:
            temp_18 = M2C_FIELD(arg0, s32 *, 0x18);
            spC = var_17;
            temp_16 = M2C_FIELD(var_17, s32 *, 4);
            func_003F93CC(temp_18, temp_16, 0);
            M2C_FIELD(var_17, s32 *, 4) = (s32) (M2C_FIELD(var_17, s32 *, 4) - (temp_16 - temp_18));
            var_17_2 = arg0 + 0x24;
            if (func_0024E2C8(arg0, arg3, arg4, arg5, arg6, var_17, arg7) != 0) {
                var_2 = 1;
                if (arg7 != 0) {
                    sp8 = 1;
                    var_17_2 = arg0 + 0x24;
                    goto block_9;
                }
            } else {
block_9:
                temp_18_2 = M2C_FIELD(arg0, s32 *, 0x24);
                temp_16_2 = M2C_FIELD(var_17_2, s32 *, 4);
                func_003F93CC(temp_18_2, temp_16_2, 0);
                M2C_FIELD(var_17_2, s32 *, 4) = (s32) (M2C_FIELD(var_17_2, s32 *, 4) - (temp_16_2 - temp_18_2));
                if (func_0024E2C8(arg0, arg6, sp0, sp4, arg3, var_17_2, arg7) != 0) {
                    var_2 = 1;
                    if (arg7 != 0) {
                        sp8 = 1;
                        goto block_12;
                    }
                } else {
block_12:
                    if (arg7 != 0) {
                        func_0024EAB8(arg0, arg3, arg6, spC, var_17_2, arg7);
                    }
                    var_2 = sp8;
                }
            }
        }
    }
    return var_2;
}
