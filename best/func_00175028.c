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

void func_00175028(void *arg0, f32 fparg0) {
    f32 temp_f0;
    f32 var_f1;

    M2C_FIELD(arg0, f32 *, 0xF4) = fparg0;
    if (fparg0 > 0.0f) {
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x54);
        var_f1 = fparg0;
        if (temp_f0 < fparg0) {
            var_f1 = temp_f0;
        }
        M2C_FIELD(arg0, f32 *, 0xF4) = var_f1;
    }
}
