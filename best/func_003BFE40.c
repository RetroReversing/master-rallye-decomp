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

s32 D_002AD408(M2C_UNK);                            /* extern */
void *func_003BFDD0(s32);                           /* extern */

void func_003BFE40(void *arg0) {
    void *temp_16;
    void *temp_2;
    void *temp_3;

    temp_2 = func_003BFDD0(D_002AD408(0x2C));
    temp_3 = temp_2 + 0x18;
    temp_16 = arg0 + 0x18;
    M2C_FIELD(temp_2, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
    M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(temp_16, f32 *, 4);
    M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(temp_16, f32 *, 8);
    M2C_FIELD(temp_3, f32 *, 0xC) = (f32) M2C_FIELD(temp_16, f32 *, 0xC);
    M2C_FIELD(temp_3, f32 *, 0x10) = (f32) M2C_FIELD(temp_16, f32 *, 0x10);
}
