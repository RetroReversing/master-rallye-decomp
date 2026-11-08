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

void ***func_001D6E40();                            /* extern */
f32 **func_00201350();                              /* extern */
M2C_UNK func_00290450();                            /* extern */
M2C_UNK func_00290C40(void *, s32);                 /* extern */
M2C_UNK func_00290F88(void *);                      /* extern */
M2C_UNK func_00291018(void *);                      /* extern */
extern s32 D_0042682C;

void func_00290538(void *arg0, s32 arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    void **temp_17;
    void *temp_3;
    void *temp_3_2;

    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        func_00290450();
    }
    func_00290C40(arg0, arg1);
    if (D_0042682C != 0) {
        func_00290F88(arg0);
        D_0042682C = 0;
    }
    func_00291018(arg0);
    **func_00201350() = M2C_FIELD(arg0, f32 *, 0x54);
    temp_17 = *func_001D6E40();
    temp_3 = *temp_17;
    if (M2C_FIELD(temp_3, s32 (**)(void *), 0xEC)(temp_17 + M2C_FIELD(temp_3, s16 *, 0xE8)) != 0) {
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x20) - 0.1f;
        M2C_FIELD(arg0, f32 *, 0x20) = temp_f0;
        if (temp_f0 < 0.0f) {
            M2C_FIELD(arg0, f32 *, 0x20) = 0.0f;
        }
        func_00290C40(arg0, arg1);
    }
    temp_3_2 = *temp_17;
    if (M2C_FIELD(temp_3_2, s32 (**)(void *), 0xF4)(temp_17 + M2C_FIELD(temp_3_2, s16 *, 0xF0)) != 0) {
        temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x20) + 0.1f;
        M2C_FIELD(arg0, f32 *, 0x20) = temp_f0_2;
        if (temp_f0_2 > 20.0f) {
            M2C_FIELD(arg0, f32 *, 0x20) = 20.0f;
        }
        func_00290C40(arg0, arg1);
    }
}
