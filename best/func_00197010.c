/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

void func_00197010(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;
    void *temp_16;
    void *temp_17;
    void *temp_2;
    void *temp_3;
    void *temp_4;

    temp_f3 = M2C_FIELD(arg0, f32 *, 0x14);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x10) + (M2C_FIELD(arg0, f32 *, 0xC) * M2C_FIELD(arg0, f32 *, 0x18));
    M2C_FIELD(arg0, f32 *, 0x10) = temp_f0;
    if (temp_f3 < temp_f0) {
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) (temp_f0 - temp_f3);
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x10);
    temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x14);
    if (temp_f1 < temp_f0_2) {
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) (temp_f1 + temp_f0_2);
    }
    temp_f20 = M2C_FIELD(arg0, f32 *, 0x10) * 0.5f;
    temp_16 = M2C_FIELD(arg1, void **, 0x50);
    sp4 = 1.0f;
    sp0 = 0.0f;
    temp_17 = temp_16 + 0x20;
    sp8 = 0.0f;
    temp_f0_3 = func_003F3140(temp_f20);
    sp10 = temp_f0_3 * sp0;
    sp14 = temp_f0_3 * sp4;
    sp18 = temp_f0_3 * sp8;
    temp_f0_4 = func_003F2F50(temp_f20);
    temp_3 = temp_16 + 0x30;
    temp_2 = temp_16 + 0x40;
    temp_f2 = 2.0f * sp14;
    temp_f5 = 2.0f * sp18;
    sp1C = temp_f0_4;
    temp_f8 = 2.0f * sp10;
    temp_4 = temp_16 + 0x50;
    temp_f12 = temp_f2 * sp14;
    temp_f1_2 = temp_f5 * sp18;
    temp_f11 = temp_f2 * temp_f0_4;
    temp_f10 = temp_f5 * temp_f0_4;
    temp_f2_2 = temp_f2 * sp10;
    temp_f7 = temp_f8 * sp10;
    temp_f8_2 = temp_f8 * temp_f0_4;
    temp_f9 = temp_f5 * sp10;
    temp_f5_2 = temp_f5 * sp14;
    M2C_FIELD(temp_16, f32 *, 0x20) = (f32) (1.0f - (temp_f12 + temp_f1_2));
    M2C_FIELD(temp_17, f32 *, 4) = (f32) (temp_f2_2 - temp_f10);
    M2C_FIELD(temp_17, s32 *, 0xC) = 0;
    M2C_FIELD(temp_17, f32 *, 8) = (f32) (temp_f9 + temp_f11);
    M2C_FIELD(temp_16, f32 *, 0x30) = (f32) (temp_f2_2 + temp_f10);
    M2C_FIELD(temp_3, s32 *, 0xC) = 0;
    M2C_FIELD(temp_3, f32 *, 4) = (f32) (1.0f - (temp_f7 + temp_f1_2));
    M2C_FIELD(temp_3, f32 *, 8) = (f32) (temp_f5_2 - temp_f8_2);
    M2C_FIELD(temp_16, f32 *, 0x40) = (f32) (temp_f9 - temp_f11);
    M2C_FIELD(temp_2, f32 *, 8) = (f32) (1.0f - (temp_f7 + temp_f12));
    M2C_FIELD(temp_2, f32 *, 4) = (f32) (temp_f5_2 + temp_f8_2);
    M2C_FIELD(temp_2, s32 *, 0xC) = 0;
    M2C_FIELD(temp_16, s32 *, 0x50) = 0;
    M2C_FIELD(temp_4, f32 *, 0xC) = 1.0f;
    M2C_FIELD(temp_4, s32 *, 4) = 0;
    M2C_FIELD(temp_4, s32 *, 8) = 0;
}
