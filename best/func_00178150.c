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

s32 func_00178150(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f3;
    s32 var_2;
    s32 var_4;
    s32 var_5;
    void *temp_2;
    void *temp_3;
    void *temp_6;
    void *var_3;
    void *var_5_2;

    var_2 = 0;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x14) != 0) {
        temp_6 = M2C_FIELD(arg0, void **, 0x10);
        var_5 = 3;
        var_3 = temp_6;
        do {
            if (-M2C_FIELD(var_3, f32 *, 0x58) < M2C_FIELD(var_3, f32 *, 0xEC)) {
                var_2 += 1;
            }
            var_5 -= 1;
            var_3 += 0x190;
        } while (var_5 >= 0);
        if (var_2 >= 3) {
            var_f3 = 0.0f;
            if (*M2C_FIELD(arg0, f32 **, 0x18) != 0.0f) {
                var_5_2 = temp_6 + 0x98;
                var_4 = 3;
                temp_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), void **, 4);
                temp_2 = temp_3 + 0xF8;
                do {
                    var_4 -= 1;
                    temp_f0 = M2C_FIELD(var_5_2, f32 *, 0) * M2C_FIELD(temp_3, f32 *, 0xF8);
                    temp_f1 = M2C_FIELD(var_5_2, f32 *, 8);
                    temp_f2 = M2C_FIELD(var_5_2, f32 *, 4) * M2C_FIELD(temp_2, f32 *, 4);
                    var_5_2 += 0x190;
                    var_f3 += fabsf(temp_f0 + temp_f2 + (temp_f1 * M2C_FIELD(temp_2, f32 *, 8)));
                } while (var_4 >= 0);
                var_2 = 1;
                if (!(var_f3 < (M2C_FIELD(temp_3, f32 *, 0x20) * 0.1f * M2C_FIELD(temp_3, f32 *, 0x1C)))) {
                    /* Duplicate return node #13. Try simplifying control flow for better match */
                    return 0;
                }
                /* Duplicate return node #14. Try simplifying control flow for better match */
                return var_2;
            }
            return 0;
        }
        return 1;
    }
    return var_2;
}
