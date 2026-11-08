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

f32 func_001E3610(s32, void *);                     /* extern */
M2C_UNK func_001E3E90(s32, void *, f32);            /* extern */

void func_0029DBB0(void *arg0) {
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    s32 temp_3;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x18);
    temp_f21 = (M2C_FIELD(arg0, f32 *, 0x20) - (f32) temp_3) / (f32) (M2C_FIELD(arg0, s32 *, 0x1C) - temp_3);
    func_001E3E90(func_001E4280(), arg0 + 0x10, temp_f21);
    temp_f20 = func_001E3610(func_001E4280(), arg0 + 0x44);
    temp_f20_2 = temp_f20 + ((func_001E3610(func_001E4280(), arg0 + 0x48) - temp_f20) * temp_f21);
    func_001E3E90(func_001E4280(), arg0 + 0x4C, temp_f20_2);
}
