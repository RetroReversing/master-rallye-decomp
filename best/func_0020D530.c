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

s64 func_002ABEC8(s64, s64);                        /* extern */
s64 func_002ABF20(s64, s64);                        /* extern */
s64 func_002ABF88(s64, s64);                        /* extern */
s64 func_002AC230(s64, s32);                        /* extern */
f32 func_002AC758(s64);                             /* extern */
s64 func_002AD350(f32);                             /* extern */
s32 func_003F32B8(s64);                             /* extern */

void func_0020D530(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *sp0;
    s64 sp8;
    s64 sp10;
    s64 sp18;
    s64 temp_16;
    s64 temp_16_2;
    s64 temp_16_3;
    s64 temp_16_4;
    s64 temp_16_5;
    s64 temp_16_6;
    s64 temp_16_7;
    s64 temp_17;
    s64 temp_17_2;
    s64 temp_18;
    s64 temp_18_2;
    s64 temp_19;
    s64 temp_19_2;
    s64 temp_20;
    s64 temp_21;
    s64 temp_22;
    s64 temp_23;
    s64 temp_2;
    s64 temp_2_2;
    s64 temp_30;

    sp0 = arg3;
    temp_30 = func_002AD350(M2C_FIELD(arg0, f32 *, 0));
    sp8 = func_002AD350(M2C_FIELD(arg0, f32 *, 4));
    sp10 = func_002AD350(M2C_FIELD(arg0, f32 *, 8));
    sp18 = func_002ABF20(func_002AD350(M2C_FIELD(arg1, f32 *, 0)), temp_30);
    temp_23 = func_002ABF20(func_002AD350(M2C_FIELD(arg1, f32 *, 4)), sp8);
    temp_20 = func_002ABF20(func_002AD350(M2C_FIELD(arg1, f32 *, 8)), sp10);
    temp_22 = func_002ABF20(func_002AD350(M2C_FIELD(arg2, f32 *, 0)), temp_30);
    temp_21 = func_002ABF20(func_002AD350(M2C_FIELD(arg2, f32 *, 4)), sp8);
    temp_2 = func_002ABF20(func_002AD350(M2C_FIELD(arg2, f32 *, 8)), sp10);
    temp_16 = func_002ABF88(temp_23, temp_2);
    temp_19 = func_002ABF20(temp_16, func_002ABF88(temp_20, temp_21));
    temp_16_2 = func_002ABF88(temp_20, temp_22);
    temp_18 = func_002ABF20(temp_16_2, func_002ABF88(sp18, temp_2));
    temp_16_3 = func_002ABF88(sp18, temp_21);
    temp_17 = func_002ABF20(temp_16_3, func_002ABF88(temp_23, temp_22));
    temp_16_4 = func_002ABF88(temp_19, temp_19);
    temp_16_5 = func_002ABEC8(temp_16_4, func_002ABF88(temp_18, temp_18));
    temp_2_2 = func_002AC230(0xFFC0 << 0x2E, func_003F32B8(func_002ABEC8(temp_16_5, func_002ABF88(temp_17, temp_17))));
    temp_19_2 = func_002ABF88(temp_19, temp_2_2);
    temp_18_2 = func_002ABF88(temp_18, temp_2_2);
    temp_17_2 = func_002ABF88(temp_17, temp_2_2);
    M2C_FIELD(sp0, f32 *, 0) = func_002AC758(temp_19_2);
    M2C_FIELD(sp0, f32 *, 4) = func_002AC758(temp_18_2);
    M2C_FIELD(sp0, f32 *, 8) = func_002AC758(temp_17_2);
    temp_16_6 = func_002ABF88(temp_19_2, temp_30);
    temp_16_7 = func_002ABEC8(temp_16_6, func_002ABF88(temp_18_2, sp8));
    M2C_FIELD(sp0, f32 *, 0xC) = func_002AC758(func_002ABF20(0, func_002ABEC8(temp_16_7, func_002ABF88(temp_17_2, sp10))));
}
