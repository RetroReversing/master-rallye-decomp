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

extern M2C_UNK D_004294D8;

s32 func_002CDA18(void) {
    s16 *temp_2;
    s32 var_4;
    s32 var_7;

    var_7 = -1;
    var_4 = 0;
    if (M2C_FIELD(&D_004294D8, s32 *, 0) > 0) {
        if (*M2C_FIELD(&D_004294D8, s16 **, 4) != 0) {
            *M2C_FIELD(&D_004294D8, s16 **, 4) = 0;
            var_7 = 0;
        } else {
loop_4:
            var_4 += 1;
            if (var_4 < M2C_FIELD(&D_004294D8, s32 *, 0)) {
                temp_2 = (var_4 * 2) + M2C_FIELD(&D_004294D8, s16 **, 4);
                if (*temp_2 != 0) {
                    *temp_2 = 0;
                    var_7 = var_4;
                } else {
                    goto loop_4;
                }
            }
        }
    }
    return var_7;
}
