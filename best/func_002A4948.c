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

f32 func_003F2F50(f32);                             /* extern */
f32 func_003F3140(f32);                             /* extern */

void func_002A4948(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f22;
    f32 temp_f23;
    f32 temp_f24;
    f32 temp_f25;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f7;

    temp_f20 = M2C_FIELD(arg0, f32 *, 0x10) * 0.017453292f;
    temp_f21 = M2C_FIELD(arg0, f32 *, 0xC) * 0.017453292f;
    temp_f23 = M2C_FIELD(arg0, f32 *, 0x14) * 0.017453292f;
    temp_f22 = func_003F3140(temp_f20);
    temp_f24 = func_003F2F50(temp_f20);
    temp_f25 = func_003F3140(temp_f21);
    temp_f21_2 = func_003F2F50(temp_f21);
    temp_f20_2 = func_003F3140(temp_f23);
    temp_f0 = func_003F2F50(temp_f23);
    temp_f7 = -temp_f22;
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
    temp_f4 = temp_f24 * temp_f25;
    M2C_FIELD(arg1, s32 *, 0x1C) = 0;
    temp_f3 = -temp_f20_2;
    M2C_FIELD(arg1, s32 *, 0x2C) = 0;
    temp_f2 = temp_f7 * temp_f25;
    M2C_FIELD(arg1, f32 *, 0) = (f32) ((temp_f24 * temp_f0) + (temp_f2 * temp_f20_2));
    M2C_FIELD(arg1, f32 *, 0x28) = (f32) (temp_f21_2 * temp_f0);
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) ((temp_f22 * temp_f0) + (temp_f4 * temp_f20_2));
    M2C_FIELD(arg1, f32 *, 0x20) = (f32) (temp_f21_2 * temp_f20_2);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (temp_f7 * temp_f21_2);
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) (temp_f24 * temp_f21_2);
    M2C_FIELD(arg1, f32 *, 8) = (f32) ((temp_f24 * temp_f3) + (temp_f2 * temp_f0));
    M2C_FIELD(arg1, f32 *, 0x18) = (f32) ((temp_f22 * temp_f3) + (temp_f4 * temp_f0));
    M2C_FIELD(arg1, f32 *, 0x24) = (f32) -temp_f25;
    M2C_FIELD(arg1, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(arg1, f32 *, 0x34) = (f32) M2C_FIELD(arg0, f32 *, 4);
    M2C_FIELD(arg1, f32 *, 0x3C) = 1.0f;
    M2C_FIELD(arg1, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 8);
}
