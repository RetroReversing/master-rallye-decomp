/* machine draft (m2c), tried by autopilot */
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

void *func_003DB190(void *, s32, s32, s32, void *); /* extern */

void *func_003DB840(void *arg0, s32 arg1) {
    s32 temp_11;
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_3;
    s32 temp_4;
    s32 temp_6;
    s32 var_12;
    s32 var_17;
    s32 var_18;
    s32 var_2;
    s32 var_3;
    s32 var_7;
    u32 *var_6;
    u32 *var_6_2;
    u32 *var_7_2;
    u32 temp_2;
    u32 temp_4_2;
    u32 var_8;
    void *temp_9;
    void *var_10;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_10 = arg0;
    temp_6 = arg1 >> 5;
    temp_4 = M2C_FIELD(var_10, s32 *, 0x10);
    var_7 = M2C_FIELD(var_10, s32 *, 4);
    temp_16 = temp_6 + temp_4 + 1;
    if (arg1 == 0) {
        goto block_23;
    }
    var_3 = M2C_FIELD(var_10, s32 *, 8);
    if (var_3 >= temp_16) {
        goto block_5;
    }
    var_18 = temp_6 * 4;
    var_17 = arg1 & 0x1F;
loop_3:
    var_3 *= 2;
    var_7 += 1;
    if (var_3 < temp_16) {
        goto loop_3;
    }
    goto block_6;
block_5:
    var_18 = temp_6 * 4;
    var_17 = arg1 & 0x1F;
block_6:
    var_10 = func_003DB190(var_10, var_7, temp_6, var_7, var_10);
    temp_9 = var_10 + 0x14;
    var_6 = temp_9 + (temp_4 * 4);
    var_7_2 = var_6 + var_18;
    if (var_17 == 0) {
        goto block_13;
    }
    var_6_2 = var_6 - 4;
    var_8 = *var_6_2;
    temp_11 = 0x20 - var_17;
    temp_2 = var_8 >> temp_11;
    temp_16_2 = (temp_2 != 0) ? (temp_16 + 1) : temp_16;
    *var_7_2 = temp_2;
    if ((u32) temp_9 >= (u32) var_6_2) {
        goto block_11;
    }
    var_12 = temp_16_2 - 1;
loop_9:
    var_6_2 -= 4;
    temp_3 = var_8 << var_17;
    temp_4_2 = *var_6_2;
    var_7_2 -= 4;
    var_8 = temp_4_2;
    *var_7_2 = temp_3 | (temp_4_2 >> temp_11);
    if ((u32) temp_9 < (u32) var_6_2) {
        goto loop_9;
    }
    goto block_12;
block_11:
    var_12 = temp_16_2 - 1;
block_12:
    var_7_2 -= 4;
    *var_7_2 = var_8 << var_17;
    goto block_18;
block_13:
    var_12 = temp_16 - 1;
loop_14:
    var_6 -= 4;
    var_7_2 -= 4;
    *var_7_2 = *var_6;
    if ((u32) temp_9 < (u32) var_6) {
        goto loop_14;
    }
    var_2 = (u32) temp_9 < (u32) var_7_2;
    goto block_19;
block_17:
    *var_7_2 = 0;
block_18:
    var_2 = (u32) temp_9 < (u32) var_7_2;
block_19:
    if (var_2 == 0) {
        goto block_21;
    }
    var_7_2 -= 4;
    goto block_17;
block_21:
    M2C_FIELD(var_10, s32 *, 0x10) = var_12;
block_23:
    return var_10;
}
