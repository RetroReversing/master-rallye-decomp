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

s32 func_00142260(void *arg0, void *arg1, f32 fparg0) {
    s32 var_2;

    var_2 = 0;
    if ((fabsf(M2C_FIELD(arg0, f32 *, 0) - M2C_FIELD(arg1, f32 *, 0)) < fparg0) && (fabsf(M2C_FIELD(arg0, f32 *, 4) - M2C_FIELD(arg1, f32 *, 4)) < fparg0) && (fabsf(M2C_FIELD(arg0, f32 *, 8) - M2C_FIELD(arg1, f32 *, 8)) < fparg0)) {
        var_2 = 1;
        if (!(fabsf(M2C_FIELD(arg0, f32 *, 0xC) - M2C_FIELD(arg1, f32 *, 0xC)) < fparg0)) {
            var_2 = 0;
        }
    }
    return var_2;
}
