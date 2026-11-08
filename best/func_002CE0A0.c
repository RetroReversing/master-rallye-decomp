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

s32 func_002CD2B8();                                /* extern */
s32 func_002CD360(s32, s32);                        /* extern */
void *func_002D04D0();                              /* extern */
M2C_UNK func_0030C868(s32, s32, M2C_UNK, f32, s32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_00429868;

s32 func_002CE0A0(s32 arg0, s32 arg1, s32 arg2, f32 fparg0) {
    M2C_UNK var_16;
    f32 temp_7;
    f32 var_7;
    s32 temp_2;
    s32 temp_2_2;
    s32 var_19;
    s32 var_2;
    void *temp_5;

    var_19 = 0;
    temp_2 = func_002CD360(func_002CD2B8(), arg0);
    if (temp_2 >= 0) {
        var_2 = 0;
        if (arg1 >= 2) {
            func_002D04D0();
            temp_7 = M2C_FIELD(func_002D04D0(), f32 *, 0x14);
            if (0x3F666666 < 0) {
                var_16 = 0;
            } else {
                var_16 = (0x3F666666 >= 0x3000) ? 0x2FFF : 0x3F666666;
            }
            if (M2C_BITWISE(s32, temp_7) < 0) {
                var_7 = 0.0f;
            } else {
                var_7 = (M2C_BITWISE(s32, temp_7) >= 0x3000) ? 1.7218e-41f : temp_7;
            }
            func_0030C868(temp_2, arg1, var_16, var_7, (s32) (arg2 << 0xC) / 48000, 0x1F, 0x4F);
            var_19 = 1;
            temp_2_2 = arg1 * 0x10;
            temp_5 = &D_00429868 + temp_2_2;
            *(temp_2_2 + &D_00429868) = temp_2;
            M2C_FIELD(temp_5, f32 *, 0xC) = (f32) arg2;
            M2C_FIELD(temp_5, f32 *, 4) = fparg0;
            M2C_FIELD(temp_5, f32 *, 8) = fparg0;
            goto block_9;
        }
    } else {
block_9:
        var_2 = var_19;
    }
    return var_2;
}
