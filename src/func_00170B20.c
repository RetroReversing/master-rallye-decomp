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

void func_00170B20(void *arg0) {
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;

    temp_2 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(M2C_FIELD(temp_2, void **, 0xC), f32 *, 0x110) = (f32) M2C_FIELD(temp_2, f32 *, 8);
    M2C_FIELD(M2C_FIELD(temp_2, void **, 0xC), f32 *, 0x114) = (f32) M2C_FIELD(temp_2, f32 *, 4);
    temp_2_2 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(M2C_FIELD(temp_2_2, void **, 0xC), f32 *, 0x110) = (f32) M2C_FIELD(temp_2_2, f32 *, 8);
    M2C_FIELD(M2C_FIELD(temp_2_2, void **, 0xC), f32 *, 0x114) = (f32) M2C_FIELD(temp_2_2, f32 *, 4);
    temp_2_3 = M2C_FIELD(arg0, void **, 0xC);
    M2C_FIELD(M2C_FIELD(temp_2_3, void **, 0xC), f32 *, 0x110) = (f32) M2C_FIELD(temp_2_3, f32 *, 8);
    M2C_FIELD(M2C_FIELD(temp_2_3, void **, 0xC), f32 *, 0x114) = (f32) M2C_FIELD(temp_2_3, f32 *, 4);
    temp_2_4 = M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(M2C_FIELD(temp_2_4, void **, 0xC), f32 *, 0x110) = (f32) M2C_FIELD(temp_2_4, f32 *, 8);
    M2C_FIELD(M2C_FIELD(temp_2_4, void **, 0xC), f32 *, 0x114) = (f32) M2C_FIELD(temp_2_4, f32 *, 4);
}
