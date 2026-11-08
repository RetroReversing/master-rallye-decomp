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

extern M2C_UNK D_00441FDC;

void func_002AD678(void) {
    M2C_UNK (**var_16)();
    M2C_UNK (*var_2)();
    s32 var_5;
    s64 temp_3;
    s64 var_17;

    var_5 = M2C_FIELD(&D_00441FDC, s32 *, 0);
    if (var_5 == -1) {
        var_5 = 0;
        if (M2C_FIELD(&D_00441FDC, s32 *, 4) != 0) {
            var_5 = 1;
loop_3:
            temp_3 = var_5 + 1;
            if (*((((s64) (temp_3 << 0x20) >> 0x20) * 4) + &D_00441FDC) != 0) {
                var_5 = (s32) temp_3;
                goto loop_3;
            }
        }
    }
    var_17 = (s64) ((s64) var_5 << 0x20) >> 0x20;
    if (var_17 != 0) {
        var_16 = (var_17 * 4) + &D_00441FDC;
        var_2 = *var_16;
loop_8:
        var_17 -= 1;
        var_16 -= 4;
        var_2();
        if (var_17 != 0) {
            var_2 = *var_16;
            goto loop_8;
        }
    }
}
