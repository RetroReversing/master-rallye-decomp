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

f32 func_003F3E80(f32);                             /* extern */

f32 func_0016BB40(void *arg1, void *arg2, void *arg3) {
    f32 sp14;
    f32 sp18;
    f32 sp20;
    s32 sp24;
    f32 sp28;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    f32 temp_f7;
    f32 var_f3;

    temp_f6 = M2C_FIELD(arg2, f32 *, 0);
    temp_f4 = M2C_FIELD(arg1, f32 *, 8);
    temp_f1 = M2C_FIELD(arg1, f32 *, 0) - temp_f6;
    temp_f7 = M2C_FIELD(arg2, f32 *, 8);
    sp14 = 0.0f;
    temp_f2 = temp_f4 - temp_f7;
    var_f3 = sp14;
    sp18 = temp_f4;
    sp20 = temp_f6;
    sp24 = 0;
    sp28 = temp_f7;
    M2C_ERROR(/* unknown instruction: c1 0xc00c4 */);
    if (var_f3 != var_f3) {
        var_f3 = func_003F3E80((temp_f1 * temp_f1) + var_f3 + (temp_f2 * temp_f2));
    }
    return ((M2C_FIELD(arg3, f32 *, 4) + M2C_FIELD(arg1, f32 *, 4)) - (2.0f * M2C_FIELD(arg2, f32 *, 4))) / (var_f3 * var_f3);
}
