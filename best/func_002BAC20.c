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

M2C_UNK func_002BAE10(void *, s64 *);               /* extern */

s32 func_002BAC20(void *arg0, s64 arg1) {
    s64 *var_16;
    s64 var_2_2;
    u16 var_2;
    void *temp_3;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_16 = M2C_FIELD(arg0, s64 **, 0xC);
    if (M2C_FIELD(var_16, s64 **, 0x14) == NULL) {
        goto block_13;
    }
    if (M2C_FIELD(var_16, s64 *, 0) == arg1) {
        goto block_3;
    }
    var_16 = M2C_FIELD(var_16, s64 **, 0x14);
    goto loop_5;
block_3:
    var_2 = M2C_FIELD(var_16, u16 *, 0xC);
    goto block_10;
loop_5:
    var_2_2 = M2C_FIELD(var_16, s64 *, 0);
    if (M2C_FIELD(var_16, s64 **, 0x14) == NULL) {
        goto block_14;
    }
    if (var_2_2 == arg1) {
        goto block_8;
    }
    var_16 = M2C_FIELD(var_16, s64 **, 0x14);
    goto loop_5;
block_8:
    var_2 = M2C_FIELD(var_16, u16 *, 0xC);
block_10:
    if ((s16) var_2 == 1) {
        goto block_12;
    }
    var_16 = M2C_FIELD(var_16, s64 **, 0x14);
    goto loop_5;
block_12:
block_13:
    var_2_2 = *var_16;
block_14:
    if (var_2_2 != arg1) {
        goto block_16;
    }
    if ((s16) M2C_FIELD(var_16, u16 *, 0xC) == 1) {
        goto block_19;
    }
block_16:
    if (M2C_FIELD(var_16, s32 *, 0x10) == 0) {
        goto block_18;
    }
block_18:
    M2C_FIELD(var_16, u16 *, 0xC) = 0U;
    M2C_FIELD(var_16, s32 *, 0x10) = 0;
    M2C_FIELD(var_16, s64 *, 0) = arg1;
    temp_3 = M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(temp_3, M2C_UNK (**)(void *, s64, s64 *), 0x14)(arg0 + M2C_FIELD(temp_3, s16 *, 0x10), arg1, var_16);
    func_002BAE10(arg0, var_16);
block_19:
    return 1;
}
