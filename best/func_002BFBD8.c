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

s32 func_002BFD98(s32);                             /* extern */
M2C_UNK func_003F9698(M2C_UNK *, u32, u32, s32);    /* extern */
s32 func_003FA580(s32, s32);                        /* extern */
extern M2C_UNK D_00480F50;

void *func_002BFBD8(void *arg0, s32 arg1) {
    u32 temp_5;
    u32 temp_6;
    void *temp_7;
    void *var_16;
    void *var_18;
    void *var_2;

    temp_7 = M2C_FIELD(arg0, void **, 0x18);
    temp_6 = (((s64) M2C_FIELD(temp_7, u8 *, 1) << 8) | M2C_FIELD(temp_7, u8 *, 0)) & 0xFFFF;
    temp_5 = func_002BFD98(arg1) & (temp_6 - 1);
    var_18 = NULL;
    if (temp_5 < temp_6) {
        var_16 = M2C_UNALIGNED32(M2C_FIELD((temp_7 + (temp_5 * 4)), M2C_UNK *, 4));
loop_3:
        var_2 = NULL;
        if (var_16 != NULL) {
            if (func_003FA580(arg1, var_16 + 0x18) == 0) {
                var_18 = var_16;
                goto block_7;
            }
            var_16 = M2C_UNALIGNED32(M2C_FIELD(var_16, M2C_UNK *, 0x10));
            goto loop_3;
        }
    } else {
        func_003F9698(&D_00480F50, temp_5, temp_6, arg1);
block_7:
        var_2 = var_18;
    }
    return var_2;
}
