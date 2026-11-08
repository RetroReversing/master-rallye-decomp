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

void func_0012BBF8(void *arg0) {
    f32 var_f2;
    s32 temp_2;
    s32 var_3;
    s32 var_4;

    var_f2 = 0.0f;
    temp_2 = (s32) ((M2C_FIELD(arg0, s32 *, 0x14) - M2C_FIELD(arg0, s32 *, 0x10)) * 0xB6DB6DB7) >> 2;
    if (temp_2 > 0) {
        var_3 = temp_2;
        var_4 = 0;
        do {
            var_3 -= 1;
            M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x10) + var_4), f32 *, 4) = var_f2;
            var_4 += 0x1C;
            var_f2 += 6.283185f / (f32) temp_2;
        } while (var_3 != 0);
    }
}
