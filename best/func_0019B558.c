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

M2C_UNK func_001D4040(M2C_UNK *);                   /* extern */
extern M2C_UNK D_0044E820;
extern M2C_UNK D_00473A18;
extern M2C_UNK D_00474288;

void func_0019B558(void *arg0) {
    void *temp_2;
    void *temp_3;
    void *temp_4;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_00474288;
    func_001D4040(&D_0044E820);
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    temp_3 = arg0 + 0x28;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_00473A18;
    temp_4 = arg0 + 0x34;
    M2C_FIELD(temp_3, s32 *, 8) = 0;
    M2C_FIELD(temp_3, s32 *, 4) = 0;
    temp_2 = arg0 + 0x40;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(temp_4, s32 *, 8) = 0;
    M2C_FIELD(temp_4, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 1;
    M2C_FIELD(temp_2, f32 *, 0x2C) = 90.0f;
    M2C_FIELD(temp_2, s32 *, 4) = 1;
    M2C_FIELD(temp_2, f32 *, 8) = 0.05f;
    M2C_FIELD(temp_2, f32 *, 0x10) = 4.0f;
    M2C_FIELD(temp_2, f32 *, 0x14) = 10.0f;
    M2C_FIELD(temp_2, f32 *, 0x1C) = 0.6f;
    M2C_FIELD(temp_2, f32 *, 0x20) = 6.0f;
    M2C_FIELD(temp_2, f32 *, 0x24) = 2.0f;
    M2C_FIELD(temp_2, s32 *, 0x28) = 2;
    M2C_FIELD(temp_2, f32 *, 0xC) = 10.0f;
    M2C_FIELD(temp_2, f32 *, 0x18) = 0.6f;
loop_1:
    goto loop_1;
}
