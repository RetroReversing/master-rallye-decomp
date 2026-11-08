/* machine draft (m2c), tried by autopilot */
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

f32 func_003F33C8(f32);                             /* extern */
M2C_UNK func_003F3E80(f32);                         /* extern */

f32 func_00290B28(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 var_f0;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0);
    temp_f0 = M2C_FIELD(arg0, f32 *, 4);
    M2C_ERROR(/* unknown instruction: c1 0xc0084 */);
    if (M2C_ERROR(/* Read from unset register $f2 */) != M2C_ERROR(/* Read from unset register $f2 */)) {
        func_003F3E80((temp_f1 * temp_f1) + (temp_f0 * temp_f0));
    }
    if (M2C_ERROR(/* Read from unset register $f2 */) < 0.00001f) {
        return 0.0f;
    }
    temp_f1_2 = (func_003F33C8(M2C_FIELD(arg0, f32 *, 0) / M2C_ERROR(/* Read from unset register $f2 */)) * 180.0f) / 3.1415927f;
    if (M2C_FIELD(arg0, f32 *, 4) >= 0.0f) {
        var_f0 = temp_f1_2;
    } else {
        var_f0 = 360.0f - temp_f1_2;
    }
    return var_f0;
}
