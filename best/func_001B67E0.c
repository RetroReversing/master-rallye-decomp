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

void *func_0021E9C0(s32, s32);                      /* extern */
s32 func_0021F4B0();                                /* extern */

s32 func_001B67E0(void *arg0) {
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_3;
    void *temp_3_2;

    temp_2 = func_0021E9C0(func_0021F4B0(), arg0 + 4);
    if (temp_2 == NULL) {
        return 0;
    }
    temp_2_2 = M2C_FIELD(temp_2, void **, 0x50);
    if (temp_2_2 != NULL) {
        temp_3 = arg0 + 0x64;
        temp_2_3 = temp_2_2 + 0x50;
        M2C_FIELD(arg0, f32 *, 0x64) = (f32) M2C_FIELD(temp_2_2, f32 *, 0x50);
        temp_f5 = M2C_FIELD(temp_2_3, f32 *, 4);
        M2C_FIELD(temp_3, f32 *, 4) = temp_f5;
        temp_f3 = M2C_FIELD(temp_2_3, f32 *, 8);
        M2C_FIELD(temp_3, f32 *, 8) = temp_f3;
        if (M2C_FIELD(arg0, s32 *, 0xA4) != 0) {
            M2C_FIELD(arg0, f32 *, 0x70) = 0.0f;
            temp_2_4 = arg0 + 0x70;
            M2C_FIELD(temp_2_4, s32 *, 8) = 0;
            M2C_FIELD(temp_2_4, s32 *, 4) = 0;
        } else {
            temp_2_5 = arg0 + 0x94;
            temp_3_2 = arg0 + 0x70;
            temp_f4 = 1.0f / M2C_FIELD(arg0, f32 *, 0xA0);
            temp_f2 = temp_f3 - M2C_FIELD(temp_2_5, f32 *, 8);
            temp_f1 = temp_f5 - M2C_FIELD(temp_2_5, f32 *, 4);
            temp_f0 = M2C_FIELD(arg0, f32 *, 0x64) - M2C_FIELD(arg0, f32 *, 0x94);
            sp18 = temp_f2;
            sp14 = temp_f1;
            sp10 = temp_f0;
            sp8 = temp_f2 * temp_f4;
            M2C_FIELD(arg0, f32 *, 0x70) = (f32) (temp_f0 * temp_f4);
            M2C_FIELD(temp_3_2, f32 *, 4) = (f32) (temp_f1 * temp_f4);
            M2C_FIELD(temp_3_2, f32 *, 8) = sp8;
        }
        return 1;
    }
    return 0;
}
