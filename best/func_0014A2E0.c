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

f32 func_001E3610(s32, void *);                     /* extern */

void func_0014A2E0(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_f4;
    f32 temp_f5;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;

    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        temp_2 = arg0 + 0x30;
        if (M2C_FIELD(arg1, void **, 0x4C) != NULL) {
            sp0 = M2C_FIELD(arg0, f32 *, 0x30);
            sp4 = M2C_FIELD(temp_2, f32 *, 4);
            sp8 = M2C_FIELD(temp_2, f32 *, 8);
            temp_f4 = M2C_FIELD(arg0, f32 *, 0x40);
            temp_f5 = temp_f4 * func_001E3610(func_001E4280(), arg0 + 0x2C);
            if (M2C_FIELD(arg0, s32 *, 0x64) != 0) {
                sp0 += (f32) M2C_FIELD(arg0, s32 *, 0x28);
                sp4 += temp_f5 - (temp_f4 * 0.5f);
            } else {
                sp4 += (f32) M2C_FIELD(arg0, s32 *, 0x28);
                sp0 += temp_f5 - (temp_f4 * 0.5f);
            }
            temp_3 = M2C_FIELD(arg1, void **, 0x4C);
            temp_2_2 = temp_3 + 0x50;
            M2C_FIELD(temp_3, f32 *, 0x50) = sp0;
            M2C_FIELD(temp_2_2, f32 *, 4) = sp4;
            M2C_FIELD(temp_2_2, f32 *, 0xC) = 1.0f;
            M2C_FIELD(temp_2_2, f32 *, 8) = sp8;
        }
    }
}
