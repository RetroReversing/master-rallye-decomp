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

void *func_00262FF8();

void func_002842D8(void *arg0, void *arg1) {
    f32 sp4;
    f32 sp8;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    s32 temp_4;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;

    M2C_FIELD(arg0, s32 *, 0xC) = 1;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
        temp_4 = M2C_FIELD(arg1, s32 *, 0x50);
        if ((temp_4 != 0) && (func_00262FF8(temp_4) != NULL)) {
            temp_2 = func_00262FF8(M2C_FIELD(arg1, s32 *, 0x50));
            temp_2_2 = temp_2 + 0x14;
            sp4 = M2C_FIELD(temp_2_2, f32 *, 4);
            temp_f1 = M2C_FIELD(temp_2_2, f32 *, 8);
            sp8 = temp_f1;
            temp_2_3 = func_00262FF8(M2C_FIELD(arg1, s32 *, 0x50), M2C_FIELD(temp_2, f32 *, 0x14));
            temp_2_4 = temp_2_3 + 0x20;
            sp10 = M2C_FIELD(temp_2_3, f32 *, 0x20);
            temp_f0 = M2C_FIELD(temp_2_4, f32 *, 4);
            sp14 = temp_f0;
            temp_f2 = M2C_FIELD(temp_2_4, f32 *, 8);
            sp18 = temp_f2;
            temp_f1_2 = fabsf(temp_f2 - temp_f1);
            M2C_FIELD(arg0, f32 *, 0x44) = fabsf(temp_f0 - sp4);
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) (temp_f1_2 * 0.5f);
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x40) = 0.0f;
        M2C_FIELD(arg0, f32 *, 0x44) = 0.0f;
    }
    temp_2_5 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_2_5, s32 (**)(void *, void *), 0x2C)(arg0 + M2C_FIELD(temp_2_5, s16 *, 0x28), arg1);
}
