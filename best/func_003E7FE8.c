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

void *func_002BF920();                              /* extern */
M2C_UNK func_003E80A8(void *, M2C_UNK);             /* extern */
f32 func_0040C7F0(s64);                             /* extern */

void *func_003E7FE8(void *arg0) {
    f32 temp_f0;
    s32 temp_2;
    s32 temp_2_2;

    temp_f0 = func_0040C7F0(M2C_FIELD(func_002BF920(), s64 *, 0x10));
    M2C_FIELD(arg0, f32 *, 0x10) = temp_f0;
    if (temp_f0 > 16384.0f) {
        temp_2 = ((M2C_BITWISE(u32, temp_f0) >> 0x17) & 0xFF) - 0x7F;
        temp_2_2 = (((temp_2 ^ 0xFFFFFF81) == 0) ? 0 : temp_2) - 0xE;
        M2C_FIELD(arg0, s32 *, 0x18) = temp_2_2;
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) (temp_f0 / (f32) (1 << temp_2_2));
    } else {
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (1.0f / M2C_FIELD(arg0, f32 *, 0x10));
    func_003E80A8(arg0, 0);
    return arg0;
}
