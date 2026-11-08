/* machine draft (m2c), tried by autopilot */
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

void *D_002AD408(M2C_UNK);                          /* extern */
M2C_UNK func_00228F10(void *, void *, M2C_UNK);     /* extern */
extern f32 D_00426518;
extern f32 D_00426538;

void func_002285B8(void *arg0) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 *var_3;
    f32 temp_f2;
    f32 var_f1;
    s32 temp_cond;
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_4;

    temp_2 = M2C_FIELD(arg0, void **, 4);
    temp_4 = temp_2 + 0xC;
    temp_3 = temp_2 + 0x18;
    temp_cond = fabsf(M2C_FIELD(temp_3, f32 *, 8) - M2C_FIELD(temp_4, f32 *, 8)) < fabsf(M2C_FIELD(temp_2, f32 *, 0x18) - M2C_FIELD(temp_2, f32 *, 0xC));
    sp20 = 0.0f;
    sp24 = 0.0f;
    sp28 = 0.0f;
    sp18 = (M2C_FIELD(temp_3, f32 *, 8) + M2C_FIELD(temp_4, f32 *, 8)) * 0.5f;
    sp10 = (M2C_FIELD(temp_2, f32 *, 0x18) + M2C_FIELD(temp_2, f32 *, 0xC)) * 0.5f;
    sp14 = (M2C_FIELD(temp_3, f32 *, 4) + M2C_FIELD(temp_4, f32 *, 4)) * 0.5f;
    if (temp_cond) {
        var_3 = &D_00426518;
        var_f1 = D_00426518;
    } else {
        var_3 = &D_00426538;
        var_f1 = D_00426538;
    }
    temp_f2 = M2C_FIELD(var_3, f32 *, 8);
    sp20 = var_f1;
    sp24 = M2C_FIELD(var_3, f32 *, 4);
    sp28 = temp_f2;
    temp_2_2 = D_002AD408(0x14);
    M2C_FIELD(temp_2_2, f32 *, 0) = sp20;
    M2C_FIELD(temp_2_2, f32 *, 4) = sp24;
    M2C_FIELD(temp_2_2, f32 *, 8) = temp_f2;
    M2C_FIELD(temp_2_2, f32 *, 0xC) = (f32) -((sp20 * sp10) + (sp24 * sp14) + (sp28 * sp18));
    M2C_FIELD(temp_2_2, s32 *, 0x10) = -1;
    M2C_FIELD(arg0, void **, 0) = temp_2_2;
    func_00228F10(arg0, temp_2_2, -1);
}
