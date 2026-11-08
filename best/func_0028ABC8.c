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

f32 func_0015ACB0();                                /* extern */
f32 func_003F2F50(f32);                             /* extern */
f32 func_003F3140(f32);                             /* extern */

void func_0028ABC8(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f20;
    void *temp_2;
    void *temp_2_2;

    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
    }
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) + M2C_FIELD(arg0, f32 *, 0x14));
    if ((2.0f * func_0015ACB0()) <= M2C_FIELD(arg0, f32 *, 0x18)) {
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) - (2.0f * func_0015ACB0()));
    }
    temp_f20 = func_003F3140(M2C_FIELD(arg0, f32 *, 0x18)) * M2C_FIELD(arg0, f32 *, 0x10);
    temp_2 = M2C_FIELD(arg1, void **, 0x50);
    temp_f0 = -func_003F2F50(M2C_FIELD(arg0, f32 *, 0x18)) * M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(temp_2, f32 *, 0x50) = (f32) (M2C_FIELD(temp_2, f32 *, 0x50) + (-M2C_FIELD(arg0, f32 *, 0x1C) + temp_f20));
    temp_2_2 = M2C_FIELD(arg1, void **, 0x50);
    M2C_FIELD(temp_2_2, f32 *, 0x58) = (f32) (M2C_FIELD(temp_2_2, f32 *, 0x58) + (-M2C_FIELD(arg0, f32 *, 0x24) + temp_f0));
    M2C_FIELD(arg0, f32 *, 0x1C) = temp_f20;
    M2C_FIELD(arg0, f32 *, 0x24) = temp_f0;
}
