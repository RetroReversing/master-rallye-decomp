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

M2C_UNK func_003D8350(void *, s32);                 /* extern */
s32 func_003DE6B8(void *, s8 *, s32);               /* extern */
s32 *func_003F73E0(s32);                            /* extern */

s32 func_003DE908(void *arg0, s8 arg1) {
    s32 temp_3;
    s32 temp_5_2;
    s32 var_2;
    s8 *temp_2;
    s8 *temp_2_2;
    s8 *temp_2_3;
    s8 *temp_5;
    s8 *temp_5_3;
    s8 *temp_5_4;
    s8 *temp_6;
    s8 *temp_6_2;
    s8 *temp_6_3;
    s8 *var_4;

    temp_5_2 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_5_2 & 8) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_5_2 | 0x20);
        *func_003F73E0(temp_5_2) = 9;
        return -1;
    }
    if (!(temp_5_2 & 0x800)) {
        if (M2C_FIELD(arg0, s8 **, 0x10) == NULL) {
            func_003D8350(arg0, temp_5_2);
            temp_2 = M2C_FIELD(arg0, s8 **, 0x1C);
            M2C_FIELD(arg0, s8 **, 8) = temp_2;
            M2C_FIELD(arg0, s8 **, 0xC) = temp_2;
            M2C_FIELD(arg0, s8 **, 4) = temp_2;
        }
        var_4 = M2C_FIELD(arg0, s8 **, 4);
        temp_6_2 = M2C_FIELD(arg0, s8 **, 0x20);
        if (var_4 == temp_6_2) {
            temp_2_2 = M2C_FIELD(arg0, s8 **, 0x1C);
            M2C_FIELD(arg0, s8 **, 4) = temp_2_2;
            var_4 = temp_2_2;
            M2C_FIELD(arg0, s8 **, 8) = temp_2_2;
        }
        temp_2_3 = M2C_FIELD(arg0, s8 **, 8);
        M2C_FIELD(arg0, s8 **, 0x18) = temp_6_2;
        M2C_FIELD(arg0, s8 **, 0xC) = temp_2_3;
        M2C_FIELD(arg0, s8 **, 0x14) = var_4;
        M2C_FIELD(arg0, s8 **, 0x10) = var_4;
        M2C_FIELD(arg0, s8 **, 4) = temp_2_3;
        if (M2C_FIELD(arg0, s32 *, 0) & 0x202) {
            M2C_FIELD(arg0, s8 **, 0x18) = var_4;
        }
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x800);
    }
    temp_6 = M2C_FIELD(arg0, s8 **, 0x14);
    if (arg1 == -1) {
        temp_5 = M2C_FIELD(arg0, s8 **, 0x10);
        return func_003DE6B8(arg0, temp_5, temp_6 - temp_5);
    }
    if (temp_6 == M2C_FIELD(arg0, s8 **, 0x20)) {
        temp_5_3 = M2C_FIELD(arg0, s8 **, 0x10);
        var_2 = -1;
        if (func_003DE6B8(arg0, temp_5_3, temp_6 - temp_5_3) != -1) {
            goto block_15;
        }
    } else {
block_15:
        *M2C_FIELD(arg0, s8 **, 0x14) = arg1;
        temp_6_3 = M2C_FIELD(arg0, s8 **, 0x14) + 1;
        temp_3 = M2C_FIELD(arg0, s32 *, 0);
        M2C_FIELD(arg0, s8 **, 0x14) = temp_6_3;
        if (!(temp_3 & 2)) {
            if (temp_3 & 0x200) {
                var_2 = arg1 & 0xFF;
                if (arg1 == 0xA) {
                    goto block_18;
                }
            } else {
                goto block_19;
            }
        } else {
block_18:
            temp_5_4 = M2C_FIELD(arg0, s8 **, 0x10);
            var_2 = -1;
            if (func_003DE6B8(arg0, temp_5_4, temp_6_3 - temp_5_4) != -1) {
block_19:
                var_2 = arg1 & 0xFF;
            }
        }
    }
    return var_2;
}
