/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

f32 func_0016BAC0(s32, s32, s32);                   /* extern */
f32 func_0016BB40(s32, s32, s32, s32);              /* extern */

s32 func_0016B948(s32 arg0, void *arg1, f32 *arg2, f32 *arg3, void *arg4) {
    f32 *sp0;
    f32 temp_f0;
    f32 var_f20;
    f32 var_f21;
    s32 temp_2;
    s32 temp_3;
    s32 temp_5;
    s32 temp_6;
    s32 var_16;
    s32 var_17;
    s32 var_18;
    s32 var_19;
    s32 var_23;
    void *temp_3_2;

    temp_3 = (s32) ((M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg1, s32 *, 0)) * 0xAAAAAAAB) >> 2;
    sp0 = arg3;
    if ((u32) temp_3 >= 3U) {
        var_f20 = 0.0f;
        var_17 = temp_3 - 3;
        var_23 = 0;
        var_f21 = 0.0f;
        if (var_17 > 0) {
            temp_2 = var_17 * 0xC;
            var_18 = temp_2;
            var_19 = temp_2 + 0x18;
            var_16 = temp_2 + 0xC;
            do {
                temp_6 = M2C_FIELD(arg1, s32 *, 0);
                temp_f0 = func_0016BB40(arg0, temp_6 + var_18, temp_6 + var_16, temp_6 + var_19);
                if (fabsf(var_f20) < fabsf(temp_f0)) {
                    temp_5 = M2C_FIELD(arg1, s32 *, 0);
                    var_f20 = temp_f0;
                    var_23 = var_17;
                    var_f21 = func_0016BAC0(arg0, temp_5 + var_18, temp_5 + var_16);
                }
                var_19 -= 0xC;
                var_16 -= 0xC;
                var_17 -= 1;
                var_18 -= 0xC;
            } while (var_17 > 0);
        }
        *arg2 = var_f21;
        *sp0 = var_f20;
        temp_3_2 = M2C_FIELD(arg1, s32 *, 0) + (var_23 * 0xC);
        M2C_FIELD(arg4, f32 *, 0) = (f32) M2C_FIELD(temp_3_2, f32 *, 0);
        M2C_FIELD(arg4, f32 *, 4) = (f32) M2C_FIELD(temp_3_2, f32 *, 4);
        M2C_FIELD(arg4, f32 *, 8) = (f32) M2C_FIELD(temp_3_2, f32 *, 8);
        return 1;
    }
    return 0;
}
