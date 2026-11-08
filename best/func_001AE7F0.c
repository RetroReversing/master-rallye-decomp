/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

void func_001AE7F0(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    s32 temp_3;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x68) + M2C_FIELD(arg0, f32 *, 0x64);
    M2C_FIELD(arg0, f32 *, 0x68) = temp_f1;
    if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
        if (M2C_FIELD(arg0, f32 *, 0x6C) < temp_f1) {
            M2C_FIELD(arg0, f32 *, 0x68) = 0.0f;
        }
    } else {
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x6C);
        if ((temp_f0 < temp_f1) && (M2C_FIELD(arg0, f32 *, 0x68) = temp_f0, (M2C_FIELD(arg0, s32 *, 0x30) != 0))) {
            temp_3 = M2C_FIELD(arg0, s32 *, 0x54);
            if (temp_3 >= M2C_FIELD(arg0, s32 *, 0x58)) {
                M2C_FIELD(arg0, f32 *, 0x68) = 0.0f;
                M2C_FIELD(arg0, s32 *, 0x54) = 0;
            } else {
                M2C_FIELD(arg0, s32 *, 0x54) = (s32) (temp_3 + 1);
            }
        }
    }
}
