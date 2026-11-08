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

s32 D_002AD408(M2C_UNK);                            /* extern */
s32 func_00327EE8(s32, void *);                     /* extern */
M2C_UNK func_003A4790(void *, M2C_UNK *);           /* extern */
extern M2C_UNK D_00487638;
extern M2C_UNK D_00487658;

void func_003AE800(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0x28) = 0x13;
    M2C_FIELD(arg1, s32 *, 0x2C) = 1;
    M2C_FIELD(arg1, s32 *, 0x3C) = 1;
    M2C_FIELD(arg1, s32 *, 0x40) = 1;
    func_003A4790(arg1 + 0x34, &D_00487638);
    func_003A4790(arg1 + 0x38, &D_00487658);
    M2C_FIELD(arg1, s32 *, 0x24) = func_00327EE8(D_002AD408(0x10), arg1 + 0x4C);
    M2C_FIELD(arg1, f32 *, 0x44) = 0.005f;
}
