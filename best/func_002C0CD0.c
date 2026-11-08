/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

s32 func_002C0CD0(u8 *arg0, s32 arg1, u8 *arg2, s32 *arg3) {
    s32 temp_5_2;
    s32 var_5;
    s32 var_8_3;
    u32 temp_10;
    u32 var_8;
    u8 *temp_5;
    u8 *var_4;
    u8 *var_4_2;
    u8 *var_5_4;
    u8 *var_9;
    u8 temp_2;
    u8 temp_2_2;
    u8 temp_2_3;
    u8 temp_2_4;
    u8 temp_2_5;
    u8 temp_3;
    u8 temp_3_2;
    u8 temp_3_3;
    u8 var_8_2;
    void *temp_4;
    void *temp_9;
    void *var_5_2;
    void *var_5_3;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_4 = arg0;
    *arg3 = 0;
    temp_10 = var_4 + arg1;
    var_9 = arg2;
    if ((u8) *var_4 < 0x12U) {
        goto block_6;
    }
    var_8 = *var_4 - 0x11;
    var_4 += 1;
    if (var_8 < 4U) {
        goto loop_41;
    }
loop_3:
    temp_2 = *var_4;
    var_8 -= 1;
    var_4 += 1;
    *var_9 = temp_2;
    var_9 += 1;
    if (var_8 != 0) {
        goto loop_3;
    }
    goto block_14;
block_6:
    var_8_2 = M2C_FIELD(var_4, u8 *, 0);
    var_4_2 = var_4 + 1;
    if (var_8_2 >= 0x10U) {
        goto block_17;
    }
    if (var_8_2 != 0) {
        goto block_12;
    }
    if (M2C_FIELD(var_4, u8 *, 1) != 0) {
        goto block_11;
    }
loop_10:
    var_4_2 += 1;
    var_8_2 += 0xFF;
    if (*var_4_2 == 0) {
        goto loop_10;
    }
block_11:
    temp_3 = *var_4_2;
    var_4_2 += 1;
    var_8_2 = var_8_2 + 0xF + temp_3;
block_12:
    temp_4 = var_4_2 + 1;
    M2C_FIELD(var_9, u8 *, 0) = M2C_FIELD(var_4_2, u8 *, 0);
    temp_9 = var_9 + 1;
    M2C_FIELD(var_9, u8 *, 1) = (u8) M2C_FIELD(var_4_2, u8 *, 1);
    var_4 = temp_4 + 1 + 1;
    M2C_FIELD(temp_9, u8 *, 1) = (u8) M2C_FIELD(temp_4, u8 *, 1);
    var_9 = temp_9 + 1 + 1;
loop_13:
    temp_2_2 = *var_4;
    var_8_2 -= 1;
    var_4 += 1;
    *var_9 = temp_2_2;
    var_9 += 1;
    if (var_8_2 != 0) {
        goto loop_13;
    }
block_14:
    var_8_2 = M2C_FIELD(var_4, u8 *, 0);
    var_4_2 = var_4 + 1;
    if (var_8_2 >= 0x10U) {
        goto block_17;
    }
    temp_2_3 = M2C_FIELD(var_4, u8 *, 1);
    var_4 = var_4_2 + 1;
    temp_5 = ((var_9 - 0x801) - (var_8_2 >> 2)) - (temp_2_3 * 4);
    var_5_2 = temp_5 + 1;
    *var_9 = *temp_5;
    var_9 += 1;
    goto block_36;
block_17:
    if (var_8_2 < 0x40U) {
        goto block_19;
    }
    var_5_3 = ((var_9 - 1) - ((var_8_2 >> 2) & 7)) - (*var_4_2 * 8);
    var_8_3 = (var_8_2 >> 5) - 1;
    var_4 = var_4_2 + 1;
    goto block_37;
block_19:
    if (var_8_2 < 0x20U) {
        goto block_25;
    }
    var_8_3 = var_8_2 & 0x1F;
    if (var_8_3 != 0) {
        goto block_24;
    }
    if (*var_4_2 != 0) {
        goto block_23;
    }
loop_22:
    var_4_2 += 1;
    var_8_3 += 0xFF;
    if (*var_4_2 == 0) {
        goto loop_22;
    }
block_23:
    temp_3_2 = *var_4_2;
    var_4_2 += 1;
    var_8_3 = var_8_3 + 0x1F + temp_3_2;
block_24:
    var_4 = var_4_2 + 2;
    var_5_3 = (var_9 - 1) - (((u8) M2C_FIELD(var_4_2, u8 *, 0) >> 2) + (M2C_FIELD(var_4_2, u8 *, 1) << 6));
    goto block_37;
block_25:
    if (var_8_2 >= 0x10U) {
        goto block_27;
    }
    goto block_35;
block_27:
    var_8_3 = var_8_2 & 7;
    if (var_8_3 != 0) {
        goto block_33;
    }
    if (*var_4_2 != 0) {
        goto block_32;
    }
loop_31:
    var_4_2 += 1;
    var_8_3 += 0xFF;
    if (*var_4_2 == 0) {
        goto loop_31;
    }
block_32:
    temp_3_3 = *var_4_2;
    var_4_2 += 1;
    var_8_3 = var_8_3 + 7 + temp_3_3;
block_33:
    temp_5_2 = (var_9 - ((var_8_2 & 8) << 0xB)) - (((u8) M2C_FIELD(var_4_2, u8 *, 0) >> 2) + (M2C_FIELD(var_4_2, u8 *, 1) << 6));
    var_4 = var_4_2 + 2;
    if (temp_5_2 == var_9) {
        goto block_43;
    }
    var_5_3 = temp_5_2 - 0x4000;
    goto block_37;
block_35:
    var_4 = var_4_2 + 1;
    var_5_2 = ((var_9 - 1) - (var_8_2 >> 2)) - (*var_4_2 * 4);
block_36:
    M2C_FIELD(var_9, u8 *, 0) = M2C_FIELD(var_5_2, u8 *, 0);
    M2C_FIELD(var_9, u8 *, 1) = (u8) M2C_FIELD(var_5_2, u8 *, 1);
    var_9 = var_9 + 1 + 1;
    goto block_39;
block_37:
    M2C_FIELD(var_9, u8 *, 0) = M2C_FIELD(var_5_3, u8 *, 0);
    var_5_4 = var_5_3 + 1 + 1;
    M2C_FIELD(var_9, u8 *, 1) = (u8) M2C_FIELD(var_5_3, u8 *, 1);
    var_9 = var_9 + 1 + 1;
loop_38:
    temp_2_4 = *var_5_4;
    var_8_3 -= 1;
    var_5_4 += 1;
    *var_9 = temp_2_4;
    var_9 += 1;
    if (var_8_3 != 0) {
        goto loop_38;
    }
block_39:
    var_8 = M2C_FIELD(var_4, u8 *, -2) & 3;
    if (var_8 == 0) {
        goto block_6;
    }
loop_41:
    temp_2_5 = *var_4;
    var_8 -= 1;
    var_4 += 1;
    *var_9 = temp_2_5;
    var_9 += 1;
    if (var_8 != 0) {
        goto loop_41;
    }
    var_8_2 = *var_4;
    var_4_2 = var_4 + 1;
    goto block_17;
block_43:
    *arg3 = var_9 - arg2;
    if (var_4 == temp_10) {
        goto block_45;
    }
    var_5 = ((u32) var_4 < temp_10) ? -8 : -4;
    goto block_46;
block_45:
    var_5 = 0;
block_46:
    return var_5;
}
