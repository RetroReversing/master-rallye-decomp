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

M2C_UNK func_00290528(M2C_UNK, M2C_UNK);            /* extern */

void func_002903C8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    func_00290528(0x40A00000, 0x41000000);
    M2C_FIELD(arg0, f32 *, 0x18) = 2.0f;
    M2C_FIELD(arg0, f32 *, 0x54) = 70.0f;
    M2C_FIELD(arg0, f32 *, 0x20) = 3.5f;
    M2C_FIELD(arg0, f32 *, 0x48) = 0.5f;
    M2C_FIELD(arg0, f32 *, 0x4C) = 30.0f;
    M2C_FIELD(arg0, f32 *, 0x50) = 0.3f;
}
