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

s32 func_002ABEC8(s32, s32);                        /* extern */
s32 func_002ABF20(s32, s32);                        /* extern */
s32 func_002ABF88(s32, s32);                        /* extern */
s32 func_002AC4B0(s32, s32);                        /* extern */
f32 func_002AC758(s32);                             /* extern */
s32 func_002AD350(f32);                             /* extern */
s32 func_003F32B8(s32);                             /* extern */

s32 func_0020A958(void *arg0, void *arg1, void *arg2, f32 *arg3, f32 *arg4, f32 fparg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_17;
    s32 temp_18;
    s32 temp_2;
    s32 var_2;

    temp_f2 = M2C_FIELD(arg2, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0);
    temp_f0 = M2C_FIELD(arg2, f32 *, 4) - M2C_FIELD(arg0, f32 *, 4);
    sp10 = temp_f2;
    temp_f1 = M2C_FIELD(arg2, f32 *, 8) - M2C_FIELD(arg0, f32 *, 8);
    sp0 = temp_f2;
    sp14 = temp_f0;
    sp4 = temp_f0;
    sp18 = temp_f1;
    sp8 = temp_f1;
    temp_18 = func_002AD350((temp_f2 * temp_f2) + (temp_f0 * temp_f0) + (temp_f1 * temp_f1));
    temp_17 = func_002AD350((sp0 * M2C_FIELD(arg1, f32 *, 0)) + (sp4 * M2C_FIELD(arg1, f32 *, 4)) + (sp8 * M2C_FIELD(arg1, f32 *, 8)));
    if ((func_002AC4B0(temp_18, func_002AD350(fparg0)) < 0) || (var_2 = 0, (func_002AC4B0(temp_17, func_002AD350(1.1920929e-7f)) >= 0))) {
        temp_16 = func_002ABF20(func_002AD350(fparg0), temp_18);
        temp_16_2 = func_002ABEC8(temp_16, func_002ABF88(temp_17, temp_17));
        var_2 = 0;
        if (func_002AC4B0(temp_16_2, func_002AD350(1.1920929e-7f)) > 0) {
            temp_2 = func_003F32B8(temp_16_2);
            *arg3 = func_002AC758(func_002ABF20(temp_17, temp_2));
            *arg4 = func_002AC758(func_002ABEC8(temp_17, temp_2));
            var_2 = 1;
        }
    }
    return var_2;
}
