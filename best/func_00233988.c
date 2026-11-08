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

void func_00233988(void *arg0) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f2;
    void *temp_2;
    void *temp_3;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_8;

    if (M2C_FIELD(arg0, s32 *, 0) == 1) {
        temp_8 = M2C_FIELD(arg0, void **, 4);
        temp_3 = temp_8 + 0xA0;
        if (temp_8 != NULL) {
            temp_2 = arg0 + 8;
            temp_4 = arg0 + 0x20;
            temp_5 = arg0 + 0x14;
            temp_6 = arg0 + 0x2C;
            temp_f1 = M2C_FIELD(temp_2, f32 *, 4) + M2C_FIELD(temp_3, f32 *, 4);
            temp_f0 = M2C_FIELD(arg0, f32 *, 8) + M2C_FIELD(temp_8, f32 *, 0xA0);
            sp8 = M2C_FIELD(temp_2, f32 *, 8) + M2C_FIELD(temp_3, f32 *, 8);
            sp4 = temp_f1;
            M2C_FIELD(arg0, f32 *, 0x20) = temp_f0;
            sp0 = temp_f0;
            M2C_FIELD(temp_4, f32 *, 4) = temp_f1;
            M2C_FIELD(temp_4, f32 *, 8) = sp8;
            temp_f2 = M2C_FIELD(temp_5, f32 *, 4) + M2C_FIELD(temp_3, f32 *, 4);
            sp8 = M2C_FIELD(temp_5, f32 *, 8) + M2C_FIELD(temp_3, f32 *, 8);
            temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x14) + M2C_FIELD(temp_8, f32 *, 0xA0);
            sp4 = temp_f2;
            M2C_FIELD(arg0, f32 *, 0x2C) = temp_f0_2;
            sp0 = temp_f0_2;
            M2C_FIELD(temp_6, f32 *, 4) = temp_f2;
            M2C_FIELD(temp_6, f32 *, 8) = sp8;
            M2C_FIELD(arg0, s32 *, 0) = 0;
        }
    }
}
