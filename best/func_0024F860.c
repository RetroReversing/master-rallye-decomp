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

s32 func_0024F920(s32, f32 *, f32, f32, f32);       /* extern */
s32 func_0024FA00(s32, s32, f32 *);                 /* extern */
s32 func_0024FB08(s32, s32, f32 *, s32);            /* extern */

s32 func_0024F860(s32 arg0, void *arg1, void *arg2, s32 arg3, f32 fparg0) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    s32 var_2;

    temp_f2 = M2C_FIELD(arg2, f32 *, 8);
    temp_f1 = M2C_FIELD(arg2, f32 *, 0);
    temp_f0 = M2C_FIELD(arg2, f32 *, 4);
    sp10 = temp_f1;
    sp14 = temp_f0;
    sp18 = temp_f2;
    sp1C = fparg0;
    M2C_FIELD(&sp10, s32 *, 0x10) = -1;
    if ((func_0024F920(M2C_FIELD(arg1, s32 *, 8), &sp10, temp_f1, temp_f0, temp_f2) == 0) || (func_0024FA00(arg0, M2C_FIELD(arg1, s32 *, 4), &sp10) == 0) || (var_2 = 1, (func_0024FB08(arg0, M2C_FIELD(arg1, s32 *, 0), &sp10, arg3) == 0))) {
        var_2 = 0;
    }
    return var_2;
}
