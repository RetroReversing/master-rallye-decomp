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

void func_0023E7B0(void *arg0, void *arg1, void *arg2) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_3;
    void *temp_7;

    temp_2 = M2C_FIELD(arg0, void **, 0x50);
    temp_3 = arg0 + 0x78;
    temp_7 = arg0 + 0x90;
    temp_2_2 = temp_2 + 0x11C;
    temp_f2 = M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(temp_2, f32 *, 0x11C);
    temp_f3 = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(temp_2_2, f32 *, 4);
    sp0 = temp_f2;
    sp8 = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(temp_2_2, f32 *, 8);
    sp4 = temp_f3;
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) (M2C_FIELD(arg0, f32 *, 0x78) + temp_f2);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) (M2C_FIELD(temp_3, f32 *, 4) + temp_f3);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) (M2C_FIELD(temp_3, f32 *, 8) + sp8);
    temp_2_3 = M2C_FIELD(arg0, void **, 0x50);
    temp_2_4 = temp_2_3 + 0x128;
    temp_f2_2 = M2C_FIELD(arg2, f32 *, 0) - M2C_FIELD(temp_2_3, f32 *, 0x128);
    temp_f3_2 = M2C_FIELD(arg2, f32 *, 4) - M2C_FIELD(temp_2_4, f32 *, 4);
    sp0 = temp_f2_2;
    sp8 = M2C_FIELD(arg2, f32 *, 8) - M2C_FIELD(temp_2_4, f32 *, 8);
    sp4 = temp_f3_2;
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) (M2C_FIELD(arg0, f32 *, 0x90) + temp_f2_2);
    M2C_FIELD(temp_7, f32 *, 4) = (f32) (M2C_FIELD(temp_7, f32 *, 4) + temp_f3_2);
    M2C_FIELD(temp_7, f32 *, 8) = (f32) (M2C_FIELD(temp_7, f32 *, 8) + sp8);
}
