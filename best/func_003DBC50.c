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

s32 func_003DB410(u32);                             /* extern */

s32 func_003DBC50(void *arg0, s32 *arg1) {
    s32 temp_2;
    s32 temp_6;
    s64 var_4;
    u32 *var_17;
    u32 temp_18;
    u32 temp_19;
    u32 var_18;
    u32 var_3;
    u32 var_7;
    u32 var_7_2;

    temp_19 = arg0 + 0x14;
    var_17 = (temp_19 + (M2C_FIELD(arg0, s32 *, 0x10) * 4)) - 4;
    temp_18 = M2C_FIELD(var_17, u32 *, 0);
    temp_2 = func_003DB410(temp_18);
    *arg1 = 0x20 - temp_2;
    if (temp_2 < 0xB) {
        var_4 = (temp_18 >> (0xB - temp_2)) | 0x3FF00000;
        var_7 = 0;
        if (temp_19 < (u32) var_17) {
            var_7 = M2C_FIELD(var_17, u32 *, -4);
        }
        var_3 = (temp_18 << (temp_2 + 0x15)) | (var_7 >> (0xB - temp_2));
    } else {
        var_7_2 = 0;
        if (temp_19 < (u32) var_17) {
            var_17 -= 4;
            var_7_2 = *var_17;
        }
        temp_6 = temp_2 - 0xB;
        if (temp_6 != 0) {
            var_4 = (temp_18 << temp_6) | ((var_7_2 >> -temp_6) | 0x3FF00000);
            var_18 = 0;
            if (temp_19 < (u32) var_17) {
                var_18 = M2C_FIELD(var_17, u32 *, -4);
            }
            var_3 = (var_7_2 << temp_6) | (var_18 >> -temp_6);
        } else {
            var_3 = var_7_2;
            var_4 = temp_18 | 0x3FF00000;
        }
    }
    return (var_4 << 0x20) | ((u64) ((s64) var_3 << 0x20) >> 0x20);
}
