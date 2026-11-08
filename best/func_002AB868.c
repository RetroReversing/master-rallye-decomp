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

s32 *func_001C67A0(void *, s32, s32);               /* extern */

s32 func_002AB868(void *arg0) {
    s32 temp_6;
    s32 var_16;
    s32 var_18;
    s32 var_19;

    var_19 = 0;
    var_18 = 0;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 8) > 0) {
        var_16 = 0;
        do {
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0xC) > 0) {
                do {
                    temp_6 = var_16;
                    var_16 += 1;
                    var_18 = (*func_001C67A0(M2C_FIELD(arg0, void **, 8), var_19, temp_6) != 0) ? (var_18 + 1) : var_18;
                } while (var_16 < M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0xC));
            }
            var_19 += 1;
            var_16 = 0;
        } while (var_19 < M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 8));
    }
    return var_18;
}
