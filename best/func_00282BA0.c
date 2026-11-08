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

void *func_00262FF8(s32);                           /* extern */

void func_00282BA0(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 var_f0;
    f32 var_f1;
    s32 temp_4;
    u32 temp_3;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;

    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    sp0 = 0.0f;
    temp_4 = M2C_FIELD(arg1, s32 *, 0x50);
    sp4 = 0.0f;
    sp8 = 0.0f;
    sp10 = 0.0f;
    sp14 = 0.0f;
    sp18 = 0.0f;
    if ((temp_4 != 0) && (func_00262FF8(temp_4) != NULL)) {
        temp_2 = func_00262FF8(M2C_FIELD(arg1, s32 *, 0x50));
        temp_2_2 = temp_2 + 0x14;
        sp0 = M2C_FIELD(temp_2, f32 *, 0x14);
        sp4 = M2C_FIELD(temp_2_2, f32 *, 4);
        sp8 = M2C_FIELD(temp_2_2, f32 *, 8);
        temp_2_3 = func_00262FF8(M2C_FIELD(arg1, s32 *, 0x50));
        temp_2_4 = temp_2_3 + 0x20;
        sp10 = M2C_FIELD(temp_2_3, f32 *, 0x20);
        sp14 = M2C_FIELD(temp_2_4, f32 *, 4);
        sp18 = M2C_FIELD(temp_2_4, f32 *, 8);
    }
    temp_3 = M2C_FIELD(arg0, u32 *, 0xC);
    switch (temp_3) {
    case 0:
        temp_f1 = fabsf(sp14 - sp4);
        temp_f0 = fabsf(sp18 - sp8);
        M2C_FIELD(arg0, f32 *, 0x1C) = 0.0f;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) ((temp_f0 * 0.5f) - 0.12f);
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) (sp14 - ((temp_f1 / 100.0f) * 5.0f));
        break;
    case 1:
        temp_f1_2 = fabsf(sp14 - sp4);
        temp_f0_2 = fabsf(sp18 - sp8);
        M2C_FIELD(arg0, f32 *, 0x1C) = 0.0f;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        var_f0 = (temp_f0_2 * 0.5f) - 0.12f;
        var_f1 = (temp_f1_2 / 100.0f) * 25.0f;
block_8:
        M2C_FIELD(arg0, f32 *, 0x14) = var_f0;
        M2C_FIELD(arg0, f32 *, 0x18) = var_f1;
        break;
    case 2:
        temp_f0_3 = fabsf(sp18 - sp8);
        temp_f1_3 = fabsf(sp14 - sp4);
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        M2C_FIELD(arg0, f32 *, 0x1C) = 0.0f;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        var_f0 = -((temp_f0_3 * 0.5f) - 0.1f);
        var_f1 = (temp_f1_3 / 100.0f) * 50.0f;
        goto block_8;
    case 3:
        M2C_FIELD(arg0, f32 *, 0x14) = -0.6f;
        M2C_FIELD(arg0, f32 *, 0x18) = 0.5f;
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (sp0 - 0.9f);
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
block_12:
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        break;
    case 4:
        M2C_FIELD(arg0, f32 *, 0x14) = -0.6f;
        M2C_FIELD(arg0, f32 *, 0x18) = 0.5f;
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (sp10 + 0.9f);
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        goto block_12;
    case 5:
        M2C_FIELD(arg0, f32 *, 0x1C) = 0.0f;
        M2C_FIELD(arg0, f32 *, 0x14) = -0.3f;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) (sp14 + 0.2f);
        goto block_12;
    }
    temp_2_5 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_2_5, M2C_UNK (**)(void *, void *), 0x2C)(arg0 + M2C_FIELD(temp_2_5, s16 *, 0x28), arg1);
}
