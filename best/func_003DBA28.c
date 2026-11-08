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

void *func_003DB190(s32, s32);                      /* extern */
s32 func_003DB9C0(void *, void *);                  /* extern */

void *func_003DBA28(s32 arg0, void *arg1, void *arg2) {
    s16 temp_3;
    s16 temp_3_2;
    s16 temp_5_2;
    s16 temp_5_3;
    s16 var_16;
    s32 *var_7_2;
    s32 temp_2;
    s32 var_10;
    s32 var_9;
    u32 *var_6;
    u32 *var_8;
    u32 temp_2_3;
    u32 temp_2_4;
    u32 temp_5;
    void *temp_11;
    void *temp_12;
    void *temp_2_2;
    void *var_17;
    void *var_18;
    void *var_19;
    void *var_7;

    var_18 = arg2;
    var_17 = arg1;
    temp_2 = func_003DB9C0(var_17, var_18);
    if (temp_2 == 0) {
        var_19 = func_003DB190(arg0, 0);
        M2C_FIELD(var_19, s32 *, 0x14) = 0;
        M2C_FIELD(var_19, s32 *, 0x10) = 1;
    } else {
        var_16 = 0;
        if (temp_2 < 0) {
            temp_2_2 = var_17;
            var_16 = 1;
            var_17 = var_18;
            var_18 = temp_2_2;
        }
        var_10 = M2C_FIELD(var_17, s32 *, 0x10);
        var_19 = func_003DB190(arg0, M2C_FIELD(var_17, s32 *, 4));
        var_8 = var_17 + 0x14;
        var_6 = var_18 + 0x14;
        M2C_FIELD(var_19, s16 *, 0xE) = var_16;
        temp_11 = var_8 + (var_10 * 4);
        temp_12 = var_6 + (M2C_FIELD(var_18, s32 *, 0x10) * 4);
        var_7 = var_19 + 0x14;
        var_9 = 0;
        do {
            temp_5 = *var_8;
            temp_2_3 = *var_6;
            var_8 += 4;
            var_6 += 4;
            temp_3 = ((temp_5 & 0xFFFF) - (temp_2_3 & 0xFFFF)) + var_9;
            M2C_FIELD(var_7, s16 *, 0) = temp_3;
            temp_5_2 = ((temp_5 >> 0x10) - (temp_2_3 >> 0x10)) + (temp_3 >> 0x10);
            M2C_FIELD(var_7, s16 *, 2) = temp_5_2;
            var_9 = temp_5_2 >> 0x10;
            var_7 += 4;
        } while ((u32) var_6 < (u32) temp_12);
        if ((u32) var_8 < (u32) temp_11) {
            do {
                temp_2_4 = *var_8;
                var_8 += 4;
                temp_3_2 = (temp_2_4 & 0xFFFF) + var_9;
                M2C_FIELD(var_7, s16 *, 0) = temp_3_2;
                temp_5_3 = (temp_2_4 >> 0x10) + (temp_3_2 >> 0x10);
                M2C_FIELD(var_7, s16 *, 2) = temp_5_3;
                var_9 = temp_5_3 >> 0x10;
                var_7 += 4;
            } while ((u32) var_8 < (u32) temp_11);
        }
        var_7_2 = var_7 - 4;
        if (*var_7_2 == 0) {
            do {
                var_7_2 -= 4;
                var_10 -= 1;
            } while (*var_7_2 == 0);
        }
        M2C_FIELD(var_19, s32 *, 0x10) = var_10;
    }
    return var_19;
}
