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

void func_001DCBE0(void *arg0) {
    s32 *var_5;
    s32 *var_7_2;
    s32 temp_11;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_4;
    s32 var_7;
    s32 var_8;
    u32 temp_2;

    var_7 = 0;
    temp_2 = M2C_FIELD(arg0, u32 *, 0x10);
    temp_11 = (s32) (temp_2 + (temp_2 >> 0x1F)) >> 1;
    if (temp_11 > 0) {
        do {
            temp_4 = M2C_FIELD(arg0, s32 *, 0xC);
            var_8 = 0;
            temp_2_2 = var_7 * temp_4 * 4;
            var_7_2 = M2C_FIELD(arg0, s32 *, 8) + temp_2_2;
            var_5 = (M2C_FIELD(arg0, s32 *, 8) + ((temp_2 - 1) * M2C_FIELD(arg0, s32 *, 0xC) * 4)) - temp_2_2;
            if (temp_4 > 0) {
                do {
                    var_8 += 1;
                    temp_2_3 = *var_7_2;
                    *var_7_2 = *var_5;
                    *var_5 = temp_2_3;
                    var_7_2 += 4;
                    var_5 += 4;
                } while (var_8 < M2C_FIELD(arg0, s32 *, 0xC));
            }
            var_7 += 1;
        } while (var_7 < temp_11);
    }
}
