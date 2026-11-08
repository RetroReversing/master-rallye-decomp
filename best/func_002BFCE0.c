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

s32 func_003FA580(s32, M2C_UNK);                    /* extern */

s32 func_002BFCE0(void *arg0, s32 arg1) {
    s32 var_19;
    s32 var_2;
    u32 temp_18;
    u32 temp_4;
    u32 var_16;
    void *temp_3;

    temp_3 = M2C_FIELD(arg0, void **, 0x14);
    temp_4 = M2C_UNALIGNED32(M2C_FIELD(temp_3, M2C_UNK *, 4));
    var_19 = 0xFFFF;
    if (temp_4 != 0) {
        var_16 = temp_4;
        temp_18 = var_16 + (((((s64) M2C_FIELD(temp_3, u8 *, 3) << 8) | M2C_FIELD(temp_3, u8 *, 2)) & 0xFFFF) * 0x10);
loop_2:
        var_2 = 0xFFFF;
        if (var_16 < temp_18) {
            if (func_003FA580(arg1, M2C_UNALIGNED32(M2C_FIELD(var_16, M2C_UNK *, 0))) != 0) {
                var_16 += 0x10;
                goto loop_2;
            }
            var_19 = ((s32) (var_16 - M2C_UNALIGNED32(M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), M2C_UNK *, 4))) >> 4) & 0xFFFF;
            goto block_7;
        }
    } else {
block_7:
        var_2 = var_19;
    }
    return var_2;
}
