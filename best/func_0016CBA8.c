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

s32 func_0016CCC0();
s32 func_001D4040();

void *func_0016CBA8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 *temp_16;

    func_001D4040("Controller/Car0");
    func_001D4040(arg0 + 4, "ControllerCarBrokerAccess");
    temp_16 = "Race/Car0/Progress";
    func_001D4040(arg0 + 8, temp_16);
    func_001D4040(arg0 + 0xC, temp_16);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, f32 *, 0x24) = -0.2f;
    M2C_FIELD(arg0, f32 *, 0x28) = 0.2f;
    M2C_FIELD(arg0, f32 *, 0x1C) = -0.2f;
    M2C_FIELD(arg0, f32 *, 0x20) = 0.2f;
    func_0016CCC0(arg0, arg1, arg2, arg3, arg4);
    return arg0;
}
