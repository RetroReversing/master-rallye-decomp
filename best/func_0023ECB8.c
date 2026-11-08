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

extern M2C_UNK D_00426508;
extern M2C_UNK D_00473580;
extern M2C_UNK D_00473598;
extern M2C_UNK D_004735B0;

void *func_0023ECB8(void *arg0) {
    void *temp_12;
    void *temp_13;
    void *temp_6;
    void *temp_3;
    void *temp_14;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_3 = arg0 + 4;
    M2C_FIELD(temp_3, M2C_UNK **, 0x20) = &D_004735B0;
    temp_12 = arg0 + 0x10;
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    temp_6 = arg0 + 0x2C;
    temp_13 = arg0 + 0x38;
    temp_14 = arg0 + 0x50;
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_12, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_12, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(temp_3, M2C_UNK **, 0x20) = &D_00473598;
    M2C_FIELD(temp_3, s32 *, 0x24) = 0;
    M2C_FIELD(temp_3, s32 *, 0x1C) = -1;
    M2C_FIELD(temp_3, s32 *, 0x18) = -1;
    M2C_FIELD(temp_6, M2C_UNK **, 0x20) = &D_004735B0;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_13, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_13, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    M2C_FIELD(temp_6, s32 *, 0x18) = -1;
    M2C_FIELD(temp_6, s32 *, 0x1C) = -1;
    M2C_FIELD(temp_6, M2C_UNK **, 0x20) = &D_00473580;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(&D_00426508, f32 *, 0);
    M2C_FIELD(temp_14, f32 *, 4) = (f32) M2C_FIELD(&D_00426508, f32 *, 4);
    M2C_FIELD(temp_14, f32 *, 8) = (f32) M2C_FIELD(&D_00426508, f32 *, 8);
    return arg0;
}
