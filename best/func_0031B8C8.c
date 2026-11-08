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

f32 func_003F3830(f32);                             /* extern */

s32 func_0031B8C8(void *arg0, s32 arg1, s32 arg2, f32 fparg0) {
    f32 temp_f0;
    s32 temp_2;
    s32 temp_3;
    s32 temp_4;
    s32 temp_9;
    s32 var_2;

    temp_f0 = -((func_003F3830((M2C_FIELD(arg0, f32 *, 0x118) * (1.0f / (fparg0 * 5.0f))) / (f32) arg2) / 0.6931472f) * (f32) (1 << arg1)) * 16.0f;
    temp_9 = M2C_BITWISE(s32, temp_f0) >> 0x1F;
    temp_3 = M2C_BITWISE(s32, temp_f0) & 0x7FFFFF;
    temp_2 = ((M2C_BITWISE(u32, temp_f0) >> 0x17) & 0xFF) - 0x7F;
    temp_4 = ~(temp_2 >> 0x1F);
    var_2 = (((u32) ((temp_3 | 0x800000) << 8) >> (0x1F - temp_2)) & temp_4) ^ temp_9;
    if (!((temp_3 << 8) & ((1 << (0x1F - (temp_2 & temp_4))) - 1))) {
        var_2 -= temp_9;
    }
    return var_2;
}
