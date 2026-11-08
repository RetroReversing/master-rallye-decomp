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

s32 func_002CDD48(s32, s32);                        /* extern */

s32 func_002D1460(void *arg0) {
    s32 temp_3;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_5;
    s32 temp_5_2;
    s32 var_16;
    s32 var_17;
    s32 var_4;

    var_4 = -1;
    var_17 = 0x16;
    temp_3 = M2C_FIELD(arg0, s32 *, 0xC);
    var_16 = 0x18;
    if (temp_3 & 0x28) {
        if (temp_3 & 8) {
            var_16 = 0x16;
        } else if (temp_3 & 0x20) {
            var_17 = 2;
            var_16 = 5;
        }
        temp_4 = M2C_FIELD(arg0, s32 *, 0);
        temp_5 = M2C_FIELD(arg0, s32 *, 4);
        var_17 = (var_17 < temp_4) ? temp_4 : var_17;
        var_16 = (temp_5 < var_16) ? temp_5 : var_16;
        var_4 = func_002CDD48(var_17, var_16);
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) & 0x200) {
        var_17 = 0x1A;
        var_16 = 0x2F;
    }
    if (var_4 == -1) {
        if (M2C_FIELD(arg0, s32 *, 0xC) & 0x18) {
            var_17 = 0x17;
            var_16 = 0x18;
        } else if (M2C_FIELD(arg0, s32 *, 0xC) & 0x60) {
            var_17 = 0x1A;
            var_16 = 0x2F;
        }
        temp_5_2 = M2C_FIELD(arg0, s32 *, 4);
        temp_4_2 = M2C_FIELD(arg0, s32 *, 0);
        var_4 = func_002CDD48((var_17 >= temp_4_2) ? var_17 : temp_4_2, (temp_5_2 >= var_16) ? var_16 : temp_5_2);
    }
    return var_4;
}
