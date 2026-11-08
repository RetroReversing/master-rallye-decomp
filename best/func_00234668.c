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

f32 func_001CF4C0(void *, f32, f32);                /* extern */
extern M2C_UNK D_00426508;
extern f32 D_00478468;

void *func_00234668(void *arg0, void *arg1, void *arg2, void *arg3) {
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    void *temp_17;
    void *temp_2;
    void *temp_3;

    temp_17 = arg0 + 8;
    M2C_FIELD(arg0, void **, 0) = arg1;
    M2C_FIELD(arg0, void **, 4) = arg2;
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_17, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_17, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x14) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, void **, 0x20) = arg3;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    temp_2 = M2C_FIELD(arg0, void **, 4);
    temp_3 = M2C_FIELD(arg0, void **, 0);
    temp_f0 = M2C_FIELD(temp_2, f32 *, 0) - M2C_FIELD(temp_3, f32 *, 0);
    sp8 = M2C_FIELD(temp_2, f32 *, 8) - M2C_FIELD(temp_3, f32 *, 8);
    temp_f1 = M2C_FIELD(temp_2, f32 *, 4) - M2C_FIELD(temp_3, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = temp_f0;
    M2C_FIELD(temp_17, f32 *, 4) = temp_f1;
    M2C_FIELD(temp_17, f32 *, 8) = sp8;
    temp_f0_2 = func_001CF4C0(temp_17, temp_f0, temp_f1);
    if (!(temp_f0_2 < D_00478468)) {
        M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) / temp_f0_2);
        M2C_FIELD(temp_17, f32 *, 4) = (f32) (M2C_FIELD(temp_17, f32 *, 4) / temp_f0_2);
        M2C_FIELD(temp_17, f32 *, 8) = (f32) (M2C_FIELD(temp_17, f32 *, 8) / temp_f0_2);
    } else {
        M2C_FIELD(arg0, f32 *, 8) = 0.0f;
        M2C_FIELD(temp_17, f32 *, 8) = 0.0f;
        M2C_FIELD(temp_17, f32 *, 4) = 0.0f;
    }
    M2C_FIELD(arg0, f32 *, 0x14) = temp_f0_2;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg3, s32 *, 0x24);
    return arg0;
}
