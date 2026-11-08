/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

void func_00344EC8(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f4;
    f32 temp_f5;

    temp_f0 = M2C_FIELD(arg1, f32 *, 0);
    temp_f5 = M2C_FIELD(arg1, f32 *, 4);
    temp_f4 = M2C_FIELD(arg1, f32 *, 8);
    temp_f1 = M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((temp_f0 * M2C_FIELD(arg0, f32 *, 0)) + (temp_f5 * M2C_FIELD(arg0, f32 *, 0x10)) + (temp_f4 * M2C_FIELD(arg0, f32 *, 0x20)) + (temp_f1 * M2C_FIELD(arg0, f32 *, 0x30)));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((temp_f0 * M2C_FIELD(arg0, f32 *, 4)) + (temp_f5 * M2C_FIELD(arg0, f32 *, 0x14)) + (temp_f4 * M2C_FIELD(arg0, f32 *, 0x24)) + (temp_f1 * M2C_FIELD(arg0, f32 *, 0x34)));
    M2C_FIELD(arg2, f32 *, 8) = (f32) ((temp_f0 * M2C_FIELD(arg0, f32 *, 8)) + (temp_f5 * M2C_FIELD(arg0, f32 *, 0x18)) + (temp_f4 * M2C_FIELD(arg0, f32 *, 0x28)) + (temp_f1 * M2C_FIELD(arg0, f32 *, 0x38)));
    M2C_FIELD(arg2, f32 *, 0xC) = (f32) ((temp_f0 * M2C_FIELD(arg0, f32 *, 0xC)) + (temp_f5 * M2C_FIELD(arg0, f32 *, 0x1C)) + (temp_f4 * M2C_FIELD(arg0, f32 *, 0x2C)) + (temp_f1 * M2C_FIELD(arg0, f32 *, 0x3C)));
}
