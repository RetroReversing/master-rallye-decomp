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

void func_0023C668(void *arg1) {
    s32 temp_3;
    s32 temp_5;
    s32 temp_6;
    s32 temp_7;
    s32 var_3;
    s32 var_3_2;
    s32 var_4;
    void *temp_2;

    temp_7 = M2C_FIELD(arg1, s32 *, 0);
    temp_6 = (s32) ((M2C_FIELD(arg1, s32 *, 4) - temp_7) * 0xAAAAAAAB) >> 2;
    var_4 = 0;
    if (temp_6 > 0) {
        var_3 = 0 * 0xC;
        do {
            temp_5 = var_4 + 1;
            temp_2 = var_3 + temp_7;
            temp_3 = (s32) (M2C_FIELD(temp_2, s32 *, 4) - M2C_FIELD(temp_2, s32 *, 0)) >> 2;
            var_4 = temp_5;
            if (temp_3 > 0) {
                var_3_2 = temp_3 - 1;
loop_4:
                if (var_3_2 != 0) {
                    var_3_2 -= 1;
                    goto loop_4;
                }
                var_4 = temp_5;
            }
            var_3 = var_4 * 0xC;
        } while (var_4 < temp_6);
    }
}
