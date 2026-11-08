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

s32 func_002AE6B8(u64, s32);                        /* extern */
u32 func_0040CF38(u64, s32);                        /* extern */
s64 func_0040D508(u64, s32);                        /* extern */
extern M2C_UNK D_0048BD29;

u64 func_003FB080(s32 *arg0, s8 *arg1, s8 **arg2, s32 arg3) {
    s32 *sp0;
    s8 *sp4;
    s8 **sp8;
    s32 var_17_2;
    s32 var_19;
    s32 var_21;
    s32 var_30;
    s64 temp_22;
    s8 *var_18;
    s8 temp_3;
    s8 var_17;
    u32 temp_20_2;
    u64 temp_20;
    u64 var_4;
    u64 var_4_2;
    u8 temp_5;

    sp4 = arg1;
    var_30 = 0;
    var_19 = arg3;
    sp0 = arg0;
    sp8 = arg2;
    var_18 = sp4;
    do {
        var_17 = *var_18;
        var_18 += 1;
    } while (*(var_17 + &D_0048BD29) & 8);
    if (var_17 == 0x2D) {
        var_17 = *var_18;
        var_30 = 1;
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
    if (var_19 == 0) {
        var_19 = ((var_17 ^ 0x30) == 0) ? 8 : 0xA;
    }
    temp_20 = (var_30 != 0) ? (0x8000 << 0x30) : (-1U >> 1);
    temp_22 = (s64) (func_0040D508(temp_20, var_19) << 0x20) >> 0x20;
    var_21 = 0;
    temp_20_2 = func_0040CF38(temp_20, var_19);
    var_4_2 = 0;
loop_26:
    temp_5 = *(var_17 + &D_0048BD29);
    if (temp_5 & 4) {
        var_17_2 = var_17 - 0x30;
        goto block_16;
    }
    if (temp_5 & 3) {
        var_17_2 = !(temp_5 & 1) ? (var_17 - 0x57) : (var_17 - 0x37);
block_16:
        if (var_17_2 < var_19) {
            if (var_21 >= 0) {
                if (temp_20_2 < var_4_2) {
                    var_21 = -1;
                } else {
                    if ((var_4_2 == temp_20_2) && (temp_22 < var_17_2)) {
                        goto block_23;
                    }
                    var_21 = 1;
                    var_4_2 = var_17_2 + func_002AE6B8(var_4_2, var_19);
                }
            } else {
block_23:
                var_21 = -1;
            }
            var_17 = *var_18;
            var_18 += 1;
            goto loop_26;
        }
    }
    if (var_21 < 0) {
        var_4 = (var_30 != 0) ? (0x8000 << 0x30) : (-1U >> 1);
        *sp0 = 0x22;
    } else {
        var_4 = (var_30 != 0) ? (0 - var_4_2) : var_4_2;
    }
    if (sp8 != NULL) {
        *sp8 = (var_21 == 0) ? sp4 : (var_18 - 1);
    }
    return var_4;
}
