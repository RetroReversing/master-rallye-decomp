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

f32 func_001D5E70(s32, M2C_UNK, f32);               /* extern */
s32 func_001D5F70();                                /* extern */

void func_001B12C8(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;

    temp_f2 = func_001D5E70(func_001D5F70(), 0x3DCCCCCD, 1.0f);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0xC) + 0.01f;
    temp_f1 = temp_f0 * 0.1f;
    M2C_FIELD(arg0, f32 *, 0xC) = temp_f0;
    if (temp_f2 < temp_f1) {
        M2C_FIELD(arg0, f32 *, 0xC) = 0.0f;
        M2C_FIELD(arg0, f32 *, 0x54) = func_001D5E70(func_001D5F70(), 0, M2C_FIELD(arg0, f32 *, 0x58));
        return;
    }
    if ((temp_f2 * 0.5f) < temp_f1) {
        M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
    }
}
