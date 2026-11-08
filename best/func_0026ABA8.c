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
void *func_0026AAC8(s32);                           /* extern */

void func_0026ABA8(void *arg0) {
    void *temp_2;

    temp_2 = func_0026AAC8(D_002AD408(0x5C));
    M2C_FIELD(temp_2, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(temp_2, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(temp_2, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(temp_2, f32 *, 0x14) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
    M2C_FIELD(temp_2, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
    M2C_FIELD(temp_2, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
    M2C_FIELD(temp_2, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(temp_2, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(temp_2, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
    M2C_FIELD(temp_2, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0x2C);
    M2C_FIELD(temp_2, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(temp_2, f32 *, 0x34) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
    M2C_FIELD(temp_2, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(temp_2, f32 *, 0x3C) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
    M2C_FIELD(temp_2, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    M2C_FIELD(temp_2, f32 *, 0x44) = (f32) M2C_FIELD(arg0, f32 *, 0x44);
    M2C_FIELD(temp_2, f32 *, 0x48) = (f32) M2C_FIELD(arg0, f32 *, 0x48);
    M2C_FIELD(temp_2, f32 *, 0x4C) = (f32) M2C_FIELD(arg0, f32 *, 0x4C);
    M2C_FIELD(temp_2, f32 *, 0x50) = (f32) M2C_FIELD(arg0, f32 *, 0x50);
    M2C_FIELD(temp_2, f32 *, 0x54) = (f32) M2C_FIELD(arg0, f32 *, 0x54);
    M2C_FIELD(temp_2, s32 *, 0x58) = (s32) M2C_FIELD(arg0, s32 *, 0x58);
}
