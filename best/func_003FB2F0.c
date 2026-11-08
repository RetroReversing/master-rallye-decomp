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

s32 func_002AE6B8(u32, s32);                        /* extern */
u32 func_0040CF38(M2C_UNK, s32);                    /* extern */
s64 func_0040D508(M2C_UNK, s32);                    /* extern */
extern M2C_UNK D_0048BD29;

u32 func_003FB2F0(s32 *arg0, s8 *arg1, s8 **arg2, s32 arg3) {
    s32 *sp0;
    s8 *sp4;
    s32 sp8;
    s32 var_16;
    s32 var_17_2;
    s32 var_19;
    s32 var_20;
    s64 temp_16;
    s8 *var_18;
    s8 temp_3;
    s8 var_17;
    u32 temp_21;
    u32 var_4;
    u32 var_4_2;
    u8 temp_5;

    sp4 = arg1;
    var_19 = arg3;
    sp0 = arg0;
    var_18 = sp4;
    sp8 = 0;
    do {
        var_17 = *var_18;
        var_18 += 1;
    } while (*(var_17 + &D_0048BD29) & 8);
    if (var_17 == 0x2D) {
        var_17 = *var_18;
        sp8 = 1;
        goto block_6;
    }
    if (var_17 == 0x2B) {
        var_17 = *var_18;
block_6:
        var_18 += 1;
    }
    if (((var_19 == 0) || (var_19 == 0x10)) && (var_17 == 0x30) && ((temp_3 = M2C_FIELD(var_18, s8 *, 0), (temp_3 == 0x78)) || (temp_3 == 0x58))) {
        var_17 = M2C_FIELD(var_18, s8 *, 1);
        var_19 = 0x10;
        var_18 += 2;
    }
    var_16 = var_19;
    if (var_19 == 0) {
        var_19 = ((var_17 ^ 0x30) == 0) ? 8 : 0xA;
        var_16 = var_19;
    }
    var_20 = 0;
    temp_21 = func_0040CF38(-1, var_16);
    temp_16 = (s64) (func_0040D508(-1, var_16) << 0x20) >> 0x20;
    var_4_2 = 0;
loop_27:
    temp_5 = *(var_17 + &D_0048BD29);
    if (temp_5 & 4) {
        var_17_2 = var_17 - 0x30;
        goto block_17;
    }
    if (temp_5 & 3) {
        var_17_2 = !(temp_5 & 1) ? (var_17 - 0x57) : (var_17 - 0x37);
block_17:
        if (var_17_2 < var_19) {
            if (var_20 >= 0) {
                if (temp_21 < var_4_2) {
                    var_20 = -1;
                } else {
                    if ((var_4_2 == temp_21) && (temp_16 < var_17_2)) {
                        goto block_24;
                    }
                    var_20 = 1;
                    var_4_2 = var_17_2 + func_002AE6B8(var_4_2, var_16);
                }
            } else {
block_24:
                var_20 = -1;
            }
            var_17 = *var_18;
            var_18 += 1;
            goto loop_27;
        }
    }
    if (var_20 < 0) {
        var_4 = -1U;
        *sp0 = 0x22;
    } else {
        var_4 = (sp8 != 0) ? (0 - var_4_2) : var_4_2;
    }
    if (arg2 != NULL) {
        *arg2 = (var_20 == 0) ? sp4 : (var_18 - 1);
    }
    return var_4;
}
