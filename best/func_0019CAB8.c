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

f32 func_0015AD18();                                /* extern */

void func_0019CAB8(void *arg0, void *arg1, s32 arg2, f32 *arg3) {
    f32 temp_f0;
    f32 temp_f20;

    if (arg2 == 1) {
        M2C_FIELD(arg1, f32 *, 0x38) = 10.0f;
        M2C_FIELD(arg1, f32 *, 0x34) = 9.0f;
        M2C_FIELD(arg1, f32 *, 0x2C) = 4.0f;
        M2C_FIELD(arg1, f32 *, 0x30) = 300.0f;
        M2C_FIELD(arg1, f32 *, 0x24) = 0.6f;
        M2C_FIELD(arg1, s32 *, 0x14) = arg2;
        M2C_FIELD(arg1, f32 *, 0x1C) = 0.05f;
        M2C_FIELD(arg1, s32 *, 0x10) = arg2;
        M2C_FIELD(arg1, f32 *, 0x28) = 0.6f;
        temp_f0 = func_0015AD18() * 15.0f;
        M2C_FIELD(arg1, s32 *, 0x3C) = 0xB4;
        M2C_FIELD(arg1, f32 *, 0x20) = (f32) (temp_f0 / 30.0f);
    } else {
        M2C_FIELD(arg1, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x40);
        M2C_FIELD(arg1, f32 *, 0x34) = fabsf(M2C_FIELD(arg0, f32 *, 0x60));
        M2C_FIELD(arg1, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x64);
        M2C_FIELD(arg1, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x54);
        M2C_FIELD(arg1, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0x50);
        M2C_FIELD(arg1, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x5C);
        M2C_FIELD(arg1, f32 *, 0x24) = (f32) M2C_FIELD(arg0, f32 *, 0x58);
        M2C_FIELD(arg1, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x44);
        M2C_FIELD(arg1, f32 *, 0x1C) = fabsf(M2C_FIELD(arg0, f32 *, 0x48));
        temp_f20 = M2C_FIELD(arg0, f32 *, 0x4C);
        M2C_FIELD(arg1, f32 *, 0x20) = (f32) ((temp_f20 * func_0015AD18()) / 30.0f);
        M2C_FIELD(arg1, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) * 0x3C);
    }
    *arg3 = M2C_FIELD(arg0, f32 *, 0x6C);
}
