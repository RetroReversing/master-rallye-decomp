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

f32 func_001E3610(s32, s32);                        /* extern */
M2C_UNK func_002C8308(void *, M2C_UNK);             /* extern */
f32 func_002C8360(void *, u8, u8);                  /* extern */
f32 func_003F3978(f32, M2C_UNK);                    /* extern */

f32 func_002CBE78(void *arg0, void *arg1) {
    f32 temp_f21;
    f32 var_f0;
    u8 temp_16;
    u8 var_19;

    temp_f21 = func_001E3610(func_001E4280(), arg0 + 0xEC);
    var_f0 = func_001E3610(func_001E4280(), arg0 + 0xF4);
    if (((u64) M2C_FIELD(arg1, u64 *, 0x30) >> 0x23) & 1) {
        func_002C8308(arg1, 1);
        var_19 = 0;
        if (fabsf(var_f0) > 0.15f) {
            var_19 = 1;
        }
        func_0015ACE0(temp_f21, 0.0f, 0.2f);
        var_f0 = func_003F3978((M2C_ERROR(/* Read from unset register $f0 */) / 0.2f) * M2C_FIELD(arg0, f32 *, 0x108), 0x3FC00000) * 0.54f * 255.0f;
        temp_16 = 0x3F0A3D71 & 0xFF;
        if ((M2C_FIELD(arg0, u8 *, 0x10) != var_19) || (M2C_FIELD(arg0, u8 *, 0x11) != temp_16)) {
            var_f0 = func_002C8360(arg1, temp_16, var_19);
        }
        M2C_FIELD(arg0, u8 *, 0x11) = temp_16;
        M2C_FIELD(arg0, u8 *, 0x10) = var_19;
    }
    return var_f0;
}
