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

void **func_001D5900();                             /* extern */

f32 func_003ECF68(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f3;
    f32 var_f0;

    temp_f1 = (f32) M2C_FIELD(*func_001D5900(), s32 *, 0x10) / 30.0f;
    temp_f3 = *M2C_FIELD(arg0, f32 **, 4);
    temp_f0 = temp_f1 - 0.033333335f;
    if (temp_f3 <= temp_f0) {
        return 0.0f;
    }
    if (!(temp_f1 <= temp_f3)) {
        var_f0 = (temp_f3 - temp_f0) / (temp_f1 - temp_f0);
    } else {
        var_f0 = 1.0f;
    }
    return var_f0;
}
