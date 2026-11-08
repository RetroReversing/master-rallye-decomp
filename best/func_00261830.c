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

M2C_UNK func_002618C8(s32, s32);                    /* extern */

void func_00261830(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5) {
    f32 temp_f1;
    f32 var_6;
    f32 var_7;

    temp_f1 = *arg1;
    var_6 = temp_f1;
    var_7 = temp_f1;
    if (M2C_BITWISE(s32, var_6) < 0) {
        var_6 = M2C_BITWISE(f32, -M2C_BITWISE(s32, var_6));
    }
    if (M2C_BITWISE(s32, var_7) < 0) {
        var_7 = M2C_BITWISE(f32, -M2C_BITWISE(s32, var_7));
    }
    func_002618C8(M2C_BITWISE(s32, var_6), M2C_BITWISE(s32, var_7));
    M2C_FIELD(arg0, f32 *, 4) = (f32) *arg2;
    M2C_FIELD(arg0, f32 *, 8) = (f32) *arg3;
}
