/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

f32 func_0015ACC8();                                /* extern */
f32 func_003F2F50(f32);                             /* extern */
f32 func_003F3140(f32);                             /* extern */
f32 func_003F36F0(s32, s32, s32, s32, s32, M2C_UNK *, s32, s32, f32, M2C_UNK); /* extern */
extern M2C_UNK D_0042A950;

void func_002EF908(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg6, s32 arg7, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    s32 sp0;
    s32 sp4;
    M2C_UNK *var_9;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f24;
    f32 var_f0;
    f32 var_f1;
    f32 var_f20;
    s32 temp_12;
    s32 temp_20;
    s32 temp_21;
    s32 temp_2_5;
    s32 temp_2_6;
    s32 temp_2_7;
    s32 temp_2_8;
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_4_5;
    s32 temp_5;
    s32 temp_5_2;
    s32 temp_5_3;
    s32 temp_7;
    s32 temp_7_2;
    s32 temp_7_3;
    s32 var_10;
    s32 var_11;
    s32 var_19;
    s32 var_3;
    s32 var_3_2;
    s32 var_3_3;
    s32 var_3_4;
    s32 var_5;
    s32 var_6;
    s32 var_7;
    s32 var_8;
    s8 temp_2;
    s8 temp_2_2;
    s8 temp_2_3;
    s8 temp_2_4;
    s8 temp_3;
    s8 temp_3_2;
    void *var_16;
    void *var_17;
    void *var_18;

    var_5 = arg1;
    var_6 = arg2;
    var_7 = arg3;
    var_10 = arg6;
    var_11 = arg7;
    var_9 = &D_0042A950;
    var_8 = arg4 & 0xFF;
    temp_21 = var_6;
    temp_20 = var_7;
    sp0 = var_8;
    if (M2C_FIELD(&D_0042A950, s32 *, 0x2940) >= 0) {
        var_f1 = (f32) M2C_FIELD(&D_0042A950, s32 *, 0x2940);
    } else {
        var_f1 = 2.0f * (f32) ((M2C_FIELD(&D_0042A950, s32 *, 0x2940) & 1) | ((u32) M2C_FIELD(&D_0042A950, s32 *, 0x2940) >> 1));
    }
    temp_f24 = var_f1 / 640.0f;
    if (M2C_FIELD(&D_0042A950, s32 *, 0x2944) >= 0) {
        var_f0 = (f32) M2C_FIELD(&D_0042A950, s32 *, 0x2944);
    } else {
        var_f0 = 2.0f * (f32) ((M2C_FIELD(&D_0042A950, s32 *, 0x2944) & 1) | ((u32) M2C_FIELD(&D_0042A950, s32 *, 0x2944) >> 1));
    }
    var_16 = arg0 + 0x7C0;
    var_17 = var_5 + 0x7C;
    var_19 = 0x1F;
    var_18 = arg0 + 0x7E0;
    sp4 = M2C_ERROR(/* Read from unset register $f3 */);
    do {
        temp_2 = ((s32) (M2C_FIELD(var_17, u8 *, 0) * temp_20) >> 8) + temp_21;
        temp_2_2 = (temp_2 <= -1) ? 0 : temp_2;
        temp_f12 = ((f32) var_19 / 31.0f) + fparg3;
        M2C_FIELD(var_16, s8 *, 0x40) = (s8) ((temp_2_2 >= 0x100) ? -1 : temp_2_2);
        temp_2_3 = ((s32) (M2C_FIELD(var_17, u8 *, 1) * temp_20) >> 8) + temp_21;
        temp_2_4 = (temp_2_3 <= -1) ? 0 : temp_2_3;
        M2C_FIELD(var_16, s8 *, 0x41) = (s8) ((temp_2_4 >= 0x100) ? -1 : temp_2_4);
        M2C_FIELD(var_16, s8 *, 0x43) = (s8) sp0;
        M2C_FIELD(var_16, f32 *, 0x44) = 0.0f;
        temp_3 = ((s32) (M2C_FIELD(var_17, u8 *, 2) * temp_20) >> 8) + temp_21;
        temp_3_2 = (temp_3 <= -1) ? 0 : temp_3;
        temp_4 = temp_3_2 < 0x100;
        M2C_FIELD(var_16, s8 *, 0x42) = (s8) ((temp_4 == 0) ? -1 : temp_3_2);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x47($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0x40($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x67($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x60($s0) */);
        if (temp_f12 >= 0.0f) {
            var_f20 = func_003F36F0(temp_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, temp_f12, 0x3F800000);
        } else {
            var_f20 = 1.0f - func_003F36F0(temp_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, 1.0f - temp_f12, 0x3F800000);
        }
        temp_f20 = var_f20 * func_0015ACC8();
        temp_f20_2 = func_003F3140(temp_f20) * temp_f24 * 0.5f;
        var_8 = 0x7FFFFFFF;
        var_10 = 0x1F;
        var_9 = (M2C_UNK *)0x7FFFFF;
        temp_f1 = temp_f20_2 * fparg1 * 16.0f;
        temp_7 = M2C_BITWISE(s32, temp_f1) >> 0x1F;
        temp_4_2 = M2C_BITWISE(s32, temp_f1) & 0x7FFFFF;
        temp_2_5 = ((s32) (M2C_BITWISE(s32, temp_f1) & 0x7FFFFFFF) >> 0x17) - 0x7F;
        temp_5 = ~(temp_2_5 >> 0x1F);
        temp_f1_2 = func_003F2F50(temp_f20) * (var_f0 / 480.0f) * 0.5f * fparg0;
        var_3 = (((u32) ((temp_4_2 | 0x800000) << 8) >> (0x1F - temp_2_5)) & temp_5) ^ temp_7;
        if (!((temp_4_2 << 8) & ((1 << (0x1F - (temp_2_5 & temp_5))) - 1))) {
            var_3 -= temp_7;
        }
        temp_12 = sp4 * 0x10;
        temp_f0 = temp_f1_2 * fparg1 * 16.0f;
        M2C_FIELD(var_16, s16 *, 0x50) = (s16) (temp_12 + var_3);
        temp_7_2 = M2C_BITWISE(s32, temp_f0) >> 0x1F;
        temp_4_3 = M2C_BITWISE(s32, temp_f0) & 0x7FFFFF;
        temp_2_6 = ((s32) (M2C_BITWISE(s32, temp_f0) & 0x7FFFFFFF) >> 0x17) - 0x7F;
        temp_5_2 = ~(temp_2_6 >> 0x1F);
        var_3_2 = (((u32) ((temp_4_3 | 0x800000) << 8) >> (0x1F - temp_2_6)) & temp_5_2) ^ temp_7_2;
        if (!((temp_4_3 << 8) & ((1 << (0x1F - (temp_2_6 & temp_5_2))) - 1))) {
            var_3_2 -= temp_7_2;
        }
        var_11 = M2C_BITWISE(s32, ((temp_f24 * 256.0f) + 2048.0f)) * 0x10;
        M2C_FIELD(var_16, s32 *, 0x54) = 0;
        M2C_FIELD(var_16, s16 *, 0x52) = (s16) (var_11 + var_3_2);
        temp_f0_2 = temp_f20_2 * fparg2 * 16.0f;
        temp_7_3 = M2C_BITWISE(s32, temp_f0_2) >> 0x1F;
        temp_4_4 = M2C_BITWISE(s32, temp_f0_2) & 0x7FFFFF;
        temp_2_7 = ((s32) (M2C_BITWISE(s32, temp_f0_2) & 0x7FFFFFFF) >> 0x17) - 0x7F;
        temp_5_3 = ~(temp_2_7 >> 0x1F);
        var_3_3 = (((u32) ((temp_4_4 | 0x800000) << 8) >> (0x1F - temp_2_7)) & temp_5_3) ^ temp_7_3;
        if (!((temp_4_4 << 8) & ((1 << (0x1F - (temp_2_7 & temp_5_3))) - 1))) {
            var_3_3 -= temp_7_3;
        }
        M2C_FIELD(var_16, s16 *, 0x70) = (s16) (temp_12 + var_3_3);
        temp_f0_3 = temp_f1_2 * fparg2 * 16.0f;
        var_7 = M2C_BITWISE(s32, temp_f0_3) >> 0x1F;
        temp_4_5 = M2C_BITWISE(s32, temp_f0_3) & 0x7FFFFF;
        temp_2_8 = ((s32) (M2C_BITWISE(s32, temp_f0_3) & 0x7FFFFFFF) >> 0x17) - 0x7F;
        var_6 = 0x1F - temp_2_8;
        var_5 = ~(temp_2_8 >> 0x1F);
        var_3_4 = (((u32) ((temp_4_5 | 0x800000) << 8) >> var_6) & var_5) ^ var_7;
        if (!((temp_4_5 << 8) & ((1 << (0x1F - (temp_2_8 & var_5))) - 1))) {
            var_3_4 -= var_7;
        }
        M2C_FIELD(var_18, s32 *, 0x54) = 0;
        M2C_FIELD(var_18, s16 *, 0x52) = (s16) (var_11 + var_3_4);
        var_16 -= 0x40;
        var_18 -= 0x40;
        var_19 -= 1;
        var_17 -= 4;
    } while (var_19 >= 0);
}
