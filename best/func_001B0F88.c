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

void *func_001B0F88(void *arg0, void *arg1) {
    f32 temp_f4 = M2C_FIELD(arg1, f32 *, 0xC);
    f32 temp_f0 = M2C_FIELD(arg1, f32 *, 0x18);
    void *temp_6 = (char *)arg1 + 0xC;
    f32 temp_f5 = M2C_FIELD(temp_6, f32 *, 4);
    f32 temp_f3 = M2C_FIELD(arg1, f32 *, 0x2C);
    f32 temp_f6 = temp_f0 * temp_f3;
    f32 temp_f2 = M2C_FIELD(temp_6, f32 *, 8);
    f32 temp_f0_2 = M2C_FIELD((char *)arg1 + 0x18, f32 *, 8) * temp_f3;
    f32 temp_f1 = M2C_FIELD((char *)arg1 + 0x18, f32 *, 4) * temp_f3;
    M2C_FIELD(arg0, f32 *, 0) = temp_f4 + temp_f6;
    M2C_FIELD(arg0, f32 *, 4) = temp_f5 + temp_f1;
    M2C_FIELD(arg0, f32 *, 8) = temp_f2 + temp_f0_2;
    return arg0;
}
