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

f32 func_002AC7B0(void *arg0, s32 arg2) {
    s32 temp_2;
    s32 temp_3_2;
    s32 var_7;
    u32 temp_3;
    u32 var_5;
    u32 var_5_2;

    temp_3 = M2C_FIELD(arg0, u32 *, 0);
    var_7 = 0;
    var_5 = M2C_FIELD(arg0, u32 *, 0xC);
    if (temp_3 < 2U) {
        var_7 = 0xFF;
        var_5 |= 0x100000;
    } else if ((temp_3 ^ 4) != 0) {
        if ((temp_3 ^ 2) == 0) {
            var_5 = 0;
        } else if (var_5 != 0) {
            temp_3_2 = M2C_FIELD(arg0, s32 *, 8);
            if (temp_3_2 < -0x7E) {
                temp_2 = -0x7E - temp_3_2;
                var_5_2 = var_5 >> temp_2;
                if (temp_2 >= 0x1A) {
                    var_5_2 = 0;
                }
                goto block_17;
            }
            var_7 = temp_3_2 + 0x7F;
            if (temp_3_2 >= 0x80) {
                goto block_10;
            }
            if ((var_5 & 0x7F) != 0x40) {
                var_5_2 = var_5 + 0x3F;
            } else {
                var_5_2 = (var_5 & 0x80) ? (var_5 + 0x40) : var_5;
            }
            if ((s32) var_5_2 < 0) {
                var_5_2 = var_5_2 >> 1;
                var_7 += 1;
            }
block_17:
            var_5 = var_5_2 >> 7;
        }
    } else {
block_10:
        var_7 = 0xFF;
        var_5 = 0;
    }
    return M2C_BITWISE(f32, ((((((arg2 & 0xFF800000) | (var_5 & 0x7FFFFF)) & 0x807FFFFF) | ((var_7 & 0xFF) << 0x17)) & 0x7FFFFFFF) | (M2C_FIELD(arg0, s32 *, 4) << 0x1F)));
}
