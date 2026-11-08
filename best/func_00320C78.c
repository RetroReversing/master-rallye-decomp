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

f32 func_0015ACC8();                                /* extern */
M2C_UNK func_00328C90();                            /* extern */
extern M2C_UNK D_0042DC00;
extern f32 D_0042DC40;
extern M2C_UNK D_004A4760;

void func_00320C78(void *arg1, s32 *arg2) {
    f32 sp0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f22;
    f32 temp_f23;
    f32 temp_f23_2;
    f32 temp_f24;
    f32 temp_f25;
    f32 temp_f26;
    f32 temp_f30;
    f32 temp_f4;
    f32 temp_f5;
    s32 temp_21;
    s32 temp_22;
    s32 temp_3;
    s32 var_18;
    void *temp_16;
    void *temp_2;
    void *var_17;

    var_18 = 0;
    func_00328C90();
    temp_f30 = D_0042DC40;
    temp_2 = M2C_FIELD(arg1, void **, 0x10);
    temp_22 = M2C_FIELD(arg1, s32 *, 0x30);
    temp_21 = M2C_FIELD(temp_2, s32 *, 0xC);
    sp0 = temp_f30 * 1.61368f;
    if (temp_21 > 0) {
        var_17 = M2C_FIELD(temp_2, s32 *, 0) + 0x20;
        do {
            temp_3 = (var_18 + temp_22) * 0x30;
            var_18 += 1;
            temp_16 = *arg2 + temp_3;
            temp_f26 = M2C_FIELD(temp_16, f32 *, 0x20);
            temp_f25 = M2C_FIELD(temp_16, f32 *, 0x28);
            temp_f20 = (temp_f26 * 0.1f) + sp0;
            temp_f21 = (temp_f25 * 0.1f) + temp_f30;
            temp_f22 = temp_f20 * 2.19f;
            temp_f24 = temp_f21 * 2.93f;
            temp_f20_2 = temp_f20 * 1.13f;
            temp_f21_2 = temp_f21 * 1.78f;
            temp_f23 = *(((M2C_BITWISE(s32, (4096.0f / func_0015ACC8())) & 0xFFF) * 4) + &D_004A4760);
            temp_f23_2 = temp_f23 - *((((M2C_BITWISE(s32, (4096.0f / func_0015ACC8())) + 0x400) & 0xFFF) * 4) + &D_004A4760);
            temp_f20_3 = *((((M2C_BITWISE(s32, (4096.0f / func_0015ACC8())) + 0x400) & 0xFFF) * 4) + &D_004A4760);
            temp_f0 = *(((M2C_BITWISE(s32, (4096.0f / func_0015ACC8())) & 0xFFF) * 4) + &D_004A4760);
            M2C_FIELD(var_17, f32 *, 0) = (f32) ((temp_f26 * 0.05f) + (temp_f23_2 * 0.05f));
            temp_f20_4 = temp_f20_3 + temp_f0;
            M2C_FIELD(var_17, f32 *, 4) = (f32) ((temp_f25 * 0.05f) + (temp_f20_4 * 0.05f));
            temp_f0_2 = M2C_FIELD(temp_16, f32 *, 0) + (temp_f23_2 * 0.6f);
            temp_f5 = M2C_FIELD(temp_16, f32 *, 4);
            temp_f4 = M2C_FIELD(temp_16, f32 *, 8) + (temp_f20_4 * 0.6f);
            M2C_FIELD(var_17, f32 *, 0xC) = (f32) ((((temp_f0_2 * M2C_FIELD(&D_0042DC00, f32 *, 4)) + (temp_f5 * M2C_FIELD(&D_0042DC00, f32 *, 0x14)) + (temp_f4 * M2C_FIELD(&D_0042DC00, f32 *, 0x24))) * -0.5f) + 0.5f + (temp_f25 * 0.02f));
            M2C_FIELD(var_17, f32 *, 8) = (f32) ((((temp_f0_2 * M2C_FIELD(&D_0042DC00, f32 *, 0)) + (temp_f5 * M2C_FIELD(&D_0042DC00, f32 *, 0x10)) + (temp_f4 * M2C_FIELD(&D_0042DC00, f32 *, 0x20))) * 0.5f) + 0.5f + (temp_f26 * 0.02f));
            var_17 += 0x40;
        } while (var_18 < temp_21);
    }
}
